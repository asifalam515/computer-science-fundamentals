from django.shortcuts import render
import datetime

# Create your views here.
def home(request):
    d={'author':'Rahim','age':20,'lst':['python','is','best'],'birthday':datetime.datetime.now() ,'val':' ','courses':[
        {
            'id':1,
            'name':'python',
            'fee':5000
        },
        {
            'id':2,
            'name':'Django',
            'fee':10000
        },
        {
            'id':3,
            'name':'c',
            'fee':1000
        }
        
    ]}
    return render(request,'home.html',d)
