struct Rectangle {
    int length;
    int width;
};

int areaByValue(struct Rectangle r) {
    return (r.length * r.width);
}

int areaByReference(struct Rectangle &r1) {
    
    return (r1.length * r1.width);
}

int main() {

    struct Rectangle r = {6, 8};

    int a = areaByValue(r);
    int b = areaByReference(r);

    printf("Rectangle's area: %d", a);
    printf("Rectangle's area: %d", b);

    return 0;
}