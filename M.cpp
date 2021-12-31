#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;
    int middle_space=n+2;

    for(i=0;i<n;i++){
        cout<<"*";

        if(i==0){
            for(j=0;j<middle_space;j++){
                cout<<" ";
            }
        }
        else if(i==n-1){
            for(j=0;j<(n-2);j++){
                cout<<" ";
            }
            cout<<"*";
            for(j=0;j<(n-2);j++){
                cout<<" ";
            }
        }
        else{
            for(j=0;j<i-1;j++){
                cout<<" ";
            }
            cout<<"*";
            for(j=0;j<middle_space;j++){
                cout<<" ";
            }
            cout<<"*";
            for(j=0;j<i-1;j++){
                cout<<" ";
            }



        }
        middle_space-=2;



        cout<<"*";


        cout<<"\n";
    }

    return 0;
}



