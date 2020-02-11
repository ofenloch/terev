# CMakeLists.txt: CMakeLists.txt for bin of project terev

add_executable(terev ${CMAKE_SOURCE_DIR}/bin/source/main.cpp)

target_link_libraries(terev
    terevlib
    PocoXML
    PocoFoundation
    m
)

