#include <stdio.h>
int main() {

    for (int i=1; i<=30 ;i++) {
        if ( i % 3 == 0) {
            continue;
        }
        else {
            printf("%d \n", i);
        }
    }
}