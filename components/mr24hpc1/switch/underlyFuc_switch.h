#pragma once

#include "esphome/components/switch/switch.h"
#include "../mr24hpc1.h"

namespace esphome {
namespace mr24hpc1 {

class UnderlyOpenFunctionSwitch : public switch_::Switch, public Parented<mr24hpc1Component> {
 public:
  UnderlyOpenFunctionSwitch() = default;

 protected:
  void write_state(bool state) override;
};

}  // namespace mr24hpc1
}  // namespace esphome