#include <stddef.h>
#include <stdlib.h>


typedef struct {
    int *bucket;
} MyHashMap;

MyHashMap* myHashMapCreate() {
    int count = 1000001;
    MyHashMap* obj = (MyHashMap*)malloc(sizeof(MyHashMap));
    obj->bucket = (int*)malloc(count * sizeof(int));
    while (count--)
    {
        obj->bucket[count] = -1;
    }
    return obj;
}

void myHashMapPut(MyHashMap* obj, int key, int value) {
    obj->bucket[key] = value;
}

int myHashMapGet(MyHashMap* obj, int key) {
    return obj->bucket[key];
}

void myHashMapRemove(MyHashMap* obj, int key) {
    obj->bucket[key] = -1;
}

void myHashMapFree(MyHashMap* obj) {
    free(obj->bucket);
    free(obj);
}

/**
 * Your MyHashMap struct will be instantiated and called as such:
 * MyHashMap* obj = myHashMapCreate();
 * myHashMapPut(obj, key, value);
 
 * int param_2 = myHashMapGet(obj, key);
 
 * myHashMapRemove(obj, key);
 
 * myHashMapFree(obj);
*/