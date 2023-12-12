from django.shortcuts import render

# Create your views here.
def home(request):
    return render(request,'first_app/index.html')

def about(request):
    if request.method=='POST':
        name=request.POST.get('username')
        email=request.POST.get('useremail')
        return render(request,'./first_app/about.html',{'name':name,'email':email})
    else:
        return render(request,'./first_app/about.html',{'name':name,'email':email})

def submit_form(request):
    # print(request.POST)
    return render(request,'first_app/form.html')