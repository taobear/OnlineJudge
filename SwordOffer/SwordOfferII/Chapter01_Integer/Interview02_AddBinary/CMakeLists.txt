aux_source_directory(. AddBinary_Src)
add_executable(SwordOfferII_Interview02_AddBinary ${AddBinary_Src})
target_link_libraries(SwordOfferII_Interview02_AddBinary gtest gtest_main)