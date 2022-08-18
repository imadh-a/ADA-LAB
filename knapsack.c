#include <stdio.h>
#include<conio.h>
int max(int,int);
void knapsack();
int w[10],p[10],n,m,i,j,k,v[10][10];
int main()
{
    printf("\nenter the number of items\n");
    scanf("%d",&n);
    printf("\nenter the weight of each time");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&w[i]);
    }
    printf("\nenter the profit of each item\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("\nenter the knapsack capacity \n");
     scanf("%d",&m);
     
     knapsack();
     return 0;
}
 void knapsack()
 {
     int x[10];
     k=0;
     for(i=0;i<=n;i++)
     {
         for(j=0;j<=m;j++)
         {
            if(i==0||j==0)
            {
                v[i][j]=0;
            }
            else if(j-w[i]<0)
            {
                v[i][j]=v[i-1][j];
            }
            else
            {
                v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
            }
         }
     }
     printf("\noutput matrix is\n");
     for(i=0;i<=n;i++)
     {
         for(j=0;j<=m;j++)
         {
             printf(" %d ",v[i][j]);
         }
         printf("\n\n");
     }
     printf("\noptimal solution is %d  \n",v[n][m]);
     printf("\nsolution vector is \n");
     for(i=n;i>=1;i--)
     {
         if(v[i][m]!=v[i-1][m])
         {
             x[i]=1;
             m=m-w[i];
         }
         else
         {
             x[i]=0;
         }
     }
     for(i=1;i<=n;i++)
     {
         printf(" %d ",x[i]);
     }
 }

int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    
    else
    {
    return y;
    }
}
