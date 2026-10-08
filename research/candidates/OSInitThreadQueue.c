/* Box 0x8012D314, 16 bytes. Body follows the byte-identical Colosseum/XD SDK source. */
typedef struct OSThreadQueue {
    void *head;
    void *tail;
} OSThreadQueue;

void OSInitThreadQueue(OSThreadQueue *queue) {
    queue->head = queue->tail = 0;
}
