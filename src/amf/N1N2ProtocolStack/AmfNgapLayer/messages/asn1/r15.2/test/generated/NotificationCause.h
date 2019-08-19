/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_NotificationCause_H_
#define	_NotificationCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NotificationCause {
	NotificationCause_fulfilled	= 0,
	NotificationCause_not_fulfilled	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NotificationCause;

/* NotificationCause */
typedef long	 NotificationCause_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NotificationCause_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NotificationCause;
extern const asn_INTEGER_specifics_t asn_SPC_NotificationCause_specs_1;
asn_struct_free_f NotificationCause_free;
asn_struct_print_f NotificationCause_print;
asn_constr_check_f NotificationCause_constraint;
ber_type_decoder_f NotificationCause_decode_ber;
der_type_encoder_f NotificationCause_encode_der;
xer_type_decoder_f NotificationCause_decode_xer;
xer_type_encoder_f NotificationCause_encode_xer;
oer_type_decoder_f NotificationCause_decode_oer;
oer_type_encoder_f NotificationCause_encode_oer;
per_type_decoder_f NotificationCause_decode_uper;
per_type_encoder_f NotificationCause_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NotificationCause_H_ */
#include <asn_internal.h>
