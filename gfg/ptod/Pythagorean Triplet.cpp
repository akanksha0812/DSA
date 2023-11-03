//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    bool flag=false;
        unordered_map <int, int> mp;
        for(int i=0; i<n; i++){
            arr[i]=arr[i]*arr[i];
            mp[arr[i]]=i;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int sum=arr[i]+arr[j];
                if(mp.count(sum)){
                    return true;
                }
            }
        }
       return false;
	}
};
