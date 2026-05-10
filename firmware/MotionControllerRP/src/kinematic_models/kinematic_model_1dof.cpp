// --------------------------------------------------------------------------------------
// Project: MicroManipulatorStepper
// License: MIT (see LICENSE file for full description)
//          All text in here must be included in any redistribution.
// Author:  M. S. (diffraction limited)
// --------------------------------------------------------------------------------------

//*** INCLUDE ***************************************************************************

#include "kinematic_model_1dof.h"
#include "utilities/math3d.h"
#include "utilities/math_constants.h"
#include "utilities/logging.h"

//*** CLASS *****************************************************************************

KinematicModel_1DOF::KinematicModel_1DOF() {

}

int KinematicModel_1DOF::get_joint_count() {
  return 1;
}

bool KinematicModel_1DOF::foreward(const float* joint_positions, Pose6DF& pose) {
    pose.translation.x = joint_positions[0] * Constants::RAD2DEG;

    pose.translation.y = 0.0f;
    pose.translation.z = 0.0f;

    pose.rotation = QuaternionF();

    return true;
}

bool KinematicModel_1DOF::inverse(const Pose6DF& pose, float* joint_positions) {
    joint_positions[0] = pose.translation.x * Constants::DEG2RAD;
    return true;
}
