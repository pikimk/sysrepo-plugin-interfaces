#include "context.hpp"

namespace ietf::ifc {
/**
 * @brief Default constructor.
 *
 * @param sess Plugin session from the plugin init callback.
 *
 */
PluginContext::PluginContext(sysrepo::Session sess)
    : srpc::BasePluginContext(sess)
{
}

/**
 * @brief Default destructor.
 */
PluginContext::~PluginContext() { }
}
