from django import forms
class contactForm(forms.Form):
    name=forms.CharField(label="user name")
    email=forms.EmailField(label="user email")
