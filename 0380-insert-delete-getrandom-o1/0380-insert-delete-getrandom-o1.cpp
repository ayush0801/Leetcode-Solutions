class RandomizedSet {
public:
    unordered_map<int, int> hash;
    vector<int> a;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(hash.find(val)==hash.end()){
            a.push_back(val);
            hash[val] = a.size()-1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(hash.find(val)!=hash.end()){
            int last = a.back();
            a[hash[val]] = last;
            // swap(a[a.size()-1], a[hash[val]]);
            a.pop_back();
            hash[last] = hash[val];
            hash.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return a[rand()%a.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */