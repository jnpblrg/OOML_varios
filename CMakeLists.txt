#Minimum version required for CMake
cmake_minimum_required (VERSION 2.6)
 
#Name of the project
project (OOML_Varios)
 
#Compile in Debug Mode. Allows to make debug.
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -ggdb")
SET(CMAKE_BUILD_TYPE "debugfull" )
 
#Set a variable with the directory path.
SET(OOM_TRUNK_DIR ${CMAKE_CURRENT_SOURCE_DIR})
 
#Set a variable with the path of the application.
SET(EXECUTABLE_OUTPUT_PATH ${OOM_TRUNK_DIR}/bin)
 
#In Linux and Mac OS/X the Path is /usr/include/ooml
INCLUDE_DIRECTORIES("/usr/include/ooml")
 
#Set a variable with the name of the cpp source files of your application
SET(BASE_FILES base.cpp)
SET(SOPORTEGOLF_FILES soportegolf.cpp)
SET(PIEZACUNA_FILES piezacuna.cpp)
SET(PASTILLERO_FILES pastillero.cpp)
SET(ESPEJO_FILES espejo.cpp)
SET(PALOMETABACA_FILES palometa_baca.cpp)
SET(PERCHA_FILES percha.cpp)

#Set a variable with the name of your application
SET(BASE_NAME base)
SET(SOPORTEGOLF_NAME soportegolf)
SET(PIEZACUNA_NAME piezacuna)
SET(PASTILLERO_NAME pastillero)
SET(ESPEJO_NAME espejo)
SET(PALOMETABACA_NAME palometa_baca)
SET(PERCHA_NAME percha)

#Create and link the executable
ADD_EXECUTABLE(${BASE_NAME} ${BASE_FILES})
ADD_EXECUTABLE(${SOPORTEGOLF_NAME} ${SOPORTEGOLF_FILES})
ADD_EXECUTABLE(${PIEZACUNA_NAME} ${PIEZACUNA_FILES})
ADD_EXECUTABLE(${PASTILLERO_NAME} ${PASTILLERO_FILES})
ADD_EXECUTABLE(${ESPEJO_NAME} ${ESPEJO_FILES})
ADD_EXECUTABLE(${PALOMETABACA_NAME} ${PALOMETABACA_FILES})
ADD_EXECUTABLE(${PERCHA_NAME} ${PERCHA_FILES})



TARGET_LINK_LIBRARIES(${BASE_NAME} OOMLCore OOMLComponents OOMLParts)
TARGET_LINK_LIBRARIES(${SOPORTEGOLF_NAME} OOMLCore OOMLComponents OOMLParts)
TARGET_LINK_LIBRARIES(${PIEZACUNA_NAME} OOMLCore OOMLComponents OOMLParts)
TARGET_LINK_LIBRARIES(${PASTILLERO_NAME} OOMLCore OOMLComponents OOMLParts)
TARGET_LINK_LIBRARIES(${ESPEJO_NAME} OOMLCore OOMLComponents OOMLParts)
TARGET_LINK_LIBRARIES(${PALOMETABACA_NAME} OOMLCore OOMLComponents OOMLParts)
TARGET_LINK_LIBRARIES(${PERCHA_NAME} OOMLCore OOMLComponents OOMLParts)


