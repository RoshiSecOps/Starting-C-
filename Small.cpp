#include <iostream>
using std::cin;
using std::cout;

#include "functions.h"
int main()
{
    int total = add(3, 4);
    cout << "3 + 4 is " << total << '\n';

    double another = add(1.2, 3.4);

    cout << '\n';
    cout << "1.2 + 3.4 is " << another;
    cout << '\n';

    auto totalofthree = add (1.1, 2.2, 3.3);
    cout << "1.1 + 2.2 + 3.3 is " << totalofthree;
    cout << '\n';

    add (0, 0, 0);

    if (test(true))
    {
        cout <<"True passes the test" <<'\n';
    }
    if (test(3.2))
    {
        cout << "3.2 passes the test" << '\n';
    }
    //if (test(3))
    //{
    //    cout << "3 passes the test" << '\n';
    //}

    return 0;
}

