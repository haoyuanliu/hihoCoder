#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int myints[] = {10, 20, 30, 5, 15};
    vector<int> v(myints, myints + 5);
    vector<int>::iterator it;

    make_heap(v.begin(), v.end());
    cout << "Initial max heap: " << v.front() << endl;

    pop_heap(v.begin(), v.end());
    v.pop_back();
    cout << "Max heap after pop: " << v.front() << endl;

    v.push_back(99);
    push_heap(v.begin(), v.end());
    cout << "Max heap after push: " << v.front() << endl;

    sort_heap(v.begin(), v.end());

    cout << "Final sorted range: " << endl;
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
