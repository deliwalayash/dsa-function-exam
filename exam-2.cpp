#include<iostream>

using namespace std;

int isPrime(int,int);

int main(){


    int v1,v2;

    cout <<"Enter range of value 1 & 2:" << endl;

    cin >> v1 >> v2;

    cout <<"Ans :" << isPrime(v1,v2);
    return 0;
}

int isPrime(int a,int b){

    int i=0,j,sum =0;
    if(a ==1){
        a++;
    }
    for(i = a;i< b;i++){
        bool flag=false;
        for(j=2;j < i;j++){
            if (i % j ==0){
                flag=true;
            }

        }
        if(flag ==false){
            sum = sum + i;

        }

    }

    return sum;
}