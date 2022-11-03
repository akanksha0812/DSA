class MinStack {
public:
    vector<pair<int,int>>v;   //ele min ele
    MinStack() 
    {}   
    void push(int val) 
    {  
       if(v.size()==0)
       {
         v.push_back(make_pair(val,val));	
       }
       else if(v.size()>0)
       {
         v.push_back(make_pair(val,min(val,v[v.size()-1].second)));  	
       }
    }
    void pop() 
    {
       v.pop_back();
    }
    int top() 
    { 
       return v[v.size()-1].first;
    }    
    int getMin() 
    { 
       return v[v.size()-1].second;
    }
};

