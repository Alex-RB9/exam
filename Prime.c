#include<stdio.h>
#include<stdlib.h>
//For Counting no of Bits
int NBits(unsigned int Num){
    int index = 0;
    if(Num != 0){
    while (Num != 0){
        Num = (Num -Num%2)/2;
        index++;
    }}
    else {index = 1;}
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
        index++; 
    }
    return I;
}
//Left shifts an array.
int* LfShift(int Arr[], unsigned int size){
    int* I = (int*)malloc((size)*sizeof(int));
    printf("%d\n", size);
    printf("%d\n", Arr[size-1]);
    while (size >= 0)
    {
        I[size] = Arr[size - 1];
        size--;
    }
    return I;
}
int main(){ 
    
    unsigned int q;
    unsigned int m;
    unsigned int N;
    int* A = {0};
    int* tmp = {0};
    
    printf("Enter your divisor: ");
    scanf("%i", &m);
    int* M = Binary(m);
    
    printf("Enter your dividend: ");
    scanf("%i", &q);
    int* Q = Binary(q);
    
    N = NBits(q);
    printf("%d\n", N);
    /*
    int i;
    for(i = 0; i < N;){
        A = LfShift(A, sizeof(A)/sizeof(int));
        *A = *(Q+i);
        if(A >= m){
            A = A - m;
            *(Q+i) = 1;
        }
        i++;
    }
    */    
}