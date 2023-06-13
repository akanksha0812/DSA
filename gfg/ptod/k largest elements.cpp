class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    sort(arr, arr+n, greater <int> ());
        vector<int> vt;
        for(int i=0;i<k;i++){
            vt.push_back(arr[i]);
        }
        return vt;
	}

};
