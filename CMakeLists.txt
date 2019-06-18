cmake_minimum_required (VERSION 3.11)
set(CMAKE_CXX_STANDARD 17)
SET (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ldl -lpthread")
project(app)

include_directories(lib/StanfordCPPLib)
file(GLOB stanford_files
        "lib/StanfordCPPLib/graphics/*.h"
        "lib/StanfordCPPLib/graphics/*.cpp"
        "lib/StanfordCPPLib/util/*.h"
        "lib/StanfordCPPLib/util/*.cpp"
        "lib/StanfordCPPLib/system/*.h"
        "lib/StanfordCPPLib/system/*.cpp"
        "lib/StanfordCPPLib/collections/*.h"
        "lib/StanfordCPPLib/collections/*.cpp"
        "lib/StanfordCPPLib/private/*.h"
        "lib/StanfordCPPLib/private/*.cpp"
        "lib/StanfordCPPLib/io/*.h"
        "lib/StanfordCPPLib/io/*.cpp"
        )
add_library(stanford ${stanford_files})

set(app_SOURCES src/hello.cpp)
set(example1 src/ref1.cpp)
set(example2 src/ref2.cpp)

link_libraries(stanford)
add_executable(app ${app_SOURCES})
add_executable(main main.cpp)
add_executable(reference_semantic1 ${example1})
add_executable(reference_semantic2 ${example2})

target_link_libraries(main ${CMAKE_DL_LIBS})
target_link_libraries(app ${CMAKE_DL_LIBS})
target_link_libraries(reference_semantic1 ${CMAKE_DL_LIBS})