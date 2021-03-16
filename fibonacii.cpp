#include<iostream>

using namespace std;
int main(){
int n,i,first = 0, second =1, next;

cout<< "Enter the number of term of\
Fibonacci sequence"<<endl;
cin>>n;
cout<<"First"<< n << "Terms of Fibonacci \
sequence are:- "<<endl;

for (i=0;i<n;i++){
    if (i<=1)
    next=i;
    else{
        next=first+second;
        first=second;
        second=next;
    }
    cout<<next<<endl;
}
return 0;

}