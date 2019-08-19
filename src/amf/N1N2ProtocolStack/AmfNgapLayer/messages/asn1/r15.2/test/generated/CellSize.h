/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_CellSize_H_
#define	_CellSize_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellSize {
	CellSize_verysmall	= 0,
	CellSize_small	= 1,
	CellSize_medium	= 2,
	CellSize_large	= 3
	/*
	 * Enumeration is extensible
	 */
} e_CellSize;

/* CellSize */
typedef long	 CellSize_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CellSize_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CellSize;
extern const asn_INTEGER_specifics_t asn_SPC_CellSize_specs_1;
asn_struct_free_f CellSize_free;
asn_struct_print_f CellSize_print;
asn_constr_check_f CellSize_constraint;
ber_type_decoder_f CellSize_decode_ber;
der_type_encoder_f CellSize_encode_der;
xer_type_decoder_f CellSize_decode_xer;
xer_type_encoder_f CellSize_encode_xer;
oer_type_decoder_f CellSize_decode_oer;
oer_type_encoder_f CellSize_encode_oer;
per_type_decoder_f CellSize_decode_uper;
per_type_encoder_f CellSize_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CellSize_H_ */
#include <asn_internal.h>
