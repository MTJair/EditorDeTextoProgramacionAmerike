#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
srand(time(NULL));
int min = 1;
int max = 5;
int random = (rand() % (max - min + 1)) + min;

enum Alumnos {
    Bruno,
    Carlos,
    Gael,
    Brayan,
    Jair
};

switch (random)
{
case Bruno:
    printf("Bruno");
    break;
case Carlos:
    printf("Carlos");
    break;
case Gael:
    printf("Gael");
    break;
case Brayan:
    printf("Brayan");
    break;
case Jair:
    printf("Jair");
    break;
}
}