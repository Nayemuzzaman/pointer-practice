#include<iostream>
#include<stdio.h>

using namespace std;

void change(int *px){
    *px = 20;
    printf("ch %d\n",&px);
}
int main(){
    int x = 10;
    change(&x);
    printf("%d\n",x);
}
