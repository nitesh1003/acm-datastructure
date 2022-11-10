#include <bits/stdc++.h>
using namespace std;

void call_by_refrence_pointer (int& n)
{
    cout<<"Address of n in call_by_refrence_pointer function : "<<&n<<endl;
    n *= n;
}

void call_by_refrence_pointer (int *n)
{
    cout<<"Address of n in call_by_refrence_pointer function : "<<n<<endl;
    *n *= *n;
}

int call_by_value(int n)
{
    cout<<"Address of n in call_by_value function : "<<&n<<endl;
    n *= n;
    return n;
}

int main()
{
    int n=8;
    cout<<"Address of n in main() : "<<&n<<endl;
    call_by_value(n);
    cout<<"Ans : "<<n<<endl;
    cout<<"Value of n : "<<n<<endl;

    cout<<endl;
    cout<<"Address of n in main() : "<<&n<<endl;
    call_by_refrence_pointer(&n);
    cout<<"Ans: "<<n<<endl;
    cout<<"Value of n : "<<n<<endl;

    cout<<endl;
    cout<<"Address of n in main() : "<<&n<<endl;
    call_by_refrence_pointer(n);
    cout<<"Ans: "<<n<<endl;
    return 0;
}
