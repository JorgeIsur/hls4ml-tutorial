//Numpy array shape [32]
//Min -0.187500000000
//Max 0.437500000000
//Number of zeros 4

#ifndef B8_H_
#define B8_H_

#ifndef __SYNTHESIS__
bias8_t b8[32];
#else
bias8_t b8[32] = {0.25000, 0.18750, 0.15625, 0.00000, -0.18750, 0.09375, 0.06250, 0.00000, 0.09375, 0.43750, 0.18750, 0.18750, -0.06250, 0.37500, 0.00000, 0.06250, -0.03125, 0.21875, 0.21875, 0.37500, 0.00000, 0.21875, 0.03125, -0.12500, 0.03125, 0.34375, 0.21875, -0.06250, -0.12500, 0.18750, 0.12500, 0.25000};
#endif

#endif