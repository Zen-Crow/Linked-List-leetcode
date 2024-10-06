<?php
class MyHashSet
{
    /**
     * @param Integer[] $hashSet
     */
    public $hashSet;
    function __construct() {
        $size = 1000001;
        $this->hashSet = array_fill(0, $size, -1);
    }

    /**
     * @param Integer $key
     * @return NULL
     */
    function add($key) {
        if (!$this->contains($key)) {
            $this->hashSet[$key] = $key;
        }
    }

    /**
     * @param Integer $key
     * @return NULL
     */
    function remove($key) {
        if ($this->contains($key)) {
            $this->hashSet[$key] = -1;
        }
    }

    /**
     * @param Integer $key
     * @return Boolean
     */
    function contains($key) {
        return $this->hashSet[$key] !== -1;
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * $obj = MyHashSet();
 * $obj->add($key);
 * $obj->remove($key);
 * $ret_3 = $obj->contains($key);
 */
