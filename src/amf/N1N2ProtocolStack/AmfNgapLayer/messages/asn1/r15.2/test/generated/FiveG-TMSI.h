/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_FiveG_TMSI_H_
#define	_FiveG_TMSI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FiveG-TMSI */
typedef OCTET_STRING_t	 FiveG_TMSI_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_FiveG_TMSI_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_FiveG_TMSI;
asn_struct_free_f FiveG_TMSI_free;
asn_struct_print_f FiveG_TMSI_print;
asn_constr_check_f FiveG_TMSI_constraint;
ber_type_decoder_f FiveG_TMSI_decode_ber;
der_type_encoder_f FiveG_TMSI_encode_der;
xer_type_decoder_f FiveG_TMSI_decode_xer;
xer_type_encoder_f FiveG_TMSI_encode_xer;
oer_type_decoder_f FiveG_TMSI_decode_oer;
oer_type_encoder_f FiveG_TMSI_encode_oer;
per_type_decoder_f FiveG_TMSI_decode_uper;
per_type_encoder_f FiveG_TMSI_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FiveG_TMSI_H_ */
#include <asn_internal.h>
