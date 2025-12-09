#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    int len_a=a.size();
    int len_b= b.size();
    cout<<len_a<<" "<<len_b<<endl;

    string c= a+b;
    cout<<c<<endl;

    swap(a[0], b[0]);
    cout<<a<<" "<<b;

}