aux_source_directory(. ThreeSum_Src)
add_executable(LeetCode15_ThreeSum ${ThreeSum_Src})
target_link_libraries(LeetCode15_ThreeSum gtest gtest_main)