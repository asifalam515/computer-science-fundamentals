from django.shortcuts import render,redirect
from django.contrib.auth  import authenticate,logout,login
from first_app.forms import UserCreationForm,LoginForm
from django.contrib import messages
from django.contrib.auth.forms import PasswordChangeForm,SetPasswordForm
from django.contrib.auth import update_session_auth_hash

# Create your views here.
def home(request):
    return render(request,'home.html')
def user_signup(request):
    if request.method=='POST':
        form=UserCreationForm(request.POST)
        if form.is_valid():
            form.save()
            messages.success(request,"User logged in Successfully")
            
            return redirect('user_login')
    else:
        form=UserCreationForm()
    return render(request,'signup.html',{'form':form})


def user_login(request):
    if request.method=='POST':
        form=LoginForm(request.POST)
        if form.is_valid():
            username=form.cleaned_data['username']
            password=form.cleaned_data['password']
            user=authenticate(request,username=username,password=password)
            if user:
                messages.success(request,"Logged In Successfully")
                login(request,user)
                return redirect('home')
    else:
        form=LoginForm()
    return render(request,'login.html',{'form':form})

def user_logout(request):
    messages.warning(request,"logged Out")
    logout(request)
    return redirect('user_login')


def password_change(request):
    if request.method == 'POST':
        form=SetPasswordForm(request.user,data=request.POST)
        if form.is_valid():
            form.save()
            messages.success(request,"Password Changed Successfully")
            update_session_auth_hash(request,form.user)
            return redirect('user_login')
    else:
        form=SetPasswordForm(user=request.user)
    return render(request,'password_update.html',{'form':form})
            