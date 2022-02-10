//
//  main.c
//  bubble zct versiyonu
//
//  Created by Merve Yanmaz on 14.12.2020.
//

#include <stdio.h>
#define SIZE 100

int main(void) {
    
    int i,n,tmp,swapped=1;
    int ar[SIZE];
    printf("Please enter number of elements:");
    scanf("%d",&n);
    for (i=1; i<n; i++) {
        printf("Please enter %d. element:",i);
        scanf("%d",&ar[i]);
    }
    while (swapped) { // swapped==1 ile aynı şey
        swapped=0;
        for (i=0; i<n-1; i++) {
            if (ar[i]>ar[i+1]) {
                tmp=ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=tmp;
                swapped=1;
            }
        }
    }
    for (i=0; i<n; i++) {
        printf("%d\t",ar[i]);
    }
    printf("\n");
    
    return 0;
}
