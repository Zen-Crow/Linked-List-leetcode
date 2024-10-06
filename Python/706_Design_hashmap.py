class MyHashMap:
    def __init__(self):
        self.hashMap = [-1 for _ in range(1000001)]

    def put(self, key: int, value: int) -> None:
        self.hashMap[key] = value

    def get(self, key: int) -> int:
        return self.hashMap[key]

    def remove(self, key: int) -> None:
        self.hashMap[key] = -1


# Input: ["MyHashMap", "put", "put", "get", "get", "put", "get", "remove", "get"]

# [[], [1, 1], [2, 2], [1], [3], [2, 1], [2], [2], [2]]
# Output:[null, null, null, 1, -1, null, 1, null, -1]

obj = MyHashMap()
obj.put(1, 1)
obj.put(2, 2)
print(obj.get(1))
print(obj.get(3))
obj.put(2, 1)
print(obj.get(2))
obj.remove(2)
print(obj.get(2))