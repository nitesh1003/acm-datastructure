#include<iostream >
using namespace std;
class Stack
{
	public:
		int *arr;
		int top,size;
	
	Stack(int size)
	{
		this->size=size;
		arr=new int[size];
		top-=1;
		
	}
	

void push(int element)
{
	if(size-top>1)
	{
		top++;
		arr[top]=element;
	}
	else
	{
		cout<<"stack bhar chuka hai! Nahi jagah hai(meme inserted)";
	}
}
void pop()
{
	if(top>=0)
	{
		top--;
	}
	else
	{
		cout<<"stack khali hai! Bhot jagah hai(meme inserted) ";
	}
}
int peek()
{
	if(top>=0)
	{
		return arr[top];
	}
	else
	{
		cout<<"stack is empty ";
		return -1;
	}
}
bool isempty()
{
	if(top==-1)
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
		cout<<"stack is not empty"<<endl;
	}
}
};
int main()
{
	Stack st(5);
	st.push(34);
	st.push(89);
	cout<<st.peek()<<endl;
	st.pop();
	cout<<st.peek()<<endl;
	st.pop();
	cout<<st.peek()<<endl;
	if(st.isempty())
	{
		cout<<"stack is empty :("<<endl;
	}
	else
	{
		cout<<"stack is not empty :)"<<endl;
	}
	return 0;
	
}
