class StockSpanner {
    stack<pair<int,int>> s;
public:
    StockSpanner() {
        
    }
    
    int next(int price) 
    {
        int res = 1;
        while (!s.empty() && s.top().first <= price) 
        {
            res += s.top().second;
            s.pop();
        }
        s.push({price, res});
        return res;
    }
};

