#include <vector>

using namespace std;


class MyHashSet {
private:
    int size = 1000001;
    vector<int> hashMap;
public:
    MyHashSet() : hashMap(this->size, -1) {}
    
    void add(int key) {
        int hash = key % this->size;
        if (!this->contains(key)) {
            this->hashMap[hash] = key;
        }
    }
    
    void remove(int key) {
        int hash = key % this->size;
        if (this->contains(key)) {
            this->hashMap[hash] = -1;
        }
    }
    
    bool contains(int key) {
        int hash = key % this->size;
        return this->hashMap[hash] != -1;
    }
};