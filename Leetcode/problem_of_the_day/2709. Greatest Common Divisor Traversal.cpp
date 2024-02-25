class Solution {
public:
    bool canTraverseAllPairs(vector<int>& nums) {
        if (nums.size() == 1) return true;

        if (*min_element(nums.begin(), nums.end()) == 1) return false;

        if (prime_test(nums) == false) return false;

        vector<int> visited(nums.size(), 0);
        visited[0] = 1;

        int cnt = 1;
        queue<int> q;
        q.push(0);
        while (!q.empty() && cnt < nums.size()) {
            int curr = q.front();
            q.pop();
            for (int next = 0; next < nums.size(); next++) {
                if (visited[next] == 1) continue;
                
                if (gcd(nums[curr], nums[next]) > 1) {
                    cnt++;
                    q.push(next);
                    visited[next] = 1;
                }
            }
        }

        return cnt == nums.size();
    }

private:
    int gcd(int a, int b) {
        if (a < b) return gcd(b, a);

        if (a % b == 0) return b;

        return gcd(b, a % b);
    }

    int is_prime(int n) {
        if (n < 3) return 1;
        if (n % 2 == 0 || n % 3 == 0) return 0;
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return 0;
        }
        return 1;
    }

    bool prime_test(const vector<int>& nums) {
        long a = 0, b = 0, max = 1e5;

        for (int num : nums) {
            if (is_prime(num)) {
                if (num > b) {
                    a = b;
                    b = num;
                } else if (num > a && num != b) {
                    a = num;
                }

                if (a * b > max) return false;
            }
        }

        return true;
    }
};
