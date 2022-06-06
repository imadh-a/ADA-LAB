#include <stdio.h>
#include<time.h>
void delay(){
    for(int i=0;i<1000;i++){
    for(int j=0;j<1000;j++){
        for(int k=0;k<1000;k++);
    }}}
int gcd(int n1, int n2){
    if(n2!=0)
        gcd(n2,n1%n2);

    else
    return n1;
}
int main()
{
     time_t st,ed;
     st = time(NULL);
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d" "%d",&a,&b);
    delay();
    printf("Required GCD Value:%d",gcd(a,b));
    ed = time(NULL);
    printf("\n TIME TAKEN = %f", difftime(ed,st));
    
}


