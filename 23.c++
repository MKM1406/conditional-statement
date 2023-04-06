#include <iostream>
#include <string>
using namespace std;  
int main()
{
    char notes [15];
    char grad;
    cout<<"input the grade :"<<endl;
    cin>>grad;
    switch(grad)
    { 
        case 'E':
        cout<<"EXCELLENT";
        break;
        case 'V':
        cout<<"VERY GOOD";
        break;
        case 'G':
        cout<<"GOOD";
        break;
        case 'A':
        cout<<"AVERAGE";
        break;
        case 'F':
        cout<<"FAIL";
        break;
      default:  
         cout<<"invalid grade";
         break;
     }
   return 0;
}   