#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    int key;
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("The sorted array is:\n");
    for(i = 0; i < n; i++)
        printf("%d ",arr[i]);
    return 0;
}
