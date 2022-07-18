#include <stdio.h>  
#include<time.h>
int partition (int a[], int start, int end)  
{  
    int pivot = a[end]; // pivot element  
    int i = (start - 1);  
 
    for (int j = start; j <= end - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (a[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}  
 
void quick(int a[], int start, int end)
{  
    if (start < end)  
    {  
        int p = partition(a, start, end);
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  
 
 
void printArr(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
int main()  
{  int n;time_t st,ed;
printf("enter size of array\n");
scanf("%d",&n);
    int a[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   
    printf("Before sorting array elements are - \n");  
    printArr(a, n);
    st=time(NULL);
    quick(a, 0, n - 1);
    ed=time(NULL);
    printf("\nAfter sorting array elements are - \n");    
    printArr(a, n);  
    printf("time taken=%f",difftime(ed,st));
     
    return 0;  
}  
