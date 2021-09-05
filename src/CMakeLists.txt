# C++

enable_language(CXX)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Boost C++ Libraries

find_package(Boost REQUIRED COMPONENTS program_options)

# executable

add_executable(${PROJECT_NAME} Hash.cpp main.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PRIVATE Boost::program_options)

# install

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION $ENV{HOME}/bin)
