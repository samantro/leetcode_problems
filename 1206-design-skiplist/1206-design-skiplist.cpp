class Skiplist {
public:
    vector<int> v;
    Skiplist() {
        
    }
    int Search(int n){
        int i=0,j=v.size()-1;
        while(i<=j){
            int m = (j+i)/2;
            if(v[m]==n) return m;
            if(v[m]>n) j=m-1;
            else i=m+1;
        }
        return -1;
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
        int i = Search(num);
        if(i==-1) return false;
        else {
            v.erase(begin(v) + i);
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