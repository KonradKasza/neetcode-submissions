class MyHashSet {
private:
    vector<list<int>> l;
public:
    MyHashSet() : l(1000) {
    }
    
    void add(int key) {
        if(!contains(key)){
            l[key%1000].push_back(key);
        }
    }
    
    void remove(int key) {
        l[key%1000].remove(key);
      
    }
    
    bool contains(int key) {
        auto& k = l[key%1000];
        if(find(k.begin(),k.end(),key) != k.end()){
            return true;   
        }    
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */