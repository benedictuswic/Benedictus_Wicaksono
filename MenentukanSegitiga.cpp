#include <iostream>
using namespace std;

int main(){
    int x, y ,z;
    cin>>x>>y>>z;

    if(x==y && x==z && y==z){
        cout<<"Dapat menjadi segitiga, yaitu segitiga sama sisi."<<endl;
    }else if(x==y || y==z || x==z){
        cout<<"Dapat menjadi segitiga, yaitu segitiga sama kaki."<<endl;
    }else if((x*x)+(y*y)==(z*z) || (x*x)+(z*z)==(y*y) || (y*y)+(z*z)==(x*x)){
        cout<<"Dapat menjadi segitiga, yaitu segitiga siku-siku."<<endl;
    }else if((x+y)>z && (x+z)>y && (y+z)>x){
        cout<<"Dapat menjadi segitiga, yaitu segitiga sembarang."<<endl;
    }else
    cout<<"Tidak dapat menjadi segitiga."<<endl;
    return 0;
}
