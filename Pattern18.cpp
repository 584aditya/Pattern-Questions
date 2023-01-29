#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=1,n;

    // taking input
    cout<<"Enter the value of n: ";
    cin>>n;

    //printing space before pattern
    cout<<endl;

    //Initializing loop for rows
    while(i<=n){
        int sp=i-1;
        //initializing loop for column
        while(sp){
            cout<<" ";
            sp--;
        }
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    // printing space after pattern
    cout<<endl;
}