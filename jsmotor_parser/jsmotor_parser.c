/*
 * A simple example of json string parsing motor with json-c.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <json/json.h>

/*
 * In real life the operations done here are way more complicated, but it's
 * only an example.
 */
struct json_object * find_something(struct json_object *jobj, const char *key) {
  
  return json_object_object_get(jobj, key);

}

int main() {
	struct json_object *jobj, *motor, *action, *mode, *position, *speed, *acc;
	char *str = "{\"motor\": \"1\",\
    \"action\": \"run\",\
    \"mode\": \"0\",\
    \"position\": \"1000\",\
    \"speed\": \"100\",\
    \"acc\": \"100\"}";

	printf("str:\n---\n%s\n---\n\n", str);

	jobj = json_tokener_parse(str);
	printf("jobj from str:\n---\n%s\n---\n", json_object_to_json_string(jobj));

  motor = find_something(jobj, "motor");
  printf("motor=%s\r\n", json_object_get_string(motor));

  action = find_something(jobj, "action");
  printf("action=%s\r\n", json_object_get_string(action));

  mode = find_something(jobj, "mode");
  printf("mode=%s\r\n", json_object_get_string(mode));

  position = find_something(jobj, "position");
  printf("position=%s\r\n", json_object_get_string(position));

  speed = find_something(jobj, "speed");
  printf("speed=%s\r\n", json_object_get_string(speed));

  acc = find_something(jobj, "acc");
  printf("acc=%s\r\n", json_object_get_string(acc));
	return 0;
}
