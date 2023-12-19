from django.shortcuts import render
from first_app.forms import ExampleForm
from first_app import models

# Create your views here.
def home(request):
    form=ExampleForm(request.POST)
    if form.is_valid():
        print(form.cleaned_data)
    employee=models.Employee.objects.all()
    return render(request,'home.html',{'form':form,'employee':employee})