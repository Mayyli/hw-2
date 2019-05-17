
#define SIZE 25

typedef struct {
    int st_id;
    char st_name[20];
} stu_t;

typedef struct {
    int data[SIZE];
} stack_t;

void printStudent(stu_t stu){
    printf("id: %d \t name: %s",stu.st_id,stu.st_name);
}

int top;
top = -1;
void push(stu_t stu, stack_t stack) {
    top++;
    stack.data[top] = stu;

}
bool isEmpty(stack_t stack) {
    return top == -1;
}
bool isFull(stack_t stack) {
    return top == SIZE - 1;
}

void pop(stack_t stack) {
    if (isEmpty(stack))
        printf("Stack is empty!");
    else
        top--;
}
void print_stack(stack_t stack) {
    if (isEmpty(stack)==-1)
        printf("Stack is empty!");
    else
        for (int i = 0; i < top; ++i) {
            printStudent(stack.data[i]);
            printf("\n");
        }


}
