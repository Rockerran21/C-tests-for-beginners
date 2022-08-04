//
//  WAP to input names of 20 students and arrange them in alphabetical order.c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include<stdio.h>
#include<string.h>
int arrange(){
   int i,j,count;
   char str[25][25],temp[25];
   printf("How many strings u are going to enter?: ");
   scanf("%d",&count);

   printf("Enter Strings one by one: ");
   for(i=0;i<=count;i++)
       gets(str[i]);
   for(i=1;i<=count-1;i++)
      for(j=i+1;j<=count;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("Order of Sorted Strings:");
   for(i=0;i<=count;i++)
      puts(str[i]);
   
   return 0;
}
//int main(){
//    arrange();
//}

