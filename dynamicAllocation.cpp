#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


int main(){
   int ar[3]={4,8,9};


   int *ar2 = (int*)malloc(3*sizeof(int));
   *ar2 = 4;
   *(ar2+1) = 8;
   ar2[2] = 9;

   scanf("%d",ar2+1);
    printf("%d",ar2[1]);
    return 0;
}
