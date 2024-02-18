from django.shortcuts import render,redirect
from .forms import UserRegistrationForm
from django.views.generic import FormView
from django.contrib.auth import authenticate, login,logout
from django.contrib.auth.views import LoginView,LogoutView
from django.urls import reverse,reverse_lazy
from .models import User
# Create your views here.
class UserRegistrationView(FormView):
    template_name = 'accounts/user_registration.html'
    form_class = UserRegistrationForm
    success_url =reverse_lazy('register')
    def form_valid(self, form):
        # print(form.cleaned_data)
        user = form.save() #forms.py theke ouruser return kortese oita user hisebe raktesi
        login(self.request,user)
        print(user)
        return super().form_valid(form) #nijei nijeke call kore disse
    
    
class UserLoginView(LoginView):
    template_name ='accounts/user_login.html'
    def get_success_url(self) :
        return reverse_lazy('register')
    
def user_logout(request):
    if request.user.is_authenticated:
        logout(request)
    return redirect(reverse_lazy('home'))
