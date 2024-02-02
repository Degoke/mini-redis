#pragma once

#include <stdint.h>
#include <stddef.h>

#define container_of(ptr, type, member) ({ \
    const typeof( ((type *)0)->member ) *_mptr = (ptr); \
    (type *)( (char *)_mptr - offsetof(type, member) ); \
    })

enum {
  SER_NIL = 0,
  SER_ERR = 1,
  SER_STR = 2,
  SER_INT = 3,
  SER_DBL = 4,
  SER_ARR = 5,
};

static uint64_t str_hash(uint8_t *data, size_t len) {
  uint32_t h = 0x811C9DC5;

  for (size_t i = 0; i < len; i++) {
    h = (h + data[i]) * 0X0100193;
  }

  return h;
}
