
#pragma once


#include <iostream>

#include <{{binding}}-aux/{{binding}}-aux_api.h>


namespace {{binding}}
{


class AbstractVersion;


/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
{{ucbinding}}_AUX_API std::ostream & operator<<(std::ostream & stream, const {{binding}}::AbstractVersion & version);


} // namespace {{binding}}::aux
