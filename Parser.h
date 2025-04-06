#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include <string>
#include "Location.h"
#include "Route.h"

// Function declarations (not definitions)
std::vector<Location*> locationParser(std::string filename, std::vector<Route*> routes);
std::vector<Route*> routeParser(std::string filename);

#endif  // PARSER_H