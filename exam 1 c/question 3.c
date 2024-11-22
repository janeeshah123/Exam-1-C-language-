#include<stdio.h>
 int main(){
 	 int numbers,i;
 	  printf("Enter the number to printf it multiplication:");
 	   scanf("%d",& numbers);
 	   
 	    printf("mutiplication in the table of%d:\n",numbers);
 	    
 	    for(i=0;i<=10;i++){
 	        printf("%d=%d\n",&numbers*i);
 	        
 	        return 0;
		 }
 	    
 }