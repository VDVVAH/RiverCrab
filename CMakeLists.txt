cmake_minimum_required(VERSION 3.10)
project(RiverCrab)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(river_crab )
# find_package(Package | Boost COMPONENTS system | etc) .>^-^<. target_link_libraries(river_crab Package::Need | ${Boost_LIBRARIES})