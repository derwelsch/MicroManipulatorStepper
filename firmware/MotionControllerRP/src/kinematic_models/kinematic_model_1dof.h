// --------------------------------------------------------------------------------------
// Project: MicroManipulatorStepper
// License: MIT (see LICENSE file for full description)
//          All text in here must be included in any redistribution.
// Author:  M. S. (diffraction limited)
// --------------------------------------------------------------------------------------

#pragma once

//*** INCLUDE ***************************************************************************

#include "kinematic_model_base.h"
#include "utilities/math3d.h"

//*** CLASS *****************************************************************************

class KinematicModel_1DOF : public IKinematicModel {
  public:
    KinematicModel_1DOF();

    int get_joint_count();
    bool foreward(const float* joint_positions, Pose6DF& pose) override;
    bool inverse(const Pose6DF& pose, float* joint_positions) override;
};
