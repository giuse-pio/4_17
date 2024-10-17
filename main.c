#include <stdio.h>

int main(void) {
    int num, somma=0, i, n;
    printf("inserisci quanti numeri ");
    scanf("%d", &n);
    for(i=0; i<=n; i++) {
        printf("inserisci i numeri");
        scanf("%d", &num);
        if (num<0) {
            num=num*-1;
            somma+=num;
        }
        else if (num>0) {
            somma+=num;
        }
    }
    printf("La somma dei numero sono: %d", somma);
}
