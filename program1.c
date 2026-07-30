

/*problem statement = WRITE A PROGRAM IN C LANGUAGE IN WHICH TAKES 2 INTEGER NO AS INPUT AND PRINT ITS DIVISION AS  RESULT */






#include<stdio.h>												//1.standard input output header file 									#


	void  divide(int a,int b){
		
		int result;

			if(b==0){
						printf("division not poaiible");				//	6.cheak divident is not a zero 
					}

				

			else
					{
				
						result=a/b; 
						printf("value of division is =%d",result);		//7. divide 2 no and print its result 

				}

				};
				
int main()																//2.program starts running from here

{


	int val1 , val2  ; 

		printf("enter the value of 1 st no =");							//3.take a 1 st value input 
		scanf("%d",&val1);


		printf("enter the value of 2 nd no = ");						//4.take a 2nd value input 

		scanf("%d",&val2); 



	 divide(val1,val2);													//5.call a divide function 



return 0 ;
}