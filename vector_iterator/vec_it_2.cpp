#include <vector>
#include <iostream>
#include <stdint.h>
using namespace std;

int main(){

typedef std::vector<int> int_v;

int_v i;

i.push_back(1);
i.push_back(2);
i.push_back(3);
i.push_back(4);
i.push_back(5);

int_v::iterator it;

for (it=i.begin();it!=i.end();it++){
  cout << *it;
}

for (int j = 0; j<= 4; j++){
  cout << i[j];
}


return 0;

}