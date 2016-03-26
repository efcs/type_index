//
// Copyright Antony Polukhin, 2012-2015.
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <iostream>

// This cpp file:
// * tests BOOST_TYPE_INDEX_CTTI_USER_DEFINED_PARSING macro
// * outputs full ctti name so that TypeIndex library could be adjust to new compiler without requesting regression tester's help
#define BOOST_TYPE_INDEX_CTTI_USER_DEFINED_PARSING (0,0,false,"",0)
#include <boost/type_index/ctti_type_index.hpp>

namespace user_defined_namespace {
    class user_defined_class {};
}

int main()
{
    using namespace boost::typeindex;

    std::cout << "int: "
        << ctti_type_index::type_id<int>() << '\n';

    std::cout << "double: "
        << ctti_type_index::type_id<double>() << '\n';

    std::cout << "user_defined_namespace::user_defined_class: "
        << ctti_type_index::type_id<user_defined_namespace::user_defined_class>() << '\n';


    return 0;
}

