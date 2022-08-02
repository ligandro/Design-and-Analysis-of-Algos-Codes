#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n],i,item;
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("\nEnter item to search: ");
    scanf("%d", &item);
    for (i=0; i<=9; i++)
        if (item == arr[i])
        {
            printf("\nItem found at index %d", i);
            break;
        }
    if (i > 9)
        printf("\nItem does not exist.");
    return 0;
}
