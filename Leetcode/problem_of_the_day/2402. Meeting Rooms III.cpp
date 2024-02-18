class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& v) {
        sort(v.begin(), v.end());
        int cnt[101];
        bool used[101];
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;

        //counting and used state of all room
        for(int i=0; i<101; i++)
        {
            cnt[i] = 0;
            used[i] = false;
        }

        for(auto e: v)
        {
            int l = e[0], r = e[1];

            //the first ending room will be on the top of the heap
            //if the ending time t < l, the room should be not used
            while(!pq.empty() && l >= pq.top().first)
            {
                used[pq.top().second] = false;
                pq.pop();
            }

            int room = -1;
            //first empty room
            for(int i=0; i<n; i++)
            {
                if(!used[i])
                {
                    room = i;
                    break;
                }
            }
            //if there is an empty room
            if(room != -1)
            {
                cnt[room]++;
                
                //the room will be used
                used[room] = true;

                //record the ending time of this room
                pq.push({r,room});
            }
            else
            {
                //the first ending room 
                pair<long long,int> p = pq.top();
                pq.pop();
                
                //new ending time
                long long finish = p.first+r-l;
                cnt[p.second]++;

                //update the new ending time of this room
                pq.push({finish,p.second});
            }
        }

        //check the maximum used time
        int maxi = -1;
        for(int i=0; i<n; i++)
            maxi = max(maxi, cnt[i]);
        
        int index;
        for(int i=0; i<n; i++)
        {
            if(cnt[i] == maxi)
            {
                index = i;
                break;
            }
        }
        return index;
    }
};
