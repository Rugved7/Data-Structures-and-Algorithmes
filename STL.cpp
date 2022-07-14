// ARRAY //
/*#include <iostream>
#include <array>

using namespace std;

int main()
{
    int basic[3] = {1, 2, 3};
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at second index= " << a.at(2) << endl;
    cout << "Empty or not= " << a.empty() << endl;
    cout << "First element= " << a.front() << endl;
    cout << "Last element= " << a.back() << endl;
    return 0;
}*/

// Vector //
/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"capacity  = "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity  = "<<v.capacity()<<endl;
    cout<<"size  = "<<v.size()<<endl;

    cout<<"Element at 1st index = "<<v.at(0)<<endl;

    cout<<"front  = "<<v.front()<<endl;
    cout<<"back  = "<<v.back()<<endl;
    return 0;
}*/

// Deque //

/*#include<iostream>
#include<deque>
using namespace std;

int main(){

deque<int> d;
d.push_back(1);
d.push_front(2);

cout<<endl;
cout<<"Element at first index is "<<d.at(1)<<endl;

cout<<"front "<<d.front()<<endl;
cout<<"back "<<d.back()<<endl;

cout<<"Empty or not "<<d.empty()<<endl;

    return 0;
}
*/

// List //
/*#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;
l.push_back(1);
l.push_front(2);

cout<<"front "<<l.front()<<endl;
cout<<"back "<<l.back()<<endl;
    return 0;
}
*/

// Stack //

/*#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Rugved");
    s.push("Shrikant");
    s.push("Agasti");

    cout<<"Top element :"<<s.top()<<endl;

    cout<<"Size of stack :"<<s.size()<<endl;

    cout<<"Empty or not :"<<s.empty()<<endl;

    return 0;
}
*/

// Queue //

#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<string> q;

    q.push("Rugved");
    q.push("Shrikant");
    q.push("Agasti");

    cout << "Top element :" << q.front() << endl;

    cout << "Size of stack :" << q.size() << endl;

    cout << "Empty or not :" << q.empty() << endl;
    return 0;
}
