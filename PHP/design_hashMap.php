<?php
class MyHashMap {
    /**
     * @param Integer[] $hashMap
    */
    public $hashMap;

    function __construct($size = 1000001) {
        $this->hashMap = array_fill(0, $size, -1);
    }
  
    /**
     * @param Integer $key
     * @param Integer $value
     * @return NULL
     */
    function put($key, $value) {
        $this->hashMap[$key] = $value;
    }
  
    /**
     * @param Integer $key
     * @return Integer
     */
    function get($key) {
        return $this->hashMap[$key];
    }
  
    /**
     * @param Integer $key
     * @return NULL
     */
    function remove($key) {
        $this->hashMap[$key] = -1;
    }
}

// Встроенное хэширование: PHP массивы — это на самом деле хэш-таблицы.
// Когда вы добавляете элементы в массив с ассоциативными ключами, 
// PHP автоматически хэширует ключи и распределяет их в хэш-таблице. 
// Поэтому вам не нужно явно вычислять хэш-функцию.
/**
 * Your MyHashMap object will be instantiated and called as such:
 * $obj = MyHashMap();
 * $obj->put($key, $value);
 * $ret_2 = $obj->get($key);
 * $obj->remove($key);
 */