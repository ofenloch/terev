# CMakeLists.txt: CMakeLists.txt for test of project terev

add_executable(terevtest ${CMAKE_SOURCE_DIR}/test/source/main.cpp)

target_link_libraries(terevtest 
    terevlib
    PocoXML
    PocoFoundation
    m
)

