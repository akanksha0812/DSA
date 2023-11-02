
class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int dis = INT_MAX;
        int xx = -1 , yy = -1;
        for(int i=0; i<n; i++){
            if(a[i] == x) xx = i;
            else if(a[i] == y) yy = i;
            
            if(xx != -1 && yy != -1){
                dis = min(dis, abs(xx - yy));
            }
        }
        if(dis == INT_MAX) return -1;
        return dis;
    }
};
