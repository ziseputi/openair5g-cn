/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_CauseRadioNetwork_H_
#define	_CauseRadioNetwork_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CauseRadioNetwork {
	CauseRadioNetwork_unspecified	= 0,
	CauseRadioNetwork_txnrelocoverall_expiry	= 1,
	CauseRadioNetwork_successful_handover	= 2,
	CauseRadioNetwork_release_due_to_ngran_generated_reason	= 3,
	CauseRadioNetwork_release_due_to_5gc_generated_reason	= 4,
	CauseRadioNetwork_handover_cancelled	= 5,
	CauseRadioNetwork_partial_handover	= 6,
	CauseRadioNetwork_ho_failure_in_target_5GC_ngran_node_or_target_system	= 7,
	CauseRadioNetwork_ho_target_not_allowed	= 8,
	CauseRadioNetwork_tngrelocoverall_expiry	= 9,
	CauseRadioNetwork_tngrelocprep_expiry	= 10,
	CauseRadioNetwork_cell_not_available	= 11,
	CauseRadioNetwork_unknown_targetID	= 12,
	CauseRadioNetwork_no_radio_resources_available_in_target_cell	= 13,
	CauseRadioNetwork_unknown_local_UE_NGAP_ID	= 14,
	CauseRadioNetwork_inconsistent_remote_UE_NGAP_ID	= 15,
	CauseRadioNetwork_handover_desirable_for_radio_reason	= 16,
	CauseRadioNetwork_time_critical_handover	= 17,
	CauseRadioNetwork_resource_optimisation_handover	= 18,
	CauseRadioNetwork_reduce_load_in_serving_cell	= 19,
	CauseRadioNetwork_user_inactivity	= 20,
	CauseRadioNetwork_radio_connection_with_ue_lost	= 21,
	CauseRadioNetwork_radio_resources_not_available	= 22,
	CauseRadioNetwork_invalid_qos_combination	= 23,
	CauseRadioNetwork_failure_in_radio_interface_procedure	= 24,
	CauseRadioNetwork_interaction_with_other_procedure	= 25,
	CauseRadioNetwork_unknown_PDU_session_ID	= 26,
	CauseRadioNetwork_unkown_qos_flow_ID	= 27,
	CauseRadioNetwork_multiple_PDU_session_ID_instances	= 28,
	CauseRadioNetwork_multiple_qos_flow_ID_instances	= 29,
	CauseRadioNetwork_encryption_and_or_integrity_protection_algorithms_not_supported	= 30,
	CauseRadioNetwork_ng_intra_system_handover_triggered	= 31,
	CauseRadioNetwork_ng_inter_system_handover_triggered	= 32,
	CauseRadioNetwork_xn_handover_triggered	= 33,
	CauseRadioNetwork_not_supported_5QI_value	= 34,
	CauseRadioNetwork_ue_context_transfer	= 35,
	CauseRadioNetwork_ims_voice_eps_fallback_or_rat_fallback_triggered	= 36,
	CauseRadioNetwork_up_integrity_protection_not_possible	= 37,
	CauseRadioNetwork_up_confidentiality_protection_not_possible	= 38,
	CauseRadioNetwork_slice_not_supported	= 39,
	CauseRadioNetwork_ue_in_rrc_inactive_state_not_reachable	= 40,
	CauseRadioNetwork_redirection	= 41,
	CauseRadioNetwork_resources_not_available_for_the_slice	= 42,
	CauseRadioNetwork_ue_max_integrity_protected_data_rate_reason	= 43,
	CauseRadioNetwork_release_due_to_cn_detected_mobility	= 44
	/*
	 * Enumeration is extensible
	 */
} e_CauseRadioNetwork;

/* CauseRadioNetwork */
typedef long	 CauseRadioNetwork_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CauseRadioNetwork_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CauseRadioNetwork;
extern const asn_INTEGER_specifics_t asn_SPC_CauseRadioNetwork_specs_1;
asn_struct_free_f CauseRadioNetwork_free;
asn_struct_print_f CauseRadioNetwork_print;
asn_constr_check_f CauseRadioNetwork_constraint;
ber_type_decoder_f CauseRadioNetwork_decode_ber;
der_type_encoder_f CauseRadioNetwork_encode_der;
xer_type_decoder_f CauseRadioNetwork_decode_xer;
xer_type_encoder_f CauseRadioNetwork_encode_xer;
oer_type_decoder_f CauseRadioNetwork_decode_oer;
oer_type_encoder_f CauseRadioNetwork_encode_oer;
per_type_decoder_f CauseRadioNetwork_decode_uper;
per_type_encoder_f CauseRadioNetwork_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CauseRadioNetwork_H_ */
#include <asn_internal.h>