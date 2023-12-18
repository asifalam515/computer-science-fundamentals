from django import forms
from django.forms.widgets import NumberInput
class ExampleForm(forms.Form):
    name=forms.CharField()
    email=forms.EmailField()
    agree=forms.BooleanField()
    date=forms.DateField()
    birthday=forms.DateField(widget=NumberInput(attrs={'type': 'date'}))
    comment=forms.CharField(widget=forms.Textarea(attrs={'rows':3}))
    