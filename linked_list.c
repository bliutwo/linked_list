#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int val;            // data item
    struct list *next;  // point to successor
} list;

int main() {
    struct list *head = malloc(sizeof(struct list));
    head->val = 0;
    printf("head->val: %d\n", head->val);
    return 0;
}
