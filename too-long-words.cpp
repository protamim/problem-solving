#include <iostream>

using namespace std;

int main()
{

    int t;
    string w;

    cin >> t;
    while (t--)
    {
        cin >> w;
        if(w.size() > 10) {
            cout << w.front() << w.size() - 2 << w.back() << endl;
        }else {
            cout << w << endl;
        }
    }

    return 0;
}