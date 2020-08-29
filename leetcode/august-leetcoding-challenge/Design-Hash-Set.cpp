#include <bits/stdc++.h>
using namespace std;

class MyHashSet
{
    bool storage[1000001] = {0};

public:
    /** Initialize your data structure here. */
    MyHashSet()
    {
    }

    void add(int key)
    {
        storage[key] = true;
    }

    void remove(int key)
    {
        storage[key] = false;
    }

    /** Returns true if this set contains the specified element */
    bool contains(int key)
    {
        return storage[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */