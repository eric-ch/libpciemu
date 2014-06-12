/*
 * Copyright (c) 2013 Citrix Systems, Inc.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef LIBPCIEMU_COMPILER_H_
# define LIBPCIEMU_COMPILER_H_

# include "config.h"

# if HAVE_VISIBILITY
#  define EXTERNAL __attribute__ ((__visibility__("default")))
#  define INTERNAL __attribute__ ((__visibility__("hidden")))
# else
#  define EXTERNAL
#  define INTERNAL
# endif

#endif /* !LIBPCIEMU_COMPILER_H_ */
