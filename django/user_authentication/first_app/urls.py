
from django.urls import path
from . import views
urlpatterns = [
  path('',views.home,name='home'),  
 path('sign_up/',views.sign_up,name='sign_up'),
 path('profile/',views.profile,name='profile'),
 path('log_in/',views.log_in,name='log_in'),
 path('log_out/',views.log_out,name='log_out'),
 path('pass_change/',views.pass_change,name='pass_change'),
 path('pass_change2/',views.pass_change2,name='pass_change2'),
]
