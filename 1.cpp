#include <iostream>
#include <map>
using namespace std;

int main() {
  multimap<string, int> multimap;


  multimap.insert(pair<string, int>("A", 1));
  multimap.insert(pair<string, int>("B", 2));
  multimap.insert(pair<string, int>("C", 3));
  multimap.insert(pair<string, int>("A", 4));


  cout << "Key\tValue" <<endl;
  multimap<string, int> iterator::x;
  for (x = multimap.begin(); x!= multimap.end(); ++x) {
    cout << x->first << "\t" << x->second << endl;
  }

  return 0;
}
