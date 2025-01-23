#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int x;

    printf("Insert the size of the password: \n");
    scanf("%d", &x);
    char pw[x];

    for (int i = 0; i < x; i++){
        pw[i] = (rand() % 94) + 33;
    }

    printf("Password created: \n%s\n", pw);

    return 0;
}