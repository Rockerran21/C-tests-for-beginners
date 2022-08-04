//
//  WAP to check armstrong no..c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
#include <math.h>
int armstrong()
{
    int a,b,c,d,i;
    printf("Enter the desired three digit no :");
    scanf("%d",&i);
    a=i/100;
    b=(i-a*100)/10;
    c=i-((a*100)+(b*10));
    d=pow(a, 3)+pow(b, 3)+pow(c, 3);
    if (d==i) {
        printf("\nThe number %d is armstrong number \n",i);
        
    }
    else{
        printf("\nThe  number %d is not an armstrong no \n",i);
    }
    return (1);
    
}
//int main()
//{
//    armstrong();
//}
