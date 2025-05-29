cmake_minimum_required(VERSION 3.20)

# Project configuration
project(Guardian
	VERSION 0.0.0
	DESCRIPTION "File encryption tool"
	LANGUAGES CXX
)

# C++ Standard
set(CMAKE_CXX_STANDARD 11)
Set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find packages
find_package(OpenSSL REQUIRED)

# Create executable
add_executable(Guardian 
	src/main.cpp
	src/ArgumentParser.cpp
	src/file_handler.cpp
)

# Link libraries
target_link_libraries(Guardian
	PRIVATE
	OpenSSL::SSL
	OpenSSL::Crypto
)

# Include directories
target_include_directories(Guardian PRIVATE src)

