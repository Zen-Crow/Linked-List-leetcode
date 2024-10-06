class MyHashSet:
    def __init__(self):
        self.size = 10**4
        self.hashSet = [[] for _ in range(self.size)]

    def add(self, key: int) -> None:
        hash = key % self.size
        if not self.contains(key):
            self.hashSet[hash].append(key)

    def remove(self, key: int) -> None:
        hash = key % self.size
        if self.contains(key):
            self.hashSet[hash].remove(key)

    def contains(self, key: int) -> bool:
        hash = key % self.size
        return key in self.hashSet[hash]


# Input: ["MyHashSet", "add", "add", "contains", "contains", "add", "contains", "remove", "contains"]
# [[], [1], [2], [1], [3], [2], [2], [2], [2]]
# Output: [null, null, null, true, false, null, true, null, false]
obj = MyHashSet()
obj.add(1)
obj.add(2)
print(obj.contains(1))
print(obj.contains(3))
obj.add(2)
print(obj.contains(2))
obj.remove(2)
print(obj.contains(2))