
#include "Binding_pch.h"


using namespace {{api}};


namespace {{binding}}
{


{{#currentFunctionGroup.items}}{{#item}}Function<Binding, {{>partials/general_type}}{{^params.empty}}, {{>partials/general_paramSignature}}{{/params.empty}}> Binding::{{identifierNoGl}}("{{identifier}}");
{{/item}}{{/currentFunctionGroup.items}}


} // namespace {{binding}}
