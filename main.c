#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <strings.h>

int main() {

    while(true) {
        char* password = getpass("Password: ");

        if(!strcmp(password, "S3cret123!")) {
            break;
        }
    }

    printf("BOOOM, You are in! Congratulations\n");
    return 0;
}
