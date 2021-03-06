/*
 * Python object definition of the libfsntfs file attribute flags
 *
 * Copyright (C) 2010-2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _PYFSNTFS_FILE_ATTRIBUTE_FLAGS_H )
#define _PYFSNTFS_FILE_ATTRIBUTE_FLAGS_H

#include <common.h>
#include <types.h>

#include "pyfsntfs_libfsntfs.h"
#include "pyfsntfs_python.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct pyfsntfs_file_attribute_flags pyfsntfs_file_attribute_flags_t;

struct pyfsntfs_file_attribute_flags
{
	/* Python object initialization
	 */
	PyObject_HEAD
};

extern PyTypeObject pyfsntfs_file_attribute_flags_type_object;

int pyfsntfs_file_attribute_flags_init_type(
     PyTypeObject *type_object );

PyObject *pyfsntfs_file_attribute_flags_new(
           void );

int pyfsntfs_file_attribute_flags_init(
     pyfsntfs_file_attribute_flags_t *pyfsntfs_file_attribute_flags );

void pyfsntfs_file_attribute_flags_free(
      pyfsntfs_file_attribute_flags_t *pyfsntfs_file_attribute_flags );

#if defined( __cplusplus )
}
#endif

#endif

