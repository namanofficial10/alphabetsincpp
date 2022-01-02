#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;
    int front_space=0, mid_space=n-2;

    for(i=0;i<n;i++){
        if(i==0){
            for(j=0;j<n;j++){
                cout<<"*";
            }
        }
        else if(i<2*n/3 && i!=0){
            for(j=0;j<n-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        else if(i>=2*n/3 && i!=n-1){
            for(j=0;j<front_space;j++){
                cout<<" ";
            }
            cout<<"*";
            for(j=0;j<mid_space;j++){
                cout<<" ";
            }
            cout<<"*";

            front_space++;
            mid_space-=2;

        }
        else if(i==n-1){
            for(j=0;j<front_space;j++){
                cout<<" ";
            }
            for(j=front_space;j<n/2+2;j++){
                cout<<"*";
            }
            front_space++;
            mid_space-=2;

        }
        cout<<endl;

    }

    return 0;
}
