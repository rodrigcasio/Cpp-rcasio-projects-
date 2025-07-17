#include <string>
#include <iostream>

template<typename K, typename V>
class KeyValuePair {
    private:
    K key;
    V value;

    public:
    KeyValuePair(K inputKey, V inputValue): key(inputKey), value(inputValue){}

    const K getKey() const { return key; }
    const V getValue() const { return value; }
};
