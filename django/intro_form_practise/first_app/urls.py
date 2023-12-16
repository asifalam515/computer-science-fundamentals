from django.urls import path
from . import views
urlpatterns = [
 path('',views.home,name='home'),
 path('about',views.about,name='about'),
 path('submit_form',views.submit_form,name='submit_form'),
 path('django_form',views.django_form,name='django_form'),
 path('built_in_form',views.built_in_form,name='built_in_form')
]
