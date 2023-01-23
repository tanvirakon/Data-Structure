#include<bits/stdc++.h>
using namespace std;
class polish
{
private :
    int staack[20];
    int top=-1;
public :
    void push(int x)
    {
        staack[++top]=x;
    }
    int pop()
    {
        return staack[top--];
    }
    void postfix(string s)
    {
        int op3;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                push(s[i]-'0');
            }
            else
            {
                int op1=pop();
                int op2=pop();
                switch(s[i])
                {
                    case '+': op3=op1+op2;
                                break;
                    case '-': op3=op2-op1;
                                break;
                    case '*': op3=op1*op2;
                                break;
                    case '/': op3=op2/op1;
                                break;
                                }
                push(op3);
            }
        }
        cout<<" = "<<pop();
    }
};
int main()
{
    string s1;
    cout<<"Enter expression : ";
    cin>>s1;
    polish p;
    cout<<"\nThe result of the expression : ";
    p.postfix(s1);
}

