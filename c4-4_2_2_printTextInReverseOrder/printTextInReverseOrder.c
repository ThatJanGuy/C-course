#include <stdio.h>

int main(void){
    char words[68][41];

    for (int i = 0; i < 68; i++){
        scanf("%s", words[i]);
    }

    for (int i = 67; i >= 0; i--){
        printf("%s ", words[i]);
    }

    return 0;
}