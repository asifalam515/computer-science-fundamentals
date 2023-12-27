from django.shortcuts import render,redirect
from posts.forms import PostForm
from posts.models import Post
# Create your views here.
def add_post(request):
    if request.method == 'POST':
        post_form=PostForm(request.POST )
        if  post_form.is_valid():
            post_form.save()
            return redirect('add_post')
    else:
        post_form=PostForm()

    return render(request,'add_post.html',{'form':post_form})


def edit_post(request,id):
    post=Post.objects.get(pk=id)
    post_form=PostForm(instance=post)
    # print(post.tittle)
    if request.method == 'POST':
        post_form=PostForm(request.POST,instance=post)
        if  post_form.is_valid():
            post_form.save()
            return redirect('hompage')
    else:
        post_form=PostForm(instance=post)

    return render(request,'add_post.html',{'form':post_form})


def delete_post(request,id):
    post=Post.objects.get(pk=id)
    post.delete()
    return redirect('hompage')