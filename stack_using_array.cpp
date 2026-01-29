#include <iostream>
using namespace std;

stack<int> insertion(stack<int> &st, int n)
{
    st.push(n);
    return st;
}

int main()
{
    stack<int> st;
    int x;
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        int n;
        cin >> n;
        insertion(st, n);
    }
    while(!st.empty()){
         cout << st.top() << "\n";
         st.pop();
    }
   
}