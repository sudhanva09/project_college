#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int i, n,choice;
    n=5;
    time_t t;
    srand((unsigned) time(&t));

    do
    {

    printf("%d\n",rand()%6);

    printf("1 to continue\n");
    scanf("%d",&choice);

    }
    while (choice==1);
    return 0;
}
