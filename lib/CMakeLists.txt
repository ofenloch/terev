# CMakeLists.txt: CMakeLists.txt for lib of project terev

# create a library called terevlib
add_library( terevlib STATIC 
    ${CMAKE_SOURCE_DIR}/lib/source/mainlib.cpp
    ${CMAKE_SOURCE_DIR}/lib/source/xmlutils.cpp
)

