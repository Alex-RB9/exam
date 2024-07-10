#include<stdio.h>
//For Counting no of Bits
int NBits(unsigned int Num){
    int index = 0;
    while (Num != 0){
        Num = (Num -Num%2)/2;
        index++;
    }
    return index;
}
//This converts the input into a binary array
int* Binary(unsigned int Num){
    int index = 0;
    int n = NBits(Num);
    int* I = (int*)malloc(n*sizeof(int));
    //Used Num = 2*Quotient + remainder.
    while (Num != 0){
        I[index] = Num%2;
        Num = (Num - I[index])/2;
        printf("%d", I[index]);
        index++; 
    }
    return I;
}
//To join and left shift two arrays. First index is 0, then we just copy the Num2 array into I upto s2-1 th index.
int* JoinArrayLS(int* Num1,int* Num2){
    int s1 = sizeof(Num1);
    int s2 = sizeof(Num2);
    int* I = (int*)malloc((s1+s2)*sizeof(int));
    I[0] = 0;
}
int main(){
    unsigned int A;
    unsigned int Q = 1;
    unsigned int M;
    unsigned int N;
    unsigned int temp;
    scanf("Enter your divisor: %i", &M);
    scanf("Enter your dividend: %i", &Q);
    A = 0;
    N = NBits(Q);
}