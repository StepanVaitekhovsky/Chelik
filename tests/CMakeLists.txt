find_package(GTest REQUIRED)

add_executable(test_flags
    test_flags.cpp
    ../libs/flags.cpp   
)

target_link_libraries(test_flags GTest::GTest)

add_test(NAME MainTest COMMAND test_flags)

add_executable(test_colors
	test_color.cpp
	../libs/colors.cpp
)

target_link_libraries(test_colors GTest::GTest)
add_test(NAME Error_test COMMAND test_colors)
