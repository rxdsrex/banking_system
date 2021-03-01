cmake_minimum_required(VERSION 3.0.0)
project(banking_sytem VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 14)

add_executable(banking_sytem main.cpp source/Account.cpp source/Bank.cpp 
                source/CurrentAccount.cpp source/SavingsAccount.cpp)
include_directories(include)
target_include_directories(banking_sytem PUBLIC include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
