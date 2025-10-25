cmake_minimum_required(VERSION 4.0)
project(mini_projet C)

set(CMAKE_C_STANDARD 11)

add_executable(mini_projet main.c
        pilote.c
        pilote.h
        ecurie.c
        ecurie.h
        grand_prix.c
        grand_prix.h
        classement.c
        classement.h
        initialisation.c
        initialisation.h
        verif.c
        verif.h
        visuel.c
        visuel.h
        structures.h
)
