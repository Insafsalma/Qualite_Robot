#include "Robot.h"
#include "deplacement.h"
#include "Case.h"

Robot :: Robot( Case& position,bool moderne = true ):d_position{position}, d_type_moderne{!moderne}
{}




