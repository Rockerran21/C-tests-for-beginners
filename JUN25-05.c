//
//  WAP TO CHECK IF THE GIVEN NUMBER IS EVEN OR ODD
//  Function Tests
//
//  Created by Ranjan Marasini on 25/07/2022.
//

#include <stdio.h>
void check(int *a)
{
    if (*a % 2 ==0) {
        printf("\nThe number is even\n");
    }else{
        printf("\n The number is odd\n");
    }
}
/*int main()
{
    int x;
    printf("Enter the desired no : ");
    scanf("%d",&x);
    check(&x);
}*/

