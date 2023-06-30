class Skiplist {
public:
    vector<int> v;
    Skiplist() {
        
    }
    
    bool search(int target) {
        return binary_search(begin(v),end(v),target);
    }
    
    void add(int num) {
        auto it = lower_bound(begin(v),end(v),num);
        if(it==v.end()) v.push_back(num);
        else v.insert(it,num);
    }
    
    bool erase(int num) {
        if(!binary_search(begin(v),end(v),num)) return false;
        else {
            auto it = find(begin(v),end(v),num);
            v.erase(it);
            return true;
        };
    }
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */