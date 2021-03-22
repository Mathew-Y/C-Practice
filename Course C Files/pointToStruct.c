#include <stdlib.h>

struct Rectangle {
    int length;
    int width;
};

int main() {

    struct Rectangle r = {10, 5};
    // struct Rectangle *p = &r;

    struct Rectangle *p;

    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p -> length = 10;
    p -> width = 5;

    r.length = 20;

    (*p).length = 20;

    p -> length = 20;

    return 0;
}

