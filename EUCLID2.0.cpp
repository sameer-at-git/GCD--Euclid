#include<iostream>
using namespace std;

int GCD(int n, int m ){
if (n==m){
    return m;
    }
else if(n>=m){return GCD(n-m,m);}

else{return GCD(n,m-n);}}

int main(){
int m,n;
cout<<"Enter two integer:"<<endl;
cin>>m>>n;
cout<<"GCD is :"<<GCD(m,n)<<endl;
return 0;
}

