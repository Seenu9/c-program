#include<stdio.h>
int main(){
 int income,tax;
 printf("Enter the Income : ");
 scanf("%d",&income);
 if(0<income && income<=150000){
 tax=0;
 printf("Tax = %d",tax);
 }
 else if(150000<income && income<=300000){
 tax=(10*income)/100;
 printf("Tax = %d",tax);
 }
 else if(300000<income && income<=500000){
 tax=(20*income)/100;
 printf("Tax = %d",tax);
 }
 else if(500000<income){
 tax=(30*income)/100;
 printf("Tax = %d",tax);
 }
 else if(income<=0){
 	printf("tax cannot be applied");
 }
 else
 printf("invalid input");
}

