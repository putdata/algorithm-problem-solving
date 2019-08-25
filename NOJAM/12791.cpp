#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main() {
  vector<string> album[2017];
  album[1967].pb("DavidBowie");
  album[1969].pb("SpaceOddity");
  album[1970].pb("TheManWhoSoldTheWorld");
  album[1971].pb("HunkyDory");
  album[1972].pb("TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars");
  album[1973].pb("AladdinSane");
  album[1973].pb("PinUps");
  album[1974].pb("DiamondDogs");
  album[1975].pb("YoungAmericans");
  album[1976].pb("StationToStation");
  album[1977].pb("Low");
  album[1977].pb("Heroes");
  album[1979].pb("Lodger");
  album[1980].pb("ScaryMonstersAndSuperCreeps");
  album[1983].pb("LetsDance");
  album[1984].pb("Tonight");
  album[1987].pb("NeverLetMeDown");
  album[1993].pb("BlackTieWhiteNoise");
  album[1995].pb("1.Outside");
  album[1997].pb("Earthling");
  album[1999].pb("Hours");
  album[2002].pb("Heathen");
  album[2003].pb("Reality");
  album[2013].pb("TheNextDay");
  album[2016].pb("BlackStar");
  int t; cin >> t;
  while (t--) {
    int x, y; cin >> x >> y;
    int cnt = 0;
    string ans = "";
    for (int i = x; i <= y; i++) {
      int size = album[i].size();
      cnt += size;
      for (int j = 0; j < size; j++)
        ans += to_string(i) + " " + album[i][j] + "\n";
    }
    cout << cnt << '\n' << ans;
  }
  return 0;
}