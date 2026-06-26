#include <gtest/gtest.h>
#include <string>
#include "../libs/colors.h"

TEST (Color_tests, Error_test){
  std::string invalid_colors[] = {"redd", "abcdefg", "blueberry"};
  for (int i = 0; i < 3; i++){
    EXPECT_EQ(Colors::is_valid_color(invalid_colors[i]), false);
  }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

