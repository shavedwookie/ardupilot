#pragma once

#include "AP_RangeFinder_config.h"

#if AP_RANGEFINDER_ENABLED

#include <AP_Param/AP_Param.h>
#include <AP_Math/AP_Math.h>

class AP_RangeFinder_Params {
public:
    static const struct AP_Param::GroupInfo var_info[];

    AP_RangeFinder_Params(void);
    void convert_min_max_params();

    /* Do not allow copies */
    CLASS_NO_COPY(AP_RangeFinder_Params);

    AP_Vector3f pos_offset; // position offset in body frame
    AP_Float scaling;
    AP_Float offset;
    AP_Int16 powersave_range;
    AP_Float min_distance;
    AP_Float max_distance;
    AP_Int8  type;
    AP_Int8  pin;
    AP_Int8  ratiometric;
    AP_Int8  stop_pin;
    AP_Int8  function;
    AP_Float ground_clearance;
    AP_Int8  address;
    AP_Int8  orientation;
};

#endif  // AP_RANGEFINDER_ENABLED
