#include <iostream>
#include <string>
#include "profile.hpp"

int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA");

  sam.add_hobby("running");
  sam.add_hobby("coding");


  sam.view_profile();

}