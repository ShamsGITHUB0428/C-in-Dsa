#include<stdio.h>
int main(){
    int m1,m2,m3,m4;
    printf("enter the marks of :m1,m2,m3,m4:\n");
    scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
    float p= (m1+m2+m3+m4)/160.0 *100;
    printf("the percentage is:%f",p);
        return 0;
}