#include <stdio.h>
#include <stdlib.h>

// Definitions des constantes
#define SECS_PER_MIN 60
#define SECS_PER_HOUR 3600

unsigned seconds, minutes, hours, secs_left, min_left;

int main(){
    // Saisie du nombres de secondes

    printf("Entrer le nombre de secondes (<65000):");
    scanf("%d", &seconds);

    hours = seconds / SECS_PER_HOUR;
    minutes = seconds / SECS_PER_MIN;
    min_left = minutes % SECS_PER_MIN;
    secs_left = seconds % SECS_PER_MIN;

    printf("%u secondes correspondent à ", seconds);
    printf("%u h, %u m, et %u s\n", hours, min_left, secs_left);

    EXIT_SUCCESS;    

}
