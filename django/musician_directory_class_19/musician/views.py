from typing import Any
from django.shortcuts import render,redirect
from django.http import HttpRequest, HttpResponse
from django.views import View
from . import models
from . import forms
from django.urls import reverse_lazy
from django.views.generic import TemplateView,FormView,CreateView,DeleteView
from django.utils.decorators import method_decorator
from django.contrib.auth.decorators import login_required






# Create your views here.
@method_decorator(login_required,name='dispatch')
class AddMusician(CreateView):
    template_name='add_musician.html'
    model= models.Musician
    form_class = forms.MusicianForm
    template_name='add_musician.html'
    success_url = reverse_lazy('home')
    
    
    def form_valid(self, form):
        if form.is_valid():
            return super().form_valid(form)
        else:
            return self.form_invalid(form)
    
        
class Home(TemplateView):
    template_name='home.html'
@method_decorator(login_required,name='dispatch')   
class Delete_musician(DeleteView):
    model  = models.Musician
    template_name = 'musician_confirm_delete.html'
    success_url =reverse_lazy('home')
    def delete(self, request, *args, **kwargs):
        return super().delete(request, *args, **kwargs)