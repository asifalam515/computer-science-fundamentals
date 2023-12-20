from django.shortcuts import render,redirect
from profiles.forms import ProfileForm
# from . import forms
# Create your views here.
def add_profile(request):
    if request.method =='POST':
        profile_form=ProfileForm(request.POST)
        if profile_form.is_valid():
            profile_form.save()
            return redirect('add_profile')
    else:
          profile_form=ProfileForm()
    return render(request,'add_profile.html',{'form':profile_form})