/*poblem statement =  TAKE A INPUT NO AND CEHAK ITS NO IS DIVISIBLE BY 5 OR NOT */


#include<stdio.h>
typedef int BOOL;                                //compiler replace BOOL with int 
#define true 1                                   // micro replace ture with 1 
#define false 0                                  // micro replace false with 0 



BOOL division(int n){
    if(n%5==0)
        return true;                             //4.no is divisible by 5 then write ture 

    else 
        return false;                            //5.no is divisible by 5 then write false 

}

int main(){                                      //1.program starts here

    int a=0;
    BOOL result;

    printf("enter the no :");

    scanf("%d",&a);                              //2.take a imput no      

    result=division(a);                         //3. call a function


    if(result==true){
        printf("value is divisible by 5");
    }
    else
        printf("value is not divisible by 5 ");


    return 0 ;
}