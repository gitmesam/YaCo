//  Copyright (C) 2017 The YaCo Authors
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include "YaTypes.hpp"

namespace hash
{
    YaToolObjectId  hash_binary         ();
    YaToolObjectId  hash_segment        (uint64_t ea);
    YaToolObjectId  hash_segment_chunk  (uint64_t ea);
    YaToolObjectId  hash_enum           (const const_string_ref& name);
    YaToolObjectId  hash_enum_member    (YaToolObjectId parent, const const_string_ref& name);
    YaToolObjectId  hash_struc          (const const_string_ref& id);
    YaToolObjectId  hash_local_type     (const const_string_ref& id);
    YaToolObjectId  hash_stack          (uint64_t ea);
    YaToolObjectId  hash_member         (YaToolObjectId parent, uint64_t offset);
    YaToolObjectId  hash_function       (uint64_t ea);
    YaToolObjectId  hash_ea             (uint64_t ea);
    YaToolObjectId  hash_reference      (uint64_t ea, uint64_t base);
};