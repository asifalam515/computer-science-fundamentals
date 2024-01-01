from django.shortcuts import render,redirect
from musician.models import Musician
from album.models import Album
from django.views.generic import TemplateView
from django.views import View
from musician_directory_class_19.forms import RegisterForm,LoginForm
from django.contrib.auth import authenticate, login



class HomeView(TemplateView):
    template_name='home.html'
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context["data"] = Album.objects.all()
        return context
    
class Register(View):
    template_name='register.html'
    
    def get(self,request,*args, **kwargs):
        form=RegisterForm()
        return render(request,self.template_name,{'form':form})
    def post(self,request,*args, **kwargs):
        form=RegisterForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect('login')
        return render(request,self.template_name,{'form':form})
    
class LoginView(View):
    template_name='login.html'
    
    def get(self,request,*args, **kwargs):
        form=LoginForm()
        return render(request,self.template_name,{'form':form})
    def post(self,request,*args, **kwargs):
        form=LoginForm(data=request.POST)
        if form.is_valid():
            username = form.cleaned_data['username']
            password = form.cleaned_data['password']
            user = authenticate(request, username=username, password=password)
            
            if user is not None:
                login(request,user)
                return redirect('home')
        return render(request,self.template_name,{'form':form})
            