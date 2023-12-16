from django.shortcuts import render
# from . forms import contactForm
from . forms import contactForm,PasswordValidator
# Create your views here.
def home(request):
    return render(request,'first_app/index.html')


def about(request):
    if request.method=='POST':
        name=request.POST.get('username')
        email=request.POST.get('useremail')
        return render(request,'first_app/about.html',{'name':name,'email':email})
    else:
         return render(request,'first_app/about.html')

def submit_form(request):
        return render(request,'first_app/form.html')
    
def django_form(request):
    form=contactForm(request.POST)
    if form.is_valid():
        print(form.cleaned_data)
    return render(request,'first_app/django_form.html',{'form':form})

def built_in_form(request):
    if request.method == "POST":
        form=PasswordValidator(request.POST,request.FILES)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form=PasswordValidator()
    return render(request,'first_app/password_form.html',{'form':form})
    