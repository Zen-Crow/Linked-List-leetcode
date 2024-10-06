var MyHashMap = function () {
    this.size = 1000001
    this.hashMap = new Array(this.size).fill(-1);
};

/** 
 * @param {number} key 
 * @param {number} value
 * @return {void}
 */
MyHashMap.prototype.put = function (key, value) {
    let hash = key % this.size
    this.hashMap[hash] = value
};

/** 
 * @param {number} key
 * @return {number}
*/
MyHashMap.prototype.get = function (key) {
    let hash = key % this.size
    return this.hashMap[hash]
};

/** 
 * @param {number} key
 * @return {void}
*/
MyHashMap.prototype.remove = function (key) {
    let hash = key % this.size
    this.hashMap[hash] = -1
};

/** 
 * Your MyHashMap object will be instantiated and called as such:
 * var obj = new MyHashMap()
 * obj.put(key,value)
 * var param_2 = obj.get(key)
 * obj.remove(key)
 */