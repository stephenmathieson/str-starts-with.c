
#include <assert.h>
#include <string.h>
#include "src/str-starts-with.h"

int main(int argc, char **argv) {
  assert(false == str_starts_with("foo", "bar"));
  assert(true == str_starts_with("hello", "hello"));
  assert(true == str_starts_with("hello", "hell"));
  assert(true == str_starts_with("hello", "hel"));
  assert(true == str_starts_with("hello", "he"));
  assert(true == str_starts_with("hello", "h"));
  assert(false == str_starts_with("hello", "ello"));
  assert(false == str_starts_with("hello", "llo"));
  assert(false == str_starts_with("hello", "lo"));
  assert(false == str_starts_with("hello", "o"));
  return 0;
}
