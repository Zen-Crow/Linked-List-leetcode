package main

type MyHashSet struct {
	bucket []int
}

func Constructor() MyHashSet {
	size := 1_000_001
	bucket := make([]int, size)
	for i := range bucket {
		bucket[i] = -1
	}
	return MyHashSet{
		bucket: bucket,
	}
}

func (this *MyHashSet) Add(key int) {
	hash := key % len(this.bucket)
	if key != this.bucket[hash] {
		this.bucket[hash] = key
	}
}

func (this *MyHashSet) Remove(key int) {
	hash := key % len(this.bucket)
	if key == this.bucket[hash] {
		this.bucket[hash] = -1
	}
}

func (this *MyHashSet) Contains(key int) bool {
	hash := key % len(this.bucket)
	return this.bucket[hash] == key
}
