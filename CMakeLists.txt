cmake_minimum_required(VERSION 2.8)
project(cppTutorials)
file( GLOB SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    [^.]*.cpp
	)
foreach( sourcefile ${SOURCES} )
	message(sourcefile=${sourcefile}\n)
    string( REPLACE ".cpp" "" targetname ${sourcefile} )
    add_executable( ${targetname} ${sourcefile} )
    # Make sure YourLib is linked to each app
    # target_link_libraries( ${targetname} YourLib )
endforeach( sourcefile ${SOURCES} )
