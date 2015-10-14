
// NOTE: this is intended to work irrespective of a GL_BY_STRINGS definition.

#include "Meta_Maps.h"

#include <string>
#include <unordered_map>
#include <array>

#include <glbinding/gl/extension.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_0 
{
    { "GL_3DFX_multisample", GLextension::GL_3DFX_multisample },
    { "GL_3DFX_tbuffer", GLextension::GL_3DFX_tbuffer },
    { "GL_3DFX_texture_compression_FXT1", GLextension::GL_3DFX_texture_compression_FXT1 }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_A 
{
    { "GL_AMD_blend_minmax_factor", GLextension::GL_AMD_blend_minmax_factor },
    { "GL_AMD_conservative_depth", GLextension::GL_AMD_conservative_depth },
    { "GL_AMD_debug_output", GLextension::GL_AMD_debug_output },
    { "GL_AMD_depth_clamp_separate", GLextension::GL_AMD_depth_clamp_separate },
    { "GL_AMD_draw_buffers_blend", GLextension::GL_AMD_draw_buffers_blend },
    { "GL_AMD_gcn_shader", GLextension::GL_AMD_gcn_shader },
    { "GL_AMD_gpu_shader_int64", GLextension::GL_AMD_gpu_shader_int64 },
    { "GL_AMD_interleaved_elements", GLextension::GL_AMD_interleaved_elements },
    { "GL_AMD_multi_draw_indirect", GLextension::GL_AMD_multi_draw_indirect },
    { "GL_AMD_name_gen_delete", GLextension::GL_AMD_name_gen_delete },
    { "GL_AMD_occlusion_query_event", GLextension::GL_AMD_occlusion_query_event },
    { "GL_AMD_performance_monitor", GLextension::GL_AMD_performance_monitor },
    { "GL_AMD_pinned_memory", GLextension::GL_AMD_pinned_memory },
    { "GL_AMD_query_buffer_object", GLextension::GL_AMD_query_buffer_object },
    { "GL_AMD_sample_positions", GLextension::GL_AMD_sample_positions },
    { "GL_AMD_seamless_cubemap_per_texture", GLextension::GL_AMD_seamless_cubemap_per_texture },
    { "GL_AMD_shader_atomic_counter_ops", GLextension::GL_AMD_shader_atomic_counter_ops },
    { "GL_AMD_shader_stencil_export", GLextension::GL_AMD_shader_stencil_export },
    { "GL_AMD_shader_trinary_minmax", GLextension::GL_AMD_shader_trinary_minmax },
    { "GL_AMD_sparse_texture", GLextension::GL_AMD_sparse_texture },
    { "GL_AMD_stencil_operation_extended", GLextension::GL_AMD_stencil_operation_extended },
    { "GL_AMD_texture_texture4", GLextension::GL_AMD_texture_texture4 },
    { "GL_AMD_transform_feedback3_lines_triangles", GLextension::GL_AMD_transform_feedback3_lines_triangles },
    { "GL_AMD_transform_feedback4", GLextension::GL_AMD_transform_feedback4 },
    { "GL_AMD_vertex_shader_layer", GLextension::GL_AMD_vertex_shader_layer },
    { "GL_AMD_vertex_shader_tessellator", GLextension::GL_AMD_vertex_shader_tessellator },
    { "GL_AMD_vertex_shader_viewport_index", GLextension::GL_AMD_vertex_shader_viewport_index },
    { "GL_APPLE_aux_depth_stencil", GLextension::GL_APPLE_aux_depth_stencil },
    { "GL_APPLE_client_storage", GLextension::GL_APPLE_client_storage },
    { "GL_APPLE_element_array", GLextension::GL_APPLE_element_array },
    { "GL_APPLE_fence", GLextension::GL_APPLE_fence },
    { "GL_APPLE_float_pixels", GLextension::GL_APPLE_float_pixels },
    { "GL_APPLE_flush_buffer_range", GLextension::GL_APPLE_flush_buffer_range },
    { "GL_APPLE_object_purgeable", GLextension::GL_APPLE_object_purgeable },
    { "GL_APPLE_rgb_422", GLextension::GL_APPLE_rgb_422 },
    { "GL_APPLE_row_bytes", GLextension::GL_APPLE_row_bytes },
    { "GL_APPLE_specular_vector", GLextension::GL_APPLE_specular_vector },
    { "GL_APPLE_texture_range", GLextension::GL_APPLE_texture_range },
    { "GL_APPLE_transform_hint", GLextension::GL_APPLE_transform_hint },
    { "GL_APPLE_vertex_array_object", GLextension::GL_APPLE_vertex_array_object },
    { "GL_APPLE_vertex_array_range", GLextension::GL_APPLE_vertex_array_range },
    { "GL_APPLE_vertex_program_evaluators", GLextension::GL_APPLE_vertex_program_evaluators },
    { "GL_APPLE_ycbcr_422", GLextension::GL_APPLE_ycbcr_422 },
    { "GL_ARB_ES2_compatibility", GLextension::GL_ARB_ES2_compatibility },
    { "GL_ARB_ES3_1_compatibility", GLextension::GL_ARB_ES3_1_compatibility },
    { "GL_ARB_ES3_2_compatibility", GLextension::GL_ARB_ES3_2_compatibility },
    { "GL_ARB_ES3_compatibility", GLextension::GL_ARB_ES3_compatibility },
    { "GL_ARB_arrays_of_arrays", GLextension::GL_ARB_arrays_of_arrays },
    { "GL_ARB_base_instance", GLextension::GL_ARB_base_instance },
    { "GL_ARB_bindless_texture", GLextension::GL_ARB_bindless_texture },
    { "GL_ARB_blend_func_extended", GLextension::GL_ARB_blend_func_extended },
    { "GL_ARB_buffer_storage", GLextension::GL_ARB_buffer_storage },
    { "GL_ARB_cl_event", GLextension::GL_ARB_cl_event },
    { "GL_ARB_clear_buffer_object", GLextension::GL_ARB_clear_buffer_object },
    { "GL_ARB_clear_texture", GLextension::GL_ARB_clear_texture },
    { "GL_ARB_clip_control", GLextension::GL_ARB_clip_control },
    { "GL_ARB_color_buffer_float", GLextension::GL_ARB_color_buffer_float },
    { "GL_ARB_compatibility", GLextension::GL_ARB_compatibility },
    { "GL_ARB_compressed_texture_pixel_storage", GLextension::GL_ARB_compressed_texture_pixel_storage },
    { "GL_ARB_compute_shader", GLextension::GL_ARB_compute_shader },
    { "GL_ARB_compute_variable_group_size", GLextension::GL_ARB_compute_variable_group_size },
    { "GL_ARB_conditional_render_inverted", GLextension::GL_ARB_conditional_render_inverted },
    { "GL_ARB_conservative_depth", GLextension::GL_ARB_conservative_depth },
    { "GL_ARB_copy_buffer", GLextension::GL_ARB_copy_buffer },
    { "GL_ARB_copy_image", GLextension::GL_ARB_copy_image },
    { "GL_ARB_cull_distance", GLextension::GL_ARB_cull_distance },
    { "GL_ARB_debug_output", GLextension::GL_ARB_debug_output },
    { "GL_ARB_depth_buffer_float", GLextension::GL_ARB_depth_buffer_float },
    { "GL_ARB_depth_clamp", GLextension::GL_ARB_depth_clamp },
    { "GL_ARB_depth_texture", GLextension::GL_ARB_depth_texture },
    { "GL_ARB_derivative_control", GLextension::GL_ARB_derivative_control },
    { "GL_ARB_direct_state_access", GLextension::GL_ARB_direct_state_access },
    { "GL_ARB_draw_buffers", GLextension::GL_ARB_draw_buffers },
    { "GL_ARB_draw_buffers_blend", GLextension::GL_ARB_draw_buffers_blend },
    { "GL_ARB_draw_elements_base_vertex", GLextension::GL_ARB_draw_elements_base_vertex },
    { "GL_ARB_draw_indirect", GLextension::GL_ARB_draw_indirect },
    { "GL_ARB_draw_instanced", GLextension::GL_ARB_draw_instanced },
    { "GL_ARB_enhanced_layouts", GLextension::GL_ARB_enhanced_layouts },
    { "GL_ARB_explicit_attrib_location", GLextension::GL_ARB_explicit_attrib_location },
    { "GL_ARB_explicit_uniform_location", GLextension::GL_ARB_explicit_uniform_location },
    { "GL_ARB_fragment_coord_conventions", GLextension::GL_ARB_fragment_coord_conventions },
    { "GL_ARB_fragment_layer_viewport", GLextension::GL_ARB_fragment_layer_viewport },
    { "GL_ARB_fragment_program", GLextension::GL_ARB_fragment_program },
    { "GL_ARB_fragment_program_shadow", GLextension::GL_ARB_fragment_program_shadow },
    { "GL_ARB_fragment_shader", GLextension::GL_ARB_fragment_shader },
    { "GL_ARB_fragment_shader_interlock", GLextension::GL_ARB_fragment_shader_interlock },
    { "GL_ARB_framebuffer_no_attachments", GLextension::GL_ARB_framebuffer_no_attachments },
    { "GL_ARB_framebuffer_object", GLextension::GL_ARB_framebuffer_object },
    { "GL_ARB_framebuffer_sRGB", GLextension::GL_ARB_framebuffer_sRGB },
    { "GL_ARB_geometry_shader4", GLextension::GL_ARB_geometry_shader4 },
    { "GL_ARB_get_program_binary", GLextension::GL_ARB_get_program_binary },
    { "GL_ARB_get_texture_sub_image", GLextension::GL_ARB_get_texture_sub_image },
    { "GL_ARB_gpu_shader5", GLextension::GL_ARB_gpu_shader5 },
    { "GL_ARB_gpu_shader_fp64", GLextension::GL_ARB_gpu_shader_fp64 },
    { "GL_ARB_gpu_shader_int64", GLextension::GL_ARB_gpu_shader_int64 },
    { "GL_ARB_half_float_pixel", GLextension::GL_ARB_half_float_pixel },
    { "GL_ARB_half_float_vertex", GLextension::GL_ARB_half_float_vertex },
    { "GL_ARB_imaging", GLextension::GL_ARB_imaging },
    { "GL_ARB_indirect_parameters", GLextension::GL_ARB_indirect_parameters },
    { "GL_ARB_instanced_arrays", GLextension::GL_ARB_instanced_arrays },
    { "GL_ARB_internalformat_query", GLextension::GL_ARB_internalformat_query },
    { "GL_ARB_internalformat_query2", GLextension::GL_ARB_internalformat_query2 },
    { "GL_ARB_invalidate_subdata", GLextension::GL_ARB_invalidate_subdata },
    { "GL_ARB_map_buffer_alignment", GLextension::GL_ARB_map_buffer_alignment },
    { "GL_ARB_map_buffer_range", GLextension::GL_ARB_map_buffer_range },
    { "GL_ARB_matrix_palette", GLextension::GL_ARB_matrix_palette },
    { "GL_ARB_multi_bind", GLextension::GL_ARB_multi_bind },
    { "GL_ARB_multi_draw_indirect", GLextension::GL_ARB_multi_draw_indirect },
    { "GL_ARB_multisample", GLextension::GL_ARB_multisample },
    { "GL_ARB_multitexture", GLextension::GL_ARB_multitexture },
    { "GL_ARB_occlusion_query", GLextension::GL_ARB_occlusion_query },
    { "GL_ARB_occlusion_query2", GLextension::GL_ARB_occlusion_query2 },
    { "GL_ARB_parallel_shader_compile", GLextension::GL_ARB_parallel_shader_compile },
    { "GL_ARB_pipeline_statistics_query", GLextension::GL_ARB_pipeline_statistics_query },
    { "GL_ARB_pixel_buffer_object", GLextension::GL_ARB_pixel_buffer_object },
    { "GL_ARB_point_parameters", GLextension::GL_ARB_point_parameters },
    { "GL_ARB_point_sprite", GLextension::GL_ARB_point_sprite },
    { "GL_ARB_post_depth_coverage", GLextension::GL_ARB_post_depth_coverage },
    { "GL_ARB_program_interface_query", GLextension::GL_ARB_program_interface_query },
    { "GL_ARB_provoking_vertex", GLextension::GL_ARB_provoking_vertex },
    { "GL_ARB_query_buffer_object", GLextension::GL_ARB_query_buffer_object },
    { "GL_ARB_robust_buffer_access_behavior", GLextension::GL_ARB_robust_buffer_access_behavior },
    { "GL_ARB_robustness", GLextension::GL_ARB_robustness },
    { "GL_ARB_robustness_isolation", GLextension::GL_ARB_robustness_isolation },
    { "GL_ARB_sample_locations", GLextension::GL_ARB_sample_locations },
    { "GL_ARB_sample_shading", GLextension::GL_ARB_sample_shading },
    { "GL_ARB_sampler_objects", GLextension::GL_ARB_sampler_objects },
    { "GL_ARB_seamless_cube_map", GLextension::GL_ARB_seamless_cube_map },
    { "GL_ARB_seamless_cubemap_per_texture", GLextension::GL_ARB_seamless_cubemap_per_texture },
    { "GL_ARB_separate_shader_objects", GLextension::GL_ARB_separate_shader_objects },
    { "GL_ARB_shader_atomic_counter_ops", GLextension::GL_ARB_shader_atomic_counter_ops },
    { "GL_ARB_shader_atomic_counters", GLextension::GL_ARB_shader_atomic_counters },
    { "GL_ARB_shader_ballot", GLextension::GL_ARB_shader_ballot },
    { "GL_ARB_shader_bit_encoding", GLextension::GL_ARB_shader_bit_encoding },
    { "GL_ARB_shader_clock", GLextension::GL_ARB_shader_clock },
    { "GL_ARB_shader_draw_parameters", GLextension::GL_ARB_shader_draw_parameters },
    { "GL_ARB_shader_group_vote", GLextension::GL_ARB_shader_group_vote },
    { "GL_ARB_shader_image_load_store", GLextension::GL_ARB_shader_image_load_store },
    { "GL_ARB_shader_image_size", GLextension::GL_ARB_shader_image_size },
    { "GL_ARB_shader_objects", GLextension::GL_ARB_shader_objects },
    { "GL_ARB_shader_precision", GLextension::GL_ARB_shader_precision },
    { "GL_ARB_shader_stencil_export", GLextension::GL_ARB_shader_stencil_export },
    { "GL_ARB_shader_storage_buffer_object", GLextension::GL_ARB_shader_storage_buffer_object },
    { "GL_ARB_shader_subroutine", GLextension::GL_ARB_shader_subroutine },
    { "GL_ARB_shader_texture_image_samples", GLextension::GL_ARB_shader_texture_image_samples },
    { "GL_ARB_shader_texture_lod", GLextension::GL_ARB_shader_texture_lod },
    { "GL_ARB_shader_viewport_layer_array", GLextension::GL_ARB_shader_viewport_layer_array },
    { "GL_ARB_shading_language_100", GLextension::GL_ARB_shading_language_100 },
    { "GL_ARB_shading_language_420pack", GLextension::GL_ARB_shading_language_420pack },
    { "GL_ARB_shading_language_include", GLextension::GL_ARB_shading_language_include },
    { "GL_ARB_shading_language_packing", GLextension::GL_ARB_shading_language_packing },
    { "GL_ARB_shadow", GLextension::GL_ARB_shadow },
    { "GL_ARB_shadow_ambient", GLextension::GL_ARB_shadow_ambient },
    { "GL_ARB_sparse_buffer", GLextension::GL_ARB_sparse_buffer },
    { "GL_ARB_sparse_texture", GLextension::GL_ARB_sparse_texture },
    { "GL_ARB_sparse_texture2", GLextension::GL_ARB_sparse_texture2 },
    { "GL_ARB_sparse_texture_clamp", GLextension::GL_ARB_sparse_texture_clamp },
    { "GL_ARB_stencil_texturing", GLextension::GL_ARB_stencil_texturing },
    { "GL_ARB_sync", GLextension::GL_ARB_sync },
    { "GL_ARB_tessellation_shader", GLextension::GL_ARB_tessellation_shader },
    { "GL_ARB_texture_barrier", GLextension::GL_ARB_texture_barrier },
    { "GL_ARB_texture_border_clamp", GLextension::GL_ARB_texture_border_clamp },
    { "GL_ARB_texture_buffer_object", GLextension::GL_ARB_texture_buffer_object },
    { "GL_ARB_texture_buffer_object_rgb32", GLextension::GL_ARB_texture_buffer_object_rgb32 },
    { "GL_ARB_texture_buffer_range", GLextension::GL_ARB_texture_buffer_range },
    { "GL_ARB_texture_compression", GLextension::GL_ARB_texture_compression },
    { "GL_ARB_texture_compression_bptc", GLextension::GL_ARB_texture_compression_bptc },
    { "GL_ARB_texture_compression_rgtc", GLextension::GL_ARB_texture_compression_rgtc },
    { "GL_ARB_texture_cube_map", GLextension::GL_ARB_texture_cube_map },
    { "GL_ARB_texture_cube_map_array", GLextension::GL_ARB_texture_cube_map_array },
    { "GL_ARB_texture_env_add", GLextension::GL_ARB_texture_env_add },
    { "GL_ARB_texture_env_combine", GLextension::GL_ARB_texture_env_combine },
    { "GL_ARB_texture_env_crossbar", GLextension::GL_ARB_texture_env_crossbar },
    { "GL_ARB_texture_env_dot3", GLextension::GL_ARB_texture_env_dot3 },
    { "GL_ARB_texture_filter_minmax", GLextension::GL_ARB_texture_filter_minmax },
    { "GL_ARB_texture_float", GLextension::GL_ARB_texture_float },
    { "GL_ARB_texture_gather", GLextension::GL_ARB_texture_gather },
    { "GL_ARB_texture_mirror_clamp_to_edge", GLextension::GL_ARB_texture_mirror_clamp_to_edge },
    { "GL_ARB_texture_mirrored_repeat", GLextension::GL_ARB_texture_mirrored_repeat },
    { "GL_ARB_texture_multisample", GLextension::GL_ARB_texture_multisample },
    { "GL_ARB_texture_non_power_of_two", GLextension::GL_ARB_texture_non_power_of_two },
    { "GL_ARB_texture_query_levels", GLextension::GL_ARB_texture_query_levels },
    { "GL_ARB_texture_query_lod", GLextension::GL_ARB_texture_query_lod },
    { "GL_ARB_texture_rectangle", GLextension::GL_ARB_texture_rectangle },
    { "GL_ARB_texture_rg", GLextension::GL_ARB_texture_rg },
    { "GL_ARB_texture_rgb10_a2ui", GLextension::GL_ARB_texture_rgb10_a2ui },
    { "GL_ARB_texture_stencil8", GLextension::GL_ARB_texture_stencil8 },
    { "GL_ARB_texture_storage", GLextension::GL_ARB_texture_storage },
    { "GL_ARB_texture_storage_multisample", GLextension::GL_ARB_texture_storage_multisample },
    { "GL_ARB_texture_swizzle", GLextension::GL_ARB_texture_swizzle },
    { "GL_ARB_texture_view", GLextension::GL_ARB_texture_view },
    { "GL_ARB_timer_query", GLextension::GL_ARB_timer_query },
    { "GL_ARB_transform_feedback2", GLextension::GL_ARB_transform_feedback2 },
    { "GL_ARB_transform_feedback3", GLextension::GL_ARB_transform_feedback3 },
    { "GL_ARB_transform_feedback_instanced", GLextension::GL_ARB_transform_feedback_instanced },
    { "GL_ARB_transform_feedback_overflow_query", GLextension::GL_ARB_transform_feedback_overflow_query },
    { "GL_ARB_transpose_matrix", GLextension::GL_ARB_transpose_matrix },
    { "GL_ARB_uniform_buffer_object", GLextension::GL_ARB_uniform_buffer_object },
    { "GL_ARB_vertex_array_bgra", GLextension::GL_ARB_vertex_array_bgra },
    { "GL_ARB_vertex_array_object", GLextension::GL_ARB_vertex_array_object },
    { "GL_ARB_vertex_attrib_64bit", GLextension::GL_ARB_vertex_attrib_64bit },
    { "GL_ARB_vertex_attrib_binding", GLextension::GL_ARB_vertex_attrib_binding },
    { "GL_ARB_vertex_blend", GLextension::GL_ARB_vertex_blend },
    { "GL_ARB_vertex_buffer_object", GLextension::GL_ARB_vertex_buffer_object },
    { "GL_ARB_vertex_program", GLextension::GL_ARB_vertex_program },
    { "GL_ARB_vertex_shader", GLextension::GL_ARB_vertex_shader },
    { "GL_ARB_vertex_type_10f_11f_11f_rev", GLextension::GL_ARB_vertex_type_10f_11f_11f_rev },
    { "GL_ARB_vertex_type_2_10_10_10_rev", GLextension::GL_ARB_vertex_type_2_10_10_10_rev },
    { "GL_ARB_viewport_array", GLextension::GL_ARB_viewport_array },
    { "GL_ARB_window_pos", GLextension::GL_ARB_window_pos },
    { "GL_ATI_draw_buffers", GLextension::GL_ATI_draw_buffers },
    { "GL_ATI_element_array", GLextension::GL_ATI_element_array },
    { "GL_ATI_envmap_bumpmap", GLextension::GL_ATI_envmap_bumpmap },
    { "GL_ATI_fragment_shader", GLextension::GL_ATI_fragment_shader },
    { "GL_ATI_map_object_buffer", GLextension::GL_ATI_map_object_buffer },
    { "GL_ATI_meminfo", GLextension::GL_ATI_meminfo },
    { "GL_ATI_pixel_format_float", GLextension::GL_ATI_pixel_format_float },
    { "GL_ATI_pn_triangles", GLextension::GL_ATI_pn_triangles },
    { "GL_ATI_separate_stencil", GLextension::GL_ATI_separate_stencil },
    { "GL_ATI_text_fragment_shader", GLextension::GL_ATI_text_fragment_shader },
    { "GL_ATI_texture_env_combine3", GLextension::GL_ATI_texture_env_combine3 },
    { "GL_ATI_texture_float", GLextension::GL_ATI_texture_float },
    { "GL_ATI_texture_mirror_once", GLextension::GL_ATI_texture_mirror_once },
    { "GL_ATI_vertex_array_object", GLextension::GL_ATI_vertex_array_object },
    { "GL_ATI_vertex_attrib_array_object", GLextension::GL_ATI_vertex_attrib_array_object },
    { "GL_ATI_vertex_streams", GLextension::GL_ATI_vertex_streams }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_B 
{
    
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_C 
{
    
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_D 
{
    
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_E 
{
    { "GL_EXT_422_pixels", GLextension::GL_EXT_422_pixels },
    { "GL_EXT_abgr", GLextension::GL_EXT_abgr },
    { "GL_EXT_bgra", GLextension::GL_EXT_bgra },
    { "GL_EXT_bindable_uniform", GLextension::GL_EXT_bindable_uniform },
    { "GL_EXT_blend_color", GLextension::GL_EXT_blend_color },
    { "GL_EXT_blend_equation_separate", GLextension::GL_EXT_blend_equation_separate },
    { "GL_EXT_blend_func_separate", GLextension::GL_EXT_blend_func_separate },
    { "GL_EXT_blend_logic_op", GLextension::GL_EXT_blend_logic_op },
    { "GL_EXT_blend_minmax", GLextension::GL_EXT_blend_minmax },
    { "GL_EXT_blend_subtract", GLextension::GL_EXT_blend_subtract },
    { "GL_EXT_clip_volume_hint", GLextension::GL_EXT_clip_volume_hint },
    { "GL_EXT_cmyka", GLextension::GL_EXT_cmyka },
    { "GL_EXT_color_subtable", GLextension::GL_EXT_color_subtable },
    { "GL_EXT_compiled_vertex_array", GLextension::GL_EXT_compiled_vertex_array },
    { "GL_EXT_convolution", GLextension::GL_EXT_convolution },
    { "GL_EXT_coordinate_frame", GLextension::GL_EXT_coordinate_frame },
    { "GL_EXT_copy_texture", GLextension::GL_EXT_copy_texture },
    { "GL_EXT_cull_vertex", GLextension::GL_EXT_cull_vertex },
    { "GL_EXT_debug_label", GLextension::GL_EXT_debug_label },
    { "GL_EXT_debug_marker", GLextension::GL_EXT_debug_marker },
    { "GL_EXT_depth_bounds_test", GLextension::GL_EXT_depth_bounds_test },
    { "GL_EXT_direct_state_access", GLextension::GL_EXT_direct_state_access },
    { "GL_EXT_draw_buffers2", GLextension::GL_EXT_draw_buffers2 },
    { "GL_EXT_draw_instanced", GLextension::GL_EXT_draw_instanced },
    { "GL_EXT_draw_range_elements", GLextension::GL_EXT_draw_range_elements },
    { "GL_EXT_fog_coord", GLextension::GL_EXT_fog_coord },
    { "GL_EXT_framebuffer_blit", GLextension::GL_EXT_framebuffer_blit },
    { "GL_EXT_framebuffer_multisample", GLextension::GL_EXT_framebuffer_multisample },
    { "GL_EXT_framebuffer_multisample_blit_scaled", GLextension::GL_EXT_framebuffer_multisample_blit_scaled },
    { "GL_EXT_framebuffer_object", GLextension::GL_EXT_framebuffer_object },
    { "GL_EXT_framebuffer_sRGB", GLextension::GL_EXT_framebuffer_sRGB },
    { "GL_EXT_geometry_shader4", GLextension::GL_EXT_geometry_shader4 },
    { "GL_EXT_gpu_program_parameters", GLextension::GL_EXT_gpu_program_parameters },
    { "GL_EXT_gpu_shader4", GLextension::GL_EXT_gpu_shader4 },
    { "GL_EXT_histogram", GLextension::GL_EXT_histogram },
    { "GL_EXT_index_array_formats", GLextension::GL_EXT_index_array_formats },
    { "GL_EXT_index_func", GLextension::GL_EXT_index_func },
    { "GL_EXT_index_material", GLextension::GL_EXT_index_material },
    { "GL_EXT_index_texture", GLextension::GL_EXT_index_texture },
    { "GL_EXT_light_texture", GLextension::GL_EXT_light_texture },
    { "GL_EXT_misc_attribute", GLextension::GL_EXT_misc_attribute },
    { "GL_EXT_multi_draw_arrays", GLextension::GL_EXT_multi_draw_arrays },
    { "GL_EXT_multisample", GLextension::GL_EXT_multisample },
    { "GL_EXT_packed_depth_stencil", GLextension::GL_EXT_packed_depth_stencil },
    { "GL_EXT_packed_float", GLextension::GL_EXT_packed_float },
    { "GL_EXT_packed_pixels", GLextension::GL_EXT_packed_pixels },
    { "GL_EXT_paletted_texture", GLextension::GL_EXT_paletted_texture },
    { "GL_EXT_pixel_buffer_object", GLextension::GL_EXT_pixel_buffer_object },
    { "GL_EXT_pixel_transform", GLextension::GL_EXT_pixel_transform },
    { "GL_EXT_pixel_transform_color_table", GLextension::GL_EXT_pixel_transform_color_table },
    { "GL_EXT_point_parameters", GLextension::GL_EXT_point_parameters },
    { "GL_EXT_polygon_offset", GLextension::GL_EXT_polygon_offset },
    { "GL_EXT_polygon_offset_clamp", GLextension::GL_EXT_polygon_offset_clamp },
    { "GL_EXT_post_depth_coverage", GLextension::GL_EXT_post_depth_coverage },
    { "GL_EXT_provoking_vertex", GLextension::GL_EXT_provoking_vertex },
    { "GL_EXT_raster_multisample", GLextension::GL_EXT_raster_multisample },
    { "GL_EXT_rescale_normal", GLextension::GL_EXT_rescale_normal },
    { "GL_EXT_secondary_color", GLextension::GL_EXT_secondary_color },
    { "GL_EXT_separate_shader_objects", GLextension::GL_EXT_separate_shader_objects },
    { "GL_EXT_separate_specular_color", GLextension::GL_EXT_separate_specular_color },
    { "GL_EXT_shader_image_load_formatted", GLextension::GL_EXT_shader_image_load_formatted },
    { "GL_EXT_shader_image_load_store", GLextension::GL_EXT_shader_image_load_store },
    { "GL_EXT_shader_integer_mix", GLextension::GL_EXT_shader_integer_mix },
    { "GL_EXT_shadow_funcs", GLextension::GL_EXT_shadow_funcs },
    { "GL_EXT_shared_texture_palette", GLextension::GL_EXT_shared_texture_palette },
    { "GL_EXT_sparse_texture2", GLextension::GL_EXT_sparse_texture2 },
    { "GL_EXT_stencil_clear_tag", GLextension::GL_EXT_stencil_clear_tag },
    { "GL_EXT_stencil_two_side", GLextension::GL_EXT_stencil_two_side },
    { "GL_EXT_stencil_wrap", GLextension::GL_EXT_stencil_wrap },
    { "GL_EXT_subtexture", GLextension::GL_EXT_subtexture },
    { "GL_EXT_texture", GLextension::GL_EXT_texture },
    { "GL_EXT_texture3D", GLextension::GL_EXT_texture3D },
    { "GL_EXT_texture_array", GLextension::GL_EXT_texture_array },
    { "GL_EXT_texture_buffer_object", GLextension::GL_EXT_texture_buffer_object },
    { "GL_EXT_texture_compression_latc", GLextension::GL_EXT_texture_compression_latc },
    { "GL_EXT_texture_compression_rgtc", GLextension::GL_EXT_texture_compression_rgtc },
    { "GL_EXT_texture_compression_s3tc", GLextension::GL_EXT_texture_compression_s3tc },
    { "GL_EXT_texture_cube_map", GLextension::GL_EXT_texture_cube_map },
    { "GL_EXT_texture_env_add", GLextension::GL_EXT_texture_env_add },
    { "GL_EXT_texture_env_combine", GLextension::GL_EXT_texture_env_combine },
    { "GL_EXT_texture_env_dot3", GLextension::GL_EXT_texture_env_dot3 },
    { "GL_EXT_texture_filter_anisotropic", GLextension::GL_EXT_texture_filter_anisotropic },
    { "GL_EXT_texture_filter_minmax", GLextension::GL_EXT_texture_filter_minmax },
    { "GL_EXT_texture_integer", GLextension::GL_EXT_texture_integer },
    { "GL_EXT_texture_lod_bias", GLextension::GL_EXT_texture_lod_bias },
    { "GL_EXT_texture_mirror_clamp", GLextension::GL_EXT_texture_mirror_clamp },
    { "GL_EXT_texture_object", GLextension::GL_EXT_texture_object },
    { "GL_EXT_texture_perturb_normal", GLextension::GL_EXT_texture_perturb_normal },
    { "GL_EXT_texture_sRGB", GLextension::GL_EXT_texture_sRGB },
    { "GL_EXT_texture_sRGB_decode", GLextension::GL_EXT_texture_sRGB_decode },
    { "GL_EXT_texture_shared_exponent", GLextension::GL_EXT_texture_shared_exponent },
    { "GL_EXT_texture_snorm", GLextension::GL_EXT_texture_snorm },
    { "GL_EXT_texture_swizzle", GLextension::GL_EXT_texture_swizzle },
    { "GL_EXT_timer_query", GLextension::GL_EXT_timer_query },
    { "GL_EXT_transform_feedback", GLextension::GL_EXT_transform_feedback },
    { "GL_EXT_vertex_array", GLextension::GL_EXT_vertex_array },
    { "GL_EXT_vertex_array_bgra", GLextension::GL_EXT_vertex_array_bgra },
    { "GL_EXT_vertex_attrib_64bit", GLextension::GL_EXT_vertex_attrib_64bit },
    { "GL_EXT_vertex_shader", GLextension::GL_EXT_vertex_shader },
    { "GL_EXT_vertex_weighting", GLextension::GL_EXT_vertex_weighting },
    { "GL_EXT_x11_sync_object", GLextension::GL_EXT_x11_sync_object }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_F 
{
    
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_G 
{
    { "GL_GREMEDY_frame_terminator", GLextension::GL_GREMEDY_frame_terminator },
    { "GL_GREMEDY_string_marker", GLextension::GL_GREMEDY_string_marker }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_H 
{
    { "GL_HP_convolution_border_modes", GLextension::GL_HP_convolution_border_modes },
    { "GL_HP_image_transform", GLextension::GL_HP_image_transform },
    { "GL_HP_occlusion_test", GLextension::GL_HP_occlusion_test },
    { "GL_HP_texture_lighting", GLextension::GL_HP_texture_lighting }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_I 
{
    { "GL_IBM_cull_vertex", GLextension::GL_IBM_cull_vertex },
    { "GL_IBM_multimode_draw_arrays", GLextension::GL_IBM_multimode_draw_arrays },
    { "GL_IBM_rasterpos_clip", GLextension::GL_IBM_rasterpos_clip },
    { "GL_IBM_static_data", GLextension::GL_IBM_static_data },
    { "GL_IBM_texture_mirrored_repeat", GLextension::GL_IBM_texture_mirrored_repeat },
    { "GL_IBM_vertex_array_lists", GLextension::GL_IBM_vertex_array_lists },
    { "GL_INGR_blend_func_separate", GLextension::GL_INGR_blend_func_separate },
    { "GL_INGR_color_clamp", GLextension::GL_INGR_color_clamp },
    { "GL_INGR_interlace_read", GLextension::GL_INGR_interlace_read },
    { "GL_INTEL_fragment_shader_ordering", GLextension::GL_INTEL_fragment_shader_ordering },
    { "GL_INTEL_framebuffer_CMAA", GLextension::GL_INTEL_framebuffer_CMAA },
    { "GL_INTEL_map_texture", GLextension::GL_INTEL_map_texture },
    { "GL_INTEL_parallel_arrays", GLextension::GL_INTEL_parallel_arrays },
    { "GL_INTEL_performance_query", GLextension::GL_INTEL_performance_query }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_J 
{
    
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_K 
{
    { "GL_KHR_blend_equation_advanced", GLextension::GL_KHR_blend_equation_advanced },
    { "GL_KHR_blend_equation_advanced_coherent", GLextension::GL_KHR_blend_equation_advanced_coherent },
    { "GL_KHR_context_flush_control", GLextension::GL_KHR_context_flush_control },
    { "GL_KHR_debug", GLextension::GL_KHR_debug },
    { "GL_KHR_no_error", GLextension::GL_KHR_no_error },
    { "GL_KHR_robust_buffer_access_behavior", GLextension::GL_KHR_robust_buffer_access_behavior },
    { "GL_KHR_robustness", GLextension::GL_KHR_robustness },
    { "GL_KHR_texture_compression_astc_hdr", GLextension::GL_KHR_texture_compression_astc_hdr },
    { "GL_KHR_texture_compression_astc_ldr", GLextension::GL_KHR_texture_compression_astc_ldr },
    { "GL_KHR_texture_compression_astc_sliced_3d", GLextension::GL_KHR_texture_compression_astc_sliced_3d }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_L 
{
    
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_M 
{
    { "GL_MESAX_texture_stack", GLextension::GL_MESAX_texture_stack },
    { "GL_MESA_pack_invert", GLextension::GL_MESA_pack_invert },
    { "GL_MESA_resize_buffers", GLextension::GL_MESA_resize_buffers },
    { "GL_MESA_window_pos", GLextension::GL_MESA_window_pos },
    { "GL_MESA_ycbcr_texture", GLextension::GL_MESA_ycbcr_texture }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_N 
{
    { "GL_NVX_conditional_render", GLextension::GL_NVX_conditional_render },
    { "GL_NVX_gpu_memory_info", GLextension::GL_NVX_gpu_memory_info },
    { "GL_NV_bindless_multi_draw_indirect", GLextension::GL_NV_bindless_multi_draw_indirect },
    { "GL_NV_bindless_multi_draw_indirect_count", GLextension::GL_NV_bindless_multi_draw_indirect_count },
    { "GL_NV_bindless_texture", GLextension::GL_NV_bindless_texture },
    { "GL_NV_blend_equation_advanced", GLextension::GL_NV_blend_equation_advanced },
    { "GL_NV_blend_equation_advanced_coherent", GLextension::GL_NV_blend_equation_advanced_coherent },
    { "GL_NV_blend_square", GLextension::GL_NV_blend_square },
    { "GL_NV_command_list", GLextension::GL_NV_command_list },
    { "GL_NV_compute_program5", GLextension::GL_NV_compute_program5 },
    { "GL_NV_conditional_render", GLextension::GL_NV_conditional_render },
    { "GL_NV_conservative_raster", GLextension::GL_NV_conservative_raster },
    { "GL_NV_conservative_raster_dilate", GLextension::GL_NV_conservative_raster_dilate },
    { "GL_NV_copy_depth_to_color", GLextension::GL_NV_copy_depth_to_color },
    { "GL_NV_copy_image", GLextension::GL_NV_copy_image },
    { "GL_NV_deep_texture3D", GLextension::GL_NV_deep_texture3D },
    { "GL_NV_depth_buffer_float", GLextension::GL_NV_depth_buffer_float },
    { "GL_NV_depth_clamp", GLextension::GL_NV_depth_clamp },
    { "GL_NV_draw_texture", GLextension::GL_NV_draw_texture },
    { "GL_NV_evaluators", GLextension::GL_NV_evaluators },
    { "GL_NV_explicit_multisample", GLextension::GL_NV_explicit_multisample },
    { "GL_NV_fence", GLextension::GL_NV_fence },
    { "GL_NV_fill_rectangle", GLextension::GL_NV_fill_rectangle },
    { "GL_NV_float_buffer", GLextension::GL_NV_float_buffer },
    { "GL_NV_fog_distance", GLextension::GL_NV_fog_distance },
    { "GL_NV_fragment_coverage_to_color", GLextension::GL_NV_fragment_coverage_to_color },
    { "GL_NV_fragment_program", GLextension::GL_NV_fragment_program },
    { "GL_NV_fragment_program2", GLextension::GL_NV_fragment_program2 },
    { "GL_NV_fragment_program4", GLextension::GL_NV_fragment_program4 },
    { "GL_NV_fragment_program_option", GLextension::GL_NV_fragment_program_option },
    { "GL_NV_fragment_shader_interlock", GLextension::GL_NV_fragment_shader_interlock },
    { "GL_NV_framebuffer_mixed_samples", GLextension::GL_NV_framebuffer_mixed_samples },
    { "GL_NV_framebuffer_multisample_coverage", GLextension::GL_NV_framebuffer_multisample_coverage },
    { "GL_NV_geometry_program4", GLextension::GL_NV_geometry_program4 },
    { "GL_NV_geometry_shader4", GLextension::GL_NV_geometry_shader4 },
    { "GL_NV_geometry_shader_passthrough", GLextension::GL_NV_geometry_shader_passthrough },
    { "GL_NV_gpu_program4", GLextension::GL_NV_gpu_program4 },
    { "GL_NV_gpu_program5", GLextension::GL_NV_gpu_program5 },
    { "GL_NV_gpu_program5_mem_extended", GLextension::GL_NV_gpu_program5_mem_extended },
    { "GL_NV_gpu_shader5", GLextension::GL_NV_gpu_shader5 },
    { "GL_NV_half_float", GLextension::GL_NV_half_float },
    { "GL_NV_internalformat_sample_query", GLextension::GL_NV_internalformat_sample_query },
    { "GL_NV_light_max_exponent", GLextension::GL_NV_light_max_exponent },
    { "GL_NV_multisample_coverage", GLextension::GL_NV_multisample_coverage },
    { "GL_NV_multisample_filter_hint", GLextension::GL_NV_multisample_filter_hint },
    { "GL_NV_occlusion_query", GLextension::GL_NV_occlusion_query },
    { "GL_NV_packed_depth_stencil", GLextension::GL_NV_packed_depth_stencil },
    { "GL_NV_parameter_buffer_object", GLextension::GL_NV_parameter_buffer_object },
    { "GL_NV_parameter_buffer_object2", GLextension::GL_NV_parameter_buffer_object2 },
    { "GL_NV_path_rendering", GLextension::GL_NV_path_rendering },
    { "GL_NV_path_rendering_shared_edge", GLextension::GL_NV_path_rendering_shared_edge },
    { "GL_NV_pixel_data_range", GLextension::GL_NV_pixel_data_range },
    { "GL_NV_point_sprite", GLextension::GL_NV_point_sprite },
    { "GL_NV_present_video", GLextension::GL_NV_present_video },
    { "GL_NV_primitive_restart", GLextension::GL_NV_primitive_restart },
    { "GL_NV_register_combiners", GLextension::GL_NV_register_combiners },
    { "GL_NV_register_combiners2", GLextension::GL_NV_register_combiners2 },
    { "GL_NV_sample_locations", GLextension::GL_NV_sample_locations },
    { "GL_NV_sample_mask_override_coverage", GLextension::GL_NV_sample_mask_override_coverage },
    { "GL_NV_shader_atomic_counters", GLextension::GL_NV_shader_atomic_counters },
    { "GL_NV_shader_atomic_float", GLextension::GL_NV_shader_atomic_float },
    { "GL_NV_shader_atomic_fp16_vector", GLextension::GL_NV_shader_atomic_fp16_vector },
    { "GL_NV_shader_atomic_int64", GLextension::GL_NV_shader_atomic_int64 },
    { "GL_NV_shader_buffer_load", GLextension::GL_NV_shader_buffer_load },
    { "GL_NV_shader_buffer_store", GLextension::GL_NV_shader_buffer_store },
    { "GL_NV_shader_storage_buffer_object", GLextension::GL_NV_shader_storage_buffer_object },
    { "GL_NV_shader_thread_group", GLextension::GL_NV_shader_thread_group },
    { "GL_NV_shader_thread_shuffle", GLextension::GL_NV_shader_thread_shuffle },
    { "GL_NV_tessellation_program5", GLextension::GL_NV_tessellation_program5 },
    { "GL_NV_texgen_emboss", GLextension::GL_NV_texgen_emboss },
    { "GL_NV_texgen_reflection", GLextension::GL_NV_texgen_reflection },
    { "GL_NV_texture_barrier", GLextension::GL_NV_texture_barrier },
    { "GL_NV_texture_compression_vtc", GLextension::GL_NV_texture_compression_vtc },
    { "GL_NV_texture_env_combine4", GLextension::GL_NV_texture_env_combine4 },
    { "GL_NV_texture_expand_normal", GLextension::GL_NV_texture_expand_normal },
    { "GL_NV_texture_multisample", GLextension::GL_NV_texture_multisample },
    { "GL_NV_texture_rectangle", GLextension::GL_NV_texture_rectangle },
    { "GL_NV_texture_shader", GLextension::GL_NV_texture_shader },
    { "GL_NV_texture_shader2", GLextension::GL_NV_texture_shader2 },
    { "GL_NV_texture_shader3", GLextension::GL_NV_texture_shader3 },
    { "GL_NV_transform_feedback", GLextension::GL_NV_transform_feedback },
    { "GL_NV_transform_feedback2", GLextension::GL_NV_transform_feedback2 },
    { "GL_NV_uniform_buffer_unified_memory", GLextension::GL_NV_uniform_buffer_unified_memory },
    { "GL_NV_vdpau_interop", GLextension::GL_NV_vdpau_interop },
    { "GL_NV_vertex_array_range", GLextension::GL_NV_vertex_array_range },
    { "GL_NV_vertex_array_range2", GLextension::GL_NV_vertex_array_range2 },
    { "GL_NV_vertex_attrib_integer_64bit", GLextension::GL_NV_vertex_attrib_integer_64bit },
    { "GL_NV_vertex_buffer_unified_memory", GLextension::GL_NV_vertex_buffer_unified_memory },
    { "GL_NV_vertex_program", GLextension::GL_NV_vertex_program },
    { "GL_NV_vertex_program1_1", GLextension::GL_NV_vertex_program1_1 },
    { "GL_NV_vertex_program2", GLextension::GL_NV_vertex_program2 },
    { "GL_NV_vertex_program2_option", GLextension::GL_NV_vertex_program2_option },
    { "GL_NV_vertex_program3", GLextension::GL_NV_vertex_program3 },
    { "GL_NV_vertex_program4", GLextension::GL_NV_vertex_program4 },
    { "GL_NV_video_capture", GLextension::GL_NV_video_capture },
    { "GL_NV_viewport_array2", GLextension::GL_NV_viewport_array2 }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_O 
{
    { "GL_OES_byte_coordinates", GLextension::GL_OES_byte_coordinates },
    { "GL_OES_compressed_paletted_texture", GLextension::GL_OES_compressed_paletted_texture },
    { "GL_OES_fixed_point", GLextension::GL_OES_fixed_point },
    { "GL_OES_query_matrix", GLextension::GL_OES_query_matrix },
    { "GL_OES_read_format", GLextension::GL_OES_read_format },
    { "GL_OES_single_precision", GLextension::GL_OES_single_precision },
    { "GL_OML_interlace", GLextension::GL_OML_interlace },
    { "GL_OML_resample", GLextension::GL_OML_resample },
    { "GL_OML_subsample", GLextension::GL_OML_subsample },
    { "GL_OVR_multiview", GLextension::GL_OVR_multiview },
    { "GL_OVR_multiview2", GLextension::GL_OVR_multiview2 }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_P 
{
    { "GL_PGI_misc_hints", GLextension::GL_PGI_misc_hints },
    { "GL_PGI_vertex_hints", GLextension::GL_PGI_vertex_hints }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_Q 
{
    
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_R 
{
    { "GL_REND_screen_coordinates", GLextension::GL_REND_screen_coordinates }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_S 
{
    { "GL_S3_s3tc", GLextension::GL_S3_s3tc },
    { "GL_SGIS_detail_texture", GLextension::GL_SGIS_detail_texture },
    { "GL_SGIS_fog_function", GLextension::GL_SGIS_fog_function },
    { "GL_SGIS_generate_mipmap", GLextension::GL_SGIS_generate_mipmap },
    { "GL_SGIS_multisample", GLextension::GL_SGIS_multisample },
    { "GL_SGIS_pixel_texture", GLextension::GL_SGIS_pixel_texture },
    { "GL_SGIS_point_line_texgen", GLextension::GL_SGIS_point_line_texgen },
    { "GL_SGIS_point_parameters", GLextension::GL_SGIS_point_parameters },
    { "GL_SGIS_sharpen_texture", GLextension::GL_SGIS_sharpen_texture },
    { "GL_SGIS_texture4D", GLextension::GL_SGIS_texture4D },
    { "GL_SGIS_texture_border_clamp", GLextension::GL_SGIS_texture_border_clamp },
    { "GL_SGIS_texture_color_mask", GLextension::GL_SGIS_texture_color_mask },
    { "GL_SGIS_texture_edge_clamp", GLextension::GL_SGIS_texture_edge_clamp },
    { "GL_SGIS_texture_filter4", GLextension::GL_SGIS_texture_filter4 },
    { "GL_SGIS_texture_lod", GLextension::GL_SGIS_texture_lod },
    { "GL_SGIS_texture_select", GLextension::GL_SGIS_texture_select },
    { "GL_SGIX_async", GLextension::GL_SGIX_async },
    { "GL_SGIX_async_histogram", GLextension::GL_SGIX_async_histogram },
    { "GL_SGIX_async_pixel", GLextension::GL_SGIX_async_pixel },
    { "GL_SGIX_blend_alpha_minmax", GLextension::GL_SGIX_blend_alpha_minmax },
    { "GL_SGIX_calligraphic_fragment", GLextension::GL_SGIX_calligraphic_fragment },
    { "GL_SGIX_clipmap", GLextension::GL_SGIX_clipmap },
    { "GL_SGIX_convolution_accuracy", GLextension::GL_SGIX_convolution_accuracy },
    { "GL_SGIX_depth_pass_instrument", GLextension::GL_SGIX_depth_pass_instrument },
    { "GL_SGIX_depth_texture", GLextension::GL_SGIX_depth_texture },
    { "GL_SGIX_flush_raster", GLextension::GL_SGIX_flush_raster },
    { "GL_SGIX_fog_offset", GLextension::GL_SGIX_fog_offset },
    { "GL_SGIX_fragment_lighting", GLextension::GL_SGIX_fragment_lighting },
    { "GL_SGIX_framezoom", GLextension::GL_SGIX_framezoom },
    { "GL_SGIX_igloo_interface", GLextension::GL_SGIX_igloo_interface },
    { "GL_SGIX_instruments", GLextension::GL_SGIX_instruments },
    { "GL_SGIX_interlace", GLextension::GL_SGIX_interlace },
    { "GL_SGIX_ir_instrument1", GLextension::GL_SGIX_ir_instrument1 },
    { "GL_SGIX_list_priority", GLextension::GL_SGIX_list_priority },
    { "GL_SGIX_pixel_texture", GLextension::GL_SGIX_pixel_texture },
    { "GL_SGIX_pixel_tiles", GLextension::GL_SGIX_pixel_tiles },
    { "GL_SGIX_polynomial_ffd", GLextension::GL_SGIX_polynomial_ffd },
    { "GL_SGIX_reference_plane", GLextension::GL_SGIX_reference_plane },
    { "GL_SGIX_resample", GLextension::GL_SGIX_resample },
    { "GL_SGIX_scalebias_hint", GLextension::GL_SGIX_scalebias_hint },
    { "GL_SGIX_shadow", GLextension::GL_SGIX_shadow },
    { "GL_SGIX_shadow_ambient", GLextension::GL_SGIX_shadow_ambient },
    { "GL_SGIX_sprite", GLextension::GL_SGIX_sprite },
    { "GL_SGIX_subsample", GLextension::GL_SGIX_subsample },
    { "GL_SGIX_tag_sample_buffer", GLextension::GL_SGIX_tag_sample_buffer },
    { "GL_SGIX_texture_add_env", GLextension::GL_SGIX_texture_add_env },
    { "GL_SGIX_texture_coordinate_clamp", GLextension::GL_SGIX_texture_coordinate_clamp },
    { "GL_SGIX_texture_lod_bias", GLextension::GL_SGIX_texture_lod_bias },
    { "GL_SGIX_texture_multi_buffer", GLextension::GL_SGIX_texture_multi_buffer },
    { "GL_SGIX_texture_scale_bias", GLextension::GL_SGIX_texture_scale_bias },
    { "GL_SGIX_vertex_preclip", GLextension::GL_SGIX_vertex_preclip },
    { "GL_SGIX_ycrcb", GLextension::GL_SGIX_ycrcb },
    { "GL_SGIX_ycrcb_subsample", GLextension::GL_SGIX_ycrcb_subsample },
    { "GL_SGIX_ycrcba", GLextension::GL_SGIX_ycrcba },
    { "GL_SGI_color_matrix", GLextension::GL_SGI_color_matrix },
    { "GL_SGI_color_table", GLextension::GL_SGI_color_table },
    { "GL_SGI_texture_color_table", GLextension::GL_SGI_texture_color_table },
    { "GL_SUNX_constant_data", GLextension::GL_SUNX_constant_data },
    { "GL_SUN_convolution_border_modes", GLextension::GL_SUN_convolution_border_modes },
    { "GL_SUN_global_alpha", GLextension::GL_SUN_global_alpha },
    { "GL_SUN_mesh_array", GLextension::GL_SUN_mesh_array },
    { "GL_SUN_slice_accum", GLextension::GL_SUN_slice_accum },
    { "GL_SUN_triangle_list", GLextension::GL_SUN_triangle_list },
    { "GL_SUN_vertex", GLextension::GL_SUN_vertex }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_T 
{
    
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_U 
{
    
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_V 
{
    
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_W 
{
    { "GL_WIN_phong_shading", GLextension::GL_WIN_phong_shading },
    { "GL_WIN_specular_fog", GLextension::GL_WIN_specular_fog }
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_X 
{
    
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_Y 
{
    
};
    
const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_Z 
{
    
};
    
const std::array<std::unordered_map<std::string, gl::GLextension>, 27> Meta_ExtensionsByStringMaps
{
    Meta_ExtensionsByString_0,
    Meta_ExtensionsByString_A,
    Meta_ExtensionsByString_B,
    Meta_ExtensionsByString_C,
    Meta_ExtensionsByString_D,
    Meta_ExtensionsByString_E,
    Meta_ExtensionsByString_F,
    Meta_ExtensionsByString_G,
    Meta_ExtensionsByString_H,
    Meta_ExtensionsByString_I,
    Meta_ExtensionsByString_J,
    Meta_ExtensionsByString_K,
    Meta_ExtensionsByString_L,
    Meta_ExtensionsByString_M,
    Meta_ExtensionsByString_N,
    Meta_ExtensionsByString_O,
    Meta_ExtensionsByString_P,
    Meta_ExtensionsByString_Q,
    Meta_ExtensionsByString_R,
    Meta_ExtensionsByString_S,
    Meta_ExtensionsByString_T,
    Meta_ExtensionsByString_U,
    Meta_ExtensionsByString_V,
    Meta_ExtensionsByString_W,
    Meta_ExtensionsByString_X,
    Meta_ExtensionsByString_Y,
    Meta_ExtensionsByString_Z
};

} // namespace glbinding
