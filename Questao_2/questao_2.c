#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 5, *p;
    p = &i;
    printf("%x %d %d %d %d %d", p, p+1, *p+2, **&p, 3**p, **&p+4);

    return 0;
}
