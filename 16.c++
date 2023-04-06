#include <iostream>
using namespace std;
int main(){
         int maths , phy ,chem,total;

      cout<<"eligbility criteria :"<<endl;
      cout<<"maths>= 65"<<endl;
      cout<<"physics>=55"<<endl;
      cout<<"chemistry>= 50"<<endl;
      cout<<"total>= 190"<<endl;
      cout<<"..............."<<endl;
         cout<<"enter maths marks::";
         cin>>maths;
         cout<<"enter phy marks::";
         cin>>phy; 
         cout<<"enter chem marks::";
         cin>>chem;
         cout<<"total marks="<<"maths+ physics+ chemistry"<<" "<<endl;
         if(maths>=65)
           if(phy>=55)
             if(chem>=50)
                total=maths+phy+chem;
                  if(total>=180)
{
   cout<<"candidate is eligible for admission";
}
else
{
   cout<<"candidate is not eligible for admission";
}
 return 0;
}