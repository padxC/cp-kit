#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'




//---------------------------------
#ifndef LOCAL
  #define print(VARIABLE) \
    cerr << " ⇏  " << #VARIABLE << " = " << (VARIABLE) << '\n';

  #define printVector(VECTOR) \
    do { \
        cerr << " ⇏  " << #VECTOR << " = { "; \
        for (const auto& Element : (VECTOR)) cerr << Element << " "; \
        cerr << "} //VECTOR" << '\n'; \
    } while (0)

  #define printPair(PAIR) \
    cerr << " ⇏  " << #PAIR << " = { " << (PAIR).first << ", " << (PAIR).second << " } //PAIR" << '\n';

  #define printSet(SET) \
    do { \
        cerr << " ⇏  " << #SET << " = { "; \
        for (const auto& Element : (SET)) cerr << Element << " "; \
        cerr << "} //SET" << '\n'; \
    } while (0)

  #define printMap(MAP) \
    do { \
        cerr << " ⇏  " << #MAP << " = //MAP"; \
        for (const auto& [Key, Value] : (MAP)) \
            cerr << "\n \t{" << Key << " : " << Value << "}  "; \
    } while (0)

#else
  #define print(VARIABLE)
  #define printVector(VECTOR)
  #define printPair(PAIR)
  #define printSet(SET)
  #define printMap(MAP)
#endif


inline void fastIO() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
}

void stderrTo(const char* filename) {
#ifndef LOCAL
    if (freopen(filename, "w", stderr) == nullptr) {
    cerr << "Failed to redirect stderr to debug.txt" << endl;
    exit(1); 
  }
#endif
}

//---------------------------------



void solve() {

}


int main() {
  stderrTo("debug.txt");
  fastIO();
  
  int T;
  cin >> T;
  
  while (T--) {
    solve();
  }

  return 0;
}
