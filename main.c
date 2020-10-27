#include <stdio.h>

int main;
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
    else if((fourth>second) && (fourth>third) && (fourth>first))
        printf("4th number is huge");

    if((first<second) && (first<third) && (first<fourth))
        printf("\n1st number is tiniest");
    else if((second<first) && (second<third) && (second<fourth))
        printf("\n2nd number is the worst one");
    else if((third<second) && (third<first) && (third<fourth))
        printf("\n3rd number is terrible");
    else if((fourth<second) && (fourth<third) && (fourth<first))
        printf("\n4th number is RUBBISH");

    printf("\n")
    return 0;
}