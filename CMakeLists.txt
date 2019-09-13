cmake_minimum_required(VERSION 3.14)
project(Hospital)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES Main.cpp Paciente.h Paciente.cpp Pabellones.h Pabellones.cpp
Camas.h Camas.cpp Doctores.h Doctores.cpp Especialidades.h Especialidades.cpp)

add_executable(ProyectoHospitalSierra ${SOURCE_FILES}))
