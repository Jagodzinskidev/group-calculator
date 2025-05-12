#include <iostream>
#include <cstring>

void usage(char *programName) {
    printf("Usage: %s number1 operation number\n", programName);
    printf("Available operations:\n");
    printf("\tadd\n");
    printf("\n");
}

int main(int argc, char* argv[]) {

    int number1 = 0;
    int number2 = 0;
    int result = 0;

    if (argc == 4) {
        number1 = atoi(argv[1]);
        number2 = atoi(argv[3]);

        if (!strcmp("add", argv[2])) {
            result = number1 + number2;
            printf("%d + %d = %d\n", number1, number2, result);
            return 0;
        }else if (!strcmp("/", argv[2]) == 0) {
            if(number2 == 0) {
                printf("Nie mozna dzielic przez 0!!!");
                exit(1);
            }else {
                float result_of_dividing;
                result_of_dividing = (float)number1 / (float)number2;
                printf("%d / %d = %f\n",number1,number2,result_of_dividing);
            }
        }
        if (!strcmp("mul", argv[2])) {
            result = number1 * number2;
            printf("%d * %d = %d\n", number1, number2, result);
            return 0;
        }
    }

    usage(argv[0]);

    return 0;
}