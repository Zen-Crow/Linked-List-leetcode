var MyHashSet = function () {
    this.size = 1000001;
    this.hashSet = new Array(this.size).fill(-1);
};

/** 
 * @param {number} key
 * @return {void}
 */
MyHashSet.prototype.add = function (key) {
    let hash = key % this.size;
    if (!this.contains(key)) {
        this.hashSet[hash] = key;
    }
};

/** 
 * @param {number} key
 * @return {void}
 */
MyHashSet.prototype.remove = function (key) {
    let hash = key % this.size;
    if (this.contains(key)) {
        this.hashSet[hash] = -1;
    }
};

/** 
 * @param {number} key
 * @return {boolean}
 */
MyHashSet.prototype.contains = function (key) {
    let hash = key % this.size;
    return this.hashSet[hash] !== -1;
};

/** 
 * Your MyHashSet object will be instantiated and called as such:
 * var obj = new MyHashSet()
 * obj.add(key)
 * obj.remove(key)
 * var param_3 = obj.contains(key)
 */