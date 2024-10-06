package main

type MyHashMap struct {
	bucket []int
}

func Constructor() MyHashMap {
	size := 1000001
	bucket := make([]int, size)
	for i := range bucket {
		bucket[i] = -1
	}
	return MyHashMap{
		bucket: bucket,
	}
}

func (this *MyHashMap) Put(key int, value int) {
	this.bucket[key] = value
}

func (this *MyHashMap) Get(key int) int {
	return this.bucket[key]
}

func (this *MyHashMap) Remove(key int) {
	this.bucket[key] = -1
}
