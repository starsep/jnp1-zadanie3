cmake_minimum_required(VERSION 2.8)
project(jnp_zadanie3)

add_custom_target(example1 COMMAND make example1 -C ${jnp_zadanie3_SOURCE_DIR}
        CLION_EXE_DIR=${PROJECT_BINARY_DIR})
