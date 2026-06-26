#include <gtest/gtest.h>
#include <iostream>
#include "../libs/flags.h"

TEST (FlagsTest, MainTest){
  char arg0[] = "chelik";
  char arg1[] = "-p";
  char arg2[] = "3";
  char arg3[] = "-c";
  char arg4[] = "red";
  char arg5[] = "hello";
  char arg6[] = "world";
  char* command[] = {arg0, arg1, arg2, arg3, arg4, arg5, arg6}; 
  Args args = parse_args(7, command);
  ASSERT_EQ(args.message, "hello world");
  ASSERT_EQ(args.color, "red");
  ASSERT_EQ(args.pose, 3);
}

int main(int argc, char* argv[]){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
