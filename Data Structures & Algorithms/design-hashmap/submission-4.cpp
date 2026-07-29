class MyHashMap {
public:
    unordered_map<int,int> mp1,mp2;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        mp1[key]=value;
        mp2[key]++;
    }
    
    int get(int key) {
        return (mp2[key]>0)? mp1[key] : -1; 
    }
    
    void remove(int key) {
        mp1[key]=-1;
        if (mp2[key]!=0) mp2[key]--;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */