set(PROJECTNAME traffic)

set(INC
    include/traffic.h)

set(SRC
    src/main.cpp
    src/traffic.cpp)
    
include_directories(include)

add_executable(${PROJECTNAME} ${INC} ${SRC})
set_property(TARGET ${PROJECTNAME} PROPERTY FOLDER "Problems")
