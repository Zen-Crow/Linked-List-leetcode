#include <vector>

using namespace std;


class MyHashMap {
private:
    int size = 1000001;
    vector<int> hashMap;
public:
    MyHashMap() : hashMap(this->size, -1) {}
    
    void put(int key, int value) {
        int hash = key % this->size;
        this->hashMap[hash] = value;
    }
    
    int get(int key) {
        int hash = key % this->size;
        return this->hashMap[hash];
    }
    
    void remove(int key) {
        int hash = key % this->size;
        this->hashMap[hash] = -1;
    }
};