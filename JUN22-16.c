//
//  WAP to input name , address and phone no of 30 employees and arrange their record  in aphabetical order according to their name..c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
#include <string.h>
struct employee {
    char name[20];
    char add[30];
    char phone[40];
};
int arrange2()
{
    char t[20] ,t1[20],t2[20];
    struct employee e[20];
    int i,n,j;
    printf("Enter the desired no :");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        printf("\nEnter the name address and phone no : ");
        scanf("%s %s %s",e[i].name ,e[i].add, e[i].phone);
    }
    for (i=1; i<=n-1; i++) {
        for (j=i+1; j<=n; j++) {
            if (strcmp(e[i].name, e[j].name)>0) {
                
                strcpy(t, e[i].name);
                strcpy(e[i].name, e[j].name);
                strcpy(e[j].name, t);
                strcpy(t1, e[i].add);
                strcpy(e[i].add, e[j].add);
                strcpy(e[j].add, t);
                strcpy(t2, e[i].phone);
                strcpy(e[i].phone, e[j].phone);
                strcpy(e[j].phone, t);
            }
        }
    }
    for (i=1; i<=n; i++) {
        printf("\n %s %s %s",e[i].name ,e[i].add, e[i].phone);
    }
    return (1);
}
//int main()
//{
//    arrange2();
//}
