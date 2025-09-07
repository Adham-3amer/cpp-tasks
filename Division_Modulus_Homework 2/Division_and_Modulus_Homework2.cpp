#include <iostream>
using namespace std;
int main(){
int x;
cout<<"enter the value of x";
cin>>x;
int res=x%1000;
int last3=res/100;
int last2=(res/10)%10;
int last1=res%10;
cout<<last3<<endl;
cout<<last2<<endl;
cout<<last1<<endl;
int sum=last1+last2+last3;
cout<<sum<<endl;

}