#include<iostream>
#include<string>
using namespace std;
class empolyee{
    private:
      int a,b,c;
    public:
       int d,e,f;
     void setdata(int a1,int b1,int c1);

     void getdata(){
          cout<<"the value of a is"<<a<<endl;
          cout<<"the value of b is"<<b<<endl;     
          cout<<"the value of c is"<<c<<endl;
          cout<<"the value of d is"<<d<<endl; 
          cout<<"the value of e is"<<e<<endl; 
          cout<<"the value of f is"<<f<<endl;
      }

};
  void employee :: setdata (int a1, int b1, int c1){

     a = a1;
     b = b1;
     c = c1;

  }
    int main()
    {
       employee harry;
          harry.d= 23;
          harry.e= 21;
          harry setdata(1,2,4);
          harry getdata();

      return 0;

    }    



    