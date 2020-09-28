rock_library(find_gem
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(find_gem_bin Main.cpp
    DEPS find_gem)

