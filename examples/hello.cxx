#include <hello_hip.hxx>

#include <thrust/device_vector.h>

int main(int argc, char** argv) {
  thrust::device_vector<int> x(10, 1.0f);
  launch_hello_hip();
}