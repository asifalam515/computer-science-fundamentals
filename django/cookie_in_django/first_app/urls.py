from django.contrib import admin
from django.urls import path
from . import views

urlpatterns = [
    path('',views.set_session,name='home'),
    path('get/',views.get_cookie,name='cookie'),
    path('get_session/',views.get_session,name='session'),
    path('delete/',views.delete_session,name='delete')
]
