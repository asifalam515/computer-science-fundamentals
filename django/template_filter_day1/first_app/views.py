from django.shortcuts import render
import datetime

# Create your views here.
def home(request):
    
    context={
        'name':"asibul alam",
        'age':23,
        'friends':['najmul','asik','ajmol'],
        'lst':[12,54,1,5,71,72],
        'txt':['python', 'is', 'fun'],
        'date':datetime.datetime.now(),
        'str':'',
        'lstr':' Python coding contest',
        'framework':'django',
        'dictsort':[
    {'name': 'Josh', 'age': 19},
    {'name': 'Dave', 'age': 22},
    {'name': 'Joe', 'age': 31},
   
    
   
],
        
    }
    return render(request,'first_app/index.html',context)