#include<list>
#include<utility>

class MyHashMap {
private:
    std::vector<std::list<std::pair<int,int>>> s;
    static constexpr int BUCKET_SIZE = 1009;
public:
    MyHashMap() : s(BUCKET_SIZE) {
    }
    
    void put(int key, int value) {
        int hkey = key % BUCKET_SIZE;
        for(auto& p : s[hkey]){
            if(p.first == key){
                p.second = value;
                return;
            }
        }
        s[hkey].push_back({key,value});
    }
    
    int get(int key) {
        for(auto& p : s[key % BUCKET_SIZE]){
            if(p.first == key){
                return p.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(auto& p : s[key % BUCKET_SIZE]){
            if(p.first == key){
                s[key % BUCKET_SIZE].remove({key,p.second});
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