#include <iostream>
#include <map>
using namespace std;

int main()
{


    multimap<int, int> mp1, mp2;


    mp1.insert({ 2, 30 });
    mp1.insert({ 1, 40 });

    mp2.insert({ 10, 60 });
    mp2.insert({ 9, 20 });

    mp1.swap(mp2);

    cout << "\nThe multimap1 after applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }

    cout << "\nThe multimap2 after applying swap() is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp2.begin(); itr != mp2.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';


    }
    return 0;

}

