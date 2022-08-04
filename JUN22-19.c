

#include <stdio.h>
int table()
{
    int i,n;
    printf("Enter the desired no : ");
    scanf("%d",&n);
    for (i=1; i<=20; i++) {
        printf("\n%d * %d = %d",n,i,n*i);
    }
    return (1);
}
//int main()
//{
//    table();
//}
