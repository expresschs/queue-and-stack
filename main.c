#include <stdint.h>
#include <stdio.h>
#include "queue.h"
#include "stack.h"

typedef struct {
    char a;
    short b;
    int c;
} node;

#define QUEUE_SIZE  (sizeof(node))
#define QUEUE_COUNT (3 + 1)
queue_type g_queue;
uint8_t g_queue_buf[QUEUE_SIZE * QUEUE_COUNT];

#define STACK_SIZE  (sizeof(node))
#define STACK_COUNT (3)
stack_type g_stack;
uint8_t g_stack_buf[STACK_SIZE * STACK_COUNT];

node node1 = {1,2,3};
node node2 = {4,5,6};
node node3 = {7,8,9};
node node4 = {10,11,12};

void test_queue(void)
{
    node tmp_node;
    int size;

    printf("......queue test......\n\r");
    queue_init(&g_queue, g_queue_buf, QUEUE_SIZE, QUEUE_COUNT);
    /* put 4 objects to queue */
    if (0 == queue_put(&g_queue, &node1)) {
        printf("put node1 ok, a:%d b:%d c:%d\n\r", node1.a, node1.b, node1.c);
    } else {
        printf("put node1 error!\n\r");
    }
    if (0 == queue_put(&g_queue, &node2)) {
        printf("put node2 ok, a:%d b:%d c:%d\n\r", node2.a, node2.b, node2.c);
    } else {
        printf("put node2 error!\n\r");
    }
    if (0 == queue_put(&g_queue, &node3)) {
        printf("put node3 ok, a:%d b:%d c:%d\n\r", node3.a, node3.b, node3.c);
    } else {
        printf("put node3 error!\n\r");
    }
    if (0 == queue_put(&g_queue, &node4)) {
        printf("put node4 ok, a:%d b:%d c:%d\n\r", node4.a, node4.b, node4.c);
    } else {
        printf("put node4 error!\n\r");
    }
    /* get queue size */
    size = qeueu_get_size(&g_queue);
    printf("queue size:%d \n\r", size);
    /* get object form queue */
    if (0 == queue_get(&g_queue, &tmp_node)) {
        printf("get node ok, a:%d b:%d c:%d\n\r", tmp_node.a, tmp_node.b, tmp_node.c);
    } else {
        printf("get node error!\n\r");
    }
    if (0 == queue_get(&g_queue, &tmp_node)) {
        printf("get node ok, a:%d b:%d c:%d\n\r", tmp_node.a, tmp_node.b, tmp_node.c);
    } else {
        printf("get node error!\n\r");
    }
    if (0 == queue_get(&g_queue, &tmp_node)) {
        printf("get node ok, a:%d b:%d c:%d\n\r", tmp_node.a, tmp_node.b, tmp_node.c);
    } else {
        printf("get node error!\n\r");
    }
    if (0 == queue_get(&g_queue, &tmp_node)) {
        printf("get node ok, a:%d b:%d c:%d\n\r", tmp_node.a, tmp_node.b, tmp_node.c);
    } else {
        printf("get node error!\n\r");
    }
    /* get queue size */
    size = qeueu_get_size(&g_queue);
    printf("queue size:%d \n\r", size);
}

void test_stack(void)
{
    node tmp_node;
    int size;

    printf("......stack test......\n\r");
    stack_init(&g_stack, g_stack_buf, STACK_SIZE, STACK_COUNT);
    /* put 4 objects to stack */
    if (0 == stack_put(&g_stack, &node1)) {
        printf("put node1 ok, a:%d b:%d c:%d\n\r", node1.a, node1.b, node1.c);
    } else {
        printf("put node1 error!\n\r");
    }
    if (0 == stack_put(&g_stack, &node2)) {
        printf("put node2 ok, a:%d b:%d c:%d\n\r", node2.a, node2.b, node2.c);
    } else {
        printf("put node2 error!\n\r");
    }
    if (0 == stack_put(&g_stack, &node3)) {
        printf("put node3 ok, a:%d b:%d c:%d\n\r", node3.a, node3.b, node3.c);
    } else {
        printf("put node3 error!\n\r");
    }
    if (0 == stack_put(&g_stack, &node4)) {
        printf("put node4 ok, a:%d b:%d c:%d\n\r", node4.a, node4.b, node4.c);
    } else {
        printf("put node4 error!\n\r");
    }
    /* get stack size */
    size = stack_get_size(&g_stack);
    printf("stack size:%d \n\r", size);
    /* get object form stack */
    if (0 == stack_get(&g_stack, &tmp_node)) {
        printf("get node ok, a:%d b:%d c:%d\n\r", tmp_node.a, tmp_node.b, tmp_node.c);
    } else {
        printf("get node error!\n\r");
    }
    if (0 == stack_get(&g_stack, &tmp_node)) {
        printf("get node ok, a:%d b:%d c:%d\n\r", tmp_node.a, tmp_node.b, tmp_node.c);
    } else {
        printf("get node error!\n\r");
    }
    if (0 == stack_get(&g_stack, &tmp_node)) {
        printf("get node ok, a:%d b:%d c:%d\n\r", tmp_node.a, tmp_node.b, tmp_node.c);
    } else {
        printf("get node error!\n\r");
    }
    if (0 == stack_get(&g_stack, &tmp_node)) {
        printf("get node ok, a:%d b:%d c:%d\n\r", tmp_node.a, tmp_node.b, tmp_node.c);
    } else {
        printf("get node error!\n\r");
    }
    /* get queue size */
    size = stack_get_size(&g_stack);
    printf("stack size:%d \n\r", size);
}

int main(void)
{
    test_queue();
    test_stack();
    
    return 0;
}