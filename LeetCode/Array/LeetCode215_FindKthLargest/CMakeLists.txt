aux_source_directory(. FindKthLargest_Src)
add_executable(LeetCode215_FindKthLargest ${FindKthLargest_Src})
target_link_libraries(LeetCode215_FindKthLargest gtest gtest_main)