void problemSolution1(float consumed_water) {
    // write your code here
float cost = 13.0;

  if (consumed_water > 30.0) {
    consumed_water = 30.0;
  }
  float d = consumed_water;
  cost += d * 0.4;
  if (consumed_water > 50.0) {
    consumed_water = 20.0;
  } else if (a == 30) {
    consumed_water -= 30.0;
  } else {
    consumed_water = 0.0;
  }
  float e = consumed_water;
  cost += e * 0.12;
  if (consumed_water > 60.0) {
    consumed_water = 10.0;
  } else if (b == 20) {
    consumed_water -= 50.0;
  } else {
    consumed_water = 0.0;
  }
  float f = consumed_water;
  cost += f * 1.4;
  if (consumed_water > 60.0) {
    consumed_water -= 60.0;
  } else {
    consumed_water = 0.0;
  }
  cost += consumed_water * 1.5;
  return cost;
}

