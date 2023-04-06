#include<iostream>
using namespace std;
int main()[
    int i,n,x,sum =0;
    float avg ;
    cout<<"how many number u want to enter ::"<<endl;
   cin>>n;
   for (int i=1;i<=n;i++){
    cout<<"\nenter number"<< i <<"::";
    cin>>x;
    sum=sum=i;
   }
avg=(float)sum/(float)n;
cout<<"sum of"<<n<<"number:"<<sum;
cout<<"average of"<<n<<"number:" <<avg;
cout<<""endl;
return 0;
]