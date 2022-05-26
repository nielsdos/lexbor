/*
 * Copyright (C) 2022 Alexander Borisov
 *
 * Author: Alexander Borisov <borisov@lexbor.com>
 */

/*
 * Caution!
 * This file generated by the script "utils/lexbor/css/names.py"!
 * Do not change this file!
 */


#ifndef LXB_CSS_VALUE_RES_H
#define LXB_CSS_VALUE_RES_H

#include "lexbor/core/shs.h"
#include "lexbor/css/value/const.h"

static const lxb_css_data_t lxb_css_value_data[LXB_CSS_VALUE__LAST_ENTRY] = 
{
    {(lxb_char_t *) "_undef", 6, LXB_CSS_VALUE__UNDEF},
    {(lxb_char_t *) "initial", 7, LXB_CSS_VALUE_INITIAL},
    {(lxb_char_t *) "inherit", 7, LXB_CSS_VALUE_INHERIT},
    {(lxb_char_t *) "unset", 5, LXB_CSS_VALUE_UNSET},
    {(lxb_char_t *) "revert", 6, LXB_CSS_VALUE_REVERT},
    {(lxb_char_t *) "auto", 4, LXB_CSS_VALUE_AUTO},
    {(lxb_char_t *) "min-content", 11, LXB_CSS_VALUE_MIN_CONTENT},
    {(lxb_char_t *) "max-content", 11, LXB_CSS_VALUE_MAX_CONTENT},
    {(lxb_char_t *) "_length", 7, LXB_CSS_VALUE__LENGTH},
    {(lxb_char_t *) "_percentage", 11, LXB_CSS_VALUE__PERCENTAGE}
};

static const lexbor_shs_entry_t lxb_css_value_shs[12] = 
{
    {NULL, NULL, 11, 0}, 
    {"inherit", (void *) LXB_CSS_VALUE_INHERIT, 7, 0}, 
    {"initial", (void *) LXB_CSS_VALUE_INITIAL, 7, 0}, 
    {"unset", (void *) LXB_CSS_VALUE_UNSET, 5, 0}, 
    {"revert", (void *) LXB_CSS_VALUE_REVERT, 6, 1}, 
    {"max-content", (void *) LXB_CSS_VALUE_MAX_CONTENT, 11, 0}, 
    {"_percentage", (void *) LXB_CSS_VALUE__PERCENTAGE, 11, 0}, 
    {"min-content", (void *) LXB_CSS_VALUE_MIN_CONTENT, 11, 5}, 
    {NULL, NULL, 0, 0}, 
    {"auto", (void *) LXB_CSS_VALUE_AUTO, 4, 0}, 
    {NULL, NULL, 0, 0}, 
    {"_length", (void *) LXB_CSS_VALUE__LENGTH, 7, 6}
};


#endif /* LXB_CSS_VALUE_RES_H */
