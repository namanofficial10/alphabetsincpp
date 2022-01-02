#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;
    int space=n/2-1;
    int compare;

    if(n%2==0){
        compare = n/2-1;
    }
    else{
        compare = n/2;
    }

    for(i=0;i<n;i++){
        cout<<"*";
        for(j=0;j<space;j++){
                cout<<" ";
        }
        if(i!=n/2 && n%2!=0){
            cout<<"*";
        }
        else if(n%2 == 0){
            cout<<"*";
        }

        cout<<space;
        if(i=compare+1){

        }
        else if({

        }
        else{
            space++;
        }

        cout<<"\n";
    }


    return 0;
}
