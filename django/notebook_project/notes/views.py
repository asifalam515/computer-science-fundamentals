from django.shortcuts import render
MyNotes=[{'id':1,'title':'first note','entries':['entry 1.1','entry 1.2','entry 1.3']},
         {'id':2,'title':'second note','entries':['entry 2.1','entry 2.2','entry 2.3']},
         {'id':3,'title':'third note','entries':['entry 3.1','entry 3.2','entry 3.3']},
         
         
         
         
         
         ]
# Create your views here.
def index(request):
    return render(request,'notes/index.html') 

def notes(request):
    notes=MyNotes
    context={'note':notes}
    return render(request,'notes/notes.html',context)