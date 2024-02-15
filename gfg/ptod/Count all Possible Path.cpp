
class Solution {
public:
	int isPossible(vector<vector<int>>paths){
	    // Code here
	    for(vector<int> &p: paths) {
	        if(accumulate(p.begin(), p.end(), 0) % 2)   return 0;
	    }
	    return 1;
	}

};
