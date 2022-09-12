#ifndef INTERFACES_PLUGIN_DATA_INTERFACES_INTERFACE_HASH_H
#define INTERFACES_PLUGIN_DATA_INTERFACES_INTERFACE_HASH_H

#include "plugin/types.h"

/*
    Hash table operations
*/

interfaces_interface_hash_element_t* interfaces_interface_hash_new(void);
int interfaces_interface_hash_add_element(interfaces_interface_hash_element_t** hash, interfaces_interface_hash_element_t* new_element);
interfaces_interface_hash_element_t* interfaces_interface_hash_get_element(interfaces_interface_hash_element_t** hash, const char* name);
void interfaces_interface_hash_free(interfaces_interface_hash_element_t** hash);

/*
    Element operations
*/

interfaces_interface_hash_element_t* interfaces_interface_hash_element_new(void);
int interfaces_interface_hash_element_set_name(interfaces_interface_hash_element_t** el, const char* name);
int interfaces_interface_hash_element_set_description(interfaces_interface_hash_element_t** el, const char* description);
int interfaces_interface_hash_element_set_type(interfaces_interface_hash_element_t** el, const char* type);
int interfaces_interface_hash_element_set_enabled(interfaces_interface_hash_element_t** el, uint8_t enabled);
int interfaces_interface_hash_element_set_link_up_down_trap_enable(interfaces_interface_hash_element_t** el, interfaces_interfaces_interface_link_up_down_trap_enable_t link_up_down_trap_enable);
int interfaces_interface_hash_element_set_carrier_delay(interfaces_interface_hash_element_t** el, interfaces_interfaces_interface_carrier_delay_t carrier_delay);
int interfaces_interface_hash_element_set_dampening(interfaces_interface_hash_element_t** el, interfaces_interfaces_interface_dampening_t dampening);
int interfaces_interface_hash_element_set_encapsulation(interfaces_interface_hash_element_t** el, interfaces_interfaces_interface_encapsulation_t encapsulation);
int interfaces_interface_hash_element_set_loopback(interfaces_interface_hash_element_t** el, const char* loopback);
int interfaces_interface_hash_element_set_max_frame_size(interfaces_interface_hash_element_t** el, uint32_t max_frame_size);
int interfaces_interface_hash_element_set_parent_interface(interfaces_interface_hash_element_t** el, const char* parent_interface);
void interfaces_interface_hash_element_free(interfaces_interface_hash_element_t** el);

#endif // INTERFACES_PLUGIN_DATA_INTERFACES_INTERFACE_HASH_H