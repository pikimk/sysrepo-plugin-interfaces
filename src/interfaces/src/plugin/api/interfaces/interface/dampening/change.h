/*
 * telekom / sysrepo-plugin-system
 *
 * This program is made available under the terms of the
 * BSD 3-Clause license which is available at
 * https://opensource.org/licenses/BSD-3-Clause
 *
 * SPDX-FileCopyrightText: 2022 Deutsche Telekom AG
 * SPDX-FileContributor: Sartura Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef INTERFACES_PLUGIN_API_INTERFACES_INTERFACE_DAMPENING_CHANGE_H
#define INTERFACES_PLUGIN_API_INTERFACES_INTERFACE_DAMPENING_CHANGE_H

#include <srpc.h>
#include <utarray.h>

int interfaces_interface_dampening_change_max_suppress_time(void* priv, sr_session_ctx_t* session, const srpc_change_ctx_t* change_ctx);
int interfaces_interface_dampening_change_suppress(void* priv, sr_session_ctx_t* session, const srpc_change_ctx_t* change_ctx);
int interfaces_interface_dampening_change_reuse(void* priv, sr_session_ctx_t* session, const srpc_change_ctx_t* change_ctx);
int interfaces_interface_dampening_change_half_life(void* priv, sr_session_ctx_t* session, const srpc_change_ctx_t* change_ctx);

#endif // INTERFACES_PLUGIN_API_INTERFACES_INTERFACE_DAMPENING_CHANGE_H