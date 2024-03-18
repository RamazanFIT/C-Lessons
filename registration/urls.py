from rest_framework import routers
from django.urls import include, path
from .views import AuthorizationViewSet

app_name = 'registration'


urlpatterns = [
    # path('test/', TestViewSet.as_view({'get': 'get_list'}), name="someTest"),
    # path('test/<str:name>/', TestViewSet.as_view({'get': 'get_list'}), name="someTest"),
#     path('test/post', TestViewSet.as_view({'post': 'post_req'}), name="someTest"),

    path('login/', AuthorizationViewSet.as_view({'post': 'login'}), name="login"),
    path('signup/', AuthorizationViewSet.as_view({'post': 'signup'}), name="signup"),
    path('test/', AuthorizationViewSet.as_view({'get': 'test'}), name="testing"),
    
]

# r = routers.DefaultRouter()

# r.register(r'test', TestViewSet)

# urlpatterns += r.urls



# [print('1', end= " ") for i in range(100)]
# print(r.urls)
