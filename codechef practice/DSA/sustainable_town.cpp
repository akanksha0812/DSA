#include<bits/stdc++.h>
using namespace std;

int Possibility (int N, int M, vector<long long> A) {
   // Write your code here
   int sum=A[i_A]+A[i_A+1]+A[i_A+2];
   while(M--){
       if(A.start(i+2)==sum)
   }
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int M;
        cin >> M;
        vector<long long> A(N);
        for(int i_A = 0; i_A < N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = Possibility(N, M, A);
        cout << out_;
        cout << "\n";
    }
}