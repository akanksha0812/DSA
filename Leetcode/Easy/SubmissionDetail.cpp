 string sol;
        int res = 0;
        for (char c : s) {
            if (c == '(' && res++ > 0){
                 sol += c;
            }
            if (c == ')' && res-- > 1){
                 sol += c;
            }
        }
        return sol;