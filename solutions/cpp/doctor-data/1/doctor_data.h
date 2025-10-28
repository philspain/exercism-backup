#pragma once
#include <string>

using namespace std;

namespace star_map {

  enum System {
    BetaHydri,
    Sol,
    EpsilonEridani,
    AlphaCentauri,
    DeltaEridani,
    Omicron2Eridani
  };
}

namespace heaven {

  class Vessel {

public:
    string name;
    int generation = 1;
    int busters = 0;
    star_map::System current_system;
    Vessel(string name, int generation, star_map::System system = star_map::System::Sol) {
      this->name = name;
      this->generation = generation;
      this->current_system = system;
    }
    void make_buster();
    bool shoot_buster();
    Vessel replicate(string name);
  };

  string get_older_bob(Vessel vessel1, Vessel vessel2);
  bool in_the_same_system(Vessel vessel1, Vessel vessel2);
}
