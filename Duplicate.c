#include<stdio.h>
int main()
{
    int num[100], n, m, i,j,
     f=0;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    //printf("Enter the number to find duplicate elements: ");
    //scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (num[i] == num[j])
            {
                f++;
            }
        }
    }
    printf("Total number of duplicate elements: %d\n", f);
    return 0;
}
