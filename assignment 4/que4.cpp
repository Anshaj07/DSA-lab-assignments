#include<iostream>
#include<queue>
using namespace std;
void firstnonrepeating(string str){
    queue<char> s;
    int count[256]={0};
    for(char ch:str){
        count[(int)ch]++;
        s.push(ch);
        
        while(!s.empty() && count[(int)ch]>1){
            s.pop();
        }
        if(s.empty()) cout<< "-1";
        else cout<<s.front();
    }
    
}
int main(){
    string str = "anshaj";
  firstnonrepeating(str);
    
}