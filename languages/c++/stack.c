#include <stdio.h>

typedef struct stack {
    char data[100];
    int top;
} stack;

int empty(stack *p) { return p->top == -1; }

int top(stack *p) { return p->data[p->top]; }

void push(stack *p, char x) {
    p->data[++(p->top)] = x;
}

void pop(stack *p) {
    if (!empty(p)) p->top = p->top - 1;
}

int main() {
    stack s;
    s.top = -1;

    char ch, str[10] = "ABCDE";
    int i, len = sizeof(str);
    
    for (i = 0; i < len; i++) 
        push(&s, str[i]);
    
    printf("Reversed String: ");
    while (!empty(&s)) {
        printf("%c ", top(&s));
        pop(&s);
    }
    printf("\n");

    return 0;
}