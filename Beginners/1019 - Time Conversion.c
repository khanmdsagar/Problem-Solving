#include <stdio.h>

int main() {

    int hour = 0;
    int minute = 0;
    int second = 0;
    int N;
    int a, b;

    scanf("%d", &N);

    if(N >= 3600){
        hour = N/3600;
        a = N%3600;

        if(a >= 60){
            minute = a/60;
            second = a%60;
        }
        else if(a < 60){
            second = a;
        }
    }

    else if(N > 60 && N < 3600){
        minute = N/60;
        second = N%60;
    }

    else if(N < 60){
        second = N;
    }

    printf("%d:%d:%d\n", hour, minute, second);

    return 0;
}
