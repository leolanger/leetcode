# include <iostream>
# include <time.h>
int main()
{
    using namespace std;
    int a = rand() * 100;
    int b;
    do
    {
        cin >> b;
        if (b > a)
            cout << "bigger" << "try again" << endl;
        else if (b < a)
            cout << "smaller" << "try again" << endl;

    } while (a == b);
    cout << "congratulation!";

}