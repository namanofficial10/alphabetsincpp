#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include<bits/stdc++.h>
using namespace std;

bool A(int n){
    string file_name = "A_"+to_string(n)+".txt";
    ofstream out(file_name);
    string pattern,temp;
    int line_size = 2*n-1;
    int i,j;
    int middle_space = -1;
    int all;
    if(n%2==0){
        all = n+1;
    }
    else{
        all = n;
    }
    for(i=0;i<n;i++){
        temp="";
        for(j=n-i;j>1;j--){
            temp=temp+" ";
        }
        if(i==n/2){
            for(j=0;j<all;j++){
                temp=temp+"*";
            }
        }
        else{
            temp=temp+"*";
            if(i!=0){
                for(j=0;j<middle_space;j++){
                    temp=temp+" ";

                }
                temp=temp+"*";
            }
        }
        middle_space +=2;
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";

    }
    out<<pattern;
    return true;
}

bool B(int n){
    string file_name = "B_"+to_string(n)+".txt";
    ofstream out(file_name);
    string pattern,temp;

    int line_size = n;
    int i,j;

    for(i=0;i<n;i++){
        temp="";
        if(i==0 || i==n/2 || i==n-1){
            for(j=0;j<n-1;j++){
                temp=temp+"*";
            }
        }
        else{
            temp=temp+"*";
            for(j=0;j<n-2;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }
    out<<pattern;
    return true;
}

bool C(int n){
    string file_name = "C_"+to_string(n)+".txt";
    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;
    int i,j;

    for(i=0;i<n;i++){
        temp="";
        if(i==0 || i==n-1){
            for(j=0;j<n;j++){
                temp=temp+"*";
            }
        }
        else{
            temp=temp+"*";
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }
    out<<pattern;
    return true;
}

bool D(int n){
    string file_name = "D_"+to_string(n)+".txt";
    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;

    for(i=0;i<n;i++){
            temp="";
        if(i==0 || i==n-1){
            for(j=0;j<n-1;j++){
                temp=temp+"*";
            }
        }
        else{
            temp=temp+"*";
            for(j=0;j<n-2;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }
    out<<pattern;
    return true;
}

bool E(int n){
    string file_name = "E_"+to_string(n)+".txt";
    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;

    for(i=0;i<n;i++){
        temp="";
        if(i==0 || i==n-1){
            for(j=0;j<n-1;j++){
                temp=temp+"*";
            }
        }
        else if(i==n/2){
            for(j=0;j<(n/2)+1;j++){
                temp=temp+"*";
            }
        }
        else{
            temp=temp+"*";
            for(j=0;j<n-2;j++){
                temp=temp+" ";
            }
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool F(int n){
    string file_name = "F_"+to_string(n)+".txt";
    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;
    for(i=0;i<n;i++){
        temp="";
        if(i==0){
            for(j=0;j<n-1;j++){
                temp=temp+"*";
            }
        }
        else if(i==n/2){
            for(j=0;j<(n/2)+1;j++){
                temp=temp+"*";
            }
        }
        else{
            temp=temp+"*";
            for(j=0;j<n-2;j++){
                temp=temp+" ";
            }
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool G(int n){
    string file_name = "G_"+to_string(n)+".txt";
    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;
    int front_space=n/3, mid_space=n/2+2;

    for(i=0;i<n;i++){
        temp="";
        if(i==0){
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            for(j=front_space;j<mid_space;j++){
                temp=temp+"*";
            }
            mid_space-=2;
            front_space--;
        }
        else if(i<n/3){

            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            for(j=0;j<mid_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            mid_space-=2;
            front_space--;

        }
        else if(i==n/3){
            temp=temp+"*";
            for(j=0;j<n-2;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            mid_space=n/2+3;
        }
        else if(i>=n/3 && i<2*n/3){
            temp=temp+"*";
        }
        else if(i==2*n/3){
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            for(j=0;j<n/2;j++){
                temp=temp+" ";
            }
            for(j=2*n/3;j<n;j++){
                temp=temp+"*";
            }

            front_space++;
            mid_space-=2;

        }
        else if(i>2*n/3 && i!=n-1){
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            for(j=0;j<mid_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";

            front_space++;
            mid_space-=2;

        }
        else if(i==n-1){
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            for(j=front_space;j<n/2+2;j++){
                temp=temp+"*";
            }
            front_space++;
            mid_space-=2;

        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";

    }

    out<<pattern;
    return true;
}

bool H(int n){
    string file_name = "H_"+to_string(n)+".txt";
    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;

    for(i=0;i<n;i++){
        temp="";
        if(i==n/2){
            for(j=0;j<n;j++){
                temp=temp+"*";
            }
        }
        else{
            temp=temp+"*";
            for(j=0;j<n-2;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool I(int n){
    string file_name = "I_"+to_string(n)+".txt";
    ofstream out(file_name);
    string pattern,temp;
    int line_size = 1;

    int i,j;

    for(i=0;i<n;i++){
        temp="";
        temp=temp+"*";
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }


    out<<pattern;
    return true;
}

bool J(int n){
    string file_name = "J_"+to_string(n)+".txt";
    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;
    int front_space=0, mid_space=n-2;
    for(i=0;i<n;i++){
        temp="";
        if(i==0){
            for(j=0;j<n;j++){
                temp=temp+"*";
            }
        }
        else if(i<2*n/3 && i!=0){
            for(j=0;j<n-1;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        else if(i>=2*n/3 && i!=n-1){
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            for(j=0;j<mid_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";

            front_space++;
            mid_space-=2;
        }
        else if(i==n-1){
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            for(j=front_space;j<n/2+2;j++){
                temp=temp+"*";
            }
            front_space++;
            mid_space-=2;
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool K(int n){
    string file_name = "K_"+to_string(n)+".txt";
    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;
    int space=n-2;

    for(i=0;i<n;i++){
        temp="";
        temp=temp+"*";
        for(j=0;j<space-1;j++){
            temp=temp+" ";
        }
        if(i!=n/2){
            temp=temp+"*";
        }

        if(n%2==0 && i==n/2){
            temp=temp+"*";
        }

        if(i<n/2){
            space--;
        }
        else{
            space++;
        }

        if(temp.size()<=line_size){
            for(j=temp.size();j<line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool L(int n){
    string file_name = "L_"+to_string(n)+".txt";
    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;

    for(i=0;i<n;i++){
        temp="";
        if(i==n-1){
            for(j=0;j<n;j++){
                temp=temp+"*";
            }
        }
        else{
            temp=temp+"*";
            for(j=0;j<n-2;j++){
                temp=temp+" ";
            }
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }


    out<<pattern;
    return true;
}

bool M(int n){
    string file_name = "M_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = 2*n-1;

    int i,j;
    int middle_space=n+2;

    for(i=0;i<n;i++){
        temp="";
        temp=temp+"*";

        if(i==0){
            for(j=0;j<middle_space;j++){
                temp=temp+" ";
            }
        }
        else if(i==n-1){
            for(j=0;j<(n-2);j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            for(j=0;j<(n-2);j++){
                temp=temp+" ";
            }
        }
        else{
            for(j=0;j<i-1;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            for(j=0;j<middle_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            for(j=0;j<i-1;j++){
                temp=temp+" ";
            }
        }
        middle_space-=2;
        temp=temp+"*";
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool N(int n){
    string file_name = "N_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;
    int front_spacen=n-2;

    for(i=0;i<n;i++){
        temp="";
        temp=temp+"*";

        if(i==0 || i==n-1){
            for(j=0;j<n-2;j++){
                temp=temp+" ";
            }
        }
        else{
            for(j=0;j<i-1;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            for(j=0;j<n-i-2;j++){
                temp=temp+" ";
            }
        }
        front_spacen++;
        temp=temp+"*";
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool O(int n){
    string file_name = "O_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;
    for(i=0;i<n;i++){
        temp="";
        if(i==0 || i==n-1){
            temp=temp+" ";
            for(j=1;j<n-1;j++){
                temp=temp+"*";
            }
        }
        else{
            temp=temp+"*";
            for(j=0;j<n-2;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool P(int n){
    string file_name = "P_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;
    for(i=0;i<n;i++){
        temp="";
        if(i==0 || i==n/2){
            for(j=0;j<n-1;j++){
                temp=temp+"*";
            }
        }
        else{
            if(i<n/2){
                temp=temp+"*";
                for(j=0;j<n-2;j++){
                    temp=temp+" ";
                }
            }
            temp=temp+"*";
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool Q(int n){
    string file_name = "Q_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;
    int front_space=n/3;

    for(i=0;i<n;i++){
        temp="";
        if(i==0){
            temp=temp+" ";
            for(j=1;j<n-1;j++){
                temp=temp+"*";
            }
        }
        else if(i==n-1){
            for(j=0;j<n-1;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        else if(i==n-2){
            temp=temp+" ";
            for(j=1;j<n-1;j++){
                temp=temp+"*";
            }
        }
        else if(i<2*n/3-1){
            temp=temp+"*";
            for(j=0;j<n-2;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        else{
            temp=temp+"*";
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            for(j=0;j<n-front_space-3;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            front_space++;
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool R(int n){
    string file_name = "R_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;
    int middle_space=0;

    for(i=0;i<n;i++){
        temp="";
        if(i==0 || i==n/2){
            for(j=0;j<n-2;j++){
                temp=temp+"*";
            }
        }
        else{
            temp=temp+"*";
            if(i<n/2){
                for(j=0;j<n-3;j++){
                    temp=temp+" ";
                }
            }
            else{
                for(j=0;j<middle_space;j++){
                    temp=temp+" ";
                }
                middle_space++;
            }
            temp=temp+"*";
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool S(int n){
    string file_name = "S_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;

    for(i=0;i<n;i++){
        temp="";
        if(i==0 || i==n/2 || i==n-1){
            for(j=0;j<n-1;j++){
                temp=temp+"*";
            }
        }
        else{
            if(i<n/2){
                temp=temp+"*";
            }
            for(j=0;j<n-2;j++){
                temp=temp+" ";
            }
            if(i>n/2){
                temp=temp+"*";
            }
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool T(int n){
    string file_name = "T_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;

    for(i=0;i<n;i++){
        temp="";
        if(i==0){
            for(j=0;j<n;j++){
                temp=temp+"*";
            }
        }
        else{
            for(j=0;j<n/2;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool U(int n){
    string file_name = "U_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;
    for(i=0;i<n;i++){
        temp="";
        if(i==n-1){
            temp=temp+" ";
            for(j=1;j<n-1;j++){
                temp=temp+"*";
            }
        }
        else{
            temp=temp+"*";
            for(j=0;j<n-2;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool V(int n){
    string file_name = "V_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = 2*n-1;

    int i,j;
    int front_space = 0;
    int middle_space = n+2;

    for(i=0;i<n;i++){
        temp="";
        if(i!=n-1){
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";

            for(j=0;j<middle_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        else{
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }

        front_space++;
        middle_space-=2;

        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool W(int n){
    string file_name = "W_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = 2*n-1;

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
        temp="";
        temp=temp+"*";

        if(i==n-1){
            for(j=0;j<middle_space;j++){
                temp=temp+" ";
            }
        }
        else if(i==0){
            for(j=0;j<(n-2);j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            if(n%2==0){
                temp=temp+"*";
            }
            for(j=0;j<(n-2);j++){
                temp=temp+" ";
            }
        }
        else{
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            for(j=0;j<middle_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }

        }
        middle_space+=2;
        front_space--;

        temp=temp+"*";

        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool X(int n){
    string file_name = "X_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;
    int front_space = 0;
    int middle_space = n-2;

    for(i=0;i<n;i++){
        temp="";
        if(i!=n/2){
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";

            for(j=0;j<middle_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        else{
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        if(i<n/2){
            front_space++;
            middle_space-=2;
        }
        else{
            front_space--;
            middle_space+=2;
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool Y(int n){
    string file_name = "Y_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;
    int front_space = 0;
    int middle_space = n-2;

    for(i=0;i<n/2+1;i++){
        temp="";
        if(i!=n/2){
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";

            for(j=0;j<middle_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        else{
            for(j=0;j<front_space;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        front_space++;
        middle_space-=2;

        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }
    front_space--;
    for(i=n/2+1;i<n;i++){
        temp="";
        for(j=0;j<front_space;j++){

            temp=temp+" ";
        }
        temp=temp+"*";
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

bool Z(int n){
    string file_name = "Z_"+to_string(n)+".txt";

    ofstream out(file_name);
    string pattern,temp;
    int line_size = n;

    int i,j;
    int current_loc = n;
    for(i=0;i<n;i++){
        temp="";
        current_loc--;
        if(i==0 || i==n-1){
            for(j=0;j<n;j++){
                temp=temp+"*";
            }
        }
        else{
            for(j=0;j<current_loc;j++){
                temp=temp+" ";
            }
            temp=temp+"*";
        }
        if(temp.size()<=line_size){
            for(j=temp.size();j<=line_size;j++){
                temp=temp+" ";
            }
        }
        pattern=pattern+temp+"\n";
    }

    out<<pattern;
    return true;
}

void file_creation(char s, int n){
    if(s=='A' || s=='a'){
        A(n);
    }
    else if(s=='B' || s=='b'){
        B(n);
    }
    else if(s=='C' || s=='c'){
        C(n);
    }
    else if(s=='D' || s=='d'){
        D(n);
    }
    else if(s=='E' || s=='e'){
        E(n);
    }
    else if(s=='F' || s=='f'){
        F(n);
    }
    else if(s=='G' || s=='g'){
        G(n);
    }
    else if(s=='H' || s=='h'){
        H(n);
    }
    else if(s=='I' || s=='i'){
        I(n);
    }
    else if(s=='J' || s=='j'){
        J(n);
    }
    else if(s=='K' || s=='k'){
        K(n);
    }
    else if(s=='L' || s=='l'){
        L(n);
    }
    else if(s=='M' || s=='m'){
        M(n);
    }
    else if(s=='N' || s=='n'){
        N(n);
    }
    else if(s=='O' || s=='o'){
        O(n);
    }
    else if(s=='P' || s=='p'){
        P(n);
    }
    else if(s=='Q' || s=='q'){
        Q(n);
    }
    else if(s=='R' || s=='r'){
        R(n);
    }
    else if(s=='S' || s=='s'){
        S(n);
    }
    else if(s=='T' || s=='t'){
        T(n);
    }
    else if(s=='U' || s=='u'){
        U(n);
    }
    else if(s=='V' || s=='v'){
        V(n);
    }
    else if(s=='W' || s=='w'){
        W(n);
    }
    else if(s=='X' || s=='x'){
        X(n);
    }
    else if(s=='Y' || s=='y'){
        Y(n);
    }
    else if(s=='Z' || s=='z'){
        Z(n);
    }
}

void to_star_pattern(string s="HY", int n=5){
    int i,j,k;

    for(i=0;i<s.size();i++){
        file_creation(s[i],n);
    }
    int current_line=0;
    for(k=0;k<n;k++){
        for(i=0;i<s.size();i++){
            string char_name(1,s[i]);
            transform(char_name.begin(), char_name.end(), char_name.begin(), ::toupper);
            string filename= char_name+"_" +to_string(n)+".txt";
            ifstream in(filename);

            for(j=0;j<n;j++){
                string temp;
                getline(in,temp);

                if(j==current_line){
                    cout<<temp;
                }
            }
         }
         current_line++;
         cout<<"\n";
    }

}

int main(){
    string name;

    cout<<"Enter your name: ";
    cin>>name;

    to_star_pattern(name,5);

    return 0;
}
