# CMakeLists.txt: CMakeLists.txt for bin of project terev

add_executable(terevbin ${CMAKE_SOURCE_DIR}/bin/source/main.cpp)

target_link_libraries(terevbin terevlib)

