#include "logger.h"

int foo() {
  TRACE();
  INFO("This is an info message");
  WARN("This is a warning message");
  ERROR("This is an error message");
  DEBUG("This is a debug message");
  return 0;
}

int main() {
  // This is a usage example of the logger
  INFO("Before calling foo");
  foo();
  INFO("After calling foo, now back to main");
  return 0;
}