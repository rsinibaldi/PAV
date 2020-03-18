cmake_minimum_required(VERSION 3.15)
project(PAV)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PAV
        DtFecha.cpp
        DtFecha.h
        DtVehiculo.cpp
        DtVehiculo.h
        TipoBici.h
        usuario.cpp
        usuario.h
        viaje.cpp
        viaje.h)
