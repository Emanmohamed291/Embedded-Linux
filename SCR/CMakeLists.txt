#set( sources_lib PORT_Config.c DIO_Config.c PORT.c DIO.c)
#target_include_directories(dio INTERFACE INCLUDE)
add_library(operation SHARED  ${sources_lib} add.c sub.c div.c mult.c ../INCLUDE/add.h ../INCLUDE/sub.h ../INCLUDE/mult.h ../INCLUDE/diiv.h)

