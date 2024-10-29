#include "headers.h"

class Solution {
 public:
  bool is_unique(std::string const& s) {
    // Use two pointers (slow and fast) to check for duplicate characters.
    for (int slow = 0; slow < s.size(); ++slow) {
      for (int fast = slow + 1; fast < s.size(); ++fast) {
        if (s.at(slow) == s.at(fast)) {
          return false;  // Duplicate found
        }
      }
    }
    return true;  // No duplicates found
  };
};

// Test cases using GoogleTest
TEST(is_unique_test, has_duplicates) {
  Solution sol;
  EXPECT_FALSE(sol.is_unique("aaaaaaa"));  // Expect false due to duplicates
}

TEST(is_unique_test, no_duplicates) {
  Solution sol;
  EXPECT_TRUE(
      sol.is_unique("abcdefg"));  // Expect true since all characters are unique
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
