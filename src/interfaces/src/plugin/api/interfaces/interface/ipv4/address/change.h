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
#ifndef INTERFACES_PLUGIN_API_INTERFACES_INTERFACE_IPV4_ADDRESS_CHANGE_H
#define INTERFACES_PLUGIN_API_INTERFACES_INTERFACE_IPV4_ADDRESS_CHANGE_H

#include <srpc.h>
#include <utarray.h>

int interfaces_interface_ipv4_address_change_netmask_init(void* priv);
int interfaces_interface_ipv4_address_change_netmask(void* priv, sr_session_ctx_t* session, const srpc_change_ctx_t* change_ctx);
void interfaces_interface_ipv4_address_change_netmask_free(void* priv);

int interfaces_interface_ipv4_address_change_prefix_length_init(void* priv);
int interfaces_interface_ipv4_address_change_prefix_length(void* priv, sr_session_ctx_t* session, const srpc_change_ctx_t* change_ctx);
void interfaces_interface_ipv4_address_change_prefix_length_free(void* priv);

int interfaces_interface_ipv4_address_change_ip_init(void* priv);
int interfaces_interface_ipv4_address_change_ip(void* priv, sr_session_ctx_t* session, const srpc_change_ctx_t* change_ctx);
void interfaces_interface_ipv4_address_change_ip_free(void* priv);

#endif // INTERFACES_PLUGIN_API_INTERFACES_INTERFACE_IPV4_ADDRESS_CHANGE_H