from django import forms
import datetime
from django.forms.widgets import NumberInput
from first_app.models import Employee
class ExampleForm(forms.Form):
    CHOICE_YEARS=['1999','2000','2001']
    CHOICE_COLOR=[
        ('red','red'),
        ('white','white'),
        ('yellow','yellow')
    ]
    CHOICE_SPORTS=[
        ('cricket','cricket'),
        ('football','football'),
        ('Badminton','Badminton')
    ]
    name=forms.CharField(label="Full Name",initial='asif')
    email=forms.EmailField(label="Enter your Email Address" )
    password=forms.CharField(widget=forms.PasswordInput())
    upload=forms.FileField(help_text="Upload Your Assignment",required=False)
    Profile_photo=forms.ImageField(help_text="Enter Your Image" ,required=False)
    agree=forms.BooleanField()
    date=forms.DateField()
    birthday=forms.DateField(widget=NumberInput(attrs={'type': 'date'}))
    comment=forms.CharField(widget=forms.Textarea(attrs={'rows':3}), required=False)
    birth_year=forms.DateField(widget=forms.SelectDateWidget(years=CHOICE_YEARS))
    Balance=forms.DecimalField()
    Day=forms.DateField(initial=datetime.date.today)
    Sports=forms.MultipleChoiceField(widget=forms.CheckboxSelectMultiple,choices=CHOICE_SPORTS)
    favourite_color=forms.ChoiceField(widget=forms.RadioSelect,choices=CHOICE_COLOR,required=False)
    ChooseEmployee = forms.ModelChoiceField(widget=forms.RadioSelect,
        queryset=Employee.objects.all(),  
        initial=0
    )
    MultipleEmploye=forms.ModelMultipleChoiceField(
        widget=forms.CheckboxSelectMultiple,
        queryset=Employee.objects.all(),
        initial=0
    )