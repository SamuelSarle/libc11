/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <ctype.h>

int
isalpha(const int c) {
  return isupper(c) || islower(c); /* in the "C" locale */
}
