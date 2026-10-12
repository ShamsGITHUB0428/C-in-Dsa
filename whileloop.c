#include<stdio.h>
int main(){
    int battery=10;
    while(battery<100)
    {
        printf("charging..... battery=%d\n",battery);
        battery=battery+10;
    }
    return 0;
}