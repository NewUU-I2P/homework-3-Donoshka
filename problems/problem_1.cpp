void problemSolution1(float consumed_water) {
    // write your code here
float problemSolution1(float consumed_water)
{
    float cost;
    float x = (consumed_water > 30) ? 30.0 : consumed_water;
    float y = (consumed_water > 50) ? 20 : ((x == 30) ? (consumed_water - 30) : 0);
    float z = (consumed_water > 60) ? 10 : ((y == 20) ? (consumed_water - 50) : 0);

    cost += 13 + x * 0.4 + y * 0.12 + z * 1.4 + ((consumed_water - 60) > 0 ? (consumed_water - 60) : 0) * 1.5;
    
    return cost;
}


