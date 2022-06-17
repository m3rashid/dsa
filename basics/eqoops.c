#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

void init(struct Rectangle *r, int l, int b) {
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r) {
    return r.length * r.breadth;
}

void changeLen(struct Rectangle *r, int l) {
    r->length = l;
}

int main() {
    struct Rectangle r;
    init(&r, 10, 20);
    printf("Area: %d\n", area(r));
    changeLen(&r, 22);
    printf("Area: %d\n", area(r));

    return 0;
}
