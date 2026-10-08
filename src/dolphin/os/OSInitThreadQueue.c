typedef struct OSThreadQueue {
    void *head;
    void *tail;
} OSThreadQueue;

void OSInitThreadQueue(OSThreadQueue *queue) {
    queue->head = queue->tail = 0;
}
