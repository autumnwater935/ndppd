/*
 * This file is part of ndppd.
 *
 * Copyright (C) 2011-2019  Daniel Adolfsson <daniel@ashen.se>
 *
 * ndppd is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ndppd is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ndppd.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef NDPPD_ADDR_H
#define NDPPD_ADDR_H

#include "ndppd.h"

bool nd_addr_is_multicast(nd_addr_t *addr);
bool nd_addr_is_unicast(nd_addr_t *addr);

const char *nd_aton(nd_addr_t *addr);
bool nd_addr_match(nd_addr_t *first, nd_addr_t *second, int pflen);
bool nd_addr_eq(nd_addr_t *first, nd_addr_t *second);

#endif /* NDPPD_ADDR_H */
