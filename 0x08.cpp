//https://www.acmicpc.net/problem/10799

#include <stack>
#include <iostream>
#include <string>
using namespace std;

int main(void){
    string s;
    stack<char> S;
    int count=0;
    int cut=0;
    int total=0;
    cin >> s;
    for(auto c:s){
        if(c =='('){
            S.push(c);
            count++;
        }
        else if(c == ')'){
            
            if(count == 1){
                S.pop();
                count = 0;
            }
            
            
            else{
                if(!S.empty() && count>1){
                    S.pop();
                    cut++;
                }
            }
        }
        if(S.empty()){
           total += count*(cut+1); 
        }
        
    }
    cout << total;
    
    
}
