#include<iostream>
using namespace std;

int euclid(int a , int b ){
int r=a%b;
while(r!=0){
    a=b;
    b=r;
    r=a%b;
}
return b;
}

int main(){
    int a,b;
    cout<<"Enter two integer to find out GCD:"<<endl;
    cin>>a>>b;
   cout<<euclid(a,b);

return 0;
}
