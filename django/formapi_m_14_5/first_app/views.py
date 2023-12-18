from django.shortcuts import render
from first_app.forms import ExampleForm

# Create your views here.
def home(request):
    form=ExampleForm(request.POST)
    if form.is_valid():
        print(form.cleaned_data)
    return render(request,'home.html',{'form':form})