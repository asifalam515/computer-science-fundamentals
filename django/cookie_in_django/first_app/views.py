from django.shortcuts import render
from datetime import datetime,timedelta
from django.http import HttpResponse
# Create your views here.
def home(request):
    response=render(request,'home.html')
    response.set_cookie('name','rahim')
    # response.set_cookie('name','Karim',max_age=10)
    response.set_cookie('name','Karim',expires=datetime.utcnow()+timedelta(days=7))
    return response

def get_cookie(request):
    name=request.COOKIES.get('name')
    print(request.COOKIES)
    return render(request,'get_cookie.html',{'name':name})


def delete_cookie(request):
    response=render(request,'delete.html')
    response.delete_cookie('name')
    return response

def set_session(request):
    data={
        'name':'rahim',
        'age':23,
        'language':'Bangla'
    }
    request.session.update(data)
    return render(request,'home.html')

def get_session(request):
    # data=request.session
    if 'name' in request.session:
        name=request.session.get('name','Guest')
        request.session.modified=True
        return render(request,'get_session.html',{'name':name})
    else:
        return HttpResponse("your session has been expired.Login please")

def delete_session(request):
    # del request.session['name'] name will be deleted only
    request.session.flush()
    request.session.clear_expired() #will clear everything
    return render(request,'delete.html')