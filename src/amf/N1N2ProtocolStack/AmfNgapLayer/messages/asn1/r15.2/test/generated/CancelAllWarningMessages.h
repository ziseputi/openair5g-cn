/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_CancelAllWarningMessages_H_
#define	_CancelAllWarningMessages_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CancelAllWarningMessages {
	CancelAllWarningMessages_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_CancelAllWarningMessages;

/* CancelAllWarningMessages */
typedef long	 CancelAllWarningMessages_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CancelAllWarningMessages;
asn_struct_free_f CancelAllWarningMessages_free;
asn_struct_print_f CancelAllWarningMessages_print;
asn_constr_check_f CancelAllWarningMessages_constraint;
ber_type_decoder_f CancelAllWarningMessages_decode_ber;
der_type_encoder_f CancelAllWarningMessages_encode_der;
xer_type_decoder_f CancelAllWarningMessages_decode_xer;
xer_type_encoder_f CancelAllWarningMessages_encode_xer;
oer_type_decoder_f CancelAllWarningMessages_decode_oer;
oer_type_encoder_f CancelAllWarningMessages_encode_oer;
per_type_decoder_f CancelAllWarningMessages_decode_uper;
per_type_encoder_f CancelAllWarningMessages_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CancelAllWarningMessages_H_ */
#include <asn_internal.h>
