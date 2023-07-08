add_subdirectory(Chapter01_Integer)

add_subdirectory(Chapter02_Array)

file(GLOB_RECURSE SRC_LIST "*.cpp")  # 递归搜索匹配
add_executable(SwordOfferII ${SRC_LIST})
target_link_libraries(SwordOfferII gtest gtest_main)