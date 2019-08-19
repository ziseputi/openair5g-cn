/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_MICOModeIndication_H_
#define	_MICOModeIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MICOModeIndication {
	MICOModeIndication_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_MICOModeIndication;

/* MICOModeIndication */
typedef long	 MICOModeIndication_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MICOModeIndication_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MICOModeIndication;
extern const asn_INTEGER_specifics_t asn_SPC_MICOModeIndication_specs_1;
asn_struct_free_f MICOModeIndication_free;
asn_struct_print_f MICOModeIndication_print;
asn_constr_check_f MICOModeIndication_constraint;
ber_type_decoder_f MICOModeIndication_decode_ber;
der_type_encoder_f MICOModeIndication_encode_der;
xer_type_decoder_f MICOModeIndication_decode_xer;
xer_type_encoder_f MICOModeIndication_encode_xer;
oer_type_decoder_f MICOModeIndication_decode_oer;
oer_type_encoder_f MICOModeIndication_encode_oer;
per_type_decoder_f MICOModeIndication_decode_uper;
per_type_encoder_f MICOModeIndication_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MICOModeIndication_H_ */
#include <asn_internal.h>
