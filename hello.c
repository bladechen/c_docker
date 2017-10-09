
#include <unistd.h>  // _exit() and write(2); man -s2 write

#ifndef DOCKER_IMAGE
        #define DOCKER_IMAGE "hello-world"
#endif

#ifndef DOCKER_GREETING
        #define DOCKER_GREETING "Hello from Docker!"
#endif

const char message[] =
        "\n"
        DOCKER_GREETING "\n"
        "This message shows that your C application appears to be working correctly.\n"
        "\n";

int main() {
        write(1, message, sizeof(message) - 1);
        _exit(0);
}
