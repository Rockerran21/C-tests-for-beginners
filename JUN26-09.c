//
//WAP TO ENTER A NUMBER AND DISPLAY THE TOTAL NO OF DIGITS IN IT.c
//  Function Tests
//
//  Created by Ranjan Marasini on 26/07/2022.
//

#include <stdio.h>
void count(int *a)
{
    int r,c=0,s=0;
    while (*a!=0) {
        r=*a % 10;
        c=c+1;
        s=s+r;
        *a=*a/10;
    }
    printf("\nthe number you have entered  has %d digits %d\n",c,s);
}
/*int main()
{
    int n;
    printf("Enter the desired no :");
    scanf("%d",&n);
    count(&n);
}*/
