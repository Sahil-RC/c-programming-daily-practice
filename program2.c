
/*problem statement= WRITE A PROGRAM IN C LANGUAGE IN WHICH TAKE A INPUT AS A NO 'a' AND PRINT "ERROR;" 'a' times  */





#include<stdio.h>

fun(int n){
    for(int i=1;i<=n;i++)
        printf("Error;\n");                                 //4.print n no of times 
}

int main(){                                                 //1.program starts here

    int a ; 
    printf("how many times want to print =");
    scanf("%d",&a);                                         //2.take a imput how many times need to print

    fun(a);                                                //3. call a function

    return 0 ; 
}