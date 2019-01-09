from django.db import models
class MyUser(models.Model):
    username = models.CharField(max_length=100)
    is_active = models.BooleanField(default=True)
    is_admin = models.BooleanField(default=False)
    is_superuser = models.BooleanField(default=False)
    creator = models.ForeignKey('self', on_delete=models.SET_NULL)
