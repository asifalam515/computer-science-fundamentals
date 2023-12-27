from django.shortcuts import render,redirect
from . import forms
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm
from django.contrib.auth import authenticate,login,update_session_auth_hash
from django.contrib import messages
from django.contrib.auth.decorators import login_required
# Create your views here.
def register(request):
    if request.method == 'POST':
        register_form=forms.RegistrationForm(request.POST)
        if register_form.is_valid():
            register_form.save()
            messages.success(request,"Account Created Successfully")
            return redirect('register')
    
    else:
        register_form=forms.RegistrationForm()
    return render(request,'register.html',{'form':register_form,'type':'Register'})

def user_login(request):
    form=AuthenticationForm(request,request.POST)
    if form.is_valid():
        user_name=form.cleaned_data['username']
        user_pass=form.cleaned_data['password']
        #check kore dekbo je tar data amder kaes ase naki .er jnno authenticate import krbo
        user= authenticate(username=user_name,password=user_pass)
        if user is not None: #user jodi none na hy ba jodi user thake
            messages.success(request,"Logged In successfully")
            login(request,user)
            return redirect('profile')
        else:#jodi user er data DB te na thake tahole
            messages.warning(request,"Information Incorrect")
            return redirect('profile')
    else:
        form=AuthenticationForm()
        return render(request,'register.html',{'form':form,'type':'Login'})
    
@login_required
def profile(request):
    if request.method == 'POST':
        profile_form=forms.ChangeUserForm(request.POST,instance=request.user)
        if profile_form.is_valid():
            profile_form.save()
            messages.success(request,"Profile Updated Successfully")
            return redirect('profile')
    
    else:
        profile_form=forms.ChangeUserForm(instance=request.user)
    return render(request,'profile.html',{'form':profile_form})
     
def pass_change(request):
        if request.method == 'POST':
            form=PasswordChangeForm(request.user,data=request.POST)
            if form.is_valid():
                form.save()
                messages.success(request,"Password Updated Successfully")
                update_session_auth_hash(request,form.user)
                return redirect('profile')
        
        else:
            form=PasswordChangeForm(user=request.user)
        return render(request,'pass_change.html',{'form':form})