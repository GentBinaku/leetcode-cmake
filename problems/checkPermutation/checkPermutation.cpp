#include "headers.h"

class Solution {
 public:
  void checkPermutation(std::string const& s) {}
};
TEST(checkPermutation, checkPermutation) { Solution s; }

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
