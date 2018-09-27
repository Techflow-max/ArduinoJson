// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2018
// MIT License

#include <ArduinoJson.h>
#include <catch.hpp>

TEST_CASE("JsonVariant from JsonArray") {
  DynamicJsonDocument doc;
  JsonArray arr = doc.to<JsonArray>();
  arr.add(12);
  arr.add(34);

  JsonVariant v = arr;

  REQUIRE(v.is<JsonArray>() == true);
  REQUIRE(v.size() == 2);
  REQUIRE(v[0] == 12);
  REQUIRE(v[1] == 34);
}
