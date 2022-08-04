//
//  WAP to input name address email and phone of an employee and display it..c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
#include<string.h>
union employee
{
    char name [20];
    char add[20];
    char email[30];
    char phone[20];
};
/*void hello()
{
    union employee ena;
//    scanf("%s %s %s %s", &ena.name ,&ena.add , &ena.email ,&ena.phone);
//    printf("%s %s %s %s", ena.name ,ena.add , ena.email ,ena.phone);
    //printf("%lu",sizeof(ena));
    printf("\n kkkkkkkkkkk");
}*/
/*int main()
{
    union employee e;
    strcpy(e.name,"ram");
    strcpy(e.phone,"hello");
    printf("\n %s  %s",e.name, e.phone);
}*/
