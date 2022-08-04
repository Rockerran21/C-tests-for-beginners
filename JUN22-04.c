//
//  WAP to find the sum of given expression..c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
int sum()
{
    int j,s,f,i,n,sum=0;
    printf("Enter any no : \n");
    scanf("%d",&n);
    f=1;
    s=1;
    printf("%d \t %d",f,s);
    for (i=1; i<=n; i++) {
        j=(f+s)*i;
        sum=sum+j;
        f=s;
        s=j;
        printf("\t %d",j);
    }
    printf("\nThe sum is %d",sum);
    return (1);
}
//int main(){
    //sum();
    
//}
