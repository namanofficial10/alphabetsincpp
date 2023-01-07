line=[]

def A(n):
    temp=""
    line_size = 2*n-1
    middle_space = -1

    if n%2==0:
        all = n+1
    else:
        all = n

    for i in range(n):
        temp=""
        for j in range(n-i,1,-1):
            temp+=" "
        if i==int(n/2):
            for j in range(all):
                temp+="*"
        else:
            temp+="*"
            if i!=0:
                for j in range(middle_space):
                    temp+=" "
                temp=temp+"*"
                
        middle_space+=2
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp

    
    return True

def B(n):
    temp=""
    line_size = n

    for i in range(n):
        temp=""
        if i==0 or i==int(n/2) or i==n-1:
            for j in range(n-1):
                temp+="*"
        else:
            temp+="*"
            for j in range(n-2):
                temp+=" "
            temp+="*"
        
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
        line[i]+=temp
    return True

def C(n):
    temp=""
    line_size = n
    for i in range(n):
        temp=""
        if i==0 or i==n-1:
            for j in range(n-1):
                temp=temp+"*"
        else:
            temp=temp+"*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def D(n):
    temp=""
    line_size = n
    
    for i in range(n):
        temp=""
        if i==0 or i==n-1:
            for j in range(n-1):
                temp=temp+"*"
        else:
            temp=temp+"*"
            for j in range(n-2):
                temp=temp+" "
            temp=temp+"*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def E(n):
    temp=""
    line_size = n
    for i in range(n):
        temp=""
        if i==0 or i==n-1:
            for j in range(n-1):
                temp=temp+"*"
        elif i==int(n/2):
            for j in range(int(n/2)+1):
                temp+="*"
        else:
            temp=temp+"*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def F(n):
    temp=""
    line_size = n
    for i in range(n):
        temp=""
        if i==0:
            for j in range(n-1):
                temp=temp+"*"
        elif i==int(n/2):
            for j in range(int(n/2)+1):
                temp+="*"
        else:
            temp=temp+"*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def G(n):
    
    temp=""
    line_size = n
    front_space=int(n/3)
    mid_space=int(n/2)+2

    for i in range(n):
        temp=""
        if i==0:
            for j in range(front_space):
                temp+=" "
            for j in range(front_space,mid_space):
                temp+="*"
            mid_space-=2
            front_space-=1
        elif i<int(n/3):
            for j in range(front_space):
                temp+=" "
            temp+="*"
            for j in range(mid_space):
                temp+=" "
            temp+="*"
            mid_space-=2
            front_space-=1
        elif i==int(n/3):
            temp=temp+"*"
            for j in range(n-2):
                temp=temp+" "
            temp=temp+"*"
            mid_space=n/2+3
        elif i>=int(n/3) and i<int(2*n/3):
            temp+="*"
        elif i==int(2*n/3):
            for j in range(front_space):
                temp=temp+" "
            temp=temp+"*"
            for j in range(int(n/2)):
                temp=temp+" "
            for j in range(int(2*n/3),n):
                temp=temp+"*"

            front_space+=1
            mid_space-=2
        elif i>int(2*n/3) and i!=n-1:
            for j in range(front_space):
                temp=temp+" "
            temp=temp+"*"
            for j in range(mid_space):
                temp=temp+" "
            temp=temp+"*"

            front_space+=1
            mid_space-=2
        elif i==n-1:
            for j in range(front_space):
                temp=temp+" "
            for j in range(front_space,int(n/2)+2):
                temp=temp+"*"
            front_space+=1
            mid_space-=2
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def H(n):
    temp=""
    line_size = n
    
    for i in range(n):
        temp=""
        if i==int(n/2):
            for j in range(n):
                temp+="*"
        else:
            temp+="*"
            for j in range(n-2):
                temp+=" "
            temp+="*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def I(n):
    temp=""
    line_size = 1
    for i in range(n):
        temp=""
        temp+="*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def J(n):
    temp=""
    line_size = n
    front_space=0
    mid_space=n-2

    for i in range(n):
        temp=""
        if(i==0):
            for j in range(n):
                temp=temp+"*"
        
        elif i<int(2*n/3) and i!=0:
            for j in range(n-1):
                temp=temp+" "
            temp=temp+"*"

        elif i>=int(2*n/3) and i!=n-1:
            for j in range(front_space):
                temp=temp+" "
            temp=temp+"*"
            for j in range(mid_space):
                temp=temp+" "
            temp=temp+"*"
            front_space+=1
            mid_space-=2
        elif i==n-1:
            for j in range(front_space):
                temp=temp+" "
            for j in range(front_space,int(n/2)+2):
                temp=temp+"*"
            front_space+=1
            mid_space-=2
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def K(n):
    temp=""
    line_size = n
    space=n-2

    for i in range(n):
        temp=""
        temp=temp+"*"
        for j in range(space):
            temp+=" "

        temp=temp+"*"

        if i<int(n/2):
            space-=1
        else:
            space+=1
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def L(n):
    temp=""
    line_size = n

    for i in range(n):
        temp=""
        if i==n-1:
            for j in range(n):
                temp=temp+"*"
        else:
            temp+="*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def M(n):
    temp=""
    line_size = 2*n-1
    middle_space=n+2

    for i in range(n):
        temp=""
        temp=temp+"*"
        if i==0:
            for j in range(middle_space+1):
                temp=temp+" "
        elif i==n-1:
            for j in range(n-1):
                temp=temp+" "
            temp=temp+"*"
            for j in range(n-2):
                temp+=" "
        else:
            for j in range(i-1):
                temp=temp+" "
            temp=temp+"*"
            for j in range(middle_space+1):
                temp=temp+" "
            temp=temp+"*"
            for j in range(i-1):
                temp=temp+" "
        middle_space-=2
        temp=temp+"*"
        if len(temp)<=line_size+1:
            for j in range(len(temp),line_size+2):
                temp+=" "
            
        line[i]+=temp
    return True

def N(n):
    temp=""
    line_size = n
    front_spacen=n-2

    for i in range(n):
        temp=""
        temp+="*"
        if i==0 or i==n-1:
            for j in range(n-2):
                temp=temp+" "
        else:
            for j in range(i-1):
                temp=temp+" "
            temp=temp+"*"
            for j in range(n-i-2):
                temp=temp+" "
        front_spacen+=1
        temp=temp+"*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp

    return True

def O(n):
    temp=""
    line_size = n
    
    for i in range(n):
        temp=""
        if i==0 or i==n-1:
            temp+=" "
            for j in range(1,n-1):
                temp+="*"
        else:
            temp+="*"
            for j in range(n-2):
                temp+=" "
            temp+="*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp

    return True

def P(n):
    temp=""
    line_size = n
    for i in range(n):
        temp=""

        if i==0 or i==int(n/2):
            for j in range(n-1):
                temp=temp+"*"
        else:
            if i<int(n/2):
                temp=temp+"*"
                for j in range(n-2):
                    temp=temp+" "
            temp=temp+"*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def Q(n):
    temp=""
    line_size = n
    front_space=int(n/3)

    for i in range(n):
        temp=""
        if i==0:
            temp=temp+" "
            for j in range(1,n-1):
                temp=temp+"*"
        elif i==n-1:
            for j in range(n-1):
                temp=temp+" "
            temp=temp+"*"
        elif i==n-2:
            temp=temp+" "
            for j in range(1,n-1):
                temp=temp+"*"
        elif i<int(2*n/3)-1:
            temp=temp+"*"
            for j in range(n-2):
                temp=temp+" "
            temp=temp+"*"
        else:
            temp=temp+"*"
            for j in range(front_space):
                temp=temp+" "
            temp=temp+"*"
            for j in range(n-front_space-3):
                temp=temp+" "
            temp=temp+"*"
            front_space+=1
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def R(n):
    temp=""
    line_size = n
    middle_space=0

    for i in range(n):
        temp=""
        if i==0 or i==int(n/2):
            for j in range(n-2):
                temp=temp+"*"
        else:
            temp=temp+"*"
            if i<int(n/2):
                for j in range(n-3):
                    temp=temp+" "
            else:
                for j in range(middle_space):
                    temp=temp+" "
                middle_space+=1
            temp=temp+"*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def S(n):
    temp=""
    line_size = n
    for i in range(n):
        temp=""
        if i==0 or i==int(n/2) or i==n-1:
            for j in range(n-1):
                temp+="*"
        else:
            if i<int(n/2):
                temp+="*"
            for j in range(n-2):
                temp+=" "
            if i>int(n/2):
                temp+="*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def T(n):
    temp=""
    line_size = n
    for i in range(n):
        temp=""
        if i==0:
            for j in range(n):
                temp+="*"
        else:
            for j in range(int(n/2)):
                temp+=" "
            temp+="*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp


    return True

def U(n):
    temp=""
    line_size = n
    
    for i in range(n):
        temp=""
        if i==n-1:
            temp=temp+" "
            for j in range(1,n-1):
                temp=temp+"*"
        else:
            temp=temp+"*"
            for j in range(n-2):
                temp=temp+" "
            temp=temp+"*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def V(n):
    temp=""
    line_size = 2*n-1
    front_space = 0
    middle_space = n+2
    for i in range(n):
        temp=""
        if i!=n-1:
            for j in range(front_space):
                temp=temp+" "
            temp=temp+"*"

            for j in range(middle_space):
                temp=temp+" "
            temp=temp+"*"
        else:
            for j in range(front_space):
                temp=temp+" "
            temp=temp+"*"

        front_space+=1
        middle_space-=2
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def W(n):
    temp=""
    line_size = 2*n-1
    front_space=n-2

    if n%2==0:
        middle_space=0
    else:
        middle_space=-1

    for i in range(n):
        temp=""
        temp=temp+"*"

        if i==n-1:
            for j in range(middle_space):
                temp=temp+" "
        elif i==0:
            for j in range(n-2):
                temp=temp+" "
            temp=temp+"*"
            if n%2==0:
                temp=temp+"*"
            for j in range(n-2):
                temp=temp+" "
        else:
            for j in range(front_space):
                temp=temp+" "
            temp=temp+"*"
            for j in range(middle_space):
                temp=temp+" "
            temp=temp+"*"
            for j in range(front_space):
                temp=temp+" "
        middle_space+=2
        front_space-=1

        temp=temp+"*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    
    return True

def X(n):
    temp=""
    line_size = n
    front_space = 0
    middle_space = n-2
    
    for i in range(n):
        temp=""
        if i!=int(n/2):
            for j in range(front_space):
                temp+=" "
            temp+="*"
            
            for j in range(middle_space):
                temp+=" "
            temp+="*"
        else:
            for j in range(front_space):
                temp+=" "
            temp+="*"
        if i<int(n/2):
            front_space+=1
            middle_space-=2
        else:
            front_space-=1
            middle_space+=2
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def Y(n):
    
    temp=""
    line_size = n
    front_space = 0
    middle_space = n-2

    for i in range(int(n/2)+1):
        temp=""
        if i!=int(n/2):
            for j in range(front_space):
                temp=temp+" "
            temp=temp+"*"

            for j in range(middle_space):
                temp=temp+" "
            temp=temp+"*"
        else:
            for j in range(front_space):
                temp=temp+" "
            temp=temp+"*"
        front_space+=1
        middle_space-=2
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    front_space-=1
    
    for i in range(int(n/2)+1,n):
        temp=""
        for j in range(front_space):
            temp=temp+" "
        temp=temp+"*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def Z(n):  
    temp=""
    line_size = n

    current_loc = n
    for i in range(n):
        temp=""
        current_loc-=1
        if i==0 or i==n-1:
            for j in  range(n):
                temp+="*"
        else:
            for j in range(current_loc):
                temp+=" "
            temp+="*"
        if len(temp)<=line_size:
            for j in range(len(temp),line_size+1):
                temp+=" "
            
        line[i]+=temp
    return True

def file_creation(s, n):
    if s=='A' or s=='a':
        A(n)
    elif s=='B' or s=='b':
        B(n)
    elif s=='C' or s=='c':
        C(n)
    elif s=='D' or s=='d':
        D(n)
    elif s=='E' or s=='e':
        E(n)
    elif s=='F' or s=='f':
        F(n)
    elif s=='G' or s=='g':
        G(n)
    elif s=='H' or s=='h':
        H(n)
    elif s=='I' or s=='i':
        I(n)
    elif s=='J' or s=='j':
        J(n)
    elif s=='K' or s=='k':
        K(n)
    elif s=='L' or s=='l':
        L(n)
    elif s=='M' or s=='m':
        M(n)
    elif s=='N' or s=='n':
        N(n)
    elif s=='O' or s=='o':
        O(n)
    elif s=='P' or s=='p':
        P(n)
    elif s=='Q' or s=='q':
        Q(n)
    elif s=='R' or s=='r':
        R(n)
    elif s=='S' or s=='s':
        S(n)
    elif s=='T' or s=='t':
        T(n)
    elif s=='U' or s=='u':
        U(n)
    elif s=='V' or s=='v':
        V(n)
    elif s=='W' or s=='w':
        W(n)
    elif s=='X' or s=='x':
        X(n)
    elif s=='Y' or s=='y':
        Y(n)
    elif s=='Z' or s=='z':
        Z(n)
    else:
        return False
    
def to_star_pattern(s="HY", n=5):

    for i in range(n):
        line.append(str(''))

    for i in s:
        file_creation(i,n)

    for k in range(n):
        print(line[k])



if __name__=="__main__":
    
    name = input("Enter your name:")
    to_star_pattern(name,5)
