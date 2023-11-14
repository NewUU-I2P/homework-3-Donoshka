float problemSolution2(float i, float j, float k) {
    // write your code here;
    float result = (i > j) ? i : j;
    result = (result > k) ? result : k;
    return result;
}
