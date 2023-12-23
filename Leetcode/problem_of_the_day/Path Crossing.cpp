class Solution {
public:
    bool isPathCrossing(string path) {
        vector<pair<int,int>> check;
        int x=0;
        int y=0;
        check.push_back({x,y});

        for(int i=0;i<path.size();i++){
            if(path[i]=='N'){
                x++;
            }
            if(path[i]=='S'){
                x--;
            }
            if(path[i]=='E'){
                y++;
            }
            if(path[i]=='W'){
                y--;
            }

            check.push_back({x,y});
        }
        
        set<pair<int,int>> s(check.begin(),check.end());

        if(s.size()==check.size()){
            return false;
        }

        return true;
    }
};
