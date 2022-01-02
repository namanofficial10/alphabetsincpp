#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;
    int front_space=n-2;
    int middle_space;

    if(n%2==0){
        middle_space=0;
    }
    else{
        middle_space=-1;
    }

    for(i=0;i<n;i++){
        cout<<"h";

        if(i==n-1){
            for(j=0;j<middle_space;j++){
                cout<<" ";
            }
        }
        else if(i==0){
            for(j=0;j<(n-2);j++){
                cout<<" ";
            }
            cout<<"h";
            if(n%2==0){
                cout<<"h";
            }
            for(j=0;j<(n-2);j++){
                cout<<" ";
            }
        }
        else{
            for(j=0;j<front_space;j++){
                cout<<" ";
            }
            cout<<"h";
            for(j=0;j<middle_space;j++){
                cout<<" ";
            }
            cout<<"h";
            for(j=0;j<front_space;j++){
                cout<<" ";
            }

        }
        middle_space+=2;
        front_space--;



        cout<<"h";
        cout<<"\t"<<middle_space<<front_space;

        cout<<"\n";
    }

    return 0;
}
