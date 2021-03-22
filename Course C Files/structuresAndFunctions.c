struct Rectangle {
    int length;
    int width;
};

void initialize(struct Rectangle *r, int l, int w) {
    r -> length = l;
    r -> width = w;
}

int area(struct Rectangle r) {
    return (r.length * r.width);
}

void changeLength(struct Rectangle *r, int newLength) {
    r -> length = newLength;
}

int main() {

    struct Rectangle r;
    int areaOfRec;

    initialize(&r, 10, 5);
    areaOfRec = area(r);

    printf("Length: %d\nWidth: %d\n", r.length, r.width);
    printf("Area: %d\n", areaOfRec);

    changeLength(&r, 20);

    printf("New length: %d", r.length);
}