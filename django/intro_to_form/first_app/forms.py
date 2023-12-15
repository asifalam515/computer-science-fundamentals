from django import forms
from django.core import validators

# widget ===>field to html input
class contactForm(forms.Form):
    name=forms.CharField(label="Full Name: ",initial="Rahim",help_text="Total length must be with in 70 character",required=False,widget=forms.Textarea(attrs={'id':
        'text_area', 'class':'class1 class2' ,'placeholder':'enter your name'}))
    # file=forms.FileField()
    # email=forms.EmailField(label="User Email")
    # age=forms.IntegerField()
    # weight=forms.FloatField()
    # balance=forms.DecimalField()
    # check=forms.BooleanField()
    age =forms.CharField(widget=forms.NumberInput)
    birthday=forms.CharField(widget=forms.DateInput(attrs={'type':'date'}))
    appointment=forms.DateField(widget=forms.DateInput(attrs= {'type':'datetime-local'}))
    CHOICES=[('S','Small'),('M','Medium'),('L','Large')]
    size=forms.ChoiceField(choices=CHOICES, widget=forms.RadioSelect)
    MEAL=[('P','Pepperoni'),('M','Mashroom'),('B','Beef')]
    pizza=forms.MultipleChoiceField(choices=MEAL,widget=forms.CheckboxSelectMultiple)
    
    
# class StudentData(forms.Form):
#         name=forms.CharField(widget=forms.TextInput)
#         email=forms.CharField(widget=forms.EmailInput)
#         # def clean_name(self):
#         #     valname = self.cleaned_data['name']
#         #     if len(valname) < 10:
#         #         raise forms.ValidationError("Enter a name with at least 10 character")
#         #     return valname
#         # def clean_email(self):
#         #     valemail=self.cleaned_data['email']
#         #     if '.com' not in valemail:
#         #         raise forms.ValidationError("YOUR email must contain .com")
#         #     return valemail
#         def clean(self):
#             cleaned_data=super().clean()
#             valname=self.cleaned_data['name']
#             valemail=self.cleaned_data['email']
#             if len(valname) <10:
#                 raise forms.ValidationError("Enter a name with at least 10 character")
       
#             if '.com' not in valemail:
#                 raise forms.ValidationError("your email must have .com")
        

            

def len_check(value):
    if len(value) < 10:
        raise forms.ValidationError("Enter a value at least 10 characters")
class StudentData(forms.Form):
    name=forms.CharField(validators=[validators.MinLengthValidator(10,message="enter name with atleast 10 character")])
    # custom one
    text=forms.CharField(widget=forms.TextInput,validators=[len_check])
    email=forms.CharField(widget=forms.EmailInput,validators=[validators.EmailValidator(message="Enter a valid email")])
    age=forms.IntegerField(validators=[validators.MaxValueValidator(34,message="age must be  max 34"),validators.MinValueValidator(18,message="age must be minimum 18")])
    file=forms.FileField(validators=[validators.FileExtensionValidator(allowed_extensions=['pdf'],message='file extension must be ended with .pdf')])
    
    
class PasswordValidationProject(forms.Form):
    name=forms.CharField(widget=forms.TextInput)
    password=forms.CharField(widget=forms.PasswordInput)
    confirm_password=forms.CharField(widget=forms.PasswordInput)
    
    def clean(self):
        cleaned_data=super().clean()
        val_name=self.cleaned_data['name']
        val_pass=self.cleaned_data['password']
        val_confirm_password=self.cleaned_data['confirm_password']
        if val_pass != val_confirm_password:
            raise forms.ValidationError("password doesn't match")
        if len(val_name) <10:
            raise forms.ValidationError("Name must be at least 10 characters")
        