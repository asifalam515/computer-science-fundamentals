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
        
    }
    return render(request,'first_app/index.html',context)