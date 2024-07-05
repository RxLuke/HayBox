#ifndef _MODES_FCGUlt_HPP
#define _MODES_FCGUlt_HPP

#include "core/ControllerMode.hpp"
#include "core/socd.hpp"
#include "core/state.hpp"

class FCGUlt : public ControllerMode {
  public:
    FCGUlt(socd::SocdType socd_type);

  private:
    void UpdateDigitalOutputs(InputState &inputs, OutputState &outputs);
    void UpdateAnalogOutputs(InputState &inputs, OutputState &outputs);
};

#endif
