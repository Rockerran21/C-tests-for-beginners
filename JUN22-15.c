//
//  WAP to input a string and check if it is palindrome or not.c
//  C tests
//
//  Created by Ranjan Marasini on 24/07/2022.
//

#include <stdio.h>
#include <string.h>
int palindrome()
{
    char text[20],t[20];
    printf("Enter a string");
    gets(text);
//    strcpy(t,strrev(text));
    if( strcmp(t,text)==0){
        printf("The string is palindrome");
    }else{
        printf("The is not plaindrome");
    }
    return (1);
}
//int main()
//{
//    palindrome();
//}
