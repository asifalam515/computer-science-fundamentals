from django.urls import path
from . import views
urlpatterns = [
 path('',views.home,name='home'),
 path('about',views.about,name='about'),
 path('submit_form',views.submit_form,name='submit_form')
]
