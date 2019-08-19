/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_AMFRegionID_H_
#define	_AMFRegionID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AMFRegionID */
typedef BIT_STRING_t	 AMFRegionID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AMFRegionID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AMFRegionID;
asn_struct_free_f AMFRegionID_free;
asn_struct_print_f AMFRegionID_print;
asn_constr_check_f AMFRegionID_constraint;
ber_type_decoder_f AMFRegionID_decode_ber;
der_type_encoder_f AMFRegionID_encode_der;
xer_type_decoder_f AMFRegionID_decode_xer;
xer_type_encoder_f AMFRegionID_encode_xer;
oer_type_decoder_f AMFRegionID_decode_oer;
oer_type_encoder_f AMFRegionID_encode_oer;
per_type_decoder_f AMFRegionID_decode_uper;
per_type_encoder_f AMFRegionID_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AMFRegionID_H_ */
#include <asn_internal.h>
