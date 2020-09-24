#ifndef BUU_ITERATOR_H
#define BUU_ITERATOR_H

#include "buu-types.h"

typedef struct BuuIterator BuuIterator;

typedef enum
{
  BUU_UNIT_SIZE_8  = sizeof (uint8_t),
  BUU_UNIT_SIZE_16 = sizeof (uint16_t),
  BUU_UNIT_SIZE_32 = sizeof (uint32_t)  
} BuuUnitSize;

BuuIterator*  buu_iterator_new_for_string  (const void   *array,
                                            BuuUnitSize   unit_size);
BuuIterator*  buu_iterator_new_for_file    (const char   *filename,
                                            BuuUnitSize   unit_size);
BuuIterator*  buu_iterator_new_for_stream  (FILE         *stream,
                                            BuuUnitSize   unit_size);
void          buu_iterator_free            (BuuIterator  *iterator);

BuuUnitSize   buu_iterator_unit_size       (BuuIterator  *iterator)

uint32_t      buu_iterator_increment       (BuuIterator  *iterator);
bool          buu_iterator_position_set    (BuuIterator  *iterator,
                                            uint32_t      position);
uint32_t      buu_iterator_position_get    (BuuIterator  *iterator);
bool          buu_iterator_at_end          (BuuIterator  *iterator);

uint32_t      buu_iterator_value_return    (BuuIterator  *iterator);
bool          buu_iterator_value_copy      (BuuIterator  *iterator,
                                            uint32_t     *unit_value);

#endif /* BUU_ITERATOR_H */
