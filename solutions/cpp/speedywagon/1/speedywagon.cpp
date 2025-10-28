#include "speedywagon.h"

namespace speedywagon {

  // Enter your code below:

  // Please don't change the interface of the uv_light_heuristic function
  int uv_light_heuristic(std::vector<int> *data_array) {
    double avg{};
    for (auto element : *data_array) {
      avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
      if (element > avg)
        ++uv_index;
    }
    return uv_index;
  }

  bool connection_check(pillar_men_sensor *sensor) {
    return sensor != nullptr;
  }

  int activity_counter(pillar_men_sensor *sensors, int length) {
    int counter = 0;
    for (int i = 0; i < length; ++i) {
      counter += sensors[i].activity;
    }

    return counter;
  }

  bool alarm_control(pillar_men_sensor *sensor) {
    if (sensor == nullptr)
      return false;

    return sensor->activity > 0;
  }

  bool uv_alarm(pillar_men_sensor *sensor) {
    if (sensor == nullptr)
      return false;

    int uv_index = uv_light_heuristic(&sensor->data);
    return sensor->activity < uv_index;
  }

} // namespace speedywagon
