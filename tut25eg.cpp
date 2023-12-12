#include<iostream>
using namespace std;

class volume{
    int a;
    int b;
    int c;
    public:
        void setData(int s1,int s2,int s3){
            a = s1;
            b = s2;
            c = s3;
        }

        void vol(volume l1 ,  volume l2 , volume l3 ){
            a= l1.a + l2.a +l3.a;
            b = l1.b + l2.b + l3.b;
            c = l1.c + l2.c + l3.c;
            cout<<a<<endl<<b<<endl<<c<<endl;
            
        }

        void Printvol(void){
            cout<<"the volume is "<<a*b*c<<endl;
        }
};

int main(){
    volume z1 ,z2 ,z3 ,z4;
    z1.setData(1,2,3);
    z1.Printvol();
    z2.setData(2,3,4);
    z2.Printvol();
    z3.setData(3,4,5);
    z3.Printvol();
    z4.vol(z1,z2,z3);
    z4.Printvol();   
return 0;
}