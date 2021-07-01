#include <iostream>
#include <vector>
#include <string>

#include "profile.hpp"

using namespace std;

Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns){
  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
}

string Profile::view_profile(){
  string info = name + " is from " + city;

  cout << info << "\n and " << pronouns << " has the fallowing hobbies:\n" ;
  for (int i=0; i < hobbies.size(); i++){
    cout << hobbies[i] << "\n";
  }
  return info;
}

void Profile::add_hobby(string new_hobby){
  hobbies.push_back(new_hobby);
}

