#include <iostream>
using namespace std;

int stack[10];
int size = 10;
int top = -1;

void push(int data)
{
    if (top >= size - 1)
    {
        cout << "stack overflow\n";
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "stack underflow\n";
    }
    else
    {
        cout << "the pooped element is" << stack[top] << endl;
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        cout << "no data to show\n";
    }
    else
    {
        int x = stack[top];
        cout << "peeked value=\n" << x;
    }
}
void display()
{
    if (top >= 0)
    {
        for (int i = top; i >= 0; i--)
        {
            cout <<"the elments in stack are: "<<stack[i] << " ";
            cout << endl;
        }
    }
}

int main()
{
    cout << "menu\n";
    cout << "1)push\n";
    cout << "2)pop\n";
    cout << "3)peek\n";
    cout << "4)display\n";
    cout << "5)exit\n";
    int n;
    do
    {

        cout << "Enter your choice.\n";
        
        cin >> n;

        switch (n)
        {
        case 1:
            cout << "enter the value you want to push\n";
            int k;
            cin >> k;
            push(k);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "exit" << endl;
            exit(0);

        default:
            cout << "invalid choice";
        }
    } 
    while (n != 5);
    return 0;
}
