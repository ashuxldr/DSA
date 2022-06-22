#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue <int> q;
    q.push(31);
    q.push(60);
    q.push(83);
    q.push(7);
    cout<<"size:"<<q.size()<<endl;
    cout<<"isEmpty:"<<q.empty();
    cout<<"front:"<<q.front();
    cout<<"back:"<<q.back();
    q.pop();
    cout<<"rear:"<<q.front();
    return 0;
}