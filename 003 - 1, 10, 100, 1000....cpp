#include <iostream>
#include <unordered_set>

#define TYP unsigned int
// MAX_UINT > MAX_INT
#define MAX (TYP)2147483648
// 2^31 = 2147483648 = INT_MAX + 1

using namespace std;

int main()
{

    TYP ile, i, j;
    unordered_set<TYP> jedynki;

    ios::sync_with_stdio(false);

    cin >> ile;

    for (i = 0, j = 1; j < MAX; i++, j += i)
        jedynki.insert(j);

    for (i = 0; i < ile; i++) {

        cin >> j;

        if (jedynki.find(j) == jedynki.end()) cout << 0 << " ";
        else cout << 1 << " ";

    }

    cout << endl;

    return 0;

}
