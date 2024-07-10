//#include <iostream>
#include <fmt/core.h>
#include <fmt/color.h>

int main(int argc, char *argv[]) {
    fmt::print(fmt::fg(fmt::color::crimson), "{}!", "Hello, World");
    return 0;
}