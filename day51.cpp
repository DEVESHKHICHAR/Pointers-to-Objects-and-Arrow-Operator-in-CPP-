#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    //     complex(int i, int j){
    //     a=i;
    //     b=j;
    //   }
     void setdata(int i, int j){
        a=i;
        b=j;
      }
      void getdata(){
        cout<<"the imaginary part is: "<<a<<endl;
        cout<<"the real part is: "<<b<<endl;
      }
};
int main() {
    int *p= new int[2];
    p[0]=2;
    // p[1]=5;
    cout<<"the value p[0] is: "<<*(p+3)<<endl;
    // complex c1;
    // complex *ptr= &c1;
    // complex *ptr= new complex(2,6);
    // (*ptr).setdata(2,6);
    // now by using arrows
    complex *ptr= new complex[3];
    ptr[0].setdata(3,5);
    ptr[1].setdata(4,7);
    ptr->getdata();
    (ptr+1)->getdata();
    return 0;
}