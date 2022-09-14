#include<stdio.h>
int main () 
{
    int age;
    char name[100];
    printf("Name >>");
    scanf("%s",name);
    printf("Age >>");
    scanf("%d",&age);
    printf("\nHello %s (%d)",name,age);
    return 0;
}