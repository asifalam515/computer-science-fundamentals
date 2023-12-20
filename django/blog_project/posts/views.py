from django.shortcuts import render,redirect
from posts.forms import PostForm

# Create your views here.
def add_post(request):
    if request.method == 'POST':
        post_form=PostForm(request.POST)
        if  post_form.is_valid():
            post_form.save()
            return redirect('add_post')
    else:
        post_form=PostForm()

    return render(request,'add_post.html',{'form':post_form})