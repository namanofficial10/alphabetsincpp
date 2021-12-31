#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;
    int current_loc = n;
    for(i=0;i<n;i++){
        current_loc--;
        if(i==0 || i==n-1){
            for(j=0;j<n;j++){
                cout<<"*";
            }
        }
        else{
            for(j=0;j<current_loc;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}


