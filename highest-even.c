#include <stdio.h>

int main(){
    int n;
    int i = 0;
    int max_even = 0;
    while(n != 0){
	    scanf("%d", &n);
        if(n % 2 == 0 && max_even < n){
            max_even = n;
            i++;
	}
    }
    if(max_even > 0){
        printf("The highest EVEN integer is %d", max_even);
    } else {
        printf("No EVEN integer found!");
    }
    return 0;
}
