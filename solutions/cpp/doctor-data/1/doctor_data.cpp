#include "doctor_data.h"

namespace heaven {

  void Vessel::make_buster() {
    ++this->busters;
  }

  bool Vessel::shoot_buster() {
    return this->busters-- > 0;
  }

  Vessel Vessel::replicate(string name) {
    return Vessel{name, ++this->generation, this->current_system};
  }

  string get_older_bob(Vessel vessel1, Vessel vessel2) {
    return vessel1.generation < vessel2.generation ? vessel1.name : vessel2.name;
  }

  bool in_the_same_system(Vessel vessel1, Vessel vessel2) {
    return vessel1.current_system == vessel2.current_system;
  }
}
