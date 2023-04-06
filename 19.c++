#include<iostream>
#include <math.h>
using namespace std;
 int main(){
    int temp;
    cout<<"input an temperature in centigrade:";
    cin>>temp;
    {
        if (temp<= 0)
        cout<<"freezing weather";
        else if (temp>=0 && temp<10)
         cout<<"very cold weather";
         else if (temp>=10 && temp<20)
           cout<<"cold weather";
           else if (temp>=20 && temp<30)
         cout<<"normal in weather";
         else if (temp>=30 && temp<40)
         cout<<"hot weather";
         else if (temp>=40 && temp<50)
         cout<<"very hot weather";
    }
    return 0;
    }




 