cmake_minimum_required(VERSION 3.26)
project(sistemaMedicoDeEmergencias)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(sistemaMedicoDeEmergencias
        triage.cpp
        triage.h
        main.cpp
        atencionMedica.h
        atencionMedica.cpp
        salidaDelPaciente.h
        salidaDelPaciente.cpp
)
