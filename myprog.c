#include <stdio.h>
#include <stdlib.h>


//Question 01
// int main(int argc, char *argv[]) {
//     if (argc != 3) {
//         printf("Usage: %s <name> <age>\n", argv[0]);
//         return 1;
//     }

//     char *name = argv[1];
//     int age = atoi(argv[2]);

//     printf("Hello %s, you are %d years old.\n", name, age);

//     return 0;
// }

//Question 02
// #include <stdio.h>

// int main() {
//     char name[100];
//     int age;

//     printf("Enter your name: ");
//     scanf("%s", name);

//     printf("Enter your age: ");
//     scanf("%d", &age);

//     printf("Hello %s, you are %d years old.\n", name, age);

//     return 0;
// }


//Question 03
#include <stdio.h>

int main() {
    for (int n = 1; n <= 100; n++) {
        if (n % 2 == 0 && n % 3 == 0 && n % 5 == 0) {
            printf("BishBashBosh\n");
        } else if (n % 2 == 0 && n % 3 == 0) {
            printf("BishBash\n");
        } else if (n % 2 == 0 && n % 5 == 0) {
            printf("BishBosh\n");
        } else if (n % 3 == 0 && n % 5 == 0) {
            printf("BashBosh\n");
        } else if (n % 2 == 0) {
            printf("Bish\n");
        } else if (n % 3 == 0) {
            printf("Bash\n");
        } else if (n % 5 == 0) {
            printf("Bosh\n");
        } else {
            printf("%d\n", n);
        }
    }
    return 0;
}
