from django.shortcuts import render,redirect
from  first_app.forms import RegisterForm ,ChangeUserData
from django.contrib import messages
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm,SetPasswordForm
from django.contrib.auth import authenticate,login,logout,update_session_auth_hash
# Create your views here.
def home(request):
    return render(request,'home.html')

def sign_up(request):
    # form=RegisterForm()
    if not request.user.is_authenticated:
        if request.method == 'POST':
            form=RegisterForm(request.POST)
            if form.is_valid():
                messages.success(request,"Account Created Successfully")
                messages.warning(request,"warning")
                messages.info(request,"info")
                form.save()
                # print(form.cleaned_data)
                return redirect('sign_up')
        else:
            form=RegisterForm()
        return render(request,'sign_up.html',{'form':form})
    else:
        return redirect('profile')

def log_in(request):
    if not request.user.is_authenticated:
        if request.method == 'POST':
            form=AuthenticationForm(request=request,data=request.POST)
            if form.is_valid():
                name=form.cleaned_data['username']
                userpass=form.cleaned_data['password']
                user=authenticate(username=name,password=userpass)
                if user is not None:
                    login(request,user)
                    return redirect('profile')
        else:
            form=AuthenticationForm()
        return render(request,'log_in.html',{'form':form})   
    else:
        messages.success(request,"Already Signed In")
        return redirect('profile')
    
def profile(request):
    if  request.user.is_authenticated:
        if request.method == 'POST':
            form=ChangeUserData(request.POST , instance= request.user)
            if form.is_valid():
                messages.success(request,"Account Updated Successfully")
                messages.warning(request,"warning")
                messages.info(request,"info")
                form.save()
                # print(form.cleaned_data)
                return redirect('sign_up')
        else:
            form=ChangeUserData( instance= request.user)
        return render(request,'profile.html',{'form':form})
    else:
        return redirect('sign_up')
   
    

def log_out(request):
    logout(request)
    return redirect('log_in')

def pass_change(request):
    if  request.user.is_authenticated:
        if request.method == 'POST':
            form=PasswordChangeForm(user=request.user,data=request.POST)
            if form.is_valid():
                form.save()
                update_session_auth_hash(request,request.user) #password update korbe
                return redirect('profile')
        else:
            form=PasswordChangeForm(user=request.user)
        return render(request,'pass_change.html',{'form':form})
    else:
        return redirect('log_in')
def pass_change2(request):
    if  request.user.is_authenticated:
        if request.method == 'POST':
            form=SetPasswordForm(user=request.user,data=request.POST)
            if form.is_valid():
                form.save()
                update_session_auth_hash(request,request.user) #password update korbe
                return redirect('profile')
        else:
            form=SetPasswordForm(user=request.user)
        return render(request,'pass_change.html',{'form':form})
    else:
        return redirect('log_in')



def change_user_data(request):
    # form=RegisterForm()
    if  request.user.is_authenticated:
        if request.method == 'POST':
            form=ChangeUserData(request.POST , instance= request.user)
            if form.is_valid():
                messages.success(request,"Account Updated Successfully")
                messages.warning(request,"warning")
                messages.info(request,"info")
                form.save()
                # print(form.cleaned_data)
                return redirect('sign_up')
        else:
            form=ChangeUserData()
        return render(request,'profile.html',{'form':form})
    else:
        return redirect('sign_up')