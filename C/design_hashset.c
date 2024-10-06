#include <stdlib.h>
#include <stdbool.h>


typedef struct {
    int *bucket;    
} MyHashSet;


bool myHashSetContains(MyHashSet* obj, int key);

MyHashSet* myHashSetCreate() {
    int count = 1000001;
    MyHashSet *obj = (MyHashSet*)malloc(sizeof(MyHashSet));
    obj->bucket = (int*)malloc(sizeof(int) * count);
    while (count--) {
        obj->bucket[count] = -1;
    }
    return obj;
}

void myHashSetAdd(MyHashSet* obj, int key) {
    if (!myHashSetContains(obj, key)) {
        obj->bucket[key] = 1;
    }
}

void myHashSetRemove(MyHashSet* obj, int key) {
    if (myHashSetContains(obj, key)) {
        obj->bucket[key] = -1;
    }
}

bool myHashSetContains(MyHashSet* obj, int key) {
    return obj->bucket[key] != -1;
}

void myHashSetFree(MyHashSet* obj) {
    free(obj->bucket);
    free(obj);
}

/**
 * Your MyHashSet struct will be instantiated and called as such:
 * MyHashSet* obj = myHashSetCreate();
 * myHashSetAdd(obj, key);
 
 * myHashSetRemove(obj, key);
 
 * bool param_3 = myHashSetContains(obj, key);
 
 * myHashSetFree(obj);
*/