from django import forms

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
    
    
class StudentData(forms.Form):
        name=forms.CharField(widget=forms.TextInput)
        email=forms.CharField(widget=forms.EmailInput)
        # def clean_name(self):
        #     valname = self.cleaned_data['name']
        #     if len(valname) < 10:
        #         raise forms.ValidationError("Enter a name with at least 10 character")
        #     return valname
        # def clean_email(self):
        #     valemail=self.cleaned_data['email']
        #     if '.com' not in valemail:
        #         raise forms.ValidationError("YOUR email must contain .com")
        #     return valemail
        def clean(self):
            cleaned_data=super().clean()
            valname=self.cleaned_data['name']
            valemail=self.cleaned_data['email']
            if len(valname) <10:
                raise forms.ValidationError("Enter a name with at least 10 character")
       
            if '.com' not in valemail:
                raise forms.ValidationError("your email must have .com")
        

            
            
            