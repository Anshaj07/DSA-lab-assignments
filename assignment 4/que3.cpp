#include<iostream>
#include<queue>
using namespace std;
void interleave(queue<int>& q){
    int n =q.size();
    int half=n/2;
    queue<int> firsthalf;
    queue<int> secondhalf;
    for(int i=0;i<half;i++){
        int j=q.front();
        firsthalf.push(j);
        q.pop();
    }
        for(int i=half;i<n;i++){
        int j=q.front();
        secondhalf.push(j);
        q.pop();
    }
    while(!secondhalf.empty()){
        q.push(firsthalf.front());
        q.push(secondhalf.front());
        firsthalf.pop();
        secondhalf.pop();
    }
}
int main(){
   
    
    queue<int> q;
    queue<int>s;
    int n=5;
    for(int i=0;i<=5;i++){
        q.push(i);
    }
    s=q;
        while(!s.empty()){
        cout<<s.front()<<" ";
        s.pop();
    }
    cout<<endl;
    interleave(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}