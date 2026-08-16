// Last updated: 8/16/2026, 1:55:01 PM
class MyHashMap {
vector<vector<pair<int,int>>> table = vector<vector<pair<int,int>>>(10000);

public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        int k = key % 10000;

        for (auto &p : table[k]) {
            if (p.first == key) {
                p.second = value;   // Update existing value
                return;
            }
        }

        table[k].push_back({key, value});   // Key not found
    }


    int get(int key) {

        int k = key%10000;

        for(auto &p: table[k]){
            if(p.first == key) return p.second;
        }

        return -1;
        
    }
    
void remove(int key) {

    int k = key % 10000;

    for (auto it = table[k].begin(); it != table[k].end(); it++) {
        if (it->first == key) {
            table[k].erase(it);
            return;
        }
    }
}
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */