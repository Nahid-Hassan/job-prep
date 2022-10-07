class MyCalendar {
public:
    map<int, int> mp;
    MyCalendar() {
        mp.clear();
    }
    
    bool book(int start, int end) {
        auto it = mp.upper_bound(start);
        if (it != mp.end() && it->second < end) return false;
        mp[end] = start;
        
        return true;
    }
};
