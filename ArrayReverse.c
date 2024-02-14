#include <stdio.h>
void rev(int *ptr,int b)
{
    if (b%2==0)
    {
        for (int i=0; i <b/2;i++)
        {
            int temp = *(ptr+i);
            *(ptr+i) = *(ptr+(b-1-i));
            *(ptr+(b-1-i)) = temp;
            

        }
    }
    else
    {
        int c=b-1;
        for (int i=0; i <c/2;i++)
        {
            int temp = *(ptr+i);
            *(ptr+i) = *(ptr+(b-1-i));
            *(ptr+(b-1-i)) = temp;
            
        }
    }
}
int main()
{
    int a=0, b, i=0;
    printf("enter the size of array: ");
    scanf("%d", &b);
    int arr[b];
    while (i<b)
    {
        printf("Enter the %d value of array: ", i);
        scanf("%d", &arr[i]);
        i++;
    }
    rev(arr,b);
    while (a<b)
    {
        printf("%d\n", arr[a]);
        a++;
    }
    
    return 0;
}