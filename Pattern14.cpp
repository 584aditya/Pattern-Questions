#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=1,n;
    char ch='A';
    // taking input
    cout<<"Enter the value of n: ";
    cin>>n;

    //printing space before pattern
    cout<<endl;

    //Initializing loop for rows
    while(i<=n){
        int j=1;
        //initializing loop for column
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    // printing space after pattern
    cout<<endl;
}