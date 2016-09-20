/* bxtools - Tools for analyzing 10X genomics data
 * Copyright 2016 Jeremiah Wala
 * Written by Jeremiah Wala (jwala@broadinstitute.org)
 * Released under the MIT license
 */

#include <iostream>
#include <bxsplit.h>

static const char *USAGE_MESSAGE =
"Program: bxtools \n"
"Contact: Jeremiah Wala [ jwala@broadinstitute.org ]\n"
"Usage: snowman <command> [options]\n\n"
"Commands:\n"
"           split          Split a BAM into multiple BAMs, one per BX tag\n"
"\nReport bugs to jwala@broadinstitute.org \n\n";

int main(int argc, char** argv) {

  if (argc <= 1) {
    std::cerr << USAGE_MESSAGE;
    return 0;
  } else {
    std::string command(argv[1]);
    if (command == "help" || command == "--help") {
      std::cerr << USAGE_MESSAGE;
      return 0;
    } else if (command == "split") {
      runSplit(argc -1, argv + 1);
    }
    else {
      std::cerr << USAGE_MESSAGE;
      return 0;
    }
  } 

  return 0;

}
