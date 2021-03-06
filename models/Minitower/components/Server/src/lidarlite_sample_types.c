/* This file has been autogenerated by Ivory
 * Compiler version  0.1.0.4
 */
#include "lidarlite_sample_types.h"

void lidarlite_sample_get_le(const uint8_t *n_var0, uint32_t n_var1, struct lidarlite_sample *n_var2)
{
    ibool_get_le(n_var0, n_var1, &n_var2->samplefail);
    ivory_serialize_unpack_float_le(n_var0, (uint32_t) (n_var1 + (uint32_t) 1U), &n_var2->distance);
    time_micros_t_get_le(n_var0, (uint32_t) (n_var1 + (uint32_t) 5U), &n_var2->time);
}

void lidarlite_sample_get_be(const uint8_t *n_var0, uint32_t n_var1, struct lidarlite_sample *n_var2)
{
    ibool_get_be(n_var0, n_var1, &n_var2->samplefail);
    ivory_serialize_unpack_float_be(n_var0, (uint32_t) (n_var1 + (uint32_t) 1U), &n_var2->distance);
    time_micros_t_get_be(n_var0, (uint32_t) (n_var1 + (uint32_t) 5U), &n_var2->time);
}

void lidarlite_sample_set_le(uint8_t *n_var0, uint32_t n_var1, const struct lidarlite_sample *n_var2)
{
    ibool_set_le(n_var0, n_var1, &n_var2->samplefail);
    ivory_serialize_pack_float_le(n_var0, (uint32_t) (n_var1 + (uint32_t) 1U), &n_var2->distance);
    time_micros_t_set_le(n_var0, (uint32_t) (n_var1 + (uint32_t) 5U), &n_var2->time);
}

void lidarlite_sample_set_be(uint8_t *n_var0, uint32_t n_var1, const struct lidarlite_sample *n_var2)
{
    ibool_set_be(n_var0, n_var1, &n_var2->samplefail);
    ivory_serialize_pack_float_be(n_var0, (uint32_t) (n_var1 + (uint32_t) 1U), &n_var2->distance);
    time_micros_t_set_be(n_var0, (uint32_t) (n_var1 + (uint32_t) 5U), &n_var2->time);
}
