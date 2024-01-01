from django.shortcuts import render
from django.views import View
from . import models
from . import forms
from django.urls import reverse_lazy
from django.views.generic import TemplateView,FormView,CreateView
from django.views.generic.edit import UpdateView
from django.utils.decorators import method_decorator
from django.contrib.auth.decorators import login_required

# Create your views here.
@method_decorator(login_required,name='dispatch')
class CreateAlbum(CreateView):
    template_name='create_album.html'
    model= models.Album
    form_class = forms.AlbumForm
    template_name='create_album.html'
    success_url = reverse_lazy('home')
    
    
    def form_valid(self, form):
        if form.is_valid():
            return super().form_valid(form)
        else:
            return self.form_invalid(form)
        
        
@method_decorator(login_required,name='dispatch')   
class EditAlbum(UpdateView):
    model = models.Album
    template_name = 'create_album.html'
    form_class = forms.AlbumForm
    success_url = reverse_lazy('home')

    def form_valid(self, form):
        response = super().form_valid(form)
        
        return response

