from django.contrib import admin
from django.urls import path
from . import views
urlpatterns = [
    path('',views.home,name='home'),
    path('login/',views.user_login,name='user_login'),
    path('logout/',views.user_logout,name='user_logout'),
    path('signup/',views.user_signup,name='user_signup'),
    path('passUpdate/',views.password_change,name='pass_update'),
]
