from django.shortcuts import render
from rest_framework.response import Response
from rest_framework import viewsets, status
from registration.models import *
from registration.serilaziers import UserSerializer
from rest_framework.authtoken.models import Token
from django.shortcuts import get_object_or_404

# checking auth token 



# class TestViewSet(viewsets.ModelViewSet):
#     queryset = Test.objects.all()
#     serializer_class = TestSerializer
    
#     list_ = [1, 2, 3, 4]
    
#     def get_list(self, request, name : str):
#         # return Response(data=self.list_, status=status.HTTP_200_OK)
#         return Response(data=name)
    
#     def post_req(self, request):
#         data = request.data['age']
#         return Response(data=data)


class AuthorizationViewSet(viewsets.ModelViewSet):
    
    serializer_class = UserSerializer
    
    # post 
    def login(self, request):
        user = get_object_or_404(User, username=request.data["username"])
        if not user.check_password(request.data["password"]):
            return Response(data= {"detail" : "does not correct password"}, status=status.HTTP_404_NOT_FOUND)
        (token, created) = Token.objects.get_or_create(user=user)
        serializer = UserSerializer(instance=user)

        return Response(data={"token" : token.key, "user" : serializer.data})
    
    # post
    def signup(self, request):
        
        serilalizer = UserSerializer(data=request.data)
        if serilalizer.is_valid():
            serilalizer.save()
            user = User.objects.filter(username=request.data["username"])[0]
            
            user.set_password(request.data["password"])
            user.save()
            token = Token.objects.create(user = user)
            anotherSerializer = UserSerializer(instance=user)
            return Response({"token" : token.key, "user" : anotherSerializer.data}, status=status.HTTP_200_OK)
        return Response(serilalizer.errors, status=status.HTTP_400_BAD_REQUEST)
    
    # get 
    def test(self, request):
        return Response(data={"permission" : "accepted"})
    