if (UNIX)

SET ( CMAKE_CXX_FLAGS "-wall -g" )
ELSE(UNIX)
set( CMAKE_CXX_FLAGS "/W3 /ehSC")
ENDIF(UNIX)

add_subdirectory( circuits )
 file (GLOB SRCS *.cpp, *.h)
add_executable(dpgen main.cpp ${SRCS})
