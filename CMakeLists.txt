cmake_minimum_required(VERSION 3.6)

option(ENABLE_TESTS
        "Set to OFF|ON (default: OFF) to control building the tests" OFF)

if (ENABLE_TESTS)
    enable_testing()
    message(STATUS "Building project with tests")
elseif ()
    message(STATUS "Building project without tests")
endif ()

add_subdirectory(Proxy)
add_subdirectory(State)
add_subdirectory(Facade)
add_subdirectory(Bridge)
add_subdirectory(Memento)
add_subdirectory(Builder)
add_subdirectory(Command)
add_subdirectory(Visitor)
add_subdirectory(Adapter)
add_subdirectory(Strategy)
add_subdirectory(Observer)
add_subdirectory(Mediator)
add_subdirectory(Iterator)
add_subdirectory(Flyweight)
add_subdirectory(Composite)
add_subdirectory(Decorator)
add_subdirectory(Singleton)
add_subdirectory(Prototype)
add_subdirectory(Interpreter)
add_subdirectory(FactoryMethod)
add_subdirectory(TemplateMethod)
add_subdirectory(AbstractFactory)
add_subdirectory(ChainOfResponsibility)
