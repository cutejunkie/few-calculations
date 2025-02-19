#include <stdio.h>
#include "calc.h"

int main() {
    int choice;
    int run = 1;

    while (run) {
        printf("Jaki typ liczb chcesz uzyc do obliczen?\n");
        printf("(1) - int\n");
        printf("(2) - double\n");
        printf("(3) - float\n");
        printf("\n(0) - exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                run = 0;
                break;

            case 1: {
                int a, b, subchoice;
                printf("\nJakie obliczenia chcesz wykonac?\n");
                printf("(1) - dodawanie\n");
                printf("(2) - odejmowanie\n");
                printf("(3) - mnozenie\n");
                printf("(4) - dzielenie modulo\n");
                printf("\n(0) - exit\n");
                scanf("%d", &subchoice);

                if (subchoice == 0) break;
                printf("Podaj dwie wartosci int, a oraz b:\n");
                scanf("%d %d", &a, &b);

                if (subchoice == 1)
                    printf("wynik to: %d\n", dodawanie_int(a, b));
                else if (subchoice == 2)
                    printf("wynik to: %d\n", odejmowanie_int(a, b));
                else if (subchoice == 3)
                    printf("wynik to: %d\n", mnozenie_int(a, b));
                else if (subchoice == 4)
                    printf("wynik to: %d\n", modulo_int(a, b));
                else
                    printf("Wybierz poprawna wartosc\n");
            }
            break;

            case 2: {
                double a, b;
                int subchoice;
                printf("\nJakie obliczenia chcesz wykonac?\n");
                printf("(1) - dodawanie\n");
                printf("(2) - odejmowanie\n");
                printf("(3) - mnozenie\n");
                printf("\n(0) - exit\n");
                scanf("%d", &subchoice);

                if (subchoice == 0) break;
                printf("Podaj dwie wartosci double, a oraz b:\n");
                scanf("%lf %lf", &a, &b);

                if (subchoice == 1)
                    printf("wynik to: %lf\n", dodawanie_double(a, b));
                else if (subchoice == 2)
                    printf("wynik to: %lf\n", odejmowanie_double(a, b));
                else if (subchoice == 3)
                    printf("wynik to: %lf\n", mnozenie_double(a, b));
                else
                    printf("Wybierz poprawna wartosc\n");
            } 
            break;

            case 3: {
                float a, b;
                int subchoice;
                printf("\nJakie obliczenia chcesz wykonac?\n");
                printf("(1) - dodawanie\n");
                printf("(2) - odejmowanie\n");
                printf("(3) - mnozenie\n");
                printf("\n(0) - exit\n");
                scanf("%d", &subchoice);

                if (subchoice == 0) break;
                printf("Podaj dwie wartosci float, a oraz b:\n");
                scanf("%f %f", &a, &b);

                if (subchoice == 1)
                    printf("wynik to: %f\n", dodawanie_float(a, b));
                else if (subchoice == 2)
                    printf("wynik to: %f\n", odejmowanie_float(a, b));
                else if (subchoice == 3)
                    printf("wynik to: %f\n", mnozenie_float(a, b));
                else
                    printf("Wybierz poprawna wartosc\n");
            } 
            break;

            default:
                printf("Wybierz poprawna opcje\n");
        }
    }
    return 0;
}
