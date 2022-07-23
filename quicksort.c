#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int partition(int a[],int low,int high)
{   
    int start=low;
    int end=high;
    int pivot=a[low];
    int i,j,temp;
    
    while(start<end)
    {  
        while(a[start]<=pivot)
        {
            start++;
        }
        
        while(a[end]>pivot)
        {
            end--;
        }
        
        if(start<end)
        {
            
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp=a[low];
    a[low]=a[end];
    a[end]=temp;
    return end;
}   
       

void quicksort(int a[],int low,int high)
{
    int loc;
    if(low<high)
    {
        loc=partition(a,low,high);
        quicksort(a,low,loc-1);
        quicksort(a,loc+1,high);
    }
}
void main()
{
int a[15000],n,i,j,ch,temp;
clock_t start,end;
while(1)
{
printf("\n1.For manual entry of N value and array elements");
printf("\n2.To display time taken for sorting number elements N in the range 500 to 14500");
printf("\n3.To exit");
printf("\nEnter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter the number of elements:");
scanf("%d",&n);
printf("\nEnter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
start=clock();
quicksort(a,0,n-1);
end=clock();
printf("\nSorted array is:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n Time taken to sort %d numbers is %f Secs",n, (((double)(end-start))/CLOCKS_PER_SEC));
break;

case 2:
n=500;
while(n<=15000)
{
for(i=0;i<n;i++)
{
a[i]=n-i;
}
start=clock();
quicksort(a,0,n-1);

for(j=0;j<50000000;j++)
{
temp=38/600;
}
end=clock();
printf("\n Time taken to sort %d numbers is %f Secs",n,(((double)(end-start))/CLOCKS_PER_SEC));
n=n+1000;
}
break;

case 3:exit(0);
}
getchar();
}
}
