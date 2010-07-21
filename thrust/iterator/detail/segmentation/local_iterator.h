/*
 *  Copyright 2008-2010 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#pragma once

#include <thrust/range/detail/iterator.h>
#include <thrust/range/detail/value_type.h>
#include <thrust/iterator/detail/segmentation/bucket_iterator.h>

namespace thrust
{

namespace detail
{


// in general, a SegmentedIterator's local_iterator is the iterator
// type of its bucket type
template<typename SegmentedIterator>
  struct local_iterator
    : thrust::experimental::range_iterator<
        typename thrust::iterator_value<
          typename bucket_iterator<SegmentedIterator>::type
        >::type
      >
{};


} // end detail

} // end thrust

