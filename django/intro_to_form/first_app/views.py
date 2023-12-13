from django.shortcuts import render
from . forms import contactForm
  
# Create your views here.
def home(request):
    return render(request,'first_app/index.html')

def about(request):
    if request.method=='POST':
        print(request.POST)
        name=request.POST.get('username')
        email=request.POST.get('useremail')
        select=request.POST.get('select')
        return render(request,'./first_app/about.html',{'name':name,'email':email,'select':select})
    else:
        return render(request,'./first_app/about.html')

def submit_form(request):
    # print(request.POST)
    return render(request,'first_app/form.html')

def djangoForm(request):
    form=contactForm(request.POST)
    if form.is_valid():
        print(form.cleaned_data)
    return render(request,'first_app/django_form.html',{'form':form})
    
    