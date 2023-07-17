class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    map<char, int>seen;
            string res;
            queue<char>q;
            string ans;
            for(char ch: A) {
                seen[ch]++;
                while(!q.empty() and seen[q.front()] > 1) q.pop();
                if(seen[ch] == 1)
                    q.push(ch);
                if(q.empty()) ans.push_back('#');
                else ans.push_back(q.front());
            }          
            return ans;
		}

};
