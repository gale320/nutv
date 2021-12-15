find_package( GTest REQUIRED )
include_directories( ${GTest_INCLUDE_DIRS} )
link_libraries( ${GTest_LIBS} )