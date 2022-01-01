include_directories(${MyProject_SOURCE_DIR}/src/includes)

add_library(libs
	Book.cpp
)
target_include_directories(
	libs INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
	)