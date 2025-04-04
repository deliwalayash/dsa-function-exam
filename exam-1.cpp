#include<iostream>

using namespace std;

int multipliers(int,int);

int main(){


    int v1,v2;

    cout <<"Enter range of value 1 & 2:" << endl;

    cin >> v1 >> v2;

    cout <<"Ans :" << multipliers(v1,v2);
    return 0;
}

int multipliers(int a,int b){

    int i,sum=0;
    for (i = a;i <b;i++){
        if(i % 3==0 || i % 5 ==0){
            sum = sum + i;
        }
    }

    return sum;
}