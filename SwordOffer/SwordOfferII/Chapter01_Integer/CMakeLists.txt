add_subdirectory(Interview01_DivideInteger)

add_subdirectory(Interview02_AddBinary)

add_subdirectory(Interview03_CountBitOne)

add_subdirectory(Interview04_FindSingleNumber)

add_subdirectory(Interview05_WordLenMaxProduct)

file(GLOB_RECURSE SRC_LIST "*.cpp")  # 递归搜索匹配
add_executable(SwordOfferII_Chapter01_Integer ${SRC_LIST})
target_link_libraries(SwordOfferII_Chapter01_Integer gtest gtest_main)