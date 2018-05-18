 #include<iostream>
 #include<stdio.h>
#include<stdlib.h>

 using namespace std;
/*
 int* getValue(){
    int *px;
    px = (int*)malloc(sizeof(int));
    *px = 10;
    return px;
 }
 int main(){
    int* px = getValue();
    printf("%d\n",*px);

   return 0;
 }*/

 /*struct mystruct{
    int i;
    char c;
 };

 int main()
 {
     printf("%d\n",sizeof(struct mystruct));

     return 0;
 }
*/

/*
int main(){
    char ch = 'a';
    char* c=NULL;
    c = &ch;

    printf("%d\n",*c);
    return 0;
}*/
/*
int main(){
    int x = 10;
    int* px1=&x;
    int* px2;
    px2 = px1;

    *px2 = 20;
    printf("%d\n",*px1);

    return 0;
}
*/

/*
//here inside malloc have taken int size value
int main(){
    int* px = (int*) malloc(sizeof(int));
    printf("%d\n",px);//output memory address
    free(px);
    printf("%d\n",px);//after free also to be show same value
    px = NULL;
    printf("%d\n",px);//when it's null. output is NULL

}*/

/*
//its work like a datatype
struct mystruct{
        int age;
        double height;
};

int main()
{
    struct mystruct s1;
    s1.age = 10; s1.height = 4.7;
    struct mystruct * ps1; //ps1 point in mystruct memory
    ps1 = &s1;
    // (*ps1).age = 21; //ps1 point mystruct age
    ps1-> age = 21; //same as uppor line
    (*ps1).height = 5.1;
    printf("%d\n",s1.age);
    printf("%f\n",s1.height);

    return 0;
}
*/
//again i just precise and write down code
/*
struct mystruct{
    int age;
    double height;
};

int main(){
    struct mystruct * ps;
    ps = (struct mystruct*) malloc(sizeof(struct mystruct));
    ps->age = 30;
    ps->height = 4.7;
    printf("%d\n",ps->age);
    printf("%f\n",ps->height);


    return 0;
}
*/

/*
//pointer arithmetic

int main(){
    int x = 8;
    int* px = &x;
    printf("%d\n",&px);
    printf("%d\n",px);

    ++(*px);//here point (*px) point memory location x

    printf("%d\n",x);//here output 9. cause (*px) point x memory location & here value 8 after increase value will 9

    ++(px);
    printf("%d\n",px);//when increment int (4 byte) cause int size 4 byte.. here focus on byte not byte value.
    return 0;
}*/

/*
int main(){
    int ar[3]={4,8,9};

    printf("%d\n",&ar[0]);//here print memory address a[0]
    printf("%d\n",&ar[1]);//here print memory address a[1]
    printf("%d\n",&ar[2]);//here print memory address a[2]

    printf("%d\n", ar);//here ar[0]==ar same output(memory address)
    printf("%d\n", *(ar+1));//here indicate ar[1] value
    printf("%d\n", ar[1]);//here indicate ar[1] value


    return 0;
}*/


int main(){
    int ar[3] = {4,8,9};

    printf("Enter size of array: ");
    int x;
    scanf("%d",&x);


    int *ar2 = (int*)malloc(3*sizeof(int));
    *ar2 = 4;
    //*(ar2+1) = 8;
    ar2[1]=8;
    ar[2] = 9;

    scanf("%d",&ar2[1]);
    return 0;
}






































































