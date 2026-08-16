// Last updated: 8/16/2026, 1:55:03 PM
class MyHashSet {
    vector<bool> hs = vector<bool>(1000001, false);
public:

    MyHashSet() {

    }
    
    void add(int key) {
        hs[key] = true;
        
    }
    
    void remove(int key) {
        hs[key] = false;        
    }
    
    bool contains(int key) {

        if(hs[key]) return true;
        else return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */