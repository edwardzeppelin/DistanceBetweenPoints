#pragma once
#include <math.h>

void distntime(double coord1[3], double coord2[3], double& dist, double& velo, double& time) {

	dist = sqrt(((coord1[0] - coord2[0]) * (coord1[0] - coord2[0])) + ((coord1[1] - coord2[1]) * (coord1[1] - coord2[1])) + ((coord1[2] - coord2[2]) * (coord1[2] - coord2[2])));

	time = dist / velo;

}