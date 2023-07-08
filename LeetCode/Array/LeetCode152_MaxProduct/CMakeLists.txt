aux_source_directory(. MaxProduct_Src)
add_executable(LeetCode152_MaxProduct ${MaxProduct_Src})
target_link_libraries(LeetCode152_MaxProduct gtest gtest_main)