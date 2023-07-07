add_subdirectory(Interview06_TwoSum)

add_subdirectory(Interview07_ThreeSum)

add_subdirectory(Interview08_MinSubArrayLen)

add_subdirectory(Interview09_NumSubArrayProductLessThanK)

add_subdirectory(Interview10_SubArraySum)

file(GLOB_RECURSE SRC_LIST "*.cpp")  # 递归搜索匹配
add_executable(SwordOfferII_Chapter02_Array ${SRC_LIST})
target_link_libraries(SwordOfferII_Chapter02_Array gtest gtest_main)