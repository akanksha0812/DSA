class Solution {
public:
    string interpret(string command) {
        string output;
        for(int i=0;i<command.size();i++){
            if(command[i]=='G'){
            output=output+'G';
            }
            if(command[i]=='('&& command[i+1]==')'){
            output=output+'o';
            }
            if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
            output=output+"al";
            }
        }
        return output;
    }
};