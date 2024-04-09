class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;

        for(int i=0;i<tickets.size();i++){
            //pehle k se aage walo ke liye check karte hai including k
            if(i<=k){
                // kth se pehle wala jo kth element se chota hai ya equal hai usko to bhai pura khatam karna hin padega kth element ko har baar chota karne ke liye
                if(tickets[i]<=tickets[k]){
                    ans+=tickets[i];
                }
                // warna agar koi kth elemrnt se bada hai k se pehle present usko k times chalana padega taki ham har baar kth element reach kar paye
                else{
                    ans+=tickets[k];
                }
            }

            // k ke baad walo ka hal dkhte hai
            else{
                //agar jo element hai uski value k se choti hai to wo utne apni value to utne times chalana hin padega
                if(tickets[i]<tickets[k]){
                    ans+=tickets[i];
                }

                //agar k ke baad wale element me k se koi badi value hai phir wo to loop me kth element ki value -1 times to chalega hin uske baad k khud 0 hojayega
                else{
                    ans+=tickets[k]-1;

                }
            }
        }

        return ans;
    }
};
