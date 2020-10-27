#include <stdio.h>

int main(void)
{
    int first, second, third, fourth;
    printf("Enter four integers separated by a space:");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);

    if((first>second) && (first>third) && (first>fourth))
        printf("\n1st number is the Paddy's potatoes");
    else if((second>first) && (second>third) && (second>fourth))
        printf("\n2nd number is lovely");
    else if((third>second) && (third>first) && (third>fourth))
        printf("\n3rd number is the business");
    else if((4th>1st) && (4th>2nd) && (4th>3rd))
        printf("4th number is huge");

    if((1st<2nd) && (1st<3rd) && (1st<4th))
        printf("\n1st number is tiniest");
    else if((2nd<1st) && (2nd<3rd) && (2nd<4th))
        printf("\n2nd number is the worst one");
    else if((3rd<2nd) && (3rd<1st) && (3rd<4th))
        printf("\n3rd number is terrible");
    else if((4th<2nd) && (4th<3rd) && (4th<1st))
        printf("\n4th number is RUBBISH");
    return 0;
}