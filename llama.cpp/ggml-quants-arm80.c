#ifdef __aarch64__
#define quantize_row_q4_0_ref quantize_row_q4_0_ref_arm80
#define quantize_row_q4_1_ref quantize_row_q4_1_ref_arm80
#define quantize_row_q5_0_ref quantize_row_q5_0_ref_arm80
#define quantize_row_q5_1_ref quantize_row_q5_1_ref_arm80
#define quantize_row_q8_0_ref quantize_row_q8_0_ref_arm80
#define quantize_row_q8_1_ref quantize_row_q8_1_ref_arm80
#define quantize_row_q2_K_ref quantize_row_q2_K_ref_arm80
#define quantize_row_q3_K_ref quantize_row_q3_K_ref_arm80
#define quantize_row_q4_K_ref quantize_row_q4_K_ref_arm80
#define quantize_row_q5_K_ref quantize_row_q5_K_ref_arm80
#define quantize_row_q6_K_ref quantize_row_q6_K_ref_arm80
#define quantize_row_q8_K_ref quantize_row_q8_K_ref_arm80
#define quantize_row_iq3_xxs_ref quantize_row_iq3_xxs_ref_arm80
#define quantize_row_iq4_nl_ref quantize_row_iq4_nl_ref_arm80
#define quantize_row_iq4_xs_ref quantize_row_iq4_xs_ref_arm80
#define quantize_row_iq3_s_ref quantize_row_iq3_s_ref_arm80
#define quantize_row_iq2_s_ref quantize_row_iq2_s_ref_arm80
#define quantize_row_q4_0 quantize_row_q4_0_arm80
#define quantize_row_q4_1 quantize_row_q4_1_arm80
#define quantize_row_q5_0 quantize_row_q5_0_arm80
#define quantize_row_q5_1 quantize_row_q5_1_arm80
#define quantize_row_q8_0 quantize_row_q8_0_arm80
#define quantize_row_q8_1 quantize_row_q8_1_arm80
#define quantize_row_q2_K quantize_row_q2_K_arm80
#define quantize_row_q3_K quantize_row_q3_K_arm80
#define quantize_row_q4_K quantize_row_q4_K_arm80
#define quantize_row_q5_K quantize_row_q5_K_arm80
#define quantize_row_q6_K quantize_row_q6_K_arm80
#define quantize_row_q8_K quantize_row_q8_K_arm80
#define quantize_row_iq3_xxs quantize_row_iq3_xxs_arm80
#define quantize_row_iq4_nl quantize_row_iq4_nl_arm80
#define quantize_row_iq4_xs quantize_row_iq4_xs_arm80
#define quantize_row_iq3_s quantize_row_iq3_s_arm80
#define quantize_row_iq2_s quantize_row_iq2_s_arm80
#define dequantize_row_q4_0 dequantize_row_q4_0_arm80
#define dequantize_row_q4_1 dequantize_row_q4_1_arm80
#define dequantize_row_q5_0 dequantize_row_q5_0_arm80
#define dequantize_row_q5_1 dequantize_row_q5_1_arm80
#define dequantize_row_q8_0 dequantize_row_q8_0_arm80
#define dequantize_row_q2_K dequantize_row_q2_K_arm80
#define dequantize_row_q3_K dequantize_row_q3_K_arm80
#define dequantize_row_q4_K dequantize_row_q4_K_arm80
#define dequantize_row_q5_K dequantize_row_q5_K_arm80
#define dequantize_row_q6_K dequantize_row_q6_K_arm80
#define dequantize_row_q8_K dequantize_row_q8_K_arm80
#define dequantize_row_iq2_xxs dequantize_row_iq2_xxs_arm80
#define dequantize_row_iq2_xs dequantize_row_iq2_xs_arm80
#define dequantize_row_iq2_s dequantize_row_iq2_s_arm80
#define dequantize_row_iq3_xxs dequantize_row_iq3_xxs_arm80
#define dequantize_row_iq1_s dequantize_row_iq1_s_arm80
#define dequantize_row_iq1_m dequantize_row_iq1_m_arm80
#define dequantize_row_iq4_nl dequantize_row_iq4_nl_arm80
#define dequantize_row_iq4_xs dequantize_row_iq4_xs_arm80
#define dequantize_row_iq3_s dequantize_row_iq3_s_arm80
#define ggml_vec_dot_q4_0_q8_0 ggml_vec_dot_q4_0_q8_0_arm80
#define ggml_vec_dot_q4_1_q8_1 ggml_vec_dot_q4_1_q8_1_arm80
#define ggml_vec_dot_q5_0_q8_0 ggml_vec_dot_q5_0_q8_0_arm80
#define ggml_vec_dot_q5_1_q8_1 ggml_vec_dot_q5_1_q8_1_arm80
#define ggml_vec_dot_q8_0_q8_0 ggml_vec_dot_q8_0_q8_0_arm80
#define ggml_vec_dot_q2_K_q8_K ggml_vec_dot_q2_K_q8_K_arm80
#define ggml_vec_dot_q3_K_q8_K ggml_vec_dot_q3_K_q8_K_arm80
#define ggml_vec_dot_q4_K_q8_K ggml_vec_dot_q4_K_q8_K_arm80
#define ggml_vec_dot_q5_K_q8_K ggml_vec_dot_q5_K_q8_K_arm80
#define ggml_vec_dot_q6_K_q8_K ggml_vec_dot_q6_K_q8_K_arm80
#define ggml_vec_dot_iq2_xxs_q8_K ggml_vec_dot_iq2_xxs_q8_K_arm80
#define ggml_vec_dot_iq2_xs_q8_K ggml_vec_dot_iq2_xs_q8_K_arm80
#define ggml_vec_dot_iq2_s_q8_K ggml_vec_dot_iq2_s_q8_K_arm80
#define ggml_vec_dot_iq3_xxs_q8_K ggml_vec_dot_iq3_xxs_q8_K_arm80
#define ggml_vec_dot_iq1_s_q8_K ggml_vec_dot_iq1_s_q8_K_arm80
#define ggml_vec_dot_iq1_m_q8_K ggml_vec_dot_iq1_m_q8_K_arm80
#define ggml_vec_dot_iq4_nl_q8_0 ggml_vec_dot_iq4_nl_q8_0_arm80
#define ggml_vec_dot_iq4_xs_q8_K ggml_vec_dot_iq4_xs_q8_K_arm80
#define ggml_vec_dot_iq3_s_q8_K ggml_vec_dot_iq3_s_q8_K_arm80
#define quantize_iq2_xxs quantize_iq2_xxs_arm80
#define quantize_iq2_xs quantize_iq2_xs_arm80
#define quantize_iq2_s quantize_iq2_s_arm80
#define quantize_iq3_xxs quantize_iq3_xxs_arm80
#define quantize_iq1_s quantize_iq1_s_arm80
#define quantize_iq1_m quantize_iq1_m_arm80
#define quantize_iq4_nl quantize_iq4_nl_arm80
#define quantize_iq4_xs quantize_iq4_xs_arm80
#define quantize_iq3_s quantize_iq3_s_arm80
#define quantize_q2_K quantize_q2_K_arm80
#define quantize_q3_K quantize_q3_K_arm80
#define quantize_q4_K quantize_q4_K_arm80
#define quantize_q5_K quantize_q5_K_arm80
#define quantize_q6_K quantize_q6_K_arm80
#define quantize_q4_0 quantize_q4_0_arm80
#define quantize_q4_1 quantize_q4_1_arm80
#define quantize_q5_0 quantize_q5_0_arm80
#define quantize_q5_1 quantize_q5_1_arm80
#define quantize_q8_0 quantize_q8_0_arm80
#define iq2xs_init_impl iq2xs_init_impl_arm80
#define iq2xs_free_impl iq2xs_free_impl_arm80
#define iq3xs_init_impl iq3xs_init_impl_arm80
#define iq3xs_free_impl iq3xs_free_impl_arm80
#define ggml_validate_row_data ggml_validate_row_data_arm80
#include "ggml-quants.inc"
#endif // __aarch64__
