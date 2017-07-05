
#include "Meta_Maps.h"

#include <glbinding/Version.h>


using namespace gl;


namespace glbinding
{


// all functions directly required by features, not indirectly via extensions

const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion =
{
    { { 1, 0 }, { "glAccum", "glAlphaFunc", "glBegin", "glBitmap", "glBlendFunc", "glCallList", "glCallLists", "glClear", "glClearAccum", "glClearColor", "glClearDepth", "glClearIndex", "glClearStencil", "glClipPlane", "glColor3b", "glColor3bv", "glColor3d", "glColor3dv", "glColor3f", "glColor3fv", "glColor3i", "glColor3iv", "glColor3s", "glColor3sv", "glColor3ub", "glColor3ubv", "glColor3ui", "glColor3uiv", "glColor3us", "glColor3usv", "glColor4b", "glColor4bv", "glColor4d", "glColor4dv", "glColor4f", "glColor4fv", "glColor4i", "glColor4iv", "glColor4s", "glColor4sv", "glColor4ub", "glColor4ubv", "glColor4ui", "glColor4uiv", "glColor4us", "glColor4usv", "glColorMask", "glColorMaterial", "glCopyPixels", "glCullFace", "glDeleteLists", "glDepthFunc", "glDepthMask", "glDepthRange", "glDisable", "glDrawBuffer", "glDrawPixels", "glEdgeFlag", "glEdgeFlagv", "glEnable", "glEnd", "glEndList", "glEvalCoord1d", "glEvalCoord1dv", "glEvalCoord1f", "glEvalCoord1fv", "glEvalCoord2d", "glEvalCoord2dv", "glEvalCoord2f", "glEvalCoord2fv", "glEvalMesh1", "glEvalMesh2", "glEvalPoint1", "glEvalPoint2", "glFeedbackBuffer", "glFinish", "glFlush", "glFogf", "glFogfv", "glFogi", "glFogiv", "glFrontFace", "glFrustum", "glGenLists", "glGetBooleanv", "glGetClipPlane", "glGetDoublev", "glGetError", "glGetFloatv", "glGetIntegerv", "glGetLightfv", "glGetLightiv", "glGetMapdv", "glGetMapfv", "glGetMapiv", "glGetMaterialfv", "glGetMaterialiv", "glGetPixelMapfv", "glGetPixelMapuiv", "glGetPixelMapusv", "glGetPolygonStipple", "glGetString", "glGetTexEnvfv", "glGetTexEnviv", "glGetTexGendv", "glGetTexGenfv", "glGetTexGeniv", "glGetTexImage", "glGetTexLevelParameterfv", "glGetTexLevelParameteriv", "glGetTexParameterfv", "glGetTexParameteriv", "glHint", "glIndexMask", "glIndexd", "glIndexdv", "glIndexf", "glIndexfv", "glIndexi", "glIndexiv", "glIndexs", "glIndexsv", "glInitNames", "glIsEnabled", "glIsList", "glLightModelf", "glLightModelfv", "glLightModeli", "glLightModeliv", "glLightf", "glLightfv", "glLighti", "glLightiv", "glLineStipple", "glLineWidth", "glListBase", "glLoadIdentity", "glLoadMatrixd", "glLoadMatrixf", "glLoadName", "glLogicOp", "glMap1d", "glMap1f", "glMap2d", "glMap2f", "glMapGrid1d", "glMapGrid1f", "glMapGrid2d", "glMapGrid2f", "glMaterialf", "glMaterialfv", "glMateriali", "glMaterialiv", "glMatrixMode", "glMultMatrixd", "glMultMatrixf", "glNewList", "glNormal3b", "glNormal3bv", "glNormal3d", "glNormal3dv", "glNormal3f", "glNormal3fv", "glNormal3i", "glNormal3iv", "glNormal3s", "glNormal3sv", "glOrtho", "glPassThrough", "glPixelMapfv", "glPixelMapuiv", "glPixelMapusv", "glPixelStoref", "glPixelStorei", "glPixelTransferf", "glPixelTransferi", "glPixelZoom", "glPointSize", "glPolygonMode", "glPolygonStipple", "glPopAttrib", "glPopMatrix", "glPopName", "glPushAttrib", "glPushMatrix", "glPushName", "glRasterPos2d", "glRasterPos2dv", "glRasterPos2f", "glRasterPos2fv", "glRasterPos2i", "glRasterPos2iv", "glRasterPos2s", "glRasterPos2sv", "glRasterPos3d", "glRasterPos3dv", "glRasterPos3f", "glRasterPos3fv", "glRasterPos3i", "glRasterPos3iv", "glRasterPos3s", "glRasterPos3sv", "glRasterPos4d", "glRasterPos4dv", "glRasterPos4f", "glRasterPos4fv", "glRasterPos4i", "glRasterPos4iv", "glRasterPos4s", "glRasterPos4sv", "glReadBuffer", "glReadPixels", "glRectd", "glRectdv", "glRectf", "glRectfv", "glRecti", "glRectiv", "glRects", "glRectsv", "glRenderMode", "glRotated", "glRotatef", "glScaled", "glScalef", "glScissor", "glSelectBuffer", "glShadeModel", "glStencilFunc", "glStencilMask", "glStencilOp", "glTexCoord1d", "glTexCoord1dv", "glTexCoord1f", "glTexCoord1fv", "glTexCoord1i", "glTexCoord1iv", "glTexCoord1s", "glTexCoord1sv", "glTexCoord2d", "glTexCoord2dv", "glTexCoord2f", "glTexCoord2fv", "glTexCoord2i", "glTexCoord2iv", "glTexCoord2s", "glTexCoord2sv", "glTexCoord3d", "glTexCoord3dv", "glTexCoord3f", "glTexCoord3fv", "glTexCoord3i", "glTexCoord3iv", "glTexCoord3s", "glTexCoord3sv", "glTexCoord4d", "glTexCoord4dv", "glTexCoord4f", "glTexCoord4fv", "glTexCoord4i", "glTexCoord4iv", "glTexCoord4s", "glTexCoord4sv", "glTexEnvf", "glTexEnvfv", "glTexEnvi", "glTexEnviv", "glTexGend", "glTexGendv", "glTexGenf", "glTexGenfv", "glTexGeni", "glTexGeniv", "glTexImage1D", "glTexImage2D", "glTexParameterf", "glTexParameterfv", "glTexParameteri", "glTexParameteriv", "glTranslated", "glTranslatef", "glVertex2d", "glVertex2dv", "glVertex2f", "glVertex2fv", "glVertex2i", "glVertex2iv", "glVertex2s", "glVertex2sv", "glVertex3d", "glVertex3dv", "glVertex3f", "glVertex3fv", "glVertex3i", "glVertex3iv", "glVertex3s", "glVertex3sv", "glVertex4d", "glVertex4dv", "glVertex4f", "glVertex4fv", "glVertex4i", "glVertex4iv", "glVertex4s", "glVertex4sv", "glViewport" } },
    { { 1, 1 }, { "glAreTexturesResident", "glArrayElement", "glBindTexture", "glColorPointer", "glCopyTexImage1D", "glCopyTexImage2D", "glCopyTexSubImage1D", "glCopyTexSubImage2D", "glDeleteTextures", "glDisableClientState", "glDrawArrays", "glDrawElements", "glEdgeFlagPointer", "glEnableClientState", "glGenTextures", "glGetPointerv", "glIndexPointer", "glIndexub", "glIndexubv", "glInterleavedArrays", "glIsTexture", "glNormalPointer", "glPolygonOffset", "glPopClientAttrib", "glPrioritizeTextures", "glPushClientAttrib", "glTexCoordPointer", "glTexSubImage1D", "glTexSubImage2D", "glVertexPointer" } },
    { { 1, 2 }, { "glCopyTexSubImage3D", "glDrawRangeElements", "glTexImage3D", "glTexSubImage3D" } },
    { { 1, 3 }, { "glActiveTexture", "glClientActiveTexture", "glCompressedTexImage1D", "glCompressedTexImage2D", "glCompressedTexImage3D", "glCompressedTexSubImage1D", "glCompressedTexSubImage2D", "glCompressedTexSubImage3D", "glGetCompressedTexImage", "glLoadTransposeMatrixd", "glLoadTransposeMatrixf", "glMultTransposeMatrixd", "glMultTransposeMatrixf", "glMultiTexCoord1d", "glMultiTexCoord1dv", "glMultiTexCoord1f", "glMultiTexCoord1fv", "glMultiTexCoord1i", "glMultiTexCoord1iv", "glMultiTexCoord1s", "glMultiTexCoord1sv", "glMultiTexCoord2d", "glMultiTexCoord2dv", "glMultiTexCoord2f", "glMultiTexCoord2fv", "glMultiTexCoord2i", "glMultiTexCoord2iv", "glMultiTexCoord2s", "glMultiTexCoord2sv", "glMultiTexCoord3d", "glMultiTexCoord3dv", "glMultiTexCoord3f", "glMultiTexCoord3fv", "glMultiTexCoord3i", "glMultiTexCoord3iv", "glMultiTexCoord3s", "glMultiTexCoord3sv", "glMultiTexCoord4d", "glMultiTexCoord4dv", "glMultiTexCoord4f", "glMultiTexCoord4fv", "glMultiTexCoord4i", "glMultiTexCoord4iv", "glMultiTexCoord4s", "glMultiTexCoord4sv", "glSampleCoverage" } },
    { { 1, 4 }, { "glBlendColor", "glBlendEquation", "glBlendFuncSeparate", "glFogCoordPointer", "glFogCoordd", "glFogCoorddv", "glFogCoordf", "glFogCoordfv", "glMultiDrawArrays", "glMultiDrawElements", "glPointParameterf", "glPointParameterfv", "glPointParameteri", "glPointParameteriv", "glSecondaryColor3b", "glSecondaryColor3bv", "glSecondaryColor3d", "glSecondaryColor3dv", "glSecondaryColor3f", "glSecondaryColor3fv", "glSecondaryColor3i", "glSecondaryColor3iv", "glSecondaryColor3s", "glSecondaryColor3sv", "glSecondaryColor3ub", "glSecondaryColor3ubv", "glSecondaryColor3ui", "glSecondaryColor3uiv", "glSecondaryColor3us", "glSecondaryColor3usv", "glSecondaryColorPointer", "glWindowPos2d", "glWindowPos2dv", "glWindowPos2f", "glWindowPos2fv", "glWindowPos2i", "glWindowPos2iv", "glWindowPos2s", "glWindowPos2sv", "glWindowPos3d", "glWindowPos3dv", "glWindowPos3f", "glWindowPos3fv", "glWindowPos3i", "glWindowPos3iv", "glWindowPos3s", "glWindowPos3sv" } },
    { { 1, 5 }, { "glBeginQuery", "glBindBuffer", "glBufferData", "glBufferSubData", "glDeleteBuffers", "glDeleteQueries", "glEndQuery", "glGenBuffers", "glGenQueries", "glGetBufferParameteriv", "glGetBufferPointerv", "glGetBufferSubData", "glGetQueryObjectiv", "glGetQueryObjectuiv", "glGetQueryiv", "glIsBuffer", "glIsQuery", "glMapBuffer", "glUnmapBuffer" } },
    { { 2, 0 }, { "glAttachShader", "glBindAttribLocation", "glBlendEquationSeparate", "glCompileShader", "glCreateProgram", "glCreateShader", "glDeleteProgram", "glDeleteShader", "glDetachShader", "glDisableVertexAttribArray", "glDrawBuffers", "glEnableVertexAttribArray", "glGetActiveAttrib", "glGetActiveUniform", "glGetAttachedShaders", "glGetAttribLocation", "glGetProgramInfoLog", "glGetProgramiv", "glGetShaderInfoLog", "glGetShaderSource", "glGetShaderiv", "glGetUniformLocation", "glGetUniformfv", "glGetUniformiv", "glGetVertexAttribPointerv", "glGetVertexAttribdv", "glGetVertexAttribfv", "glGetVertexAttribiv", "glIsProgram", "glIsShader", "glLinkProgram", "glShaderSource", "glStencilFuncSeparate", "glStencilMaskSeparate", "glStencilOpSeparate", "glUniform1f", "glUniform1fv", "glUniform1i", "glUniform1iv", "glUniform2f", "glUniform2fv", "glUniform2i", "glUniform2iv", "glUniform3f", "glUniform3fv", "glUniform3i", "glUniform3iv", "glUniform4f", "glUniform4fv", "glUniform4i", "glUniform4iv", "glUniformMatrix2fv", "glUniformMatrix3fv", "glUniformMatrix4fv", "glUseProgram", "glValidateProgram", "glVertexAttrib1d", "glVertexAttrib1dv", "glVertexAttrib1f", "glVertexAttrib1fv", "glVertexAttrib1s", "glVertexAttrib1sv", "glVertexAttrib2d", "glVertexAttrib2dv", "glVertexAttrib2f", "glVertexAttrib2fv", "glVertexAttrib2s", "glVertexAttrib2sv", "glVertexAttrib3d", "glVertexAttrib3dv", "glVertexAttrib3f", "glVertexAttrib3fv", "glVertexAttrib3s", "glVertexAttrib3sv", "glVertexAttrib4Nbv", "glVertexAttrib4Niv", "glVertexAttrib4Nsv", "glVertexAttrib4Nub", "glVertexAttrib4Nubv", "glVertexAttrib4Nuiv", "glVertexAttrib4Nusv", "glVertexAttrib4bv", "glVertexAttrib4d", "glVertexAttrib4dv", "glVertexAttrib4f", "glVertexAttrib4fv", "glVertexAttrib4iv", "glVertexAttrib4s", "glVertexAttrib4sv", "glVertexAttrib4ubv", "glVertexAttrib4uiv", "glVertexAttrib4usv", "glVertexAttribPointer" } },
    { { 2, 1 }, { "glUniformMatrix2x3fv", "glUniformMatrix2x4fv", "glUniformMatrix3x2fv", "glUniformMatrix3x4fv", "glUniformMatrix4x2fv", "glUniformMatrix4x3fv" } },
    { { 3, 0 }, { "glBeginConditionalRender", "glBeginTransformFeedback", "glBindBufferBase", "glBindBufferRange", "glBindFragDataLocation", "glBindFramebuffer", "glBindRenderbuffer", "glBindVertexArray", "glBlitFramebuffer", "glCheckFramebufferStatus", "glClampColor", "glClearBufferfi", "glClearBufferfv", "glClearBufferiv", "glClearBufferuiv", "glColorMaski", "glDeleteFramebuffers", "glDeleteRenderbuffers", "glDeleteVertexArrays", "glDisablei", "glEnablei", "glEndConditionalRender", "glEndTransformFeedback", "glFlushMappedBufferRange", "glFramebufferRenderbuffer", "glFramebufferTexture1D", "glFramebufferTexture2D", "glFramebufferTexture3D", "glFramebufferTextureLayer", "glGenFramebuffers", "glGenRenderbuffers", "glGenVertexArrays", "glGenerateMipmap", "glGetBooleani_v", "glGetFragDataLocation", "glGetFramebufferAttachmentParameteriv", "glGetIntegeri_v", "glGetRenderbufferParameteriv", "glGetStringi", "glGetTexParameterIiv", "glGetTexParameterIuiv", "glGetTransformFeedbackVarying", "glGetUniformuiv", "glGetVertexAttribIiv", "glGetVertexAttribIuiv", "glIsEnabledi", "glIsFramebuffer", "glIsRenderbuffer", "glIsVertexArray", "glMapBufferRange", "glRenderbufferStorage", "glRenderbufferStorageMultisample", "glTexParameterIiv", "glTexParameterIuiv", "glTransformFeedbackVaryings", "glUniform1ui", "glUniform1uiv", "glUniform2ui", "glUniform2uiv", "glUniform3ui", "glUniform3uiv", "glUniform4ui", "glUniform4uiv", "glVertexAttribI1i", "glVertexAttribI1iv", "glVertexAttribI1ui", "glVertexAttribI1uiv", "glVertexAttribI2i", "glVertexAttribI2iv", "glVertexAttribI2ui", "glVertexAttribI2uiv", "glVertexAttribI3i", "glVertexAttribI3iv", "glVertexAttribI3ui", "glVertexAttribI3uiv", "glVertexAttribI4bv", "glVertexAttribI4i", "glVertexAttribI4iv", "glVertexAttribI4sv", "glVertexAttribI4ubv", "glVertexAttribI4ui", "glVertexAttribI4uiv", "glVertexAttribI4usv", "glVertexAttribIPointer" } },
    { { 3, 1 }, { "glBindBufferBase", "glBindBufferRange", "glCopyBufferSubData", "glDrawArraysInstanced", "glDrawElementsInstanced", "glGetActiveUniformBlockName", "glGetActiveUniformBlockiv", "glGetActiveUniformName", "glGetActiveUniformsiv", "glGetIntegeri_v", "glGetUniformBlockIndex", "glGetUniformIndices", "glPrimitiveRestartIndex", "glTexBuffer", "glUniformBlockBinding" } },
    { { 3, 2 }, { "glClientWaitSync", "glDeleteSync", "glDrawElementsBaseVertex", "glDrawElementsInstancedBaseVertex", "glDrawRangeElementsBaseVertex", "glFenceSync", "glFramebufferTexture", "glGetBufferParameteri64v", "glGetInteger64i_v", "glGetInteger64v", "glGetMultisamplefv", "glGetSynciv", "glIsSync", "glMultiDrawElementsBaseVertex", "glProvokingVertex", "glSampleMaski", "glTexImage2DMultisample", "glTexImage3DMultisample", "glWaitSync" } },
    { { 3, 3 }, { "glBindFragDataLocationIndexed", "glBindSampler", "glColorP3ui", "glColorP3uiv", "glColorP4ui", "glColorP4uiv", "glDeleteSamplers", "glGenSamplers", "glGetFragDataIndex", "glGetQueryObjecti64v", "glGetQueryObjectui64v", "glGetSamplerParameterIiv", "glGetSamplerParameterIuiv", "glGetSamplerParameterfv", "glGetSamplerParameteriv", "glIsSampler", "glMultiTexCoordP1ui", "glMultiTexCoordP1uiv", "glMultiTexCoordP2ui", "glMultiTexCoordP2uiv", "glMultiTexCoordP3ui", "glMultiTexCoordP3uiv", "glMultiTexCoordP4ui", "glMultiTexCoordP4uiv", "glNormalP3ui", "glNormalP3uiv", "glQueryCounter", "glSamplerParameterIiv", "glSamplerParameterIuiv", "glSamplerParameterf", "glSamplerParameterfv", "glSamplerParameteri", "glSamplerParameteriv", "glSecondaryColorP3ui", "glSecondaryColorP3uiv", "glTexCoordP1ui", "glTexCoordP1uiv", "glTexCoordP2ui", "glTexCoordP2uiv", "glTexCoordP3ui", "glTexCoordP3uiv", "glTexCoordP4ui", "glTexCoordP4uiv", "glVertexAttribDivisor", "glVertexAttribP1ui", "glVertexAttribP1uiv", "glVertexAttribP2ui", "glVertexAttribP2uiv", "glVertexAttribP3ui", "glVertexAttribP3uiv", "glVertexAttribP4ui", "glVertexAttribP4uiv", "glVertexP2ui", "glVertexP2uiv", "glVertexP3ui", "glVertexP3uiv", "glVertexP4ui", "glVertexP4uiv" } },
    { { 4, 0 }, { "glBeginQueryIndexed", "glBindTransformFeedback", "glBlendEquationSeparatei", "glBlendEquationi", "glBlendFuncSeparatei", "glBlendFunci", "glDeleteTransformFeedbacks", "glDrawArraysIndirect", "glDrawElementsIndirect", "glDrawTransformFeedback", "glDrawTransformFeedbackStream", "glEndQueryIndexed", "glGenTransformFeedbacks", "glGetActiveSubroutineName", "glGetActiveSubroutineUniformName", "glGetActiveSubroutineUniformiv", "glGetProgramStageiv", "glGetQueryIndexediv", "glGetSubroutineIndex", "glGetSubroutineUniformLocation", "glGetUniformSubroutineuiv", "glGetUniformdv", "glIsTransformFeedback", "glMinSampleShading", "glPatchParameterfv", "glPatchParameteri", "glPauseTransformFeedback", "glResumeTransformFeedback", "glUniform1d", "glUniform1dv", "glUniform2d", "glUniform2dv", "glUniform3d", "glUniform3dv", "glUniform4d", "glUniform4dv", "glUniformMatrix2dv", "glUniformMatrix2x3dv", "glUniformMatrix2x4dv", "glUniformMatrix3dv", "glUniformMatrix3x2dv", "glUniformMatrix3x4dv", "glUniformMatrix4dv", "glUniformMatrix4x2dv", "glUniformMatrix4x3dv", "glUniformSubroutinesuiv" } },
    { { 4, 1 }, { "glActiveShaderProgram", "glBindProgramPipeline", "glClearDepthf", "glCreateShaderProgramv", "glDeleteProgramPipelines", "glDepthRangeArrayv", "glDepthRangeIndexed", "glDepthRangef", "glGenProgramPipelines", "glGetDoublei_v", "glGetFloati_v", "glGetProgramBinary", "glGetProgramPipelineInfoLog", "glGetProgramPipelineiv", "glGetShaderPrecisionFormat", "glGetVertexAttribLdv", "glIsProgramPipeline", "glProgramBinary", "glProgramParameteri", "glProgramParameteri", "glProgramUniform1d", "glProgramUniform1dv", "glProgramUniform1f", "glProgramUniform1fv", "glProgramUniform1i", "glProgramUniform1iv", "glProgramUniform1ui", "glProgramUniform1uiv", "glProgramUniform2d", "glProgramUniform2dv", "glProgramUniform2f", "glProgramUniform2fv", "glProgramUniform2i", "glProgramUniform2iv", "glProgramUniform2ui", "glProgramUniform2uiv", "glProgramUniform3d", "glProgramUniform3dv", "glProgramUniform3f", "glProgramUniform3fv", "glProgramUniform3i", "glProgramUniform3iv", "glProgramUniform3ui", "glProgramUniform3uiv", "glProgramUniform4d", "glProgramUniform4dv", "glProgramUniform4f", "glProgramUniform4fv", "glProgramUniform4i", "glProgramUniform4iv", "glProgramUniform4ui", "glProgramUniform4uiv", "glProgramUniformMatrix2dv", "glProgramUniformMatrix2fv", "glProgramUniformMatrix2x3dv", "glProgramUniformMatrix2x3fv", "glProgramUniformMatrix2x4dv", "glProgramUniformMatrix2x4fv", "glProgramUniformMatrix3dv", "glProgramUniformMatrix3fv", "glProgramUniformMatrix3x2dv", "glProgramUniformMatrix3x2fv", "glProgramUniformMatrix3x4dv", "glProgramUniformMatrix3x4fv", "glProgramUniformMatrix4dv", "glProgramUniformMatrix4fv", "glProgramUniformMatrix4x2dv", "glProgramUniformMatrix4x2fv", "glProgramUniformMatrix4x3dv", "glProgramUniformMatrix4x3fv", "glReleaseShaderCompiler", "glScissorArrayv", "glScissorIndexed", "glScissorIndexedv", "glShaderBinary", "glUseProgramStages", "glValidateProgramPipeline", "glVertexAttribL1d", "glVertexAttribL1dv", "glVertexAttribL2d", "glVertexAttribL2dv", "glVertexAttribL3d", "glVertexAttribL3dv", "glVertexAttribL4d", "glVertexAttribL4dv", "glVertexAttribLPointer", "glViewportArrayv", "glViewportIndexedf", "glViewportIndexedfv" } },
    { { 4, 2 }, { "glBindImageTexture", "glDrawArraysInstancedBaseInstance", "glDrawElementsInstancedBaseInstance", "glDrawElementsInstancedBaseVertexBaseInstance", "glDrawTransformFeedbackInstanced", "glDrawTransformFeedbackStreamInstanced", "glGetActiveAtomicCounterBufferiv", "glGetInternalformativ", "glMemoryBarrier", "glTexStorage1D", "glTexStorage2D", "glTexStorage3D" } },
    { { 4, 3 }, { "glBindVertexBuffer", "glClearBufferData", "glClearBufferSubData", "glCopyImageSubData", "glDebugMessageCallback", "glDebugMessageControl", "glDebugMessageInsert", "glDispatchCompute", "glDispatchComputeIndirect", "glFramebufferParameteri", "glGetDebugMessageLog", "glGetFramebufferParameteriv", "glGetInternalformati64v", "glGetObjectLabel", "glGetObjectPtrLabel", "glGetPointerv", "glGetPointerv", "glGetProgramInterfaceiv", "glGetProgramResourceIndex", "glGetProgramResourceLocation", "glGetProgramResourceLocationIndex", "glGetProgramResourceName", "glGetProgramResourceiv", "glInvalidateBufferData", "glInvalidateBufferSubData", "glInvalidateFramebuffer", "glInvalidateSubFramebuffer", "glInvalidateTexImage", "glInvalidateTexSubImage", "glMultiDrawArraysIndirect", "glMultiDrawElementsIndirect", "glObjectLabel", "glObjectPtrLabel", "glPopDebugGroup", "glPushDebugGroup", "glShaderStorageBlockBinding", "glTexBufferRange", "glTexStorage2DMultisample", "glTexStorage3DMultisample", "glTextureView", "glVertexAttribBinding", "glVertexAttribFormat", "glVertexAttribIFormat", "glVertexAttribLFormat", "glVertexBindingDivisor" } },
    { { 4, 4 }, { "glBindBuffersBase", "glBindBuffersRange", "glBindImageTextures", "glBindSamplers", "glBindTextures", "glBindVertexBuffers", "glBufferStorage", "glClearTexImage", "glClearTexSubImage" } },
    { { 4, 5 }, { "glBindTextureUnit", "glBlitNamedFramebuffer", "glCheckNamedFramebufferStatus", "glClearNamedBufferData", "glClearNamedBufferSubData", "glClearNamedFramebufferfi", "glClearNamedFramebufferfv", "glClearNamedFramebufferiv", "glClearNamedFramebufferuiv", "glClipControl", "glCompressedTextureSubImage1D", "glCompressedTextureSubImage2D", "glCompressedTextureSubImage3D", "glCopyNamedBufferSubData", "glCopyTextureSubImage1D", "glCopyTextureSubImage2D", "glCopyTextureSubImage3D", "glCreateBuffers", "glCreateFramebuffers", "glCreateProgramPipelines", "glCreateQueries", "glCreateRenderbuffers", "glCreateSamplers", "glCreateTextures", "glCreateTransformFeedbacks", "glCreateVertexArrays", "glDisableVertexArrayAttrib", "glEnableVertexArrayAttrib", "glFlushMappedNamedBufferRange", "glGenerateTextureMipmap", "glGetCompressedTextureImage", "glGetCompressedTextureSubImage", "glGetGraphicsResetStatus", "glGetNamedBufferParameteri64v", "glGetNamedBufferParameteriv", "glGetNamedBufferPointerv", "glGetNamedBufferSubData", "glGetNamedFramebufferAttachmentParameteriv", "glGetNamedFramebufferParameteriv", "glGetNamedRenderbufferParameteriv", "glGetQueryBufferObjecti64v", "glGetQueryBufferObjectiv", "glGetQueryBufferObjectui64v", "glGetQueryBufferObjectuiv", "glGetTextureImage", "glGetTextureLevelParameterfv", "glGetTextureLevelParameteriv", "glGetTextureParameterIiv", "glGetTextureParameterIuiv", "glGetTextureParameterfv", "glGetTextureParameteriv", "glGetTextureSubImage", "glGetTransformFeedbacki64_v", "glGetTransformFeedbacki_v", "glGetTransformFeedbackiv", "glGetVertexArrayIndexed64iv", "glGetVertexArrayIndexediv", "glGetVertexArrayiv", "glGetnColorTable", "glGetnCompressedTexImage", "glGetnConvolutionFilter", "glGetnHistogram", "glGetnMapdv", "glGetnMapfv", "glGetnMapiv", "glGetnMinmax", "glGetnPixelMapfv", "glGetnPixelMapuiv", "glGetnPixelMapusv", "glGetnPolygonStipple", "glGetnSeparableFilter", "glGetnTexImage", "glGetnUniformdv", "glGetnUniformfv", "glGetnUniformiv", "glGetnUniformuiv", "glInvalidateNamedFramebufferData", "glInvalidateNamedFramebufferSubData", "glMapNamedBuffer", "glMapNamedBufferRange", "glMemoryBarrierByRegion", "glNamedBufferData", "glNamedBufferStorage", "glNamedBufferSubData", "glNamedFramebufferDrawBuffer", "glNamedFramebufferDrawBuffers", "glNamedFramebufferParameteri", "glNamedFramebufferReadBuffer", "glNamedFramebufferRenderbuffer", "glNamedFramebufferTexture", "glNamedFramebufferTextureLayer", "glNamedRenderbufferStorage", "glNamedRenderbufferStorageMultisample", "glReadnPixels", "glTextureBarrier", "glTextureBuffer", "glTextureBufferRange", "glTextureParameterIiv", "glTextureParameterIuiv", "glTextureParameterf", "glTextureParameterfv", "glTextureParameteri", "glTextureParameteriv", "glTextureStorage1D", "glTextureStorage2D", "glTextureStorage2DMultisample", "glTextureStorage3D", "glTextureStorage3DMultisample", "glTextureSubImage1D", "glTextureSubImage2D", "glTextureSubImage3D", "glTransformFeedbackBufferBase", "glTransformFeedbackBufferRange", "glUnmapNamedBuffer", "glVertexArrayAttribBinding", "glVertexArrayAttribFormat", "glVertexArrayAttribIFormat", "glVertexArrayAttribLFormat", "glVertexArrayBindingDivisor", "glVertexArrayElementBuffer", "glVertexArrayVertexBuffer", "glVertexArrayVertexBuffers" } }
};


} // namespace glbinding
