#include <stdio.h>

int main(){
    int n = 1, k ,t ,a;
    while(n <= 500){
        k=0;
        t=n;
        while(t > 0){
            a = t % 10;
            k = (a * a * a) + k; 
            t = t / 10;
        }
        if(n == k){
            printf("%d is an armstrong no.\n", n);
        }
        ++n;
    }
    return 0;
}
