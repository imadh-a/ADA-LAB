#include <stdio.h>
#include<time.h>
void delay(){
    for(int i=0;i<1000;i++){
    for(int j=0;j<1000;j++){
        for(int k=0;k<1000;k++);
    }}}
void TH(int n, char s, char d, char a){
    if(n>0){
        TH(n-1,s,a,d);
        printf("\n %c to %c",s,d);
        delay();
        TH(n-1,a,d,s);
    }
}
int main()
{
    time_t st,ed;
    st=time(NULL);
    int n=3;
    delay();
    TH(n,'A','B','C');
ed=time(NULL);
    printf("\n TIME TAKEN = %f", difftime(ed,st));
}
    
