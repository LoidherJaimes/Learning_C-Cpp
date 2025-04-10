#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

struct node {
    int key;
    struct node *next;
};

int queueEmpty(struct node *tail) {
    return tail == NULL ? TRUE : FALSE;
}

struct node *enqueue(struct node *tail, int element) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->key = element;

    if (queueEmpty(tail)) {
        newNode->next = newNode;
        tail = newNode;
    }
    else {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
    return tail;
}

int dequeue(struct node **tail) {
    struct node *firstNode;
    int element;

    if (*tail == (*tail)->next) {
        element = (*tail)->key;
        free(*tail);
        *tail = NULL;
    }
    else {
        firstNode = (*tail)->next;
        element = firstNode->key;
        (*tail)->next = firstNode->next;
        free(firstNode);
    }

    return element;
}

int main(){
    struct node *tail = NULL;
    int totalCases, totalQueries, operation, element, sum;

    scanf("%d", &totalCases);

    while (totalCases > 0) {
        scanf("%d", &totalQueries);
        sum = 0;

        while (totalQueries >0) {
            scanf("%d", &operation);

            if (operation == 1) {
                scanf("%d", &element);
                tail = enqueue(tail, element);
                sum += element;
            }
            else{
                if (operation == 2) {
                    if (!queueEmpty(tail))
                        sum -= dequeue(&tail);
                }
                else {
                    if (queueEmpty(tail))
                        printf("Empty!\n");
                    else
                        printf("%d\n", sum);
                }
            }
            totalQueries--;
        }
        totalCases--;

        while (!queueEmpty(tail)) {
            dequeue(&tail);
        }
    }

    return 0;
}