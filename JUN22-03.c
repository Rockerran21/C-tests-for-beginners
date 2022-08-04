//
//  WAP to check if the given no is odd or even.c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
int oddeven()
{
    int i;
    printf("Enter any no : ");
    scanf("%d",&i);
    if (i%2==0) {
        printf("%d is the even number \n",i);
    }
    else{
        printf("%d is the odd number \n",i);
    }
    return (1);
}
//int main(){
   // oddeven();
//}
