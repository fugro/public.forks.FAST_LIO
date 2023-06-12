#pragma once

#define PCL_NO_PRECOMPILE

#include <pcl_conversions/pcl_conversions.h>

namespace ouster_ros {
  struct EIGEN_ALIGN16 Point {
      PCL_ADD_POINT4D;
      PCL_ADD_NORMAL4D; // This adds the member normal[3] which can also be accessed using the point (which is float[4])
      union
      {
        struct
        {
          float intensity;
          float curvature;
        };
        float data_c[4];
      };
      uint32_t t;
      uint16_t reflectivity;
      uint8_t  ring;
      uint16_t ambient;
      uint32_t range;
      EIGEN_MAKE_ALIGNED_OPERATOR_NEW
  };
}  // namespace ouster_ros


