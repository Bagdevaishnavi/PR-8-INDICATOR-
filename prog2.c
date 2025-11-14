#include<stdio.h>
int cube(int *p)
 {
    return *p * *p * *p;
 }
int main()
{
    printf("***This is cube founder progect***");

    int size;
    printf("Enter size :");
    scanf("%d" , &size);

    int arr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter a[%d][%d] :" , i , j);
            scanf("%d" , &arr[i][j]);
        }
        
    }
    printf("\n cubes of all elenments is : \n");
    for (int  i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf(" %d" , cube(&arr[i][j]));
        }
        printf("\n");
        
    }
    
   
    

}