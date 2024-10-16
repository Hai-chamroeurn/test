#include <iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,deta,x1,x2;
    cout<<"Input a :";cin >>a;
    cout<<"Input b :";cin >>b;
    cout<<"Input c :";cin >>c;
    
    if(a==0){
        x1=-c/b;
        cout<<"Result x: "<<x1<<endl;
    }
    if(a!=0){
        deta=(b*b)-4*a*c;
        x1 = (-b+sqrt(deta))/2*a;
        x2 = (-b-sqrt(deta))/2*a;
        cout<<"Result x1: "<<x1<<endl;
        cout<<"Result x2: "<<x2<<endl;     
    }


    return 0;
}