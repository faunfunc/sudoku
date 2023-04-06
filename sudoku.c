#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>

 void genMatrixA();
 void genMatrixB();
 void genMatrixC();

 int main(){

   //variable declaration
   int choice[2] = {1,2};

   //program start
   printf("Welcome to Sudoku\n\n");
   sleep(1);

   printf("start new game? y/n");
   sleep(1);
   scanf("%d", choice);

   if(choice == 1){
    printf("starting game");
   }
   else if (choice == 2){
   	printf("ok next time");
   }
   else{
   	printf("invalid choice!");
   }

   
   
   
   
   


 	return 0;
 }

