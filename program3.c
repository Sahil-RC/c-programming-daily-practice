
/*problem statement= PRINT NO IN DECRESING ORDER OF 'n=5' to 1 */


#include<stdio.h>

int decrese(){

    int a=5;

    while(a>0){
        printf("%d\n",a);             //3. print a times 

        a--;                          //4. decrese value of a every time 

    }

}


int main(){                          //1.program starts here


    decrese();                       //2. call a function


    return 0; 
}