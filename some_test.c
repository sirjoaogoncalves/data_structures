#include <stdio.h>
#include <stdlib.h>

// a simple hello world function
void hello_world() {
    printf("Hello World!\n");
}

// a simple sum function
int sum(int a, int b) {
    return a + b;
}

// a simple struct
struct my_struct {
    int a;
    int b;
};

// a simple function that returns a struct
struct my_struct my_function() {
    struct my_struct my_struct;
    my_struct.a = 5;
    my_struct.b = 5;
    return my_struct;
}

// a non-recursive factorial function
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// a recursive factorial function
int factorial_recursive(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}

// a simple node struct
struct node {
    int value;
    struct node *next;
};

// create a new node
struct node *create_node(int value) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

// add a new node to the end of the list
void add_node(struct node **head, int value) {
    struct node *new_node = create_node(value);
    if (*head == NULL) {
        *head = new_node;
    } else {
        struct node *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

// print the list
void print_list(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

// accesing the memory
void access_memory() {
    int *ptr = malloc(sizeof(int));
    *ptr = 5;
    printf("%d\n", *ptr);
    free(ptr);
}

// accessing the stack
void access_stack() {
    int a = 5;
    printf("%d\n", a);
}

// accessing the heap
void access_heap() {
    int *ptr = malloc(sizeof(int));
    *ptr = 5;
    printf("%d\n", *ptr);
    free(ptr);
}

// accessing the stack and heap
void access_stack_and_heap() {
    int a = 5;
    int *ptr = malloc(sizeof(int));
    *ptr = 5;
    printf("%d %d\n", a, *ptr);
    free(ptr);
}


// sizeof things

void sizeof_things() {
    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof(short) = %zu\n", sizeof(short));
    printf("sizeof(long) = %zu\n", sizeof(long));
    printf("sizeof(long long) = %zu\n", sizeof(long long));
    printf("sizeof(float) = %zu\n", sizeof(float));
    printf("sizeof(double) = %zu\n", sizeof(double));
    printf("sizeof(long double) = %zu\n", sizeof(long double));
}


// a simple main function
int main() {

    hello_world();

    int a = 1;
    int b = 2;
    int c = sum(a, b);
    
    printf("%d + %d = %d\n", a, b, c);

    struct my_struct my_struct = my_function();
    printf("%d + %d = %d\n", my_struct.a, my_struct.b, sum(my_struct.a, my_struct.b));


    printf("%d! = %d\n", 5, factorial(5));
    printf("%d! = %d\n", 5, factorial_recursive(5));

    
    struct node *head = NULL;
    add_node(&head, 11);
    add_node(&head, 21);
    add_node(&head, 31);
    print_list(head);

    access_memory();
    access_stack();
    access_heap();
    access_stack_and_heap();


    sizeof_things();

    return 0;
}


