// Lean compiler output
// Module: Lean.Elab.Structure
// Imports: Init Lean.Parser.Command Lean.Meta.Closure Lean.Elab.Command Lean.Elab.DeclModifiers Lean.Elab.DeclUtil Lean.Elab.Inductive
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___rarg___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__1;
lean_object* l_Lean_Elab_Command_instInhabitedStructFieldInfo;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12;
lean_object* l_Lean_Elab_Command_elabStructure___lambda__1___boxed(lean_object**);
lean_object* l_Lean_Elab_Term_removeUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1(lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Elab_Term_evalExpr___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandOptDeclSig(lean_object*);
extern lean_object* l_Lean_Parser_Command_protected___elambda__1___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_elabAttr___rarg___lambda__10___closed__3;
extern lean_object* l_Lean_Syntax_strLitToAtom___closed__3;
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3(lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Command_checkResultingUniverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_elabAttr___rarg___lambda__8___closed__2;
lean_object* l_List_map___at_Lean_Meta_addInstance___spec__1(lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5;
lean_object* l_Lean_addDecl___at_Lean_Elab_Term_declareTacticSyntax___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOn___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12458____closed__10;
lean_object* l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1;
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_collectUsedFVarsAtFVars___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_mkResultUniverse(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isProtected(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_getResultingUniverse___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__1;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__11;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDocString_x27___at_Lean_Elab_Command_elabStructure___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___closed__3;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNoConfusion___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__2;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedAttribute;
extern lean_object* l_Lean_initFn____x40_Lean_Class___hyg_627____closed__1;
extern lean_object* l_Array_empty___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__9;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_quoteAutoTactic___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_projections(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_mkAuxName___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2;
lean_object* lean_private_to_user_name(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9;
lean_object* l_Lean_Elab_Term_ensureNoUnassignedMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_scoped___elambda__1___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isInternalSubobjectFieldName(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1(lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_getEvenElems___rarg___closed__1;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_applyAttributesAt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1(lean_object*);
lean_object* l_Lean_Level_getOffsetAux(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_6051____closed__4;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getLevelNames___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1;
lean_object* l_Lean_Elab_Command_shouldInferResultUniverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_accLevelAtCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_withLevelNames___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__17;
extern lean_object* l_Lean_Parser_Command_structExplicitBinder___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidCtorModifier___rarg___closed__3;
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxDefinition(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___closed__1;
lean_object* l___private_Lean_Elab_Command_0__Lean_Elab_Command_getVarDecls(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType___boxed(lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent___boxed(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2;
uint8_t l_Lean_Elab_Command_StructFieldInfo_inferMod___default;
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4;
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1;
lean_object* l_Lean_Elab_Command_instInhabitedStructFieldInfo___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_mkDeclName___rarg___closed__2;
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType(lean_object*);
extern lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__3;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3;
lean_object* l_Lean_Elab_Command_elabStructure___lambda__4___closed__1;
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Command_StructFieldInfo_isSubobject(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___closed__1;
lean_object* l_Lean_Elab_Command_elabStructure___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed__const__1;
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1(lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__3___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__14(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed(lean_object*);
lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabStructure___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3(lean_object*);
lean_object* l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDocString___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed__const__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__19(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__2;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___lambda__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_value_x3f___default;
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1;
lean_object* l_Lean_addDocString_x27___at_Lean_Elab_Command_elabStructure___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12458____closed__12;
extern lean_object* l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__1___closed__3;
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__2;
lean_object* l_Lean_mkRecOn___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3;
extern lean_object* l_Lean_Meta_mkProjection___lambda__1___closed__3;
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__1;
lean_object* l_Lean_Meta_addInstance(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2(lean_object*);
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___rarg___lambda__1___closed__3;
lean_object* l_Lean_Elab_Command_elabStructure___lambda__2___boxed(lean_object**);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject___boxed(lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDocString___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_protectedExt;
lean_object* l_Lean_Elab_Command_elabStructure___lambda__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Elab_Term_evalExpr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_6575____closed__4;
lean_object* l_Lean_CollectLevelParams_main(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1;
extern lean_object* l_Lean_docStringExt;
lean_object* l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__6___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1(lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1(lean_object*);
extern lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__15;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5;
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_sortDeclLevelParams(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_structSimpleBinder___elambda__1___closed__2;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1(lean_object*);
lean_object* l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_evalExpr___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_collectUsedFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields(lean_object*);
extern lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__3;
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_expandDeclIdCore(lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_updateBinderInfo(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinders___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___boxed(lean_object**);
extern lean_object* l_Lean_nullKind___closed__2;
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields(lean_object*);
lean_object* l_Lean_Elab_DerivingClassView_applyHandlers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1;
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1;
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabLetDeclAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__1;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resetMessageLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___at_Lean_NameHashSet_insert___spec__2(lean_object*, lean_object*);
extern lean_object* l_Option_get_x21___rarg___closed__4;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2(lean_object*);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12458____closed__13;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Util___hyg_1024____closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2;
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__2;
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
uint8_t l_Lean_isAttribute(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwKernelException___at_Lean_Elab_Term_declareTacticSyntax___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_CollectLevelParams_instInhabitedState___closed__1;
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___closed__2;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabStructure___spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_main_module(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___boxed__const__1;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4(lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__1(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4___rarg(lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedModifiers___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure___closed__1;
extern lean_object* l_Lean_Elab_sortDeclLevelParams___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___boxed(lean_object**);
lean_object* l_Array_appendCore___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__1;
lean_object* l_Lean_Elab_Term_withDeclName___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3;
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3;
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__3;
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6;
lean_object* l_Lean_Elab_Command_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12458____closed__9;
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2;
extern lean_object* l_Lean_Parser_Command_structInstBinder___elambda__1___closed__2;
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13068____closed__14;
extern lean_object* l_Lean_Elab_elabAttr___rarg___lambda__8___closed__3;
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1(lean_object*);
lean_object* l_Lean_Elab_expandDeclSig(lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___closed__2;
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3;
extern lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___rarg___lambda__2___closed__3;
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Level_getLevelOffset(lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_expandMacros(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Command_StructFieldInfo_isFromParent(lean_object*);
lean_object* l_Lean_Elab_Modifiers_addAttribute(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_set_reducibility_status(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__20;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__27;
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg(uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_expandOptDocComment_x3f___rarg___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__10;
lean_object* l_Lean_Elab_Command_initFn____x40_Lean_Elab_Structure___hyg_3822_(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1;
uint8_t l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_206_(uint8_t, uint8_t);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinders___rarg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_inferImplicit(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1(lean_object*);
lean_object* l_Lean_Elab_applyVisibility___at_Lean_Elab_Command_elabStructure___spec__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_prec_x28___x29___closed__7;
lean_object* l_Lean_Elab_Term_getLevelNames___boxed(lean_object*);
lean_object* l_Lean_Elab_applyVisibility___at_Lean_Elab_Command_elabStructure___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDocString___at_Lean_Elab_Command_elabStructure___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___closed__1;
uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object*);
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_prec_x28___x29___closed__3;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addAutoBoundImplicits(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_private___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Name_appendBefore(lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_CollectFVars_instInhabitedState___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__3;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2(lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__28;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDocString___at_Lean_Elab_Command_elabStructure___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2(lean_object*);
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9(lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1___rarg(lean_object*, lean_object*);
uint8_t l_Lean_Elab_isFreshInstanceName(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_structImplicitBinder___elambda__1___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__15;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___closed__1;
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2(lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidFieldModifier(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6(lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2;
extern lean_object* l_Lean_Elab_toAttributeKind___rarg___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3;
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Command_instInhabitedStructFieldKind;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__10___rarg(lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__2___closed__3;
lean_object* l_Lean_Elab_Command_elabStructure___lambda__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__6(lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3(lean_object*);
extern lean_object* l_Array_findSomeM_x3f___rarg___closed__1;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___lambda__1___boxed(lean_object**);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_is_class(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__31;
lean_object* l_Lean_Elab_Command_elabStructure___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Command_mkDefViewOfConstant___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7;
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_elabDeriving___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint8_t _init_l_Lean_Elab_Command_instInhabitedStructFieldKind() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Elab_Command_StructFieldInfo_inferMod___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_StructFieldInfo_value_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_instInhabitedStructFieldInfo___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = l_Lean_instInhabitedExpr___closed__1;
x_4 = 0;
x_5 = 0;
x_6 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_1);
lean_ctor_set_uint8(x_6, sizeof(void*)*4, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*4 + 1, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Command_instInhabitedStructFieldInfo() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Command_instInhabitedStructFieldInfo___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Elab_Command_StructFieldInfo_isFromParent_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
uint8_t l_Lean_Elab_Command_StructFieldInfo_isFromParent(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
x_3 = lean_box(x_2);
if (lean_obj_tag(x_3) == 1)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isFromParent___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Command_StructFieldInfo_isFromParent(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 2)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Elab_Command_StructFieldInfo_isSubobject_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
uint8_t l_Lean_Elab_Command_StructFieldInfo_isSubobject(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
x_3 = lean_box(x_2);
if (lean_obj_tag(x_3) == 2)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
}
lean_object* l_Lean_Elab_Command_StructFieldInfo_isSubobject___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Command_StructFieldInfo_isSubobject(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName() {
_start:
{
lean_object* x_1; 
x_1 = l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__9;
return x_1;
}
}
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 2;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
static lean_object* _init_l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___lambda__1___boxed), 8, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Syntax_isNone(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = l_Lean_Syntax_getArg(x_10, x_9);
lean_dec(x_10);
x_13 = l_Lean_Syntax_getKind(x_12);
x_14 = l_Lean_Parser_Term_scoped___elambda__1___closed__1;
x_15 = lean_name_eq(x_13, x_14);
lean_dec(x_13);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = 1;
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_8);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_6, 4);
lean_inc(x_19);
x_20 = l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___closed__1;
x_21 = l_Lean_Name_isAnonymous(x_19);
lean_dec(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = lean_apply_8(x_20, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = l_Lean_Elab_toAttributeKind___rarg___lambda__2___closed__2;
x_25 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
else
{
uint8_t x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = 0;
x_31 = lean_box(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_8);
return x_32;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at_Lean_Elab_Term_mkAuxName___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_20 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_15);
lean_ctor_set(x_21, 2, x_16);
lean_ctor_set(x_21, 3, x_20);
lean_ctor_set(x_21, 4, x_18);
lean_ctor_set(x_21, 5, x_19);
x_22 = l_Lean_throwError___at_Lean_Elab_Term_mkAuxName___spec__1(x_2, x_3, x_4, x_5, x_6, x_21, x_8, x_9);
lean_dec(x_21);
return x_22;
}
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_3);
lean_ctor_set_uint8(x_12, sizeof(void*)*2, x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_isAttribute(x_14, x_3);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_2);
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_3);
x_17 = l_Lean_Elab_elabAttr___rarg___lambda__8___closed__2;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_Elab_elabAttr___rarg___lambda__8___closed__3;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_box(0);
x_27 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(x_1, x_3, x_2, x_26, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_4);
return x_27;
}
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_36 = lean_unsigned_to_nat(1u);
x_37 = l_Lean_Syntax_getArg(x_1, x_36);
x_38 = lean_st_ref_get(x_7, x_13);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_ctor_get(x_6, 3);
lean_inc(x_42);
x_43 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_40);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_ctor_get(x_6, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_6, 2);
lean_inc(x_47);
x_48 = lean_st_ref_get(x_7, x_45);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
lean_inc(x_41);
x_52 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_52, 0, x_41);
x_53 = x_52;
x_54 = lean_environment_main_module(x_41);
x_55 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_55, 2, x_44);
lean_ctor_set(x_55, 3, x_46);
lean_ctor_set(x_55, 4, x_47);
lean_ctor_set(x_55, 5, x_42);
x_56 = l_Lean_expandMacros(x_37, x_55, x_51);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_st_ref_take(x_7, x_50);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = !lean_is_exclusive(x_60);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_60, 1);
lean_dec(x_63);
lean_ctor_set(x_60, 1, x_58);
x_64 = lean_st_ref_set(x_7, x_60, x_61);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_14 = x_57;
x_15 = x_65;
goto block_35;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_66 = lean_ctor_get(x_60, 0);
x_67 = lean_ctor_get(x_60, 2);
x_68 = lean_ctor_get(x_60, 3);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_60);
x_69 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_58);
lean_ctor_set(x_69, 2, x_67);
lean_ctor_set(x_69, 3, x_68);
x_70 = lean_st_ref_set(x_7, x_69, x_61);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_14 = x_57;
x_15 = x_71;
goto block_35;
}
}
else
{
lean_object* x_72; 
lean_dec(x_12);
x_72 = lean_ctor_get(x_56, 0);
lean_inc(x_72);
lean_dec(x_56);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_76 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_76, 0, x_75);
x_77 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_73, x_76, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_73);
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
return x_77;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_77, 0);
x_80 = lean_ctor_get(x_77, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_77);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
else
{
lean_object* x_82; uint8_t x_83; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_82 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__4___rarg(x_50);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
return x_82;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_82, 0);
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_82);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
block_35:
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_inc(x_14);
x_16 = l_Lean_Syntax_getKind(x_14);
x_17 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__15;
x_18 = lean_name_eq(x_16, x_17);
if (x_18 == 0)
{
if (lean_obj_tag(x_16) == 1)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_box(0);
x_21 = lean_name_mk_string(x_20, x_19);
x_22 = lean_unbox(x_12);
lean_dec(x_12);
x_23 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(x_22, x_14, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_16);
lean_dec(x_12);
x_24 = l_Lean_Elab_elabAttr___rarg___lambda__10___closed__3;
x_25 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6(x_14, x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_14);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; 
lean_dec(x_16);
x_30 = l_Lean_Syntax_getArg(x_14, x_9);
x_31 = l_Lean_Syntax_getId(x_30);
lean_dec(x_30);
x_32 = lean_erase_macro_scopes(x_31);
x_33 = lean_unbox(x_12);
lean_dec(x_12);
x_34 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(x_33, x_14, x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_34;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_87 = !lean_is_exclusive(x_11);
if (x_87 == 0)
{
return x_11;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_11, 0);
x_89 = lean_ctor_get(x_11, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_11);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_uget(x_1, x_3);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_array_push(x_4, x_16);
x_19 = 1;
x_20 = x_3 + x_19;
x_3 = x_20;
x_4 = x_18;
x_11 = x_17;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 0);
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
x_9 = l_Lean_Syntax_getSepArgs(x_1);
x_10 = lean_array_get_size(x_9);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = 0;
x_13 = l_Array_empty___closed__1;
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(x_9, x_11, x_12, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_9);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_20 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_15);
lean_ctor_set(x_21, 2, x_16);
lean_ctor_set(x_21, 3, x_20);
lean_ctor_set(x_21, 4, x_18);
lean_ctor_set(x_21, 5, x_19);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9(x_2, x_3, x_4, x_5, x_6, x_21, x_8, x_9);
lean_dec(x_21);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_20 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_15);
lean_ctor_set(x_21, 2, x_16);
lean_ctor_set(x_21, 3, x_20);
lean_ctor_set(x_21, 4, x_18);
lean_ctor_set(x_21, 5, x_19);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11(x_2, x_3, x_4, x_5, x_6, x_21, x_8, x_9);
lean_dec(x_21);
return x_22;
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; uint8_t x_16; 
x_14 = l_Lean_Syntax_isNone(x_1);
x_15 = l_Lean_Syntax_isNone(x_2);
x_16 = l_Lean_Syntax_isNone(x_3);
if (x_14 == 0)
{
if (x_15 == 0)
{
if (x_16 == 0)
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_17 = 1;
x_18 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_18, 0, x_4);
lean_ctor_set(x_18, 1, x_6);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 1, x_17);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 2, x_17);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 3, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_13);
return x_19;
}
else
{
uint8_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = 1;
x_21 = 0;
x_22 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_22, 1, x_6);
lean_ctor_set_uint8(x_22, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 1, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 2, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 3, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_13);
return x_23;
}
}
else
{
if (x_16 == 0)
{
uint8_t x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = 1;
x_25 = 0;
x_26 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_6);
lean_ctor_set_uint8(x_26, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 1, x_24);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 2, x_25);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 3, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_13);
return x_27;
}
else
{
uint8_t x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = 1;
x_29 = 0;
x_30 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_30, 0, x_4);
lean_ctor_set(x_30, 1, x_6);
lean_ctor_set_uint8(x_30, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 1, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 2, x_29);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 3, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_13);
return x_31;
}
}
}
else
{
if (x_15 == 0)
{
if (x_16 == 0)
{
uint8_t x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = 0;
x_33 = 1;
x_34 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_34, 0, x_4);
lean_ctor_set(x_34, 1, x_6);
lean_ctor_set_uint8(x_34, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 1, x_32);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 2, x_33);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 3, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_13);
return x_35;
}
else
{
uint8_t x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = 0;
x_37 = 1;
x_38 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_38, 0, x_4);
lean_ctor_set(x_38, 1, x_6);
lean_ctor_set_uint8(x_38, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 1, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 2, x_37);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 3, x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_13);
return x_39;
}
}
else
{
if (x_16 == 0)
{
uint8_t x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; 
x_40 = 0;
x_41 = 1;
x_42 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_42, 0, x_4);
lean_ctor_set(x_42, 1, x_6);
lean_ctor_set_uint8(x_42, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_42, sizeof(void*)*2 + 1, x_40);
lean_ctor_set_uint8(x_42, sizeof(void*)*2 + 2, x_40);
lean_ctor_set_uint8(x_42, sizeof(void*)*2 + 3, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_13);
return x_43;
}
else
{
uint8_t x_44; lean_object* x_45; lean_object* x_46; 
x_44 = 0;
x_45 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_45, 0, x_4);
lean_ctor_set(x_45, 1, x_6);
lean_ctor_set_uint8(x_45, sizeof(void*)*2, x_5);
lean_ctor_set_uint8(x_45, sizeof(void*)*2 + 1, x_44);
lean_ctor_set_uint8(x_45, sizeof(void*)*2 + 2, x_44);
lean_ctor_set_uint8(x_45, sizeof(void*)*2 + 3, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_13);
return x_46;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Syntax_getOptional_x3f(x_5);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Array_empty___closed__1;
x_16 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_6, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_18 = l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2(x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_6, x_19, x_7, x_8, x_9, x_10, x_11, x_12, x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Syntax_getOptional_x3f(x_5);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; lean_object* x_16; 
x_15 = 0;
x_16 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(x_1, x_2, x_3, x_6, x_4, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_17);
x_18 = l_Lean_Syntax_getKind(x_17);
x_19 = l_Lean_Parser_Command_private___elambda__1___closed__2;
x_20 = lean_name_eq(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_Lean_Parser_Command_protected___elambda__1___closed__1;
x_22 = lean_name_eq(x_18, x_21);
lean_dec(x_18);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_6);
x_23 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3;
x_24 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8(x_17, x_23, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_17);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
return x_24;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_24);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; lean_object* x_30; 
lean_dec(x_17);
x_29 = 1;
x_30 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(x_1, x_2, x_3, x_6, x_4, x_29, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_30;
}
}
else
{
uint8_t x_31; lean_object* x_32; 
lean_dec(x_18);
lean_dec(x_17);
x_31 = 2;
x_32 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(x_1, x_2, x_3, x_6, x_4, x_31, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_32;
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_unsigned_to_nat(2u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(3u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
x_17 = lean_unsigned_to_nat(4u);
x_18 = l_Lean_Syntax_getArg(x_1, x_17);
x_19 = lean_unsigned_to_nat(5u);
x_20 = l_Lean_Syntax_getArg(x_1, x_19);
x_21 = l_Lean_Syntax_getOptional_x3f(x_10);
lean_dec(x_10);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(x_16, x_20, x_18, x_12, x_14, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_18);
lean_dec(x_20);
lean_dec(x_16);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_21, 0);
x_26 = l_Lean_Syntax_getArg(x_25, x_11);
if (lean_obj_tag(x_26) == 2)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_25);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_string_utf8_byte_size(x_27);
x_29 = lean_nat_sub(x_28, x_13);
lean_dec(x_28);
x_30 = lean_string_utf8_extract(x_27, x_9, x_29);
lean_dec(x_29);
lean_dec(x_27);
lean_ctor_set(x_21, 0, x_30);
x_31 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(x_16, x_20, x_18, x_12, x_14, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_18);
lean_dec(x_20);
lean_dec(x_16);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_free_object(x_21);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_26);
x_33 = l_Lean_Elab_expandOptDocComment_x3f___rarg___closed__2;
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = l_Lean_KernelException_toMessageData___closed__15;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10(x_25, x_36, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_25);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
return x_37;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_37);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_21, 0);
lean_inc(x_42);
lean_dec(x_21);
x_43 = l_Lean_Syntax_getArg(x_42, x_11);
if (lean_obj_tag(x_43) == 2)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_42);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_string_utf8_byte_size(x_44);
x_46 = lean_nat_sub(x_45, x_13);
lean_dec(x_45);
x_47 = lean_string_utf8_extract(x_44, x_9, x_46);
lean_dec(x_46);
lean_dec(x_44);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(x_16, x_20, x_18, x_12, x_14, x_48, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_18);
lean_dec(x_20);
lean_dec(x_16);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_43);
x_51 = l_Lean_Elab_expandOptDocComment_x3f___rarg___closed__2;
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = l_Lean_KernelException_toMessageData___closed__15;
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10(x_42, x_54, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_42);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__1___closed__3;
x_15 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_9);
return x_17;
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__1(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__2___closed__3;
x_14 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__2(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__3___closed__3;
x_14 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__3(x_1, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = l_Lean_Elab_Command_checkValidCtorModifier___rarg___closed__3;
x_13 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_Environment_contains(x_2, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_4);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_18, 0, x_14);
x_19 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwError___at_Lean_Elab_Term_evalExpr___spec__7(x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_23;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
lean_inc(x_1);
lean_inc(x_2);
x_11 = l_Lean_mkPrivateName(x_2, x_1);
lean_inc(x_2);
x_12 = l_Lean_Environment_contains(x_2, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__1(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_2);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_1);
x_16 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_12);
x_13 = l_Lean_Environment_contains(x_12, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__2(x_1, x_12, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_12);
lean_inc(x_1);
x_16 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_1);
x_18 = l_Lean_KernelException_toMessageData___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwError___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_dec(x_1);
x_27 = lean_ctor_get(x_16, 0);
lean_inc(x_27);
lean_dec(x_16);
x_28 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_throwError___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
return x_33;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_10; 
lean_inc(x_2);
x_10 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_2);
return x_10;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
case 1:
{
lean_object* x_19; 
lean_inc(x_3);
lean_inc(x_2);
x_19 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_8, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_protectedExt;
lean_inc(x_2);
x_26 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_25, x_24, x_2);
x_27 = l_Lean_setEnv___at_Lean_Elab_Term_evalExpr___spec__8(x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
lean_dec(x_3);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_2);
return x_27;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_2);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
return x_19;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_19, 0);
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_19);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
default: 
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_st_ref_get(x_8, x_9);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_mkPrivateName(x_39, x_2);
lean_inc(x_40);
x_41 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14(x_40, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
lean_ctor_set(x_41, 0, x_40);
return x_41;
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_40);
x_46 = !lean_is_exclusive(x_41);
if (x_46 == 0)
{
return x_41;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_41, 0);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_41);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
}
}
lean_object* l_Lean_addDocString___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_2);
x_16 = l_Lean_docStringExt;
x_17 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_16, x_14, x_15);
lean_ctor_set(x_11, 0, x_17);
x_18 = lean_st_ref_set(x_8, x_11, x_12);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_25 = lean_ctor_get(x_11, 0);
x_26 = lean_ctor_get(x_11, 1);
x_27 = lean_ctor_get(x_11, 2);
x_28 = lean_ctor_get(x_11, 3);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_11);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_1);
lean_ctor_set(x_29, 1, x_2);
x_30 = l_Lean_docStringExt;
x_31 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_30, x_25, x_29);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_26);
lean_ctor_set(x_32, 2, x_27);
lean_ctor_set(x_32, 3, x_28);
x_33 = lean_st_ref_set(x_8, x_32, x_12);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_35 = x_33;
} else {
 lean_dec_ref(x_33);
 x_35 = lean_box(0);
}
x_36 = lean_box(0);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
}
}
lean_object* l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_Lean_addDocString___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__16(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = l_Lean_Syntax_isNone(x_13);
lean_dec(x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
x_17 = l_Lean_Syntax_getId(x_16);
lean_dec(x_16);
lean_inc(x_17);
x_18 = l_Lean_Name_append(x_2, x_17);
x_19 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
lean_inc(x_5);
x_20 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13(x_19, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (x_14 == 0)
{
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_3, 0);
lean_inc(x_23);
lean_inc(x_21);
x_24 = l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15(x_21, x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
lean_dec(x_5);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
x_27 = 1;
x_28 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_3);
lean_ctor_set(x_28, 2, x_17);
lean_ctor_set(x_28, 3, x_21);
lean_ctor_set_uint8(x_28, sizeof(void*)*4, x_27);
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = 1;
x_31 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_3);
lean_ctor_set(x_31, 2, x_17);
lean_ctor_set(x_31, 3, x_21);
lean_ctor_set_uint8(x_31, sizeof(void*)*4, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_17);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_20);
if (x_33 == 0)
{
return x_20;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_20, 0);
x_35 = lean_ctor_get(x_20, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_20);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_37 = lean_ctor_get(x_20, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_20, 1);
lean_inc(x_38);
lean_dec(x_20);
x_39 = lean_ctor_get(x_3, 0);
lean_inc(x_39);
lean_inc(x_37);
x_40 = l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15(x_37, x_39, x_5, x_6, x_7, x_8, x_9, x_10, x_38);
lean_dec(x_5);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
x_43 = 0;
x_44 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_44, 0, x_1);
lean_ctor_set(x_44, 1, x_3);
lean_ctor_set(x_44, 2, x_17);
lean_ctor_set(x_44, 3, x_37);
lean_ctor_set_uint8(x_44, sizeof(void*)*4, x_43);
lean_ctor_set(x_40, 0, x_44);
return x_40;
}
else
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_40, 1);
lean_inc(x_45);
lean_dec(x_40);
x_46 = 0;
x_47 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_47, 0, x_1);
lean_ctor_set(x_47, 1, x_3);
lean_ctor_set(x_47, 2, x_17);
lean_ctor_set(x_47, 3, x_37);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_45);
return x_48;
}
}
else
{
uint8_t x_49; 
lean_dec(x_17);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_20);
if (x_49 == 0)
{
return x_20;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_20, 0);
x_51 = lean_ctor_get(x_20, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_20);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'protected' constructor in a 'private' structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = l_Lean_Elab_Modifiers_isProtected(x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(x_1, x_2, x_3, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = l_Lean_Elab_Modifiers_isPrivate(x_4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_box(0);
x_18 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(x_1, x_2, x_3, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_3);
lean_dec(x_1);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3;
x_20 = l_Lean_throwError___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_19, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'private' constructor in a 'private' structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName;
x_12 = l_Lean_Name_append(x_3, x_11);
x_13 = l_Lean_Elab_instInhabitedModifiers___closed__1;
x_14 = 0;
lean_inc(x_1);
x_15 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_13);
lean_ctor_set(x_15, 2, x_11);
lean_ctor_set(x_15, 3, x_12);
lean_ctor_set_uint8(x_15, sizeof(void*)*4, x_14);
x_16 = lean_unsigned_to_nat(5u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
lean_dec(x_1);
x_18 = l_Lean_Syntax_isNone(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = l_Lean_Syntax_getArg(x_17, x_19);
lean_dec(x_17);
x_21 = l_Lean_Syntax_isNone(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_15);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Lean_Syntax_getArg(x_20, x_22);
lean_dec(x_20);
x_24 = l_Lean_Syntax_getArg(x_23, x_22);
x_25 = !lean_is_exclusive(x_8);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_8, 3);
x_27 = l_Lean_replaceRef(x_23, x_26);
lean_dec(x_26);
lean_ctor_set(x_8, 3, x_27);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_28 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(x_24, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_24);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_4);
x_31 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12(x_29, x_4, x_5, x_6, x_7, x_8, x_9, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_Lean_Elab_Modifiers_isPrivate(x_29);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_box(0);
x_35 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_23, x_3, x_29, x_2, x_34, x_4, x_5, x_6, x_7, x_8, x_9, x_32);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_35;
}
else
{
uint8_t x_36; 
x_36 = l_Lean_Elab_Modifiers_isPrivate(x_2);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_box(0);
x_38 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_23, x_3, x_29, x_2, x_37, x_4, x_5, x_6, x_7, x_8, x_9, x_32);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_dec(x_29);
lean_dec(x_23);
x_39 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3;
x_40 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_39, x_4, x_5, x_6, x_7, x_8, x_9, x_32);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
return x_40;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_40);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_29);
lean_dec(x_8);
lean_dec(x_23);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_45 = !lean_is_exclusive(x_31);
if (x_45 == 0)
{
return x_31;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_31, 0);
x_47 = lean_ctor_get(x_31, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_31);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_8);
lean_dec(x_23);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_49 = !lean_is_exclusive(x_28);
if (x_49 == 0)
{
return x_28;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_28, 0);
x_51 = lean_ctor_get(x_28, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_28);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_53 = lean_ctor_get(x_8, 0);
x_54 = lean_ctor_get(x_8, 1);
x_55 = lean_ctor_get(x_8, 2);
x_56 = lean_ctor_get(x_8, 3);
x_57 = lean_ctor_get(x_8, 4);
x_58 = lean_ctor_get(x_8, 5);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_8);
x_59 = l_Lean_replaceRef(x_23, x_56);
lean_dec(x_56);
x_60 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_60, 0, x_53);
lean_ctor_set(x_60, 1, x_54);
lean_ctor_set(x_60, 2, x_55);
lean_ctor_set(x_60, 3, x_59);
lean_ctor_set(x_60, 4, x_57);
lean_ctor_set(x_60, 5, x_58);
lean_inc(x_9);
lean_inc(x_60);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_61 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(x_24, x_4, x_5, x_6, x_7, x_60, x_9, x_10);
lean_dec(x_24);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
lean_inc(x_4);
x_64 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12(x_62, x_4, x_5, x_6, x_7, x_60, x_9, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; uint8_t x_66; 
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = l_Lean_Elab_Modifiers_isPrivate(x_62);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_box(0);
x_68 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_23, x_3, x_62, x_2, x_67, x_4, x_5, x_6, x_7, x_60, x_9, x_65);
lean_dec(x_9);
lean_dec(x_60);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_68;
}
else
{
uint8_t x_69; 
x_69 = l_Lean_Elab_Modifiers_isPrivate(x_2);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_box(0);
x_71 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_23, x_3, x_62, x_2, x_70, x_4, x_5, x_6, x_7, x_60, x_9, x_65);
lean_dec(x_9);
lean_dec(x_60);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_62);
lean_dec(x_23);
x_72 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3;
x_73 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_72, x_4, x_5, x_6, x_7, x_60, x_9, x_65);
lean_dec(x_9);
lean_dec(x_60);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_23);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_78 = lean_ctor_get(x_64, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_64, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_80 = x_64;
} else {
 lean_dec_ref(x_64);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(1, 2, 0);
} else {
 x_81 = x_80;
}
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_60);
lean_dec(x_23);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_82 = lean_ctor_get(x_61, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_61, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_84 = x_61;
} else {
 lean_dec_ref(x_61);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
else
{
lean_object* x_86; 
lean_dec(x_20);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_15);
lean_ctor_set(x_86, 1, x_10);
return x_86;
}
}
else
{
lean_object* x_87; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_15);
lean_ctor_set(x_87, 1, x_10);
return x_87;
}
}
}
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_1);
lean_dec(x_1);
x_13 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_1);
lean_dec(x_1);
x_12 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__2(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__7(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_5);
lean_dec(x_5);
x_15 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_6);
lean_dec(x_6);
x_15 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_14, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_addDocString___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addDocString___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__16(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("private fields are not supported yet");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Lean_Elab_Modifiers_isPrivate(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3;
x_14 = l_Lean_throwError___at_Lean_Elab_Term_evalExpr___spec__7(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of attributes in field declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3;
x_15 = l_Lean_throwError___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_box(0);
x_21 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1(x_1, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_21;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of 'unsafe' in field declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3;
x_14 = l_Lean_throwError___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of 'partial' in field declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3;
x_14 = l_Lean_throwError___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of 'noncomputable' in field declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidFieldModifier___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4(x_1, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = l_Lean_Elab_Command_checkValidFieldModifier___closed__3;
x_13 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Command_checkValidFieldModifier___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_checkValidFieldModifier___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Command_checkValidFieldModifier(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Syntax_isNone(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = l_Lean_Syntax_getArg(x_10, x_9);
lean_dec(x_10);
x_13 = l_Lean_Syntax_getKind(x_12);
x_14 = l_Lean_Parser_Term_scoped___elambda__1___closed__1;
x_15 = lean_name_eq(x_13, x_14);
lean_dec(x_13);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_16 = 1;
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_8);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_6, 4);
x_20 = l_Lean_Name_isAnonymous(x_19);
if (x_20 == 0)
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_2);
x_21 = 2;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_8);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = l_Lean_Elab_toAttributeKind___rarg___lambda__2___closed__2;
x_25 = l_Lean_throwError___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
else
{
uint8_t x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_10);
lean_dec(x_2);
x_30 = 0;
x_31 = lean_box(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_8);
return x_32;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_20 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_15);
lean_ctor_set(x_21, 2, x_16);
lean_ctor_set(x_21, 3, x_20);
lean_ctor_set(x_21, 4, x_18);
lean_ctor_set(x_21, 5, x_19);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7(x_2, x_3, x_4, x_5, x_6, x_21, x_8, x_9);
lean_dec(x_21);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__9(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_20 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_15);
lean_ctor_set(x_21, 2, x_16);
lean_ctor_set(x_21, 3, x_20);
lean_ctor_set(x_21, 4, x_18);
lean_ctor_set(x_21, 5, x_19);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__9(x_2, x_3, x_4, x_5, x_6, x_21, x_8, x_9);
lean_dec(x_21);
return x_22;
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__10___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__10___rarg), 1, 0);
return x_7;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_isAttribute(x_14, x_3);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_2);
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_3);
x_17 = l_Lean_Elab_elabAttr___rarg___lambda__8___closed__2;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_Elab_elabAttr___rarg___lambda__8___closed__3;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_throwError___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_box(0);
x_27 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__4___lambda__1(x_1, x_3, x_2, x_26, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_4);
return x_27;
}
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
lean_inc(x_2);
x_11 = l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_36 = lean_unsigned_to_nat(1u);
x_37 = l_Lean_Syntax_getArg(x_1, x_36);
x_38 = lean_st_ref_get(x_7, x_13);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_ctor_get(x_6, 3);
lean_inc(x_42);
x_43 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_40);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_ctor_get(x_6, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_6, 2);
lean_inc(x_47);
x_48 = lean_st_ref_get(x_7, x_45);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
lean_inc(x_41);
x_52 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_52, 0, x_41);
x_53 = x_52;
x_54 = lean_environment_main_module(x_41);
x_55 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_55, 2, x_44);
lean_ctor_set(x_55, 3, x_46);
lean_ctor_set(x_55, 4, x_47);
lean_ctor_set(x_55, 5, x_42);
x_56 = l_Lean_expandMacros(x_37, x_55, x_51);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_st_ref_take(x_7, x_50);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = !lean_is_exclusive(x_60);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_60, 1);
lean_dec(x_63);
lean_ctor_set(x_60, 1, x_58);
x_64 = lean_st_ref_set(x_7, x_60, x_61);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_14 = x_57;
x_15 = x_65;
goto block_35;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_66 = lean_ctor_get(x_60, 0);
x_67 = lean_ctor_get(x_60, 2);
x_68 = lean_ctor_get(x_60, 3);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_60);
x_69 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_58);
lean_ctor_set(x_69, 2, x_67);
lean_ctor_set(x_69, 3, x_68);
x_70 = lean_st_ref_set(x_7, x_69, x_61);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_14 = x_57;
x_15 = x_71;
goto block_35;
}
}
else
{
lean_object* x_72; 
lean_dec(x_12);
x_72 = lean_ctor_get(x_56, 0);
lean_inc(x_72);
lean_dec(x_56);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_76 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_76, 0, x_75);
x_77 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8(x_73, x_76, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
lean_dec(x_73);
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
return x_77;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_77, 0);
x_80 = lean_ctor_get(x_77, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_77);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
else
{
lean_object* x_82; uint8_t x_83; 
lean_dec(x_6);
lean_dec(x_2);
x_82 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__10___rarg(x_50);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
return x_82;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_82, 0);
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_82);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
block_35:
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_inc(x_14);
x_16 = l_Lean_Syntax_getKind(x_14);
x_17 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__15;
x_18 = lean_name_eq(x_16, x_17);
if (x_18 == 0)
{
if (lean_obj_tag(x_16) == 1)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_box(0);
x_21 = lean_name_mk_string(x_20, x_19);
x_22 = lean_unbox(x_12);
lean_dec(x_12);
x_23 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___lambda__1(x_22, x_14, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_6);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_16);
lean_dec(x_12);
x_24 = l_Lean_Elab_elabAttr___rarg___lambda__10___closed__3;
x_25 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6(x_14, x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_14);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; 
lean_dec(x_16);
x_30 = l_Lean_Syntax_getArg(x_14, x_9);
x_31 = l_Lean_Syntax_getId(x_30);
lean_dec(x_30);
x_32 = lean_erase_macro_scopes(x_31);
x_33 = lean_unbox(x_12);
lean_dec(x_12);
x_34 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___lambda__1(x_33, x_14, x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_6);
return x_34;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_6);
lean_dec(x_2);
x_87 = !lean_is_exclusive(x_11);
if (x_87 == 0)
{
return x_11;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_11, 0);
x_89 = lean_ctor_get(x_11, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_11);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__11(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_uget(x_1, x_3);
lean_inc(x_9);
lean_inc(x_5);
x_15 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_array_push(x_4, x_16);
x_19 = 1;
x_20 = x_3 + x_19;
x_3 = x_20;
x_4 = x_18;
x_11 = x_17;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 0);
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
x_9 = l_Lean_Syntax_getSepArgs(x_1);
x_10 = lean_array_get_size(x_9);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = 0;
x_13 = l_Array_empty___closed__1;
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__11(x_9, x_11, x_12, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_9);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__13(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_20 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_15);
lean_ctor_set(x_21, 2, x_16);
lean_ctor_set(x_21, 3, x_20);
lean_ctor_set(x_21, 4, x_18);
lean_ctor_set(x_21, 5, x_19);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__13(x_2, x_3, x_4, x_5, x_6, x_21, x_8, x_9);
lean_dec(x_21);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__15(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_20 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_15);
lean_ctor_set(x_21, 2, x_16);
lean_ctor_set(x_21, 3, x_20);
lean_ctor_set(x_21, 4, x_18);
lean_ctor_set(x_21, 5, x_19);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__15(x_2, x_3, x_4, x_5, x_6, x_21, x_8, x_9);
lean_dec(x_21);
return x_22;
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Syntax_getOptional_x3f(x_5);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Array_empty___closed__1;
x_16 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_6, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_11);
lean_dec(x_7);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_11);
lean_inc(x_7);
x_18 = l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2(x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_6, x_19, x_7, x_8, x_9, x_10, x_11, x_12, x_20);
lean_dec(x_11);
lean_dec(x_7);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_4);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Syntax_getOptional_x3f(x_5);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; lean_object* x_16; 
x_15 = 0;
x_16 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1(x_1, x_2, x_3, x_6, x_4, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_17);
x_18 = l_Lean_Syntax_getKind(x_17);
x_19 = l_Lean_Parser_Command_private___elambda__1___closed__2;
x_20 = lean_name_eq(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_Lean_Parser_Command_protected___elambda__1___closed__1;
x_22 = lean_name_eq(x_18, x_21);
lean_dec(x_18);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_6);
x_23 = l_Lean_Elab_elabModifiers___rarg___lambda__3___closed__3;
x_24 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__12(x_17, x_23, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_17);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
return x_24;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_24);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; lean_object* x_30; 
lean_dec(x_17);
x_29 = 1;
x_30 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1(x_1, x_2, x_3, x_6, x_4, x_29, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_30;
}
}
else
{
uint8_t x_31; lean_object* x_32; 
lean_dec(x_18);
lean_dec(x_17);
x_31 = 2;
x_32 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1(x_1, x_2, x_3, x_6, x_4, x_31, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_32;
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = lean_unsigned_to_nat(2u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(3u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
x_17 = lean_unsigned_to_nat(4u);
x_18 = l_Lean_Syntax_getArg(x_1, x_17);
x_19 = lean_unsigned_to_nat(5u);
x_20 = l_Lean_Syntax_getArg(x_1, x_19);
x_21 = l_Lean_Syntax_getOptional_x3f(x_10);
lean_dec(x_10);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2(x_16, x_20, x_18, x_12, x_14, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_18);
lean_dec(x_20);
lean_dec(x_16);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_21, 0);
x_26 = l_Lean_Syntax_getArg(x_25, x_11);
if (lean_obj_tag(x_26) == 2)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_25);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_string_utf8_byte_size(x_27);
x_29 = lean_nat_sub(x_28, x_13);
lean_dec(x_28);
x_30 = lean_string_utf8_extract(x_27, x_9, x_29);
lean_dec(x_29);
lean_dec(x_27);
lean_ctor_set(x_21, 0, x_30);
x_31 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2(x_16, x_20, x_18, x_12, x_14, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_18);
lean_dec(x_20);
lean_dec(x_16);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_free_object(x_21);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_26);
x_33 = l_Lean_Elab_expandOptDocComment_x3f___rarg___closed__2;
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = l_Lean_KernelException_toMessageData___closed__15;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__14(x_25, x_36, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_25);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
return x_37;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_37);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_21, 0);
lean_inc(x_42);
lean_dec(x_21);
x_43 = l_Lean_Syntax_getArg(x_42, x_11);
if (lean_obj_tag(x_43) == 2)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_42);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_string_utf8_byte_size(x_44);
x_46 = lean_nat_sub(x_45, x_13);
lean_dec(x_45);
x_47 = lean_string_utf8_extract(x_44, x_9, x_46);
lean_dec(x_46);
lean_dec(x_44);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2(x_16, x_20, x_18, x_12, x_14, x_48, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_18);
lean_dec(x_20);
lean_dec(x_16);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_43);
x_51 = l_Lean_Elab_expandOptDocComment_x3f___rarg___closed__2;
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = l_Lean_KernelException_toMessageData___closed__15;
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__14(x_42, x_54, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_42);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; 
lean_inc(x_2);
x_19 = l_Lean_Name_append(x_1, x_2);
x_20 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
lean_inc(x_12);
x_21 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__13(x_20, x_19, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_3, 0);
lean_inc(x_24);
lean_inc(x_22);
x_25 = l_Lean_addDocString_x27___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__15(x_22, x_24, x_12, x_13, x_14, x_15, x_16, x_17, x_23);
lean_dec(x_12);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
x_28 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_28, 0, x_4);
lean_ctor_set(x_28, 1, x_3);
lean_ctor_set(x_28, 2, x_22);
lean_ctor_set(x_28, 3, x_2);
lean_ctor_set(x_28, 4, x_7);
lean_ctor_set(x_28, 5, x_8);
lean_ctor_set(x_28, 6, x_9);
lean_ctor_set_uint8(x_28, sizeof(void*)*7, x_5);
lean_ctor_set_uint8(x_28, sizeof(void*)*7 + 1, x_6);
x_29 = lean_array_push(x_10, x_28);
lean_ctor_set(x_25, 0, x_29);
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
lean_dec(x_25);
x_31 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_31, 0, x_4);
lean_ctor_set(x_31, 1, x_3);
lean_ctor_set(x_31, 2, x_22);
lean_ctor_set(x_31, 3, x_2);
lean_ctor_set(x_31, 4, x_7);
lean_ctor_set(x_31, 5, x_8);
lean_ctor_set(x_31, 6, x_9);
lean_ctor_set_uint8(x_31, sizeof(void*)*7, x_5);
lean_ctor_set_uint8(x_31, sizeof(void*)*7 + 1, x_6);
x_32 = lean_array_push(x_10, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_21);
if (x_34 == 0)
{
return x_21;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_21, 0);
x_36 = lean_ctor_get(x_21, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_21);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_mkProjection___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("', identifiers starting with '_' are reserved to the system");
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16(lean_object* x_1, uint8_t x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, size_t x_9, size_t x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
uint8_t x_19; 
x_19 = x_9 == x_10;
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_20 = lean_array_uget(x_8, x_9);
x_21 = l_Lean_Syntax_getId(x_20);
x_22 = l_Lean_isInternalSubobjectFieldName(x_21);
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
x_25 = lean_ctor_get(x_16, 2);
x_26 = lean_ctor_get(x_16, 3);
x_27 = lean_ctor_get(x_16, 4);
x_28 = lean_ctor_get(x_16, 5);
x_29 = l_Lean_replaceRef(x_20, x_26);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
x_30 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_30, 0, x_23);
lean_ctor_set(x_30, 1, x_24);
lean_ctor_set(x_30, 2, x_25);
lean_ctor_set(x_30, 3, x_29);
lean_ctor_set(x_30, 4, x_27);
lean_ctor_set(x_30, 5, x_28);
if (x_22 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_box(0);
lean_inc(x_12);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_32 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___lambda__1(x_1, x_21, x_3, x_20, x_2, x_4, x_5, x_6, x_7, x_11, x_31, x_12, x_13, x_14, x_15, x_30, x_17, x_18);
lean_dec(x_30);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; size_t x_35; size_t x_36; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = 1;
x_36 = x_9 + x_35;
x_9 = x_36;
x_11 = x_33;
x_18 = x_34;
goto _start;
}
else
{
uint8_t x_38; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_38 = !lean_is_exclusive(x_32);
if (x_38 == 0)
{
return x_32;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_32, 0);
x_40 = lean_ctor_get(x_32, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_32);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_42 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_42, 0, x_21);
x_43 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__1;
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__3;
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_Lean_throwError___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_46, x_12, x_13, x_14, x_15, x_30, x_17, x_18);
lean_dec(x_30);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
return x_47;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_47, 0);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_47);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_11);
lean_ctor_set(x_52, 1, x_18);
return x_52;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; 
x_14 = lean_unsigned_to_nat(3u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = l_Lean_Syntax_isNone(x_15);
lean_dec(x_15);
x_17 = 0;
x_18 = l___private_Lean_Expr_0__Lean_beqBinderInfo____x40_Lean_Expr___hyg_206_(x_2, x_17);
if (x_16 == 0)
{
uint8_t x_61; 
x_61 = 1;
x_19 = x_61;
goto block_60;
}
else
{
uint8_t x_62; 
x_62 = 0;
x_19 = x_62;
goto block_60;
}
block_60:
{
lean_object* x_20; 
if (x_18 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_47 = lean_unsigned_to_nat(4u);
x_48 = l_Lean_Syntax_getArg(x_1, x_47);
x_49 = l_Lean_Elab_expandDeclSig(x_48);
lean_dec(x_48);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_49, 1);
x_52 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_49, 1, x_52);
x_20 = x_49;
goto block_46;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_49, 0);
x_54 = lean_ctor_get(x_49, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_49);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_55);
x_20 = x_56;
goto block_46;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_unsigned_to_nat(4u);
x_58 = l_Lean_Syntax_getArg(x_1, x_57);
x_59 = l_Lean_Elab_expandOptDeclSig(x_58);
lean_dec(x_58);
x_20 = x_59;
goto block_46;
}
block_46:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_unsigned_to_nat(2u);
x_24 = l_Lean_Syntax_getArg(x_1, x_23);
x_25 = l_Lean_Syntax_getArgs(x_24);
lean_dec(x_24);
x_26 = lean_array_get_size(x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_nat_dec_lt(x_27, x_26);
if (x_18 == 0)
{
lean_object* x_37; 
x_37 = lean_box(0);
x_29 = x_37;
goto block_36;
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_unsigned_to_nat(5u);
x_39 = l_Lean_Syntax_getArg(x_1, x_38);
x_40 = l_Lean_Syntax_isNone(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = l_Lean_Syntax_getArg(x_39, x_27);
lean_dec(x_39);
x_42 = lean_unsigned_to_nat(1u);
x_43 = l_Lean_Syntax_getArg(x_41, x_42);
lean_dec(x_41);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_29 = x_44;
goto block_36;
}
else
{
lean_object* x_45; 
lean_dec(x_39);
x_45 = lean_box(0);
x_29 = x_45;
goto block_36;
}
}
block_36:
{
if (x_28 == 0)
{
lean_object* x_30; 
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_7);
lean_dec(x_5);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_3);
lean_ctor_set(x_30, 1, x_13);
return x_30;
}
else
{
uint8_t x_31; 
x_31 = lean_nat_dec_le(x_26, x_26);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_7);
lean_dec(x_5);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_3);
lean_ctor_set(x_32, 1, x_13);
return x_32;
}
else
{
size_t x_33; size_t x_34; lean_object* x_35; 
x_33 = 0;
x_34 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_35 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16(x_4, x_2, x_5, x_19, x_21, x_22, x_29, x_25, x_33, x_34, x_3, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_25);
return x_35;
}
}
}
}
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'protected' field in a 'private' structure");
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = l_Lean_Elab_Modifiers_isProtected(x_5);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__1(x_1, x_2, x_3, x_4, x_5, x_16, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = l_Lean_Elab_Modifiers_isPrivate(x_6);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(0);
x_20 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__1(x_1, x_2, x_3, x_4, x_5, x_19, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_5);
lean_dec(x_3);
x_21 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__3;
x_22 = l_Lean_throwError___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_21, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'private' field in a 'private' structure");
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
lean_inc(x_10);
lean_inc(x_6);
x_15 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_6);
x_18 = l_Lean_Elab_Command_checkValidFieldModifier(x_16, x_6, x_7, x_8, x_9, x_10, x_11, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_Elab_Modifiers_isPrivate(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_box(0);
x_22 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2(x_1, x_5, x_2, x_3, x_16, x_4, x_21, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
lean_dec(x_10);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = l_Lean_Elab_Modifiers_isPrivate(x_4);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_box(0);
x_25 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2(x_1, x_5, x_2, x_3, x_16, x_4, x_24, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
lean_dec(x_10);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_16);
lean_dec(x_2);
x_26 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__3;
x_27 = l_Lean_throwError___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_26, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
lean_dec(x_10);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
return x_27;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_27);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_18);
if (x_32 == 0)
{
return x_18;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_18, 0);
x_34 = lean_ctor_get(x_18, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_18);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_15);
if (x_36 == 0)
{
return x_15;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_15, 0);
x_38 = lean_ctor_get(x_15, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_15);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected kind of structure field");
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_inc(x_4);
x_13 = l_Lean_Syntax_getKind(x_4);
x_14 = l_Lean_Parser_Command_structExplicitBinder___elambda__1___closed__2;
x_15 = lean_name_eq(x_13, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Lean_Parser_Command_structImplicitBinder___elambda__1___closed__2;
x_17 = lean_name_eq(x_13, x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Lean_Parser_Command_structInstBinder___elambda__1___closed__2;
x_19 = lean_name_eq(x_13, x_18);
lean_dec(x_13);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_4);
lean_dec(x_1);
x_20 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__3;
x_21 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__17(x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_10);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; lean_object* x_27; 
x_26 = 3;
x_27 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3(x_4, x_1, x_2, x_3, x_26, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_27;
}
}
else
{
uint8_t x_28; lean_object* x_29; 
lean_dec(x_13);
x_28 = 1;
x_29 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3(x_4, x_1, x_2, x_3, x_28, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_29;
}
}
else
{
uint8_t x_30; lean_object* x_31; 
lean_dec(x_13);
x_30 = 0;
x_31 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3(x_4, x_1, x_2, x_3, x_30, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
return x_31;
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(7u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_4 == x_5;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_15 = lean_array_uget(x_3, x_4);
lean_inc(x_15);
x_16 = l_Lean_Syntax_getKind(x_15);
x_17 = l_Lean_Parser_Command_structSimpleBinder___elambda__1___closed__2;
x_18 = lean_name_eq(x_16, x_17);
lean_dec(x_16);
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
x_21 = lean_ctor_get(x_11, 2);
x_22 = lean_ctor_get(x_11, 3);
x_23 = lean_ctor_get(x_11, 4);
x_24 = lean_ctor_get(x_11, 5);
x_25 = l_Lean_replaceRef(x_15, x_22);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
x_26 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_20);
lean_ctor_set(x_26, 2, x_21);
lean_ctor_set(x_26, 3, x_25);
lean_ctor_set(x_26, 4, x_23);
lean_ctor_set(x_26, 5, x_24);
if (x_18 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_box(0);
lean_inc(x_7);
x_28 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4(x_6, x_2, x_1, x_15, x_27, x_7, x_8, x_9, x_10, x_26, x_12, x_13);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; size_t x_31; size_t x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = 1;
x_32 = x_4 + x_31;
x_4 = x_32;
x_6 = x_29;
x_13 = x_30;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_7);
x_34 = !lean_is_exclusive(x_28);
if (x_34 == 0)
{
return x_28;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_28, 0);
x_36 = lean_ctor_get(x_28, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_28);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_38 = lean_unsigned_to_nat(0u);
x_39 = l_Lean_Syntax_getArg(x_15, x_38);
x_40 = l_prec_x28___x29___closed__3;
x_41 = l_Lean_mkAtomFrom(x_15, x_40);
x_42 = lean_unsigned_to_nat(1u);
x_43 = l_Lean_Syntax_getArg(x_15, x_42);
x_44 = l_Lean_mkOptionalNode___closed__2;
x_45 = lean_array_push(x_44, x_43);
x_46 = l_Lean_nullKind;
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = lean_unsigned_to_nat(2u);
x_49 = l_Lean_Syntax_getArg(x_15, x_48);
x_50 = lean_unsigned_to_nat(3u);
x_51 = l_Lean_Syntax_getArg(x_15, x_50);
x_52 = lean_unsigned_to_nat(4u);
x_53 = l_Lean_Syntax_getArg(x_15, x_52);
x_54 = l_prec_x28___x29___closed__7;
x_55 = l_Lean_mkAtomFrom(x_15, x_54);
lean_dec(x_15);
x_56 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___closed__1;
x_57 = lean_array_push(x_56, x_39);
x_58 = lean_array_push(x_57, x_41);
x_59 = lean_array_push(x_58, x_47);
x_60 = lean_array_push(x_59, x_49);
x_61 = lean_array_push(x_60, x_51);
x_62 = lean_array_push(x_61, x_53);
x_63 = lean_array_push(x_62, x_55);
x_64 = l_Lean_Parser_Command_structExplicitBinder___elambda__1___closed__2;
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
x_66 = lean_box(0);
lean_inc(x_7);
x_67 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4(x_6, x_2, x_1, x_65, x_66, x_7, x_8, x_9, x_10, x_26, x_12, x_13);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; size_t x_70; size_t x_71; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = 1;
x_71 = x_4 + x_70;
x_4 = x_71;
x_6 = x_68;
x_13 = x_69;
goto _start;
}
else
{
uint8_t x_73; 
lean_dec(x_7);
x_73 = !lean_is_exclusive(x_67);
if (x_73 == 0)
{
return x_67;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_67, 0);
x_75 = lean_ctor_get(x_67, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_67);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
else
{
lean_object* x_77; 
lean_dec(x_7);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_6);
lean_ctor_set(x_77, 1, x_13);
return x_77;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_4 == x_5;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_15 = lean_array_uget(x_3, x_4);
lean_inc(x_15);
x_16 = l_Lean_Syntax_getKind(x_15);
x_17 = l_Lean_Parser_Command_structSimpleBinder___elambda__1___closed__2;
x_18 = lean_name_eq(x_16, x_17);
lean_dec(x_16);
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
x_21 = lean_ctor_get(x_11, 2);
x_22 = lean_ctor_get(x_11, 3);
x_23 = lean_ctor_get(x_11, 4);
x_24 = lean_ctor_get(x_11, 5);
x_25 = l_Lean_replaceRef(x_15, x_22);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
x_26 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_20);
lean_ctor_set(x_26, 2, x_21);
lean_ctor_set(x_26, 3, x_25);
lean_ctor_set(x_26, 4, x_23);
lean_ctor_set(x_26, 5, x_24);
if (x_18 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_box(0);
lean_inc(x_7);
x_28 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4(x_6, x_2, x_1, x_15, x_27, x_7, x_8, x_9, x_10, x_26, x_12, x_13);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; size_t x_31; size_t x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = 1;
x_32 = x_4 + x_31;
x_4 = x_32;
x_6 = x_29;
x_13 = x_30;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_7);
x_34 = !lean_is_exclusive(x_28);
if (x_34 == 0)
{
return x_28;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_28, 0);
x_36 = lean_ctor_get(x_28, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_28);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_38 = lean_unsigned_to_nat(0u);
x_39 = l_Lean_Syntax_getArg(x_15, x_38);
x_40 = l_prec_x28___x29___closed__3;
x_41 = l_Lean_mkAtomFrom(x_15, x_40);
x_42 = lean_unsigned_to_nat(1u);
x_43 = l_Lean_Syntax_getArg(x_15, x_42);
x_44 = l_Lean_mkOptionalNode___closed__2;
x_45 = lean_array_push(x_44, x_43);
x_46 = l_Lean_nullKind;
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = lean_unsigned_to_nat(2u);
x_49 = l_Lean_Syntax_getArg(x_15, x_48);
x_50 = lean_unsigned_to_nat(3u);
x_51 = l_Lean_Syntax_getArg(x_15, x_50);
x_52 = lean_unsigned_to_nat(4u);
x_53 = l_Lean_Syntax_getArg(x_15, x_52);
x_54 = l_prec_x28___x29___closed__7;
x_55 = l_Lean_mkAtomFrom(x_15, x_54);
lean_dec(x_15);
x_56 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___closed__1;
x_57 = lean_array_push(x_56, x_39);
x_58 = lean_array_push(x_57, x_41);
x_59 = lean_array_push(x_58, x_47);
x_60 = lean_array_push(x_59, x_49);
x_61 = lean_array_push(x_60, x_51);
x_62 = lean_array_push(x_61, x_53);
x_63 = lean_array_push(x_62, x_55);
x_64 = l_Lean_Parser_Command_structExplicitBinder___elambda__1___closed__2;
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
x_66 = lean_box(0);
lean_inc(x_7);
x_67 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4(x_6, x_2, x_1, x_65, x_66, x_7, x_8, x_9, x_10, x_26, x_12, x_13);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; size_t x_70; size_t x_71; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = 1;
x_71 = x_4 + x_70;
x_4 = x_71;
x_6 = x_68;
x_13 = x_69;
goto _start;
}
else
{
uint8_t x_73; 
lean_dec(x_7);
x_73 = !lean_is_exclusive(x_67);
if (x_73 == 0)
{
return x_67;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_67, 0);
x_75 = lean_ctor_get(x_67, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_67);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
else
{
lean_object* x_77; 
lean_dec(x_7);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_6);
lean_ctor_set(x_77, 1, x_13);
return x_77;
}
}
}
static uint8_t _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Elab_sortDeclLevelParams___closed__1;
x_3 = lean_nat_dec_lt(x_1, x_2);
return x_3;
}
}
static uint8_t _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = l_Lean_Elab_sortDeclLevelParams___closed__1;
x_2 = lean_nat_dec_le(x_1, x_1);
return x_2;
}
}
static size_t _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__3() {
_start:
{
lean_object* x_1; size_t x_2; 
x_1 = l_Lean_Elab_sortDeclLevelParams___closed__1;
x_2 = lean_usize_of_nat(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_unsigned_to_nat(5u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Syntax_isNone(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_12, x_14);
lean_dec(x_12);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Syntax_getArg(x_15, x_16);
lean_dec(x_15);
x_18 = l_Lean_Syntax_getArgs(x_17);
lean_dec(x_17);
x_19 = lean_array_get_size(x_18);
x_20 = lean_nat_dec_lt(x_16, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_4);
x_21 = l_Array_empty___closed__1;
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_10);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = lean_nat_dec_le(x_19, x_19);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_4);
x_24 = l_Array_empty___closed__1;
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_10);
return x_25;
}
else
{
size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_26 = 0;
x_27 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_28 = l_Array_empty___closed__1;
x_29 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18(x_2, x_3, x_18, x_26, x_27, x_28, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_18);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_12);
x_30 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1;
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_4);
x_31 = l_Array_empty___closed__1;
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_10);
return x_32;
}
else
{
uint8_t x_33; 
x_33 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__2;
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_4);
x_34 = l_Array_empty___closed__1;
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_10);
return x_35;
}
else
{
size_t x_36; lean_object* x_37; size_t x_38; lean_object* x_39; 
x_36 = 0;
x_37 = l_Array_empty___closed__1;
x_38 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__3;
x_39 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__19(x_2, x_3, x_37, x_36, x_38, x_37, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_39;
}
}
}
}
}
lean_object* l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__10(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_1);
lean_dec(x_1);
x_12 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___lambda__1(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_elabAttr___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__11(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_elabAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_elabDeclAttrs___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__13(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__15(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_6);
lean_dec(x_6);
x_15 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_14, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_elabModifiers___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___lambda__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_unbox(x_5);
lean_dec(x_5);
x_20 = lean_unbox(x_6);
lean_dec(x_6);
x_21 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___lambda__1(x_1, x_2, x_3, x_4, x_19, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_1);
return x_21;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; uint8_t x_20; size_t x_21; size_t x_22; lean_object* x_23; 
x_19 = lean_unbox(x_2);
lean_dec(x_2);
x_20 = lean_unbox(x_4);
lean_dec(x_4);
x_21 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_22 = lean_unbox_usize(x_10);
lean_dec(x_10);
x_23 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16(x_1, x_19, x_3, x_20, x_5, x_6, x_7, x_8, x_21, x_22, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_1);
return x_23;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__17(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__1(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; lean_object* x_16; 
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2(x_1, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_16;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_5);
lean_dec(x_5);
x_14 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3(x_1, x_2, x_3, x_4, x_13, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18(x_1, x_2, x_3, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_16;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__19(x_1, x_2, x_3, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_4; uint64_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_box_uint64(x_5);
x_7 = lean_apply_2(x_2, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_3(x_2, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is not a structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_7, x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_10);
x_16 = l_Lean_isStructure(x_15, x_10);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_free_object(x_11);
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_10);
x_18 = l_Lean_KernelException_toMessageData___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_dec(x_2);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_11, 0);
x_28 = lean_ctor_get(x_11, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_11);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_10);
x_30 = l_Lean_isStructure(x_29, x_10);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_31 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_31, 0, x_10);
x_32 = l_Lean_KernelException_toMessageData___closed__3;
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5;
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_35, x_2, x_3, x_4, x_5, x_6, x_7, x_28);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_39 = x_36;
} else {
 lean_dec_ref(x_36);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
else
{
lean_object* x_41; 
lean_dec(x_2);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_10);
lean_ctor_set(x_41, 1, x_28);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_9);
x_42 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3;
x_43 = l_Lean_throwError___at_Lean_Elab_Term_mkAuxName___spec__1(x_42, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_43;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_5 < x_4;
if (x_7 == 0)
{
lean_inc(x_6);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_uget(x_3, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_name_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
size_t x_11; size_t x_12; 
lean_dec(x_8);
x_11 = 1;
x_12 = x_5 + x_11;
{
size_t _tmp_4 = x_12;
lean_object* _tmp_5 = x_2;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_8);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_box(0);
x_4 = lean_array_get_size(x_1);
x_5 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_6 = 0;
x_7 = l_Array_findSomeM_x3f___rarg___closed__1;
x_8 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1(x_2, x_7, x_1, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
return x_3;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___spec__1(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
uint8_t l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 1;
return x_5;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg___lambda__1), 9, 3);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_5);
lean_closure_set(x_12, 2, x_6);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(x_1, x_2, x_3, x_12, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__1___rarg), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_inc(x_2);
x_17 = l_Lean_Name_append(x_1, x_2);
x_18 = lean_box(0);
x_19 = 1;
x_20 = 0;
x_21 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_17);
lean_ctor_set(x_21, 2, x_9);
lean_ctor_set(x_21, 3, x_18);
lean_ctor_set_uint8(x_21, sizeof(void*)*4, x_19);
lean_ctor_set_uint8(x_21, sizeof(void*)*4 + 1, x_20);
x_22 = lean_array_push(x_3, x_21);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_4, x_23);
x_25 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(x_1, x_5, x_6, x_7, x_8, x_24, x_22, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_25;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_2);
lean_inc(x_1);
x_17 = l_Lean_Meta_mkProjection(x_1, x_2, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_18);
x_20 = l_Lean_Meta_inferType(x_18, x_12, x_13, x_14, x_15, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_2);
x_23 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1___boxed), 16, 8);
lean_closure_set(x_23, 0, x_3);
lean_closure_set(x_23, 1, x_2);
lean_closure_set(x_23, 2, x_4);
lean_closure_set(x_23, 3, x_5);
lean_closure_set(x_23, 4, x_1);
lean_closure_set(x_23, 5, x_6);
lean_closure_set(x_23, 6, x_7);
lean_closure_set(x_23, 7, x_8);
x_24 = l_Lean_Meta_withLetDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___spec__1___rarg(x_2, x_21, x_18, x_23, x_10, x_11, x_12, x_13, x_14, x_15, x_22);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_17);
if (x_29 == 0)
{
return x_17;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_17, 0);
x_31 = lean_ctor_get(x_17, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_17);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("field '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' from '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_4);
x_16 = lean_nat_dec_lt(x_6, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_apply_8(x_5, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_array_fget(x_4, x_6);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(x_7, x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_box(0);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2(x_2, x_18, x_1, x_7, x_6, x_3, x_4, x_5, x_20, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_22 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_22, 0, x_18);
x_23 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_27, 0, x_3);
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_30, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
return x_31;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg), 14, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_4);
return x_17;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_9);
return x_17;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(x_1, x_2, x_3, x_4, x_6, x_14, x_5, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields___rarg), 13, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg___lambda__1), 9, 3);
lean_closure_set(x_12, 0, x_4);
lean_closure_set(x_12, 1, x_5);
lean_closure_set(x_12, 2, x_6);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(x_1, x_2, x_3, x_12, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_1, x_12);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(x_2, x_13, x_4, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_1, 4);
lean_inc(x_16);
lean_inc(x_2);
x_17 = l_Lean_Name_append(x_16, x_2);
x_18 = lean_box(0);
x_19 = 2;
x_20 = 0;
lean_inc(x_8);
x_21 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_17);
lean_ctor_set(x_21, 2, x_8);
lean_ctor_set(x_21, 3, x_18);
lean_ctor_set_uint8(x_21, sizeof(void*)*4, x_19);
lean_ctor_set_uint8(x_21, sizeof(void*)*4 + 1, x_20);
x_22 = lean_array_push(x_3, x_21);
lean_inc(x_5);
x_23 = l_Lean_getStructureFieldsFlattened(x_4, x_5);
x_24 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1___boxed), 11, 3);
lean_closure_set(x_24, 0, x_6);
lean_closure_set(x_24, 1, x_1);
lean_closure_set(x_24, 2, x_7);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg(x_16, x_8, x_5, x_23, x_24, x_25, x_22, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_26;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_16 = lean_st_ref_get(x_14, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get_uint8(x_1, sizeof(void*)*11);
lean_inc(x_4);
lean_inc(x_19);
lean_inc(x_2);
x_21 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__2), 15, 7);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_2);
lean_closure_set(x_21, 2, x_3);
lean_closure_set(x_21, 3, x_19);
lean_closure_set(x_21, 4, x_4);
lean_closure_set(x_21, 5, x_5);
lean_closure_set(x_21, 6, x_6);
if (x_20 == 0)
{
uint8_t x_22; lean_object* x_23; 
lean_dec(x_19);
lean_dec(x_4);
x_22 = 0;
x_23 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg(x_2, x_22, x_7, x_21, x_9, x_10, x_11, x_12, x_13, x_14, x_18);
return x_23;
}
else
{
uint8_t x_24; 
x_24 = lean_is_class(x_19, x_4);
if (x_24 == 0)
{
uint8_t x_25; lean_object* x_26; 
x_25 = 0;
x_26 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg(x_2, x_25, x_7, x_21, x_9, x_10, x_11, x_12, x_13, x_14, x_18);
return x_26;
}
else
{
uint8_t x_27; lean_object* x_28; 
x_27 = 3;
x_28 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg(x_2, x_27, x_7, x_21, x_9, x_10, x_11, x_12, x_13, x_14, x_18);
return x_28;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("to");
return x_1;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_1, 7);
lean_inc(x_12);
x_13 = lean_array_get_size(x_12);
x_14 = lean_nat_dec_lt(x_2, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_apply_8(x_4, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_fget(x_12, x_2);
lean_dec(x_12);
x_17 = !lean_is_exclusive(x_9);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_9, 3);
x_19 = l_Lean_replaceRef(x_16, x_18);
lean_dec(x_18);
lean_ctor_set(x_9, 3, x_19);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_16);
x_20 = l_Lean_Elab_Term_elabType(x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_5);
x_23 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(x_21, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_24);
x_26 = lean_erase_macro_scopes(x_24);
x_27 = l_Lean_Name_getString_x21(x_26);
lean_dec(x_26);
x_28 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = lean_box(0);
x_31 = lean_name_mk_string(x_30, x_29);
x_32 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(x_3, x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_16);
x_33 = lean_box(0);
x_34 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(x_1, x_31, x_3, x_24, x_2, x_4, x_21, x_33, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_35, 0, x_31);
x_36 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_Lean_throwErrorAt___at_Lean_Elab_Term_quoteAutoTactic___spec__2(x_16, x_39, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_16);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
return x_40;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_40);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_23);
if (x_45 == 0)
{
return x_23;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_23, 0);
x_47 = lean_ctor_get(x_23, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_23);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_9);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_20);
if (x_49 == 0)
{
return x_20;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_20, 0);
x_51 = lean_ctor_get(x_20, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_20);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_53 = lean_ctor_get(x_9, 0);
x_54 = lean_ctor_get(x_9, 1);
x_55 = lean_ctor_get(x_9, 2);
x_56 = lean_ctor_get(x_9, 3);
x_57 = lean_ctor_get(x_9, 4);
x_58 = lean_ctor_get(x_9, 5);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_9);
x_59 = l_Lean_replaceRef(x_16, x_56);
lean_dec(x_56);
x_60 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_60, 0, x_53);
lean_ctor_set(x_60, 1, x_54);
lean_ctor_set(x_60, 2, x_55);
lean_ctor_set(x_60, 3, x_59);
lean_ctor_set(x_60, 4, x_57);
lean_ctor_set(x_60, 5, x_58);
lean_inc(x_10);
lean_inc(x_60);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_16);
x_61 = l_Lean_Elab_Term_elabType(x_16, x_5, x_6, x_7, x_8, x_60, x_10, x_11);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
lean_inc(x_5);
x_64 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure(x_62, x_5, x_6, x_7, x_8, x_60, x_10, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
lean_inc(x_65);
x_67 = lean_erase_macro_scopes(x_65);
x_68 = l_Lean_Name_getString_x21(x_67);
lean_dec(x_67);
x_69 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1;
x_70 = lean_string_append(x_69, x_68);
lean_dec(x_68);
x_71 = lean_box(0);
x_72 = lean_name_mk_string(x_71, x_70);
x_73 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_containsFieldName(x_3, x_72);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_16);
x_74 = lean_box(0);
x_75 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(x_1, x_72, x_3, x_65, x_2, x_4, x_62, x_74, x_5, x_6, x_7, x_8, x_60, x_10, x_66);
return x_75;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_65);
lean_dec(x_62);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_76 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_76, 0, x_72);
x_77 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_78 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
x_79 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_80 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_81 = l_Lean_throwErrorAt___at_Lean_Elab_Term_quoteAutoTactic___spec__2(x_16, x_80, x_5, x_6, x_7, x_8, x_60, x_10, x_66);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_16);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_84 = x_81;
} else {
 lean_dec_ref(x_81);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_86 = lean_ctor_get(x_64, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_64, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_88 = x_64;
} else {
 lean_dec_ref(x_64);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_60);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_90 = lean_ctor_get(x_61, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_61, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_92 = x_61;
} else {
 lean_dec_ref(x_61);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg), 11, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___spec__1___rarg(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_8);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue_match__3___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_1, 5);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_1, 6);
lean_inc(x_11);
lean_dec(x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___closed__1;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_box(0);
x_17 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_Elab_Term_elabTerm(x_15, x_16, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Meta_mkLambdaFVars(x_2, x_19, x_5, x_6, x_7, x_8, x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_ctor_set(x_11, 0, x_23);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_11);
lean_ctor_set(x_21, 0, x_24);
return x_21;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_21, 0);
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_21);
lean_ctor_set(x_11, 0, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_16);
lean_ctor_set(x_27, 1, x_11);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_free_object(x_11);
x_29 = !lean_is_exclusive(x_21);
if (x_29 == 0)
{
return x_21;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_21, 0);
x_31 = lean_ctor_get(x_21, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_21);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_free_object(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_11, 0);
lean_inc(x_37);
lean_dec(x_11);
x_38 = lean_box(0);
x_39 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_40 = l_Lean_Elab_Term_elabTerm(x_37, x_38, x_39, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Meta_mkLambdaFVars(x_2, x_41, x_5, x_6, x_7, x_8, x_42);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_46 = x_43;
} else {
 lean_dec_ref(x_43);
 x_46 = lean_box(0);
}
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_44);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_38);
lean_ctor_set(x_48, 1, x_47);
if (lean_is_scalar(x_46)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_46;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_45);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_43, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_43, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_52 = x_43;
} else {
 lean_dec_ref(x_43);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_54 = lean_ctor_get(x_40, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_40, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_56 = x_40;
} else {
 lean_dec_ref(x_40);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(1, 2, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
}
else
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_10);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_10, 0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_60 = l_Lean_Elab_Term_elabType(x_59, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_1, 6);
lean_inc(x_61);
lean_dec(x_1);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_4);
lean_dec(x_3);
x_62 = lean_ctor_get(x_60, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_60, 1);
lean_inc(x_63);
lean_dec(x_60);
x_64 = l_Lean_Meta_mkForallFVars(x_2, x_62, x_5, x_6, x_7, x_8, x_63);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_64) == 0)
{
uint8_t x_65; 
x_65 = !lean_is_exclusive(x_64);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_64, 0);
lean_ctor_set(x_10, 0, x_66);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_10);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_64, 0, x_68);
return x_64;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_69 = lean_ctor_get(x_64, 0);
x_70 = lean_ctor_get(x_64, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_64);
lean_ctor_set(x_10, 0, x_69);
x_71 = lean_box(0);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_10);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_70);
return x_73;
}
}
else
{
uint8_t x_74; 
lean_free_object(x_10);
x_74 = !lean_is_exclusive(x_64);
if (x_74 == 0)
{
return x_64;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_64, 0);
x_76 = lean_ctor_get(x_64, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_64);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_78 = lean_ctor_get(x_60, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_60, 1);
lean_inc(x_79);
lean_dec(x_60);
x_80 = !lean_is_exclusive(x_61);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; lean_object* x_84; 
x_81 = lean_ctor_get(x_61, 0);
lean_inc(x_78);
lean_ctor_set(x_61, 0, x_78);
x_82 = lean_box(0);
x_83 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_84 = l_Lean_Elab_Term_elabTermEnsuringType(x_81, x_61, x_83, x_82, x_3, x_4, x_5, x_6, x_7, x_8, x_79);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
lean_inc(x_5);
lean_inc(x_2);
x_87 = l_Lean_Meta_mkForallFVars(x_2, x_78, x_5, x_6, x_7, x_8, x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = l_Lean_Meta_mkLambdaFVars(x_2, x_85, x_5, x_6, x_7, x_8, x_89);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_90) == 0)
{
uint8_t x_91; 
x_91 = !lean_is_exclusive(x_90);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_90, 0);
lean_ctor_set(x_10, 0, x_88);
x_93 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_93, 0, x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_10);
lean_ctor_set(x_94, 1, x_93);
lean_ctor_set(x_90, 0, x_94);
return x_90;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_95 = lean_ctor_get(x_90, 0);
x_96 = lean_ctor_get(x_90, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_90);
lean_ctor_set(x_10, 0, x_88);
x_97 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_97, 0, x_95);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_10);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_96);
return x_99;
}
}
else
{
uint8_t x_100; 
lean_dec(x_88);
lean_free_object(x_10);
x_100 = !lean_is_exclusive(x_90);
if (x_100 == 0)
{
return x_90;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_90, 0);
x_102 = lean_ctor_get(x_90, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_90);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
uint8_t x_104; 
lean_dec(x_85);
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_104 = !lean_is_exclusive(x_87);
if (x_104 == 0)
{
return x_87;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_87, 0);
x_106 = lean_ctor_get(x_87, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_87);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
else
{
uint8_t x_108; 
lean_dec(x_78);
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_108 = !lean_is_exclusive(x_84);
if (x_108 == 0)
{
return x_84;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_84, 0);
x_110 = lean_ctor_get(x_84, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_84);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; lean_object* x_116; 
x_112 = lean_ctor_get(x_61, 0);
lean_inc(x_112);
lean_dec(x_61);
lean_inc(x_78);
x_113 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_113, 0, x_78);
x_114 = lean_box(0);
x_115 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_116 = l_Lean_Elab_Term_elabTermEnsuringType(x_112, x_113, x_115, x_114, x_3, x_4, x_5, x_6, x_7, x_8, x_79);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
lean_inc(x_5);
lean_inc(x_2);
x_119 = l_Lean_Meta_mkForallFVars(x_2, x_78, x_5, x_6, x_7, x_8, x_118);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_122 = l_Lean_Meta_mkLambdaFVars(x_2, x_117, x_5, x_6, x_7, x_8, x_121);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_125 = x_122;
} else {
 lean_dec_ref(x_122);
 x_125 = lean_box(0);
}
lean_ctor_set(x_10, 0, x_120);
x_126 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_126, 0, x_123);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_10);
lean_ctor_set(x_127, 1, x_126);
if (lean_is_scalar(x_125)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_125;
}
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_124);
return x_128;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
lean_dec(x_120);
lean_free_object(x_10);
x_129 = lean_ctor_get(x_122, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_122, 1);
lean_inc(x_130);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_131 = x_122;
} else {
 lean_dec_ref(x_122);
 x_131 = lean_box(0);
}
if (lean_is_scalar(x_131)) {
 x_132 = lean_alloc_ctor(1, 2, 0);
} else {
 x_132 = x_131;
}
lean_ctor_set(x_132, 0, x_129);
lean_ctor_set(x_132, 1, x_130);
return x_132;
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_117);
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_133 = lean_ctor_get(x_119, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_119, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_135 = x_119;
} else {
 lean_dec_ref(x_119);
 x_135 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_136 = x_135;
}
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_134);
return x_136;
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_78);
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_137 = lean_ctor_get(x_116, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_116, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_139 = x_116;
} else {
 lean_dec_ref(x_116);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(1, 2, 0);
} else {
 x_140 = x_139;
}
lean_ctor_set(x_140, 0, x_137);
lean_ctor_set(x_140, 1, x_138);
return x_140;
}
}
}
}
else
{
uint8_t x_141; 
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_141 = !lean_is_exclusive(x_60);
if (x_141 == 0)
{
return x_60;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_142 = lean_ctor_get(x_60, 0);
x_143 = lean_ctor_get(x_60, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_60);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
return x_144;
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
x_145 = lean_ctor_get(x_10, 0);
lean_inc(x_145);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_146 = l_Lean_Elab_Term_elabType(x_145, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_147; 
x_147 = lean_ctor_get(x_1, 6);
lean_inc(x_147);
lean_dec(x_1);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_4);
lean_dec(x_3);
x_148 = lean_ctor_get(x_146, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_146, 1);
lean_inc(x_149);
lean_dec(x_146);
x_150 = l_Lean_Meta_mkForallFVars(x_2, x_148, x_5, x_6, x_7, x_8, x_149);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_150)) {
 lean_ctor_release(x_150, 0);
 lean_ctor_release(x_150, 1);
 x_153 = x_150;
} else {
 lean_dec_ref(x_150);
 x_153 = lean_box(0);
}
x_154 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_154, 0, x_151);
x_155 = lean_box(0);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
if (lean_is_scalar(x_153)) {
 x_157 = lean_alloc_ctor(0, 2, 0);
} else {
 x_157 = x_153;
}
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_152);
return x_157;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_158 = lean_ctor_get(x_150, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_150, 1);
lean_inc(x_159);
if (lean_is_exclusive(x_150)) {
 lean_ctor_release(x_150, 0);
 lean_ctor_release(x_150, 1);
 x_160 = x_150;
} else {
 lean_dec_ref(x_150);
 x_160 = lean_box(0);
}
if (lean_is_scalar(x_160)) {
 x_161 = lean_alloc_ctor(1, 2, 0);
} else {
 x_161 = x_160;
}
lean_ctor_set(x_161, 0, x_158);
lean_ctor_set(x_161, 1, x_159);
return x_161;
}
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; 
x_162 = lean_ctor_get(x_146, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_146, 1);
lean_inc(x_163);
lean_dec(x_146);
x_164 = lean_ctor_get(x_147, 0);
lean_inc(x_164);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 x_165 = x_147;
} else {
 lean_dec_ref(x_147);
 x_165 = lean_box(0);
}
lean_inc(x_162);
if (lean_is_scalar(x_165)) {
 x_166 = lean_alloc_ctor(1, 1, 0);
} else {
 x_166 = x_165;
}
lean_ctor_set(x_166, 0, x_162);
x_167 = lean_box(0);
x_168 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_169 = l_Lean_Elab_Term_elabTermEnsuringType(x_164, x_166, x_168, x_167, x_3, x_4, x_5, x_6, x_7, x_8, x_163);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
lean_dec(x_169);
lean_inc(x_5);
lean_inc(x_2);
x_172 = l_Lean_Meta_mkForallFVars(x_2, x_162, x_5, x_6, x_7, x_8, x_171);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
x_175 = l_Lean_Meta_mkLambdaFVars(x_2, x_170, x_5, x_6, x_7, x_8, x_174);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_178 = x_175;
} else {
 lean_dec_ref(x_175);
 x_178 = lean_box(0);
}
x_179 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_179, 0, x_173);
x_180 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_180, 0, x_176);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
if (lean_is_scalar(x_178)) {
 x_182 = lean_alloc_ctor(0, 2, 0);
} else {
 x_182 = x_178;
}
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_177);
return x_182;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_173);
x_183 = lean_ctor_get(x_175, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_175, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_185 = x_175;
} else {
 lean_dec_ref(x_175);
 x_185 = lean_box(0);
}
if (lean_is_scalar(x_185)) {
 x_186 = lean_alloc_ctor(1, 2, 0);
} else {
 x_186 = x_185;
}
lean_ctor_set(x_186, 0, x_183);
lean_ctor_set(x_186, 1, x_184);
return x_186;
}
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
lean_dec(x_170);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_187 = lean_ctor_get(x_172, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_172, 1);
lean_inc(x_188);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_189 = x_172;
} else {
 lean_dec_ref(x_172);
 x_189 = lean_box(0);
}
if (lean_is_scalar(x_189)) {
 x_190 = lean_alloc_ctor(1, 2, 0);
} else {
 x_190 = x_189;
}
lean_ctor_set(x_190, 0, x_187);
lean_ctor_set(x_190, 1, x_188);
return x_190;
}
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
lean_dec(x_162);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_191 = lean_ctor_get(x_169, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_169, 1);
lean_inc(x_192);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 x_193 = x_169;
} else {
 lean_dec_ref(x_169);
 x_193 = lean_box(0);
}
if (lean_is_scalar(x_193)) {
 x_194 = lean_alloc_ctor(1, 2, 0);
} else {
 x_194 = x_193;
}
lean_ctor_set(x_194, 0, x_191);
lean_ctor_set(x_194, 1, x_192);
return x_194;
}
}
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_195 = lean_ctor_get(x_146, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_146, 1);
lean_inc(x_196);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 x_197 = x_146;
} else {
 lean_dec_ref(x_146);
 x_197 = lean_box(0);
}
if (lean_is_scalar(x_197)) {
 x_198 = lean_alloc_ctor(1, 2, 0);
} else {
 x_198 = x_197;
}
lean_ctor_set(x_198, 0, x_195);
lean_ctor_set(x_198, 1, x_196);
return x_198;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_apply_1(x_5, x_8);
return x_9;
}
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_4, x_10, x_2);
return x_11;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_4, x_9);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__5___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields_match__6___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_20 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_15);
lean_ctor_set(x_21, 2, x_16);
lean_ctor_set(x_21, 3, x_20);
lean_ctor_set(x_21, 4, x_18);
lean_ctor_set(x_21, 5, x_19);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg(x_2, x_3, x_4, x_5, x_6, x_21, x_8, x_9);
lean_dec(x_21);
return x_22;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_1, 2);
x_17 = lean_ctor_get_uint8(x_1, sizeof(void*)*7 + 1);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_2);
x_19 = 0;
lean_inc(x_16);
x_20 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_16);
lean_ctor_set(x_20, 2, x_8);
lean_ctor_set(x_20, 3, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*4, x_19);
lean_ctor_set_uint8(x_20, sizeof(void*)*4 + 1, x_17);
x_21 = lean_array_push(x_4, x_20);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_5, x_22);
x_24 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(x_6, x_23, x_21, x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_24;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_1, 2);
x_17 = lean_ctor_get_uint8(x_1, sizeof(void*)*7 + 1);
x_18 = 0;
lean_inc(x_16);
x_19 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_19, 0, x_2);
lean_ctor_set(x_19, 1, x_16);
lean_ctor_set(x_19, 2, x_8);
lean_ctor_set(x_19, 3, x_3);
lean_ctor_set_uint8(x_19, sizeof(void*)*4, x_18);
lean_ctor_set_uint8(x_19, sizeof(void*)*4 + 1, x_17);
x_20 = lean_array_push(x_4, x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_5, x_21);
x_23 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(x_6, x_22, x_20, x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_23;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_1);
x_19 = l_Lean_Meta_inferType(x_1, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_20);
x_23 = lean_box(0);
x_24 = 1;
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_25 = l_Lean_Elab_Term_elabTermEnsuringType(x_10, x_22, x_24, x_23, x_12, x_13, x_14, x_15, x_16, x_17, x_21);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_26);
x_29 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_1);
lean_ctor_set(x_29, 3, x_28);
lean_ctor_set_uint8(x_29, sizeof(void*)*4, x_4);
lean_ctor_set_uint8(x_29, sizeof(void*)*4 + 1, x_5);
x_30 = lean_array_push(x_6, x_29);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_add(x_7, x_31);
x_33 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(x_8, x_32, x_30, x_9, x_12, x_13, x_14, x_15, x_16, x_17, x_27);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_25);
if (x_34 == 0)
{
return x_25;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_25, 0);
x_36 = lean_ctor_get(x_25, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_25);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_19);
if (x_38 == 0)
{
return x_19;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_19, 0);
x_40 = lean_ctor_get(x_19, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_19);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field, type expected");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' has been declared in parent structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("omit field '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' type to set default value");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.Structure");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Elab.Structure.0.Lean.Elab.Command.withFields");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__10;
x_2 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__11;
x_3 = lean_unsigned_to_nat(280u);
x_4 = lean_unsigned_to_nat(31u);
x_5 = l_Lean_Syntax_strLitToAtom___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_2, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_apply_8(x_4, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_array_fget(x_1, x_2);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 3);
lean_inc(x_17);
x_18 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_findFieldInfo_x3f(x_3, x_17);
x_19 = !lean_is_exclusive(x_9);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_9, 3);
x_21 = l_Lean_replaceRef(x_16, x_20);
lean_dec(x_20);
lean_dec(x_16);
lean_ctor_set(x_9, 3, x_21);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_15, 4);
lean_inc(x_22);
x_23 = l_Lean_Syntax_getArgs(x_22);
lean_dec(x_22);
lean_inc(x_15);
x_24 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue), 9, 1);
lean_closure_set(x_24, 0, x_15);
x_25 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_26 = l_Lean_Elab_Term_elabBinders___rarg(x_23, x_24, x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3;
x_32 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg(x_31, x_5, x_6, x_7, x_8, x_9, x_10, x_30);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_26, 1);
lean_inc(x_33);
lean_dec(x_26);
x_34 = lean_ctor_get(x_29, 0);
lean_inc(x_34);
lean_dec(x_29);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_34);
x_35 = l_Lean_Meta_inferType(x_34, x_7, x_8, x_9, x_10, x_33);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get_uint8(x_15, sizeof(void*)*7);
lean_inc(x_17);
x_39 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1___boxed), 15, 7);
lean_closure_set(x_39, 0, x_15);
lean_closure_set(x_39, 1, x_34);
lean_closure_set(x_39, 2, x_17);
lean_closure_set(x_39, 3, x_3);
lean_closure_set(x_39, 4, x_2);
lean_closure_set(x_39, 5, x_1);
lean_closure_set(x_39, 6, x_4);
x_40 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg(x_17, x_38, x_36, x_39, x_5, x_6, x_7, x_8, x_9, x_10, x_37);
return x_40;
}
else
{
uint8_t x_41; 
lean_dec(x_34);
lean_dec(x_9);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_35);
if (x_41 == 0)
{
return x_35;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_35, 0);
x_43 = lean_ctor_get(x_35, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_35);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_ctor_get(x_26, 1);
lean_inc(x_45);
lean_dec(x_26);
x_46 = lean_ctor_get(x_27, 1);
lean_inc(x_46);
lean_dec(x_27);
x_47 = lean_ctor_get(x_28, 0);
lean_inc(x_47);
lean_dec(x_28);
x_48 = lean_ctor_get_uint8(x_15, sizeof(void*)*7);
lean_inc(x_17);
x_49 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2___boxed), 15, 7);
lean_closure_set(x_49, 0, x_15);
lean_closure_set(x_49, 1, x_17);
lean_closure_set(x_49, 2, x_46);
lean_closure_set(x_49, 3, x_3);
lean_closure_set(x_49, 4, x_2);
lean_closure_set(x_49, 5, x_1);
lean_closure_set(x_49, 6, x_4);
x_50 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg(x_17, x_48, x_47, x_49, x_5, x_6, x_7, x_8, x_9, x_10, x_45);
return x_50;
}
}
else
{
uint8_t x_51; 
lean_dec(x_9);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_26);
if (x_51 == 0)
{
return x_26;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_26, 0);
x_53 = lean_ctor_get(x_26, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_26);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
lean_object* x_55; uint8_t x_56; 
x_55 = lean_ctor_get(x_18, 0);
lean_inc(x_55);
lean_dec(x_18);
x_56 = lean_ctor_get_uint8(x_55, sizeof(void*)*4);
switch (x_56) {
case 0:
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_55);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_57, 0, x_17);
x_58 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_59 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg(x_61, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_62;
}
case 1:
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_15, 6);
lean_inc(x_63);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_55);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_64 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_64, 0, x_17);
x_65 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
x_67 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5;
x_68 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg(x_68, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_69;
}
else
{
lean_object* x_70; 
x_70 = lean_ctor_get(x_15, 5);
lean_inc(x_70);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
lean_dec(x_17);
x_71 = lean_ctor_get(x_55, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_55, 1);
lean_inc(x_72);
x_73 = lean_ctor_get(x_55, 2);
lean_inc(x_73);
x_74 = lean_ctor_get_uint8(x_55, sizeof(void*)*4 + 1);
lean_dec(x_55);
x_75 = lean_ctor_get(x_63, 0);
lean_inc(x_75);
lean_dec(x_63);
x_76 = lean_ctor_get(x_15, 4);
lean_inc(x_76);
lean_dec(x_15);
x_77 = l_Lean_Syntax_getArgs(x_76);
lean_dec(x_76);
x_78 = lean_array_get_size(x_77);
x_79 = lean_unsigned_to_nat(0u);
x_80 = lean_nat_dec_lt(x_79, x_78);
lean_dec(x_78);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
lean_dec(x_77);
x_81 = lean_box(0);
x_82 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(x_73, x_71, x_72, x_56, x_74, x_3, x_2, x_1, x_4, x_75, x_81, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_83 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_9, x_10, x_11);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_85);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
lean_dec(x_86);
x_88 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_87);
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
lean_dec(x_88);
x_90 = l_myMacro____x40_Init_Notation___hyg_12458____closed__9;
lean_inc(x_84);
x_91 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_91, 0, x_84);
lean_ctor_set(x_91, 1, x_90);
x_92 = l_Array_empty___closed__1;
x_93 = lean_array_push(x_92, x_91);
x_94 = l_Array_appendCore___rarg(x_92, x_77);
lean_dec(x_77);
x_95 = l_Lean_nullKind___closed__2;
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_94);
x_97 = lean_array_push(x_92, x_96);
x_98 = l_myMacro____x40_Init_Notation___hyg_12458____closed__13;
x_99 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_99, 0, x_84);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_array_push(x_97, x_99);
x_101 = lean_array_push(x_100, x_75);
x_102 = l_myMacro____x40_Init_Notation___hyg_12458____closed__12;
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_101);
x_104 = lean_array_push(x_93, x_103);
x_105 = l_myMacro____x40_Init_Notation___hyg_12458____closed__10;
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_104);
x_107 = lean_box(0);
x_108 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(x_73, x_71, x_72, x_56, x_74, x_3, x_2, x_1, x_4, x_106, x_107, x_5, x_6, x_7, x_8, x_9, x_10, x_89);
lean_dec(x_2);
return x_108;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_63);
lean_dec(x_55);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_109 = lean_ctor_get(x_70, 0);
lean_inc(x_109);
lean_dec(x_70);
x_110 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_110, 0, x_17);
x_111 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7;
x_112 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_110);
x_113 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9;
x_114 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
x_115 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg(x_109, x_114, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_109);
return x_115;
}
}
}
default: 
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_55);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_116 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_117 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12;
x_118 = lean_panic_fn(x_116, x_117);
x_119 = lean_apply_7(x_118, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_119;
}
}
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_120 = lean_ctor_get(x_9, 0);
x_121 = lean_ctor_get(x_9, 1);
x_122 = lean_ctor_get(x_9, 2);
x_123 = lean_ctor_get(x_9, 3);
x_124 = lean_ctor_get(x_9, 4);
x_125 = lean_ctor_get(x_9, 5);
lean_inc(x_125);
lean_inc(x_124);
lean_inc(x_123);
lean_inc(x_122);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_9);
x_126 = l_Lean_replaceRef(x_16, x_123);
lean_dec(x_123);
lean_dec(x_16);
x_127 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_127, 0, x_120);
lean_ctor_set(x_127, 1, x_121);
lean_ctor_set(x_127, 2, x_122);
lean_ctor_set(x_127, 3, x_126);
lean_ctor_set(x_127, 4, x_124);
lean_ctor_set(x_127, 5, x_125);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; lean_object* x_132; 
x_128 = lean_ctor_get(x_15, 4);
lean_inc(x_128);
x_129 = l_Lean_Syntax_getArgs(x_128);
lean_dec(x_128);
lean_inc(x_15);
x_130 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue), 9, 1);
lean_closure_set(x_130, 0, x_15);
x_131 = 0;
lean_inc(x_10);
lean_inc(x_127);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_132 = l_Lean_Elab_Term_elabBinders___rarg(x_129, x_130, x_131, x_5, x_6, x_7, x_8, x_127, x_10, x_11);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; 
x_135 = lean_ctor_get(x_133, 1);
lean_inc(x_135);
lean_dec(x_133);
if (lean_obj_tag(x_135) == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_136 = lean_ctor_get(x_132, 1);
lean_inc(x_136);
lean_dec(x_132);
x_137 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3;
x_138 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg(x_137, x_5, x_6, x_7, x_8, x_127, x_10, x_136);
lean_dec(x_10);
lean_dec(x_127);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_138;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_132, 1);
lean_inc(x_139);
lean_dec(x_132);
x_140 = lean_ctor_get(x_135, 0);
lean_inc(x_140);
lean_dec(x_135);
lean_inc(x_10);
lean_inc(x_127);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_140);
x_141 = l_Lean_Meta_inferType(x_140, x_7, x_8, x_127, x_10, x_139);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; lean_object* x_143; uint8_t x_144; lean_object* x_145; lean_object* x_146; 
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
lean_dec(x_141);
x_144 = lean_ctor_get_uint8(x_15, sizeof(void*)*7);
lean_inc(x_17);
x_145 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1___boxed), 15, 7);
lean_closure_set(x_145, 0, x_15);
lean_closure_set(x_145, 1, x_140);
lean_closure_set(x_145, 2, x_17);
lean_closure_set(x_145, 3, x_3);
lean_closure_set(x_145, 4, x_2);
lean_closure_set(x_145, 5, x_1);
lean_closure_set(x_145, 6, x_4);
x_146 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg(x_17, x_144, x_142, x_145, x_5, x_6, x_7, x_8, x_127, x_10, x_143);
return x_146;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_140);
lean_dec(x_127);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_147 = lean_ctor_get(x_141, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_141, 1);
lean_inc(x_148);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_149 = x_141;
} else {
 lean_dec_ref(x_141);
 x_149 = lean_box(0);
}
if (lean_is_scalar(x_149)) {
 x_150 = lean_alloc_ctor(1, 2, 0);
} else {
 x_150 = x_149;
}
lean_ctor_set(x_150, 0, x_147);
lean_ctor_set(x_150, 1, x_148);
return x_150;
}
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; lean_object* x_155; lean_object* x_156; 
x_151 = lean_ctor_get(x_132, 1);
lean_inc(x_151);
lean_dec(x_132);
x_152 = lean_ctor_get(x_133, 1);
lean_inc(x_152);
lean_dec(x_133);
x_153 = lean_ctor_get(x_134, 0);
lean_inc(x_153);
lean_dec(x_134);
x_154 = lean_ctor_get_uint8(x_15, sizeof(void*)*7);
lean_inc(x_17);
x_155 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2___boxed), 15, 7);
lean_closure_set(x_155, 0, x_15);
lean_closure_set(x_155, 1, x_17);
lean_closure_set(x_155, 2, x_152);
lean_closure_set(x_155, 3, x_3);
lean_closure_set(x_155, 4, x_2);
lean_closure_set(x_155, 5, x_1);
lean_closure_set(x_155, 6, x_4);
x_156 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabImplicitLambda___spec__1___rarg(x_17, x_154, x_153, x_155, x_5, x_6, x_7, x_8, x_127, x_10, x_151);
return x_156;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_127);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_157 = lean_ctor_get(x_132, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_132, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_159 = x_132;
} else {
 lean_dec_ref(x_132);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 2, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_158);
return x_160;
}
}
else
{
lean_object* x_161; uint8_t x_162; 
x_161 = lean_ctor_get(x_18, 0);
lean_inc(x_161);
lean_dec(x_18);
x_162 = lean_ctor_get_uint8(x_161, sizeof(void*)*4);
switch (x_162) {
case 0:
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_161);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_163 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_163, 0, x_17);
x_164 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_165 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_163);
x_166 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_167 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
x_168 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg(x_167, x_5, x_6, x_7, x_8, x_127, x_10, x_11);
lean_dec(x_10);
lean_dec(x_127);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_168;
}
case 1:
{
lean_object* x_169; 
x_169 = lean_ctor_get(x_15, 6);
lean_inc(x_169);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_161);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_170 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_170, 0, x_17);
x_171 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2;
x_172 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_170);
x_173 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5;
x_174 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
x_175 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg(x_174, x_5, x_6, x_7, x_8, x_127, x_10, x_11);
lean_dec(x_10);
lean_dec(x_127);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_175;
}
else
{
lean_object* x_176; 
x_176 = lean_ctor_get(x_15, 5);
lean_inc(x_176);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; 
lean_dec(x_17);
x_177 = lean_ctor_get(x_161, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_161, 1);
lean_inc(x_178);
x_179 = lean_ctor_get(x_161, 2);
lean_inc(x_179);
x_180 = lean_ctor_get_uint8(x_161, sizeof(void*)*4 + 1);
lean_dec(x_161);
x_181 = lean_ctor_get(x_169, 0);
lean_inc(x_181);
lean_dec(x_169);
x_182 = lean_ctor_get(x_15, 4);
lean_inc(x_182);
lean_dec(x_15);
x_183 = l_Lean_Syntax_getArgs(x_182);
lean_dec(x_182);
x_184 = lean_array_get_size(x_183);
x_185 = lean_unsigned_to_nat(0u);
x_186 = lean_nat_dec_lt(x_185, x_184);
lean_dec(x_184);
if (x_186 == 0)
{
lean_object* x_187; lean_object* x_188; 
lean_dec(x_183);
x_187 = lean_box(0);
x_188 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(x_179, x_177, x_178, x_162, x_180, x_3, x_2, x_1, x_4, x_181, x_187, x_5, x_6, x_7, x_8, x_127, x_10, x_11);
lean_dec(x_2);
return x_188;
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_189 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_127, x_10, x_11);
x_190 = lean_ctor_get(x_189, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_189, 1);
lean_inc(x_191);
lean_dec(x_189);
x_192 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_127, x_10, x_191);
x_193 = lean_ctor_get(x_192, 1);
lean_inc(x_193);
lean_dec(x_192);
x_194 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_193);
x_195 = lean_ctor_get(x_194, 1);
lean_inc(x_195);
lean_dec(x_194);
x_196 = l_myMacro____x40_Init_Notation___hyg_12458____closed__9;
lean_inc(x_190);
x_197 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_197, 0, x_190);
lean_ctor_set(x_197, 1, x_196);
x_198 = l_Array_empty___closed__1;
x_199 = lean_array_push(x_198, x_197);
x_200 = l_Array_appendCore___rarg(x_198, x_183);
lean_dec(x_183);
x_201 = l_Lean_nullKind___closed__2;
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_200);
x_203 = lean_array_push(x_198, x_202);
x_204 = l_myMacro____x40_Init_Notation___hyg_12458____closed__13;
x_205 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_205, 0, x_190);
lean_ctor_set(x_205, 1, x_204);
x_206 = lean_array_push(x_203, x_205);
x_207 = lean_array_push(x_206, x_181);
x_208 = l_myMacro____x40_Init_Notation___hyg_12458____closed__12;
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_208);
lean_ctor_set(x_209, 1, x_207);
x_210 = lean_array_push(x_199, x_209);
x_211 = l_myMacro____x40_Init_Notation___hyg_12458____closed__10;
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_212, 1, x_210);
x_213 = lean_box(0);
x_214 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(x_179, x_177, x_178, x_162, x_180, x_3, x_2, x_1, x_4, x_212, x_213, x_5, x_6, x_7, x_8, x_127, x_10, x_195);
lean_dec(x_2);
return x_214;
}
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
lean_dec(x_169);
lean_dec(x_161);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_215 = lean_ctor_get(x_176, 0);
lean_inc(x_215);
lean_dec(x_176);
x_216 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_216, 0, x_17);
x_217 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7;
x_218 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_216);
x_219 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9;
x_220 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_220, 0, x_218);
lean_ctor_set(x_220, 1, x_219);
x_221 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg(x_215, x_220, x_5, x_6, x_7, x_8, x_127, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_215);
return x_221;
}
}
}
default: 
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
lean_dec(x_161);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_222 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_223 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12;
x_224 = lean_panic_fn(x_222, x_223);
x_225 = lean_apply_7(x_224, x_5, x_6, x_7, x_8, x_127, x_10, x_11);
return x_225;
}
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg), 11, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_5);
lean_dec(x_1);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_5);
lean_dec(x_1);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_unbox(x_4);
lean_dec(x_4);
x_20 = lean_unbox(x_5);
lean_dec(x_5);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___lambda__3(x_1, x_2, x_3, x_19, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_11);
lean_dec(x_7);
return x_21;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_4; uint64_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_box_uint64(x_5);
x_7 = lean_apply_2(x_2, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected structure resulting type");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Meta_whnf(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 3)
{
uint8_t x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_10);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3;
x_19 = l_Lean_throwError___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_getResultingUniverse___spec__1(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_9);
if (x_20 == 0)
{
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_2 == x_3;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_14 = lean_array_uget(x_1, x_2);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_16 = l_Lean_Meta_inferType(x_15, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_19 = l_Lean_Elab_Term_collectUsedFVars(x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_14, 3);
lean_inc(x_20);
lean_dec(x_14);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = 1;
x_23 = x_2 + x_22;
x_24 = lean_box(0);
x_2 = x_23;
x_4 = x_24;
x_12 = x_21;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_dec(x_19);
x_27 = lean_ctor_get(x_20, 0);
lean_inc(x_27);
lean_dec(x_20);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_28 = l_Lean_Elab_Term_collectUsedFVars(x_27, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_26);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; size_t x_31; size_t x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = 1;
x_32 = x_2 + x_31;
x_2 = x_32;
x_4 = x_29;
x_12 = x_30;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_34 = !lean_is_exclusive(x_28);
if (x_34 == 0)
{
return x_28;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_28, 0);
x_36 = lean_ctor_get(x_28, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_28);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_38 = !lean_is_exclusive(x_19);
if (x_38 == 0)
{
return x_19;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_19, 0);
x_40 = lean_ctor_get(x_19, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_19);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_42 = !lean_is_exclusive(x_16);
if (x_42 == 0)
{
return x_16;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_16, 0);
x_44 = lean_ctor_get(x_16, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_16);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_12);
return x_46;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_array_get_size(x_1);
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_nat_dec_lt(x_26, x_25);
if (x_27 == 0)
{
lean_dec(x_25);
x_11 = x_10;
goto block_24;
}
else
{
uint8_t x_28; 
x_28 = lean_nat_dec_le(x_25, x_25);
if (x_28 == 0)
{
lean_dec(x_25);
x_11 = x_10;
goto block_24;
}
else
{
size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; 
x_29 = 0;
x_30 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_31 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_32 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Term_collectUsedFVarsAtFVars___spec__1(x_1, x_29, x_30, x_31, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_11 = x_33;
goto block_24;
}
else
{
uint8_t x_34; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_34 = !lean_is_exclusive(x_32);
if (x_34 == 0)
{
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_32, 0);
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_32);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
block_24:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_array_get_size(x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_11);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_le(x_12, x_12);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_11);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_22 = lean_box(0);
x_23 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1(x_2, x_20, x_21, x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_11);
return x_23;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___spec__1(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_CollectFVars_instInhabitedState___closed__1;
x_14 = lean_st_mk_ref(x_13, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUsed(x_2, x_3, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_st_ref_get(x_9, x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_15, x_20);
lean_dec(x_15);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Elab_Term_removeUnused(x_1, x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_23);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_removeUnused(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_apply_1(x_4, x_18);
x_20 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_16, x_17, x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_12);
if (x_21 == 0)
{
return x_12;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_12, 0);
x_23 = lean_ctor_get(x_12, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_12);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_inferType(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_levelMVarToParam_x27(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_20 = !lean_is_exclusive(x_10);
if (x_20 == 0)
{
return x_10;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_2 == x_3;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
x_14 = lean_array_uget(x_1, x_2);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_2 + x_18;
x_2 = x_19;
x_4 = x_16;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_4);
lean_ctor_set(x_25, 1, x_12);
return x_25;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_10, x_10);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_9);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_18 = 0;
x_19 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_20 = lean_box(0);
x_21 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1(x_1, x_18, x_19, x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_21;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___spec__1(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 < x_1;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_13 = x_3;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_array_uget(x_3, x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_3, x_2, x_16);
x_18 = x_15;
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 2);
lean_inc(x_21);
x_22 = lean_ctor_get_uint8(x_18, sizeof(void*)*4);
x_23 = lean_ctor_get_uint8(x_18, sizeof(void*)*4 + 1);
x_24 = lean_ctor_get(x_18, 3);
lean_inc(x_24);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_21);
x_25 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVar(x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_25) == 0)
{
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_26; size_t x_27; size_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = 1;
x_28 = x_2 + x_27;
x_29 = x_18;
x_30 = lean_array_uset(x_17, x_2, x_29);
x_2 = x_28;
x_3 = x_30;
x_11 = x_26;
goto _start;
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_18);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_33 = lean_ctor_get(x_18, 3);
lean_dec(x_33);
x_34 = lean_ctor_get(x_18, 2);
lean_dec(x_34);
x_35 = lean_ctor_get(x_18, 1);
lean_dec(x_35);
x_36 = lean_ctor_get(x_18, 0);
lean_dec(x_36);
x_37 = lean_ctor_get(x_25, 1);
lean_inc(x_37);
lean_dec(x_25);
x_38 = !lean_is_exclusive(x_24);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; lean_object* x_45; lean_object* x_46; 
x_39 = lean_ctor_get(x_24, 0);
x_40 = l_Lean_Elab_Term_levelMVarToParam_x27(x_39, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_37);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
lean_ctor_set(x_24, 0, x_41);
x_43 = 1;
x_44 = x_2 + x_43;
x_45 = x_18;
x_46 = lean_array_uset(x_17, x_2, x_45);
x_2 = x_44;
x_3 = x_46;
x_11 = x_42;
goto _start;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; size_t x_53; size_t x_54; lean_object* x_55; lean_object* x_56; 
x_48 = lean_ctor_get(x_24, 0);
lean_inc(x_48);
lean_dec(x_24);
x_49 = l_Lean_Elab_Term_levelMVarToParam_x27(x_48, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_37);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_18, 3, x_52);
x_53 = 1;
x_54 = x_2 + x_53;
x_55 = x_18;
x_56 = lean_array_uset(x_17, x_2, x_55);
x_2 = x_54;
x_3 = x_56;
x_11 = x_51;
goto _start;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; size_t x_66; size_t x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_18);
x_58 = lean_ctor_get(x_25, 1);
lean_inc(x_58);
lean_dec(x_25);
x_59 = lean_ctor_get(x_24, 0);
lean_inc(x_59);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 x_60 = x_24;
} else {
 lean_dec_ref(x_24);
 x_60 = lean_box(0);
}
x_61 = l_Lean_Elab_Term_levelMVarToParam_x27(x_59, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_58);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
if (lean_is_scalar(x_60)) {
 x_64 = lean_alloc_ctor(1, 1, 0);
} else {
 x_64 = x_60;
}
lean_ctor_set(x_64, 0, x_62);
x_65 = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(x_65, 0, x_19);
lean_ctor_set(x_65, 1, x_20);
lean_ctor_set(x_65, 2, x_21);
lean_ctor_set(x_65, 3, x_64);
lean_ctor_set_uint8(x_65, sizeof(void*)*4, x_22);
lean_ctor_set_uint8(x_65, sizeof(void*)*4 + 1, x_23);
x_66 = 1;
x_67 = x_2 + x_66;
x_68 = x_65;
x_69 = lean_array_uset(x_17, x_2, x_68);
x_2 = x_67;
x_3 = x_69;
x_11 = x_63;
goto _start;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_71 = !lean_is_exclusive(x_25);
if (x_71 == 0)
{
return x_25;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_25, 0);
x_73 = lean_ctor_get(x_25, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_25);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamFVars(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_array_get_size(x_3);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = x_3;
x_19 = lean_box_usize(x_17);
x_20 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1;
x_21 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1___boxed), 11, 3);
lean_closure_set(x_21, 0, x_19);
lean_closure_set(x_21, 1, x_20);
lean_closure_set(x_21, 2, x_18);
x_22 = x_21;
x_23 = lean_apply_8(x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_14);
if (x_24 == 0)
{
return x_14;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_14, 0);
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_14);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_28 = !lean_is_exclusive(x_12);
if (x_28 == 0)
{
return x_12;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_12, 0);
x_30 = lean_ctor_get(x_12, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_12);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___spec__1(x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_st_mk_ref(x_13, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_9);
lean_inc(x_15);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux(x_1, x_2, x_3, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_st_ref_get(x_9, x_19);
lean_dec(x_9);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_ref_get(x_15, x_21);
lean_dec(x_15);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_18);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_18);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_15);
lean_dec(x_9);
x_27 = !lean_is_exclusive(x_17);
if (x_27 == 0)
{
return x_17;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_17, 0);
x_29 = lean_ctor_get(x_17, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_17);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_4 == x_5;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_uget(x_3, x_4);
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_17 = l_Lean_Meta_inferType(x_16, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_20 = l_Lean_Meta_getLevel(x_18, x_9, x_10, x_11, x_12, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_MetavarContext_instantiateLevelMVars___at_Lean_Meta_instantiateLevelMVars___spec__1(x_21, x_9, x_10, x_11, x_12, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_7);
lean_inc(x_2);
x_26 = l_Lean_Elab_Command_accLevelAtCtor(x_24, x_1, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = 1;
x_30 = x_4 + x_29;
x_4 = x_30;
x_6 = x_27;
x_13 = x_28;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_26);
if (x_32 == 0)
{
return x_26;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_26, 0);
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_26);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_20);
if (x_36 == 0)
{
return x_20;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_20, 0);
x_38 = lean_ctor_get(x_20, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_20);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_17);
if (x_40 == 0)
{
return x_17;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_17, 0);
x_42 = lean_ctor_get(x_17, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_17);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_2);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_6);
lean_ctor_set(x_44, 1, x_13);
return x_44;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_array_get_size(x_3);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_14 = l_Array_empty___closed__1;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_10);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_le(x_11, x_11);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_17 = l_Array_empty___closed__1;
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_10);
return x_18;
}
else
{
size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; 
x_19 = 0;
x_20 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_21 = l_Array_empty___closed__1;
x_22 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1(x_1, x_2, x_3, x_19, x_20, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_22;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___spec__1(x_1, x_2, x_3, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_4; uint64_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_box_uint64(x_5);
x_7 = lean_apply_2(x_2, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to compute resulting universe level of structure, provide universe explicitly");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Level_getOffsetAux(x_11, x_13);
x_15 = l_Lean_Level_getLevelOffset(x_11);
lean_dec(x_11);
if (lean_obj_tag(x_15) == 5)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_14);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectUniversesFromFields(x_15, x_14, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_Command_mkResultUniverse(x_18, x_14);
lean_dec(x_14);
x_21 = l_Lean_Meta_assignLevelMVar(x_16, x_20, x_5, x_6, x_7, x_8, x_19);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Meta_instantiateMVars(x_2, x_5, x_6, x_7, x_8, x_22);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
return x_17;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_17, 0);
x_26 = lean_ctor_get(x_17, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_17);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
x_28 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3;
x_29 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_10);
if (x_30 == 0)
{
return x_10;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_10, 0);
x_32 = lean_ctor_get(x_10, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_10);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_inferType(x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Meta_instantiateMVars(x_11, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = l_Lean_CollectLevelParams_main(x_15, x_1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = l_Lean_CollectLevelParams_main(x_17, x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
uint8_t x_25; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_10);
if (x_25 == 0)
{
return x_10;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_10, 0);
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_10);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_uget(x_1, x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(x_4, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = x_2 + x_17;
x_2 = x_18;
x_4 = x_15;
x_11 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_14, 0);
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_14);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_10, x_10);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_18 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1(x_1, x_16, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_18;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_array_uget(x_1, x_2);
x_14 = lean_ctor_get(x_13, 2);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVar(x_4, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_2 + x_18;
x_2 = x_19;
x_4 = x_16;
x_11 = x_17;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_4);
lean_ctor_set(x_25, 1, x_11);
return x_25;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Lean_CollectLevelParams_instInhabitedState___closed__1;
x_13 = l_Lean_CollectLevelParams_main(x_1, x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(x_2, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInFVars(x_3, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = lean_array_get_size(x_4);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_dec_lt(x_22, x_21);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_24 = lean_ctor_get(x_19, 2);
lean_inc(x_24);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_24);
return x_17;
}
else
{
uint8_t x_25; 
x_25 = lean_nat_dec_le(x_21, x_21);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_26 = lean_ctor_get(x_19, 2);
lean_inc(x_26);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_26);
return x_17;
}
else
{
size_t x_27; size_t x_28; lean_object* x_29; 
lean_free_object(x_17);
x_27 = 0;
x_28 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_29 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(x_4, x_27, x_28, x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_31, 2);
lean_inc(x_32);
lean_dec(x_31);
lean_ctor_set(x_29, 0, x_32);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_29, 0);
x_34 = lean_ctor_get(x_29, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_29);
x_35 = lean_ctor_get(x_33, 2);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
else
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_29);
if (x_37 == 0)
{
return x_29;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_29, 0);
x_39 = lean_ctor_get(x_29, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_29);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_17, 0);
x_42 = lean_ctor_get(x_17, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_17);
x_43 = lean_array_get_size(x_4);
x_44 = lean_unsigned_to_nat(0u);
x_45 = lean_nat_dec_lt(x_44, x_43);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_43);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_46 = lean_ctor_get(x_41, 2);
lean_inc(x_46);
lean_dec(x_41);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_42);
return x_47;
}
else
{
uint8_t x_48; 
x_48 = lean_nat_dec_le(x_43, x_43);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_43);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_49 = lean_ctor_get(x_41, 2);
lean_inc(x_49);
lean_dec(x_41);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_42);
return x_50;
}
else
{
size_t x_51; size_t x_52; lean_object* x_53; 
x_51 = 0;
x_52 = lean_usize_of_nat(x_43);
lean_dec(x_43);
x_53 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(x_4, x_51, x_52, x_41, x_5, x_6, x_7, x_8, x_9, x_10, x_42);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_56 = x_53;
} else {
 lean_dec_ref(x_53);
 x_56 = lean_box(0);
}
x_57 = lean_ctor_get(x_54, 2);
lean_inc(x_57);
lean_dec(x_54);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_53, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_53, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_61 = x_53;
} else {
 lean_dec_ref(x_53);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_63 = !lean_is_exclusive(x_17);
if (x_63 == 0)
{
return x_17;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_17, 0);
x_65 = lean_ctor_get(x_17, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_17);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_67 = !lean_is_exclusive(x_14);
if (x_67 == 0)
{
return x_14;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_14, 0);
x_69 = lean_ctor_get(x_14, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_14);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
x_9 = lean_apply_2(x_4, x_8, x_2);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_apply_1(x_3, x_2);
return x_10;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields_match__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_2, x_13);
lean_dec(x_2);
x_15 = l_Lean_Elab_Command_instInhabitedStructFieldInfo;
x_16 = lean_array_get(x_15, x_1, x_14);
x_17 = lean_ctor_get(x_16, 2);
lean_inc(x_17);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_18 = l_Lean_Elab_Term_getFVarLocalDecl_x21(x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_21 = l_Lean_Meta_instantiateMVars(x_3, x_6, x_7, x_8, x_9, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_mkOptionalNode___closed__2;
x_25 = lean_array_push(x_24, x_17);
x_26 = lean_expr_abstract(x_22, x_25);
lean_dec(x_25);
lean_dec(x_22);
x_27 = lean_ctor_get_uint8(x_16, sizeof(void*)*4);
lean_dec(x_16);
switch (x_27) {
case 0:
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = l_Lean_LocalDecl_userName(x_19);
x_29 = l_Lean_LocalDecl_binderInfo(x_19);
x_30 = l_Lean_LocalDecl_type(x_19);
lean_dec(x_19);
x_31 = l_Lean_mkForall(x_28, x_29, x_30, x_26);
x_2 = x_14;
x_3 = x_31;
x_10 = x_23;
goto _start;
}
case 1:
{
lean_object* x_33; lean_object* x_34; 
x_33 = l_Lean_LocalDecl_value(x_19);
lean_dec(x_19);
x_34 = lean_expr_instantiate1(x_26, x_33);
lean_dec(x_33);
lean_dec(x_26);
x_2 = x_14;
x_3 = x_34;
x_10 = x_23;
goto _start;
}
default: 
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_36 = l_Lean_LocalDecl_userName(x_19);
x_37 = l_myMacro____x40_Init_Notation___hyg_13068____closed__14;
x_38 = l_Lean_Name_appendBefore(x_36, x_37);
x_39 = l_Lean_LocalDecl_binderInfo(x_19);
x_40 = l_Lean_LocalDecl_type(x_19);
lean_dec(x_19);
x_41 = l_Lean_mkForall(x_38, x_39, x_40, x_26);
x_2 = x_14;
x_3 = x_41;
x_10 = x_23;
goto _start;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_43 = !lean_is_exclusive(x_21);
if (x_43 == 0)
{
return x_21;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_21, 0);
x_45 = lean_ctor_get(x_21, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_21);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_47 = !lean_is_exclusive(x_18);
if (x_47 == 0)
{
return x_18;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_18, 0);
x_49 = lean_ctor_get(x_18, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_18);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
lean_object* x_51; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_3);
lean_ctor_set(x_51, 1, x_10);
return x_51;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 4);
lean_inc(x_13);
x_14 = l_List_map___at_Lean_Meta_addInstance___spec__1(x_2);
x_15 = l_Lean_mkConst(x_13, x_14);
x_16 = l_Lean_mkAppN(x_15, x_3);
x_17 = lean_array_get_size(x_4);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_9, 3);
x_20 = l_Lean_replaceRef(x_12, x_19);
lean_dec(x_19);
lean_dec(x_12);
lean_ctor_set(x_9, 3, x_20);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_21 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(x_4, x_17, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_7);
lean_inc(x_3);
x_24 = l_Lean_Meta_mkForallFVars(x_3, x_22, x_7, x_8, x_9, x_10, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Meta_instantiateMVars(x_25, x_7, x_8, x_9, x_10, x_26);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_array_get_size(x_3);
lean_dec(x_3);
x_31 = lean_ctor_get(x_1, 9);
lean_inc(x_31);
lean_dec(x_1);
x_32 = lean_ctor_get_uint8(x_31, sizeof(void*)*4);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_31, 3);
lean_inc(x_33);
lean_dec(x_31);
x_34 = 1;
x_35 = l_Lean_Expr_inferImplicit(x_29, x_30, x_34);
lean_dec(x_30);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_27, 0, x_36);
return x_27;
}
else
{
lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_31, 3);
lean_inc(x_37);
lean_dec(x_31);
x_38 = 0;
x_39 = l_Lean_Expr_inferImplicit(x_29, x_30, x_38);
lean_dec(x_30);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_27, 0, x_40);
return x_27;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_27, 0);
x_42 = lean_ctor_get(x_27, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_27);
x_43 = lean_array_get_size(x_3);
lean_dec(x_3);
x_44 = lean_ctor_get(x_1, 9);
lean_inc(x_44);
lean_dec(x_1);
x_45 = lean_ctor_get_uint8(x_44, sizeof(void*)*4);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_44, 3);
lean_inc(x_46);
lean_dec(x_44);
x_47 = 1;
x_48 = l_Lean_Expr_inferImplicit(x_41, x_43, x_47);
lean_dec(x_43);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_42);
return x_50;
}
else
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_51 = lean_ctor_get(x_44, 3);
lean_inc(x_51);
lean_dec(x_44);
x_52 = 0;
x_53 = l_Lean_Expr_inferImplicit(x_41, x_43, x_52);
lean_dec(x_43);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_42);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_3);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_27);
if (x_56 == 0)
{
return x_27;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_27, 0);
x_58 = lean_ctor_get(x_27, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_27);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_24);
if (x_60 == 0)
{
return x_24;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_24, 0);
x_62 = lean_ctor_get(x_24, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_24);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_64 = !lean_is_exclusive(x_21);
if (x_64 == 0)
{
return x_21;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_21, 0);
x_66 = lean_ctor_get(x_21, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_21);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_68 = lean_ctor_get(x_9, 0);
x_69 = lean_ctor_get(x_9, 1);
x_70 = lean_ctor_get(x_9, 2);
x_71 = lean_ctor_get(x_9, 3);
x_72 = lean_ctor_get(x_9, 4);
x_73 = lean_ctor_get(x_9, 5);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_9);
x_74 = l_Lean_replaceRef(x_12, x_71);
lean_dec(x_71);
lean_dec(x_12);
x_75 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_75, 0, x_68);
lean_ctor_set(x_75, 1, x_69);
lean_ctor_set(x_75, 2, x_70);
lean_ctor_set(x_75, 3, x_74);
lean_ctor_set(x_75, 4, x_72);
lean_ctor_set(x_75, 5, x_73);
lean_inc(x_10);
lean_inc(x_75);
lean_inc(x_8);
lean_inc(x_7);
x_76 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addCtorFields(x_4, x_17, x_16, x_5, x_6, x_7, x_8, x_75, x_10, x_11);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
lean_inc(x_7);
lean_inc(x_3);
x_79 = l_Lean_Meta_mkForallFVars(x_3, x_77, x_7, x_8, x_75, x_10, x_78);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = l_Lean_Meta_instantiateMVars(x_80, x_7, x_8, x_75, x_10, x_81);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_85 = x_82;
} else {
 lean_dec_ref(x_82);
 x_85 = lean_box(0);
}
x_86 = lean_array_get_size(x_3);
lean_dec(x_3);
x_87 = lean_ctor_get(x_1, 9);
lean_inc(x_87);
lean_dec(x_1);
x_88 = lean_ctor_get_uint8(x_87, sizeof(void*)*4);
if (x_88 == 0)
{
lean_object* x_89; uint8_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_89 = lean_ctor_get(x_87, 3);
lean_inc(x_89);
lean_dec(x_87);
x_90 = 1;
x_91 = l_Lean_Expr_inferImplicit(x_83, x_86, x_90);
lean_dec(x_86);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_89);
lean_ctor_set(x_92, 1, x_91);
if (lean_is_scalar(x_85)) {
 x_93 = lean_alloc_ctor(0, 2, 0);
} else {
 x_93 = x_85;
}
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_84);
return x_93;
}
else
{
lean_object* x_94; uint8_t x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_94 = lean_ctor_get(x_87, 3);
lean_inc(x_94);
lean_dec(x_87);
x_95 = 0;
x_96 = l_Lean_Expr_inferImplicit(x_83, x_86, x_95);
lean_dec(x_86);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_96);
if (lean_is_scalar(x_85)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_85;
}
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_84);
return x_98;
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_3);
lean_dec(x_1);
x_99 = lean_ctor_get(x_82, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_82, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_101 = x_82;
} else {
 lean_dec_ref(x_82);
 x_101 = lean_box(0);
}
if (lean_is_scalar(x_101)) {
 x_102 = lean_alloc_ctor(1, 2, 0);
} else {
 x_102 = x_101;
}
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_100);
return x_102;
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_75);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_103 = lean_ctor_get(x_79, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_79, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_105 = x_79;
} else {
 lean_dec_ref(x_79);
 x_105 = lean_box(0);
}
if (lean_is_scalar(x_105)) {
 x_106 = lean_alloc_ctor(1, 2, 0);
} else {
 x_106 = x_105;
}
lean_ctor_set(x_106, 0, x_103);
lean_ctor_set(x_106, 1, x_104);
return x_106;
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_75);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_1);
x_107 = lean_ctor_get(x_76, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_76, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_109 = x_76;
} else {
 lean_dec_ref(x_76);
 x_109 = lean_box(0);
}
if (lean_is_scalar(x_109)) {
 x_110 = lean_alloc_ctor(1, 2, 0);
} else {
 x_110 = x_109;
}
lean_ctor_set(x_110, 0, x_107);
lean_ctor_set(x_110, 1, x_108);
return x_110;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkProjections___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = lean_mk_projections(x_1, x_2, x_3, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_mk_projections(x_14, x_1, x_2, x_3);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_throwKernelException___at_Lean_Elab_Term_declareTacticSyntax___spec__2(x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
lean_dec(x_15);
x_19 = l_Lean_setEnv___at_Lean_Elab_Term_evalExpr___spec__1(x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_8);
lean_dec(x_4);
return x_19;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(uint8_t x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (x_1 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_6);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
if (x_2 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_10);
lean_dec(x_6);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_12);
return x_16;
}
else
{
if (x_3 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_10);
lean_dec(x_6);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
else
{
lean_object* x_19; 
x_19 = l_Lean_mkNoConfusion___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__4(x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_19;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___closed__2;
lean_inc(x_12);
x_14 = l_Lean_Environment_contains(x_12, x_13);
x_15 = l_myMacro____x40_Init_Notation___hyg_6051____closed__4;
lean_inc(x_12);
x_16 = l_Lean_Environment_contains(x_12, x_15);
x_17 = l_myMacro____x40_Init_Notation___hyg_6575____closed__4;
x_18 = l_Lean_Environment_contains(x_12, x_17);
lean_inc(x_6);
lean_inc(x_2);
x_19 = l_Lean_mkRecOn___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_19) == 0)
{
if (x_14 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_box(0);
x_22 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(x_14, x_16, x_18, x_1, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_20);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
lean_inc(x_6);
lean_inc(x_2);
x_24 = l_Lean_mkCasesOn___at___private_Lean_Elab_Inductive_0__Lean_Elab_Command_mkAuxConstructions___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(x_14, x_16, x_18, x_1, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_26);
lean_dec(x_25);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_6);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_24);
if (x_28 == 0)
{
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 0);
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_24);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_6);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
return x_19;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_19, 0);
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_19);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = lean_unbox(x_3);
lean_dec(x_3);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___lambda__1(x_13, x_14, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_set_reducibility_status(x_14, x_1, x_2);
lean_ctor_set(x_11, 0, x_15);
x_16 = lean_st_ref_set(x_8, x_11, x_12);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
x_25 = lean_ctor_get(x_11, 2);
x_26 = lean_ctor_get(x_11, 3);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_27 = lean_set_reducibility_status(x_23, x_1, x_2);
x_28 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_24);
lean_ctor_set(x_28, 2, x_25);
lean_ctor_set(x_28, 3, x_26);
x_29 = lean_st_ref_set(x_8, x_28, x_12);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_31 = x_29;
} else {
 lean_dec_ref(x_29);
 x_31 = lean_box(0);
}
x_32 = lean_box(0);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
}
lean_object* l_ReaderT_pure___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
lean_object* l_ReaderT_pure___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ReaderT_pure___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_4);
x_13 = lean_array_uget(x_1, x_2);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_18 = l_Lean_Meta_mkId(x_17, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_15);
x_22 = l_Lean_Meta_mkAuxDefinition(x_15, x_16, x_19, x_21, x_21, x_7, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = 0;
x_25 = l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1(x_15, x_24, x_5, x_6, x_7, x_8, x_9, x_10, x_23);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 1;
x_29 = x_2 + x_28;
x_2 = x_29;
x_4 = x_26;
x_11 = x_27;
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_31 = !lean_is_exclusive(x_22);
if (x_31 == 0)
{
return x_22;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_22, 0);
x_33 = lean_ctor_get(x_22, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_22);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_35 = !lean_is_exclusive(x_18);
if (x_35 == 0)
{
return x_18;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_18, 0);
x_37 = lean_ctor_get(x_18, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_18);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_4);
lean_ctor_set(x_39, 1, x_11);
return x_39;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_closure((void*)(l_ReaderT_pure___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2___rarg___boxed), 8, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = l_Lean_Meta_getLocalInstances(x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_array_get_size(x_2);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_lt(x_14, x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_2);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1;
x_17 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_1, x_11, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = lean_nat_dec_le(x_13, x_13);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_13);
lean_dec(x_2);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1;
x_20 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_1, x_11, x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_20;
}
else
{
size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_22 = lean_box(0);
x_23 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___boxed__const__1;
x_24 = lean_box_usize(x_21);
x_25 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3___boxed), 11, 4);
lean_closure_set(x_25, 0, x_2);
lean_closure_set(x_25, 1, x_23);
lean_closure_set(x_25, 2, x_24);
lean_closure_set(x_25, 3, x_22);
x_26 = l_Lean_Meta_withLCtx___at_Lean_Elab_Term_elabSyntheticHole___spec__1___rarg(x_1, x_11, x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_26;
}
}
}
}
lean_object* l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_setReducibilityStatus___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__1(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_ReaderT_pure___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_ReaderT_pure___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___spec__3(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = 0;
x_14 = lean_unsigned_to_nat(1000u);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = l_Lean_Meta_addInstance(x_11, x_13, x_14, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_1 = x_12;
x_8 = x_16;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_default");
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 < x_1;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_12 = x_3;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
x_18 = lean_ctor_get(x_17, 2);
lean_inc(x_18);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_19 = l_Lean_Meta_inferType(x_18, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
x_23 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___closed__2;
x_24 = l_Lean_Name_append(x_22, x_23);
lean_dec(x_22);
x_25 = lean_ctor_get(x_17, 3);
lean_inc(x_25);
lean_dec(x_17);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; size_t x_31; size_t x_32; lean_object* x_33; lean_object* x_34; 
x_26 = l_Lean_instInhabitedExpr;
x_27 = l_Option_get_x21___rarg___closed__4;
x_28 = lean_panic_fn(x_26, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
x_31 = 1;
x_32 = x_2 + x_31;
x_33 = x_30;
x_34 = lean_array_uset(x_16, x_2, x_33);
x_2 = x_32;
x_3 = x_34;
x_10 = x_21;
goto _start;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; size_t x_39; size_t x_40; lean_object* x_41; lean_object* x_42; 
x_36 = lean_ctor_get(x_25, 0);
lean_inc(x_36);
lean_dec(x_25);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_20);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_24);
lean_ctor_set(x_38, 1, x_37);
x_39 = 1;
x_40 = x_2 + x_39;
x_41 = x_38;
x_42 = lean_array_uset(x_16, x_2, x_41);
x_2 = x_40;
x_3 = x_42;
x_10 = x_21;
goto _start;
}
}
else
{
uint8_t x_44; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_44 = !lean_is_exclusive(x_19);
if (x_44 == 0)
{
return x_19;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_19, 0);
x_46 = lean_ctor_get(x_19, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_19);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Lean_Elab_Command_StructFieldInfo_isFromParent(x_6);
x_8 = 1;
x_9 = x_2 + x_8;
if (x_7 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 2);
lean_inc(x_10);
lean_dec(x_6);
x_11 = l_Lean_Expr_fvarId_x21(x_10);
lean_dec(x_10);
x_12 = 0;
x_13 = l_Lean_LocalContext_updateBinderInfo(x_4, x_11, x_12);
x_2 = x_9;
x_4 = x_13;
goto _start;
}
else
{
lean_dec(x_6);
x_2 = x_9;
goto _start;
}
}
else
{
return x_4;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Lean_Expr_fvarId_x21(x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = l_Lean_LocalContext_updateBinderInfo(x_4, x_7, x_8);
x_10 = 1;
x_11 = x_2 + x_10;
x_2 = x_11;
x_4 = x_9;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_ctor_get(x_6, 3);
lean_inc(x_7);
x_8 = 1;
x_9 = x_2 + x_8;
if (lean_obj_tag(x_7) == 0)
{
lean_dec(x_6);
x_2 = x_9;
goto _start;
}
else
{
lean_object* x_11; 
lean_dec(x_7);
x_11 = lean_array_push(x_4, x_6);
x_2 = x_9;
x_4 = x_11;
goto _start;
}
}
else
{
return x_4;
}
}
}
lean_object* l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 1);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*1, x_7);
x_9 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7(x_5);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_10, sizeof(void*)*4 + 1);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set_uint8(x_14, sizeof(void*)*1, x_13);
x_15 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7(x_11);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_array_uget(x_1, x_2);
x_14 = lean_ctor_get(x_13, 2);
lean_inc(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_Elab_Term_getFVarLocalDecl_x21(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Command_StructFieldInfo_isSubobject(x_13);
if (x_18 == 0)
{
size_t x_19; size_t x_20; 
lean_dec(x_16);
lean_dec(x_13);
x_19 = 1;
x_20 = x_2 + x_19;
x_2 = x_20;
x_11 = x_17;
goto _start;
}
else
{
uint8_t x_22; uint8_t x_23; 
x_22 = l_Lean_LocalDecl_binderInfo(x_16);
lean_dec(x_16);
x_23 = l_Lean_BinderInfo_isInstImplicit(x_22);
if (x_23 == 0)
{
size_t x_24; size_t x_25; 
lean_dec(x_13);
x_24 = 1;
x_25 = x_2 + x_24;
x_2 = x_25;
x_11 = x_17;
goto _start;
}
else
{
lean_object* x_27; size_t x_28; size_t x_29; 
x_27 = lean_array_push(x_4, x_13);
x_28 = 1;
x_29 = x_2 + x_28;
x_2 = x_29;
x_4 = x_27;
x_11 = x_17;
goto _start;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_31 = !lean_is_exclusive(x_15);
if (x_31 == 0)
{
return x_15;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_15, 0);
x_33 = lean_ctor_get(x_15, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_15);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_4);
lean_ctor_set(x_35, 1, x_11);
return x_35;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Lean_Elab_Command_StructFieldInfo_isFromParent(x_6);
x_8 = 1;
x_9 = x_2 + x_8;
if (x_7 == 0)
{
lean_object* x_10; 
x_10 = lean_array_push(x_4, x_6);
x_2 = x_9;
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_6);
x_2 = x_9;
goto _start;
}
}
else
{
return x_4;
}
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("', it is equal to structure constructor name");
return x_1;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 == x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_5);
x_14 = lean_array_uget(x_2, x_3);
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 9);
x_17 = lean_ctor_get(x_16, 3);
x_18 = lean_name_eq(x_15, x_17);
lean_dec(x_15);
if (x_18 == 0)
{
size_t x_19; size_t x_20; lean_object* x_21; 
lean_dec(x_14);
x_19 = 1;
x_20 = x_3 + x_19;
x_21 = lean_box(0);
x_3 = x_20;
x_5 = x_21;
goto _start;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_23 = lean_ctor_get(x_14, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_14, 3);
lean_inc(x_24);
lean_dec(x_14);
x_25 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__1;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__2;
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_throwErrorAt___at_Lean_Elab_Term_quoteAutoTactic___spec__2(x_23, x_29, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_23);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
return x_30;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_30);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; 
lean_dec(x_10);
lean_dec(x_6);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_5);
lean_ctor_set(x_35, 1, x_12);
return x_35;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_initFn____x40_Lean_Elab_Util___hyg_1024____closed__1;
x_2 = l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__17;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("type: ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParam(x_8, x_1, x_2, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_216 = lean_ctor_get(x_13, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_13, 1);
lean_inc(x_217);
x_218 = lean_ctor_get(x_13, 2);
lean_inc(x_218);
x_219 = lean_ctor_get(x_13, 3);
lean_inc(x_219);
x_220 = lean_ctor_get(x_13, 4);
lean_inc(x_220);
x_221 = lean_ctor_get(x_13, 5);
lean_inc(x_221);
x_222 = l_Lean_replaceRef(x_4, x_219);
lean_dec(x_219);
x_223 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_223, 0, x_216);
lean_ctor_set(x_223, 1, x_217);
lean_ctor_set(x_223, 2, x_218);
lean_ctor_set(x_223, 3, x_222);
lean_ctor_set(x_223, 4, x_220);
lean_ctor_set(x_223, 5, x_221);
if (x_6 == 0)
{
lean_object* x_224; 
lean_inc(x_14);
lean_inc(x_223);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_9);
lean_inc(x_7);
x_224 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(x_7, x_9, x_10, x_11, x_12, x_223, x_14, x_18);
if (lean_obj_tag(x_224) == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
lean_inc(x_9);
x_227 = l_Lean_Elab_Command_checkResultingUniverse(x_225, x_9, x_10, x_11, x_12, x_223, x_14, x_226);
lean_dec(x_223);
if (lean_obj_tag(x_227) == 0)
{
lean_object* x_228; 
x_228 = lean_ctor_get(x_227, 1);
lean_inc(x_228);
lean_dec(x_227);
x_19 = x_7;
x_20 = x_228;
goto block_215;
}
else
{
uint8_t x_229; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
x_229 = !lean_is_exclusive(x_227);
if (x_229 == 0)
{
return x_227;
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_230 = lean_ctor_get(x_227, 0);
x_231 = lean_ctor_get(x_227, 1);
lean_inc(x_231);
lean_inc(x_230);
lean_dec(x_227);
x_232 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_232, 0, x_230);
lean_ctor_set(x_232, 1, x_231);
return x_232;
}
}
}
else
{
uint8_t x_233; 
lean_dec(x_223);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
x_233 = !lean_is_exclusive(x_224);
if (x_233 == 0)
{
return x_224;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_234 = lean_ctor_get(x_224, 0);
x_235 = lean_ctor_get(x_224, 1);
lean_inc(x_235);
lean_inc(x_234);
lean_dec(x_224);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_234);
lean_ctor_set(x_236, 1, x_235);
return x_236;
}
}
}
else
{
lean_object* x_237; 
lean_inc(x_14);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_9);
x_237 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse(x_17, x_7, x_9, x_10, x_11, x_12, x_223, x_14, x_18);
if (lean_obj_tag(x_237) == 0)
{
lean_object* x_238; lean_object* x_239; 
x_238 = lean_ctor_get(x_237, 0);
lean_inc(x_238);
x_239 = lean_ctor_get(x_237, 1);
lean_inc(x_239);
lean_dec(x_237);
x_19 = x_238;
x_20 = x_239;
goto block_215;
}
else
{
uint8_t x_240; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
x_240 = !lean_is_exclusive(x_237);
if (x_240 == 0)
{
return x_237;
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_241 = lean_ctor_get(x_237, 0);
x_242 = lean_ctor_get(x_237, 1);
lean_inc(x_242);
lean_inc(x_241);
lean_dec(x_237);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_241);
lean_ctor_set(x_243, 1, x_242);
return x_243;
}
}
}
block_215:
{
lean_object* x_21; uint8_t x_192; lean_object* x_193; lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; 
x_203 = lean_st_ref_get(x_14, x_20);
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_204, 3);
lean_inc(x_205);
lean_dec(x_204);
x_206 = lean_ctor_get_uint8(x_205, sizeof(void*)*1);
lean_dec(x_205);
if (x_206 == 0)
{
lean_object* x_207; uint8_t x_208; 
x_207 = lean_ctor_get(x_203, 1);
lean_inc(x_207);
lean_dec(x_203);
x_208 = 0;
x_192 = x_208;
x_193 = x_207;
goto block_202;
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; uint8_t x_214; 
x_209 = lean_ctor_get(x_203, 1);
lean_inc(x_209);
lean_dec(x_203);
x_210 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1;
x_211 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_210, x_9, x_10, x_11, x_12, x_13, x_14, x_209);
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
lean_dec(x_211);
x_214 = lean_unbox(x_212);
lean_dec(x_212);
x_192 = x_214;
x_193 = x_213;
goto block_202;
}
block_191:
{
lean_object* x_22; 
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_19);
x_22 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_collectLevelParamsInStructure(x_19, x_8, x_1, x_17, x_9, x_10, x_11, x_12, x_13, x_14, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_3, 2);
lean_inc(x_25);
x_26 = lean_ctor_get(x_3, 3);
lean_inc(x_26);
x_27 = l_Lean_Elab_sortDeclLevelParams(x_25, x_26, x_23);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = !lean_is_exclusive(x_13);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_13, 3);
x_33 = l_Lean_replaceRef(x_4, x_32);
lean_dec(x_32);
lean_ctor_set(x_13, 3, x_33);
x_34 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_30, x_9, x_10, x_11, x_12, x_13, x_14, x_24);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_35 = lean_ctor_get(x_13, 0);
x_36 = lean_ctor_get(x_13, 1);
x_37 = lean_ctor_get(x_13, 2);
x_38 = lean_ctor_get(x_13, 3);
x_39 = lean_ctor_get(x_13, 4);
x_40 = lean_ctor_get(x_13, 5);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_13);
x_41 = l_Lean_replaceRef(x_4, x_38);
lean_dec(x_38);
x_42 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_42, 0, x_35);
lean_ctor_set(x_42, 1, x_36);
lean_ctor_set(x_42, 2, x_37);
lean_ctor_set(x_42, 3, x_41);
lean_ctor_set(x_42, 4, x_39);
lean_ctor_set(x_42, 5, x_40);
x_43 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_30, x_9, x_10, x_11, x_12, x_42, x_14, x_24);
lean_dec(x_14);
lean_dec(x_42);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_27, 0);
lean_inc(x_44);
lean_dec(x_27);
x_45 = l_Array_append___rarg(x_8, x_1);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_3);
x_46 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkCtor(x_3, x_44, x_45, x_17, x_9, x_10, x_11, x_12, x_13, x_14, x_24);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
lean_inc(x_11);
lean_inc(x_45);
x_49 = l_Lean_Meta_mkForallFVars(x_45, x_19, x_11, x_12, x_13, x_14, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_52 = l_Lean_Meta_instantiateMVars(x_50, x_11, x_12, x_13, x_14, x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_ctor_get(x_3, 4);
lean_inc(x_55);
x_56 = lean_box(0);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_47);
lean_ctor_set(x_57, 1, x_56);
lean_inc(x_55);
x_58 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_53);
lean_ctor_set(x_58, 2, x_57);
x_59 = lean_array_get_size(x_45);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_56);
x_61 = lean_ctor_get(x_3, 1);
lean_inc(x_61);
x_62 = lean_ctor_get_uint8(x_61, sizeof(void*)*2 + 3);
lean_inc(x_59);
x_63 = lean_alloc_ctor(6, 3, 1);
lean_ctor_set(x_63, 0, x_44);
lean_ctor_set(x_63, 1, x_59);
lean_ctor_set(x_63, 2, x_60);
lean_ctor_set_uint8(x_63, sizeof(void*)*3, x_62);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_63);
x_64 = l_Lean_Elab_Term_ensureNoUnassignedMVars(x_63, x_9, x_10, x_11, x_12, x_13, x_14, x_54);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
lean_inc(x_13);
lean_inc(x_9);
x_66 = l_Lean_addDecl___at_Lean_Elab_Term_declareTacticSyntax___spec__1(x_63, x_9, x_10, x_11, x_12, x_13, x_14, x_65);
lean_dec(x_63);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_133; uint8_t x_134; uint8_t x_135; lean_object* x_136; 
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
x_68 = lean_array_get_size(x_17);
x_133 = lean_unsigned_to_nat(0u);
x_134 = lean_nat_dec_lt(x_133, x_68);
x_135 = lean_ctor_get_uint8(x_3, sizeof(void*)*11);
lean_dec(x_3);
if (x_134 == 0)
{
lean_inc(x_5);
x_136 = x_5;
goto block_162;
}
else
{
uint8_t x_163; 
x_163 = lean_nat_dec_le(x_68, x_68);
if (x_163 == 0)
{
lean_inc(x_5);
x_136 = x_5;
goto block_162;
}
else
{
size_t x_164; size_t x_165; lean_object* x_166; 
x_164 = 0;
x_165 = lean_usize_of_nat(x_68);
lean_inc(x_5);
x_166 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9(x_17, x_164, x_165, x_5);
x_136 = x_166;
goto block_162;
}
}
block_132:
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; 
x_71 = lean_array_to_list(lean_box(0), x_69);
x_72 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__1(x_71);
x_73 = lean_ctor_get(x_61, 1);
lean_inc(x_73);
lean_dec(x_61);
x_74 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_9);
x_75 = l_Lean_Elab_Term_applyAttributesAt(x_55, x_73, x_74, x_9, x_10, x_11, x_12, x_13, x_14, x_70);
lean_dec(x_73);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_77 = l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2(x_72, x_9, x_10, x_11, x_12, x_13, x_14, x_76);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; size_t x_82; lean_object* x_83; 
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_79 = lean_ctor_get(x_11, 1);
lean_inc(x_79);
x_80 = lean_unsigned_to_nat(0u);
x_81 = lean_nat_dec_lt(x_80, x_68);
x_82 = 0;
if (x_81 == 0)
{
x_83 = x_5;
goto block_120;
}
else
{
uint8_t x_121; 
x_121 = lean_nat_dec_le(x_68, x_68);
if (x_121 == 0)
{
x_83 = x_5;
goto block_120;
}
else
{
size_t x_122; lean_object* x_123; 
x_122 = lean_usize_of_nat(x_68);
x_123 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6(x_17, x_82, x_122, x_5);
x_83 = x_123;
goto block_120;
}
}
block_120:
{
lean_object* x_84; size_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_84 = lean_array_get_size(x_83);
x_85 = lean_usize_of_nat(x_84);
lean_dec(x_84);
x_86 = x_83;
x_87 = lean_box_usize(x_85);
x_88 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed__const__1;
x_89 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___boxed), 10, 3);
lean_closure_set(x_89, 0, x_87);
lean_closure_set(x_89, 1, x_88);
lean_closure_set(x_89, 2, x_86);
x_90 = x_89;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_91 = lean_apply_7(x_90, x_9, x_10, x_11, x_12, x_13, x_14, x_78);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_nat_dec_lt(x_80, x_59);
if (x_94 == 0)
{
lean_dec(x_59);
lean_dec(x_45);
if (x_81 == 0)
{
lean_object* x_95; 
lean_dec(x_68);
lean_dec(x_17);
x_95 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_79, x_92, x_9, x_10, x_11, x_12, x_13, x_14, x_93);
return x_95;
}
else
{
uint8_t x_96; 
x_96 = lean_nat_dec_le(x_68, x_68);
if (x_96 == 0)
{
lean_object* x_97; 
lean_dec(x_68);
lean_dec(x_17);
x_97 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_79, x_92, x_9, x_10, x_11, x_12, x_13, x_14, x_93);
return x_97;
}
else
{
size_t x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_usize_of_nat(x_68);
lean_dec(x_68);
x_99 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(x_17, x_82, x_98, x_79);
lean_dec(x_17);
x_100 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_99, x_92, x_9, x_10, x_11, x_12, x_13, x_14, x_93);
return x_100;
}
}
}
else
{
uint8_t x_101; 
x_101 = lean_nat_dec_le(x_59, x_59);
if (x_101 == 0)
{
lean_dec(x_59);
lean_dec(x_45);
if (x_81 == 0)
{
lean_object* x_102; 
lean_dec(x_68);
lean_dec(x_17);
x_102 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_79, x_92, x_9, x_10, x_11, x_12, x_13, x_14, x_93);
return x_102;
}
else
{
uint8_t x_103; 
x_103 = lean_nat_dec_le(x_68, x_68);
if (x_103 == 0)
{
lean_object* x_104; 
lean_dec(x_68);
lean_dec(x_17);
x_104 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_79, x_92, x_9, x_10, x_11, x_12, x_13, x_14, x_93);
return x_104;
}
else
{
size_t x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_usize_of_nat(x_68);
lean_dec(x_68);
x_106 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(x_17, x_82, x_105, x_79);
lean_dec(x_17);
x_107 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_106, x_92, x_9, x_10, x_11, x_12, x_13, x_14, x_93);
return x_107;
}
}
}
else
{
size_t x_108; lean_object* x_109; 
x_108 = lean_usize_of_nat(x_59);
lean_dec(x_59);
x_109 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(x_45, x_82, x_108, x_79);
lean_dec(x_45);
if (x_81 == 0)
{
lean_object* x_110; 
lean_dec(x_68);
lean_dec(x_17);
x_110 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_109, x_92, x_9, x_10, x_11, x_12, x_13, x_14, x_93);
return x_110;
}
else
{
uint8_t x_111; 
x_111 = lean_nat_dec_le(x_68, x_68);
if (x_111 == 0)
{
lean_object* x_112; 
lean_dec(x_68);
lean_dec(x_17);
x_112 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_109, x_92, x_9, x_10, x_11, x_12, x_13, x_14, x_93);
return x_112;
}
else
{
size_t x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_usize_of_nat(x_68);
lean_dec(x_68);
x_114 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(x_17, x_82, x_113, x_109);
lean_dec(x_17);
x_115 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults(x_114, x_92, x_9, x_10, x_11, x_12, x_13, x_14, x_93);
return x_115;
}
}
}
}
}
else
{
uint8_t x_116; 
lean_dec(x_79);
lean_dec(x_68);
lean_dec(x_59);
lean_dec(x_45);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_116 = !lean_is_exclusive(x_91);
if (x_116 == 0)
{
return x_91;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_91, 0);
x_118 = lean_ctor_get(x_91, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_91);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
}
else
{
uint8_t x_124; 
lean_dec(x_68);
lean_dec(x_59);
lean_dec(x_45);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
x_124 = !lean_is_exclusive(x_77);
if (x_124 == 0)
{
return x_77;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_77, 0);
x_126 = lean_ctor_get(x_77, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_77);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
else
{
uint8_t x_128; 
lean_dec(x_72);
lean_dec(x_68);
lean_dec(x_59);
lean_dec(x_45);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
x_128 = !lean_is_exclusive(x_75);
if (x_128 == 0)
{
return x_75;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_75, 0);
x_130 = lean_ctor_get(x_75, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_75);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
block_162:
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_array_to_list(lean_box(0), x_136);
x_138 = l_List_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__7(x_137);
lean_inc(x_13);
lean_inc(x_9);
lean_inc(x_55);
x_139 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addProjections(x_55, x_138, x_135, x_9, x_10, x_11, x_12, x_13, x_14, x_67);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; lean_object* x_141; 
x_140 = lean_ctor_get(x_139, 1);
lean_inc(x_140);
lean_dec(x_139);
lean_inc(x_13);
lean_inc(x_9);
x_141 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_mkAuxConstructions(x_55, x_9, x_10, x_11, x_12, x_13, x_14, x_140);
if (lean_obj_tag(x_141) == 0)
{
if (x_134 == 0)
{
lean_object* x_142; 
x_142 = lean_ctor_get(x_141, 1);
lean_inc(x_142);
lean_dec(x_141);
lean_inc(x_5);
x_69 = x_5;
x_70 = x_142;
goto block_132;
}
else
{
lean_object* x_143; uint8_t x_144; 
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
lean_dec(x_141);
x_144 = lean_nat_dec_le(x_68, x_68);
if (x_144 == 0)
{
lean_inc(x_5);
x_69 = x_5;
x_70 = x_143;
goto block_132;
}
else
{
size_t x_145; size_t x_146; lean_object* x_147; 
x_145 = 0;
x_146 = lean_usize_of_nat(x_68);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_5);
x_147 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(x_17, x_145, x_146, x_5, x_9, x_10, x_11, x_12, x_13, x_14, x_143);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_148; lean_object* x_149; 
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_147, 1);
lean_inc(x_149);
lean_dec(x_147);
x_69 = x_148;
x_70 = x_149;
goto block_132;
}
else
{
uint8_t x_150; 
lean_dec(x_68);
lean_dec(x_61);
lean_dec(x_59);
lean_dec(x_55);
lean_dec(x_45);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
x_150 = !lean_is_exclusive(x_147);
if (x_150 == 0)
{
return x_147;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_147, 0);
x_152 = lean_ctor_get(x_147, 1);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_147);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
return x_153;
}
}
}
}
}
else
{
uint8_t x_154; 
lean_dec(x_68);
lean_dec(x_61);
lean_dec(x_59);
lean_dec(x_55);
lean_dec(x_45);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
x_154 = !lean_is_exclusive(x_141);
if (x_154 == 0)
{
return x_141;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_141, 0);
x_156 = lean_ctor_get(x_141, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_141);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
return x_157;
}
}
}
else
{
uint8_t x_158; 
lean_dec(x_68);
lean_dec(x_61);
lean_dec(x_59);
lean_dec(x_55);
lean_dec(x_45);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
x_158 = !lean_is_exclusive(x_139);
if (x_158 == 0)
{
return x_139;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_139, 0);
x_160 = lean_ctor_get(x_139, 1);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_139);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
}
}
else
{
uint8_t x_167; 
lean_dec(x_61);
lean_dec(x_59);
lean_dec(x_55);
lean_dec(x_45);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
x_167 = !lean_is_exclusive(x_66);
if (x_167 == 0)
{
return x_66;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_66, 0);
x_169 = lean_ctor_get(x_66, 1);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_66);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
return x_170;
}
}
}
else
{
uint8_t x_171; 
lean_dec(x_63);
lean_dec(x_61);
lean_dec(x_59);
lean_dec(x_55);
lean_dec(x_45);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
x_171 = !lean_is_exclusive(x_64);
if (x_171 == 0)
{
return x_64;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_64, 0);
x_173 = lean_ctor_get(x_64, 1);
lean_inc(x_173);
lean_inc(x_172);
lean_dec(x_64);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
return x_174;
}
}
}
else
{
uint8_t x_175; 
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
x_175 = !lean_is_exclusive(x_52);
if (x_175 == 0)
{
return x_52;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_52, 0);
x_177 = lean_ctor_get(x_52, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_52);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
else
{
uint8_t x_179; 
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
x_179 = !lean_is_exclusive(x_49);
if (x_179 == 0)
{
return x_49;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_49, 0);
x_181 = lean_ctor_get(x_49, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_49);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
}
}
else
{
uint8_t x_183; 
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
x_183 = !lean_is_exclusive(x_46);
if (x_183 == 0)
{
return x_46;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_46, 0);
x_185 = lean_ctor_get(x_46, 1);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_46);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
return x_186;
}
}
}
}
else
{
uint8_t x_187; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
x_187 = !lean_is_exclusive(x_22);
if (x_187 == 0)
{
return x_22;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_188 = lean_ctor_get(x_22, 0);
x_189 = lean_ctor_get(x_22, 1);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_22);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_189);
return x_190;
}
}
}
block_202:
{
if (x_192 == 0)
{
x_21 = x_193;
goto block_191;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_inc(x_19);
x_194 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_194, 0, x_19);
x_195 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__3;
x_196 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_194);
x_197 = l_Lean_KernelException_toMessageData___closed__15;
x_198 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_198, 0, x_196);
lean_ctor_set(x_198, 1, x_197);
x_199 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1;
x_200 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_199, x_198, x_9, x_10, x_11, x_12, x_13, x_14, x_193);
x_201 = lean_ctor_get(x_200, 1);
lean_inc(x_201);
lean_dec(x_200);
x_21 = x_201;
goto block_191;
}
}
}
}
else
{
uint8_t x_244; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
x_244 = !lean_is_exclusive(x_16);
if (x_244 == 0)
{
return x_16;
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_245 = lean_ctor_get(x_16, 0);
x_246 = lean_ctor_get(x_16, 1);
lean_inc(x_246);
lean_inc(x_245);
lean_dec(x_16);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_245);
lean_ctor_set(x_247, 1, x_246);
return x_247;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_13 = 0;
x_14 = lean_box(0);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_13, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_1);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_6);
x_20 = l_Lean_Elab_Command_shouldInferResultUniverse(x_18, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_2, 5);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 6);
lean_inc(x_24);
lean_inc(x_5);
lean_inc(x_24);
x_25 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed), 15, 7);
lean_closure_set(x_25, 0, x_24);
lean_closure_set(x_25, 1, x_5);
lean_closure_set(x_25, 2, x_2);
lean_closure_set(x_25, 3, x_3);
lean_closure_set(x_25, 4, x_4);
lean_closure_set(x_25, 5, x_21);
lean_closure_set(x_25, 6, x_1);
x_26 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withUsed___rarg(x_23, x_24, x_5, x_25, x_6, x_7, x_8, x_9, x_10, x_11, x_22);
lean_dec(x_5);
lean_dec(x_24);
lean_dec(x_23);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_20);
if (x_27 == 0)
{
return x_20;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_20, 0);
x_29 = lean_ctor_get(x_20, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_20);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_17);
if (x_31 == 0)
{
return x_17;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_17, 0);
x_33 = lean_ctor_get(x_17, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_17);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_15);
if (x_35 == 0)
{
return x_15;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_15, 0);
x_37 = lean_ctor_get(x_15, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_15);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__2), 12, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_2);
lean_closure_set(x_14, 2, x_3);
lean_closure_set(x_14, 3, x_4);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg(x_5, x_15, x_6, x_14, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = l_Array_empty___closed__1;
lean_inc(x_12);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__3), 13, 5);
lean_closure_set(x_14, 0, x_2);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_12);
lean_closure_set(x_14, 3, x_13);
lean_closure_set(x_14, 4, x_3);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_9, 3);
x_17 = l_Lean_replaceRef(x_12, x_16);
lean_dec(x_16);
lean_dec(x_12);
lean_ctor_set(x_9, 3, x_17);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(x_1, x_18, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_9, 0);
x_21 = lean_ctor_get(x_9, 1);
x_22 = lean_ctor_get(x_9, 2);
x_23 = lean_ctor_get(x_9, 3);
x_24 = lean_ctor_get(x_9, 4);
x_25 = lean_ctor_get(x_9, 5);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_9);
x_26 = l_Lean_replaceRef(x_12, x_23);
lean_dec(x_23);
lean_dec(x_12);
x_27 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_21);
lean_ctor_set(x_27, 2, x_22);
lean_ctor_set(x_27, 3, x_26);
lean_ctor_set(x_27, 4, x_24);
lean_ctor_set(x_27, 5, x_25);
x_28 = lean_unsigned_to_nat(0u);
x_29 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg(x_1, x_28, x_13, x_14, x_5, x_6, x_7, x_8, x_27, x_10, x_11);
return x_29;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected Type");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_9 = lean_ctor_get(x_1, 10);
lean_inc(x_9);
x_29 = lean_array_get_size(x_9);
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_nat_dec_lt(x_30, x_29);
if (x_31 == 0)
{
lean_dec(x_29);
x_10 = x_8;
goto block_28;
}
else
{
uint8_t x_32; 
x_32 = lean_nat_dec_le(x_29, x_29);
if (x_32 == 0)
{
lean_dec(x_29);
x_10 = x_8;
goto block_28;
}
else
{
size_t x_33; size_t x_34; lean_object* x_35; lean_object* x_36; 
x_33 = 0;
x_34 = lean_usize_of_nat(x_29);
lean_dec(x_29);
x_35 = lean_box(0);
lean_inc(x_6);
lean_inc(x_2);
x_36 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10(x_1, x_9, x_33, x_34, x_35, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_10 = x_37;
goto block_28;
}
else
{
uint8_t x_38; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_36);
if (x_38 == 0)
{
return x_36;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_36, 0);
x_40 = lean_ctor_get(x_36, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_36);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
block_28:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_1, 8);
lean_inc(x_11);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_11);
x_12 = l_Lean_Elab_Term_elabType(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_validStructType(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_1);
x_16 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3;
x_17 = l_Lean_throwErrorAt___at_Lean_Elab_Term_quoteAutoTactic___spec__2(x_11, x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_11);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_11);
x_22 = lean_box(0);
x_23 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4(x_1, x_13, x_9, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_12);
if (x_24 == 0)
{
return x_12;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_12, 0);
x_26 = lean_ctor_get(x_12, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_12);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
lean_object* l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_forM___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__4(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__5(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__6(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__8(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__9(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; lean_object* x_17; 
x_16 = lean_unbox(x_6);
lean_dec(x_6);
x_17 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1(x_1, x_2, x_3, x_4, x_5, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_4);
lean_dec(x_1);
return x_17;
}
}
lean_object* l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Lean_Elab_Command_elabStructure_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_elabStructure_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabStructure_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_dec_eq(x_7, x_10);
lean_dec(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_Lean_Elab_Command_checkValidInductiveModifier___rarg___lambda__1___closed__3;
x_13 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_12, x_3, x_4, x_5);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = l_Lean_Elab_instInhabitedAttribute;
x_15 = lean_array_get(x_14, x_6, x_8);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_initFn____x40_Lean_Class___hyg_627____closed__1;
x_18 = lean_name_eq(x_16, x_17);
lean_dec(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = l_Lean_Elab_Command_checkValidInductiveModifier___rarg___lambda__1___closed__3;
x_20 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_19, x_3, x_4, x_5);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_3);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_5);
return x_22;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_7);
lean_dec(x_3);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_5);
return x_24;
}
}
}
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__1(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Elab_Command_checkValidInductiveModifier___rarg___lambda__2___closed__3;
x_10 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__12(x_9, x_3, x_4, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__2(x_1, x_6, x_2, x_3, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = l_Lean_Elab_Command_checkValidInductiveModifier___rarg___closed__3;
x_9 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__12(x_8, x_2, x_3, x_4);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabStructure___spec__3(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 < x_1;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_array_uget(x_3, x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_uset(x_3, x_2, x_11);
x_13 = x_10;
x_14 = l_Lean_Syntax_getId(x_13);
lean_inc(x_4);
x_15 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_elabDeriving___spec__1(x_14, x_4, x_5, x_6);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_16);
x_19 = 1;
x_20 = x_2 + x_19;
x_21 = x_18;
x_22 = lean_array_uset(x_12, x_2, x_21);
x_2 = x_20;
x_3 = x_22;
x_6 = x_17;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_15);
if (x_24 == 0)
{
return x_15;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_ctor_get(x_15, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_15);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_Syntax_isNone(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_getSepArgs(x_9);
lean_dec(x_9);
x_11 = lean_array_get_size(x_10);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = x_10;
x_14 = lean_box_usize(x_12);
x_15 = l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed__const__1;
x_16 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabStructure___spec__3___boxed), 6, 3);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_15);
lean_closure_set(x_16, 2, x_13);
x_17 = x_16;
x_18 = lean_apply_3(x_17, x_2, x_3, x_4);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_3);
lean_dec(x_2);
x_19 = l_Array_empty___closed__1;
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_4);
return x_20;
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_Environment_contains(x_2, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_4);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_18, 0, x_14);
x_19 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_23;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
lean_inc(x_1);
lean_inc(x_2);
x_11 = l_Lean_mkPrivateName(x_2, x_1);
lean_inc(x_2);
x_12 = l_Lean_Environment_contains(x_2, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___lambda__1(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_2);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_1);
x_16 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_12);
x_13 = l_Lean_Environment_contains(x_12, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___lambda__2(x_1, x_12, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_12);
lean_inc(x_1);
x_16 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_1);
x_18 = l_Lean_KernelException_toMessageData___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_dec(x_1);
x_27 = lean_ctor_get(x_16, 0);
lean_inc(x_27);
lean_dec(x_16);
x_28 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
return x_33;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
lean_object* l_Lean_Elab_applyVisibility___at_Lean_Elab_Command_elabStructure___spec__6(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_10; 
lean_inc(x_2);
x_10 = l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_2);
return x_10;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
case 1:
{
lean_object* x_19; 
lean_inc(x_3);
lean_inc(x_2);
x_19 = l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_8, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_protectedExt;
lean_inc(x_2);
x_26 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_25, x_24, x_2);
x_27 = l_Lean_setEnv___at_Lean_Elab_Term_evalExpr___spec__1(x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
lean_dec(x_3);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_2);
return x_27;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_2);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
return x_19;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_19, 0);
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_19);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
default: 
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_st_ref_get(x_8, x_9);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_mkPrivateName(x_39, x_2);
lean_inc(x_40);
x_41 = l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7(x_40, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
lean_ctor_set(x_41, 0, x_40);
return x_41;
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_40);
x_46 = !lean_is_exclusive(x_41);
if (x_46 == 0)
{
return x_41;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_41, 0);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_41);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; 
lean_inc(x_2);
x_12 = l_Lean_Name_append(x_1, x_2);
x_13 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
lean_inc(x_5);
x_14 = l_Lean_Elab_applyVisibility___at_Lean_Elab_Command_elabStructure___spec__6(x_13, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_box(x_13);
if (lean_obj_tag(x_15) == 1)
{
if (lean_obj_tag(x_1) == 1)
{
uint8_t x_16; 
lean_dec(x_5);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_14, 0);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_box(0);
x_20 = lean_name_mk_string(x_19, x_18);
x_21 = l_Lean_Name_append(x_20, x_2);
lean_dec(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_14, 0, x_22);
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_box(0);
x_27 = lean_name_mk_string(x_26, x_25);
x_28 = l_Lean_Name_append(x_27, x_2);
lean_dec(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_24);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_2);
lean_dec(x_1);
x_31 = lean_ctor_get(x_14, 1);
lean_inc(x_31);
lean_dec(x_14);
x_32 = l_Lean_Elab_mkDeclName___rarg___lambda__1___closed__3;
x_33 = l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__8(x_32, x_5, x_6, x_7, x_8, x_9, x_10, x_31);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_14);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_14, 0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_2);
lean_ctor_set(x_14, 0, x_36);
return x_14;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_14, 0);
x_38 = lean_ctor_get(x_14, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_14);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_2);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_14);
if (x_41 == 0)
{
return x_14;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_14, 0);
x_43 = lean_ctor_get(x_14, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_14);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_inc(x_3);
x_11 = l_Lean_extractMacroScopes(x_3);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Name_isAtomic(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = l_Lean_Elab_isFreshInstanceName(x_12);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_1);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_3);
x_16 = l_Lean_Elab_mkDeclName___rarg___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_KernelException_toMessageData___closed__3;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_box(0);
x_26 = l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1(x_1, x_3, x_2, x_25, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_12);
x_27 = lean_box(0);
x_28 = l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1(x_1, x_3, x_2, x_27, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_28;
}
}
}
lean_object* l_Lean_addDocString___at_Lean_Elab_Command_elabStructure___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_2);
x_16 = l_Lean_docStringExt;
x_17 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_16, x_14, x_15);
lean_ctor_set(x_11, 0, x_17);
x_18 = lean_st_ref_set(x_8, x_11, x_12);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_25 = lean_ctor_get(x_11, 0);
x_26 = lean_ctor_get(x_11, 1);
x_27 = lean_ctor_get(x_11, 2);
x_28 = lean_ctor_get(x_11, 3);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_11);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_1);
lean_ctor_set(x_29, 1, x_2);
x_30 = l_Lean_docStringExt;
x_31 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_30, x_25, x_29);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_26);
lean_ctor_set(x_32, 2, x_27);
lean_ctor_set(x_32, 3, x_28);
x_33 = lean_st_ref_set(x_8, x_32, x_12);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_35 = x_33;
} else {
 lean_dec_ref(x_33);
 x_35 = lean_box(0);
}
x_36 = lean_box(0);
if (lean_is_scalar(x_35)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_35;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
}
}
lean_object* l_Lean_addDocString_x27___at_Lean_Elab_Command_elabStructure___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_Lean_addDocString___at_Lean_Elab_Command_elabStructure___spec__10(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_9, 0, x_1);
x_10 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__2;
x_11 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__12(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__13(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_array_uget(x_1, x_2);
x_14 = l_Lean_Syntax_getId(x_13);
x_15 = l_List_elem___at_Lean_NameHashSet_insert___spec__2(x_14, x_4);
if (x_15 == 0)
{
lean_object* x_16; size_t x_17; size_t x_18; 
lean_dec(x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_4);
x_17 = 1;
x_18 = x_2 + x_17;
x_2 = x_18;
x_4 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_4);
x_20 = !lean_is_exclusive(x_9);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_9, 3);
x_22 = l_Lean_replaceRef(x_13, x_21);
lean_dec(x_21);
lean_dec(x_13);
lean_ctor_set(x_9, 3, x_22);
x_23 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__11(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
return x_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_28 = lean_ctor_get(x_9, 0);
x_29 = lean_ctor_get(x_9, 1);
x_30 = lean_ctor_get(x_9, 2);
x_31 = lean_ctor_get(x_9, 3);
x_32 = lean_ctor_get(x_9, 4);
x_33 = lean_ctor_get(x_9, 5);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_9);
x_34 = l_Lean_replaceRef(x_13, x_31);
lean_dec(x_31);
lean_dec(x_13);
x_35 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_35, 0, x_28);
lean_ctor_set(x_35, 1, x_29);
lean_ctor_set(x_35, 2, x_30);
lean_ctor_set(x_35, 3, x_34);
lean_ctor_set(x_35, 4, x_32);
lean_ctor_set(x_35, 5, x_33);
x_36 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__11(x_14, x_5, x_6, x_7, x_8, x_35, x_10, x_11);
lean_dec(x_35);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_39 = x_36;
} else {
 lean_dec_ref(x_36);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
else
{
lean_object* x_41; 
lean_dec(x_9);
lean_dec(x_5);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_4);
lean_ctor_set(x_41, 1, x_11);
return x_41;
}
}
}
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_ctor_get(x_10, 1);
x_15 = lean_ctor_get(x_10, 2);
x_16 = lean_ctor_get(x_10, 3);
x_17 = lean_ctor_get(x_10, 4);
x_18 = lean_ctor_get(x_10, 5);
x_19 = l_Lean_replaceRef(x_1, x_16);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_20 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_20, 2, x_15);
lean_ctor_set(x_20, 3, x_19);
lean_ctor_set(x_20, 4, x_17);
lean_ctor_set(x_20, 5, x_18);
lean_inc(x_6);
x_21 = l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5(x_2, x_3, x_4, x_6, x_7, x_8, x_9, x_20, x_11, x_12);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_ctor_get(x_3, 0);
lean_inc(x_26);
lean_dec(x_3);
lean_inc(x_24);
x_27 = l_Lean_addDocString_x27___at_Lean_Elab_Command_elabStructure___spec__9(x_24, x_26, x_6, x_7, x_8, x_9, x_10, x_11, x_23);
lean_dec(x_6);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_24);
lean_ctor_set(x_30, 2, x_5);
lean_ctor_set(x_27, 0, x_30);
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_27, 1);
lean_inc(x_31);
lean_dec(x_27);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_25);
lean_ctor_set(x_32, 1, x_24);
lean_ctor_set(x_32, 2, x_5);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_34 = !lean_is_exclusive(x_21);
if (x_34 == 0)
{
return x_21;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_21, 0);
x_36 = lean_ctor_get(x_21, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_21);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = l_Lean_Elab_expandDeclIdCore(x_3);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Syntax_isNone(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_Lean_Syntax_getArg(x_14, x_16);
lean_dec(x_14);
x_18 = l_Lean_Syntax_getArgs(x_17);
lean_dec(x_17);
x_19 = lean_array_get_size(x_18);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_lt(x_20, x_19);
if (x_21 == 0)
{
lean_object* x_39; 
lean_dec(x_19);
lean_dec(x_18);
x_39 = l_Array_empty___closed__1;
x_22 = x_39;
goto block_38;
}
else
{
uint8_t x_40; 
x_40 = lean_nat_dec_le(x_19, x_19);
if (x_40 == 0)
{
lean_object* x_41; 
lean_dec(x_19);
lean_dec(x_18);
x_41 = l_Array_empty___closed__1;
x_22 = x_41;
goto block_38;
}
else
{
size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = 0;
x_43 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_44 = l_Array_getEvenElems___rarg___closed__1;
x_45 = l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(x_18, x_42, x_43, x_44);
lean_dec(x_18);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_22 = x_46;
goto block_38;
}
}
block_38:
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_array_get_size(x_22);
x_24 = lean_nat_dec_lt(x_20, x_23);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_23);
lean_dec(x_22);
x_25 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1(x_3, x_1, x_4, x_13, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
return x_25;
}
else
{
uint8_t x_26; 
x_26 = lean_nat_dec_le(x_23, x_23);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_23);
lean_dec(x_22);
x_27 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1(x_3, x_1, x_4, x_13, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
return x_27;
}
else
{
size_t x_28; size_t x_29; lean_object* x_30; 
x_28 = 0;
x_29 = lean_usize_of_nat(x_23);
lean_dec(x_23);
lean_inc(x_9);
lean_inc(x_5);
x_30 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__13(x_22, x_28, x_29, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_22);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1(x_3, x_1, x_4, x_13, x_31, x_5, x_6, x_7, x_8, x_9, x_10, x_32);
lean_dec(x_9);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_30);
if (x_34 == 0)
{
return x_30;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_30, 0);
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_30);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
}
else
{
lean_object* x_47; 
lean_dec(x_14);
x_47 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1(x_3, x_1, x_4, x_13, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
return x_47;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__14(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_3 == x_4;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_10 = lean_array_uget(x_2, x_3);
x_11 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_1);
x_12 = lean_array_push(x_11, x_1);
lean_inc(x_7);
lean_inc(x_6);
x_13 = l_Lean_Elab_DerivingClassView_applyHandlers(x_10, x_12, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 1;
x_17 = x_3 + x_16;
x_3 = x_17;
x_5 = x_14;
x_8 = x_15;
goto _start;
}
else
{
uint8_t x_19; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_5);
lean_ctor_set(x_23, 1, x_8);
return x_23;
}
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
lean_inc(x_14);
lean_inc(x_12);
x_19 = l_Lean_Elab_Term_addAutoBoundImplicits(x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_getLevelNames___rarg(x_13, x_14, x_15, x_16, x_17, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_5);
x_25 = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_2);
lean_ctor_set(x_25, 2, x_3);
lean_ctor_set(x_25, 3, x_23);
lean_ctor_set(x_25, 4, x_5);
lean_ctor_set(x_25, 5, x_6);
lean_ctor_set(x_25, 6, x_20);
lean_ctor_set(x_25, 7, x_7);
lean_ctor_set(x_25, 8, x_8);
lean_ctor_set(x_25, 9, x_9);
lean_ctor_set(x_25, 10, x_10);
lean_ctor_set_uint8(x_25, sizeof(void*)*11, x_4);
x_26 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView), 8, 1);
lean_closure_set(x_26, 0, x_25);
x_27 = 0;
x_28 = l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg(x_26, x_27, x_12, x_13, x_14, x_15, x_16, x_17, x_24);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_5);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_5);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_5);
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_19);
if (x_37 == 0)
{
return x_19;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_19, 0);
x_39 = lean_ctor_get(x_19, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_19);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; 
lean_inc(x_12);
x_19 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields(x_1, x_2, x_3, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_box(x_5);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabStructure___lambda__1___boxed), 18, 10);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_2);
lean_closure_set(x_23, 2, x_4);
lean_closure_set(x_23, 3, x_22);
lean_closure_set(x_23, 4, x_3);
lean_closure_set(x_23, 5, x_6);
lean_closure_set(x_23, 6, x_7);
lean_closure_set(x_23, 7, x_8);
lean_closure_set(x_23, 8, x_11);
lean_closure_set(x_23, 9, x_20);
x_24 = 1;
x_25 = lean_box(x_24);
x_26 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg___boxed), 10, 3);
lean_closure_set(x_26, 0, x_9);
lean_closure_set(x_26, 1, x_23);
lean_closure_set(x_26, 2, x_25);
x_27 = lean_box(x_24);
x_28 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg___boxed), 9, 2);
lean_closure_set(x_28, 0, x_26);
lean_closure_set(x_28, 1, x_27);
x_29 = l_Lean_Elab_Term_withLevelNames___rarg(x_10, x_28, x_12, x_13, x_14, x_15, x_16, x_17, x_21);
return x_29;
}
else
{
uint8_t x_30; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_19);
if (x_30 == 0)
{
return x_19;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_19, 0);
x_32 = lean_ctor_get(x_19, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_19);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 4);
lean_inc(x_17);
lean_inc(x_14);
lean_inc(x_10);
lean_inc(x_2);
lean_inc(x_9);
x_18 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4(x_17, x_9, x_1, x_2, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 2);
lean_inc(x_22);
lean_dec(x_19);
lean_inc(x_21);
lean_inc(x_2);
lean_inc(x_3);
x_23 = lean_alloc_closure((void*)(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___boxed), 10, 3);
lean_closure_set(x_23, 0, x_3);
lean_closure_set(x_23, 1, x_2);
lean_closure_set(x_23, 2, x_21);
x_24 = lean_box(x_4);
lean_inc(x_21);
x_25 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabStructure___lambda__2___boxed), 18, 10);
lean_closure_set(x_25, 0, x_3);
lean_closure_set(x_25, 1, x_2);
lean_closure_set(x_25, 2, x_21);
lean_closure_set(x_25, 3, x_9);
lean_closure_set(x_25, 4, x_24);
lean_closure_set(x_25, 5, x_5);
lean_closure_set(x_25, 6, x_6);
lean_closure_set(x_25, 7, x_7);
lean_closure_set(x_25, 8, x_8);
lean_closure_set(x_25, 9, x_22);
x_26 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_26, 0, x_23);
lean_closure_set(x_26, 1, x_25);
x_27 = l_Lean_Elab_Term_withDeclName___rarg(x_21, x_26, x_10, x_11, x_12, x_13, x_14, x_15, x_20);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_18);
if (x_28 == 0)
{
return x_18;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_18, 0);
x_30 = lean_ctor_get(x_18, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_18);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_getLevelNames___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = l_Lean_Elab_Term_resetMessageLog(x_9, x_10, x_11, x_12, x_13, x_14, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
lean_inc(x_11);
lean_inc(x_9);
x_18 = l_Lean_Elab_Term_addAutoBoundImplicits(x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_box(x_4);
x_22 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabStructure___lambda__3___boxed), 16, 8);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_2);
lean_closure_set(x_22, 2, x_3);
lean_closure_set(x_22, 3, x_21);
lean_closure_set(x_22, 4, x_19);
lean_closure_set(x_22, 5, x_5);
lean_closure_set(x_22, 6, x_6);
lean_closure_set(x_22, 7, x_7);
x_23 = l_Lean_Elab_Command_elabStructure___lambda__4___closed__1;
x_24 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_24, 0, x_23);
lean_closure_set(x_24, 1, x_22);
x_25 = 0;
x_26 = l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg(x_24, x_25, x_9, x_10, x_11, x_12, x_13, x_14, x_20);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_18);
if (x_27 == 0)
{
return x_18;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_18, 0);
x_29 = lean_ctor_get(x_18, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_18);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_12 = lean_box(0);
x_13 = lean_st_ref_get(x_10, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l___private_Lean_Elab_Command_0__Lean_Elab_Command_getVarDecls(x_14);
lean_dec(x_14);
x_17 = lean_box(x_4);
x_18 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabStructure___lambda__4___boxed), 15, 7);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, x_2);
lean_closure_set(x_18, 2, x_3);
lean_closure_set(x_18, 3, x_17);
lean_closure_set(x_18, 4, x_5);
lean_closure_set(x_18, 5, x_8);
lean_closure_set(x_18, 6, x_6);
x_19 = 1;
x_20 = lean_box(x_19);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg___boxed), 10, 3);
lean_closure_set(x_21, 0, x_16);
lean_closure_set(x_21, 1, x_18);
lean_closure_set(x_21, 2, x_20);
x_22 = lean_box(x_19);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg___boxed), 9, 2);
lean_closure_set(x_23, 0, x_21);
lean_closure_set(x_23, 1, x_22);
lean_inc(x_9);
x_24 = l_Lean_Elab_Command_liftTermElabM___rarg(x_12, x_23, x_9, x_10, x_15);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
x_28 = lean_array_get_size(x_7);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_nat_dec_lt(x_29, x_28);
if (x_30 == 0)
{
lean_object* x_31; 
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_10);
lean_dec(x_9);
x_31 = lean_box(0);
lean_ctor_set(x_24, 0, x_31);
return x_24;
}
else
{
uint8_t x_32; 
x_32 = lean_nat_dec_le(x_28, x_28);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_10);
lean_dec(x_9);
x_33 = lean_box(0);
lean_ctor_set(x_24, 0, x_33);
return x_24;
}
else
{
size_t x_34; size_t x_35; lean_object* x_36; lean_object* x_37; 
lean_free_object(x_24);
x_34 = 0;
x_35 = lean_usize_of_nat(x_28);
lean_dec(x_28);
x_36 = lean_box(0);
x_37 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__14(x_26, x_7, x_34, x_35, x_36, x_9, x_10, x_27);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_38 = lean_ctor_get(x_24, 0);
x_39 = lean_ctor_get(x_24, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_24);
x_40 = lean_array_get_size(x_7);
x_41 = lean_unsigned_to_nat(0u);
x_42 = lean_nat_dec_lt(x_41, x_40);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_10);
lean_dec(x_9);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_39);
return x_44;
}
else
{
uint8_t x_45; 
x_45 = lean_nat_dec_le(x_40, x_40);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_10);
lean_dec(x_9);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_39);
return x_47;
}
else
{
size_t x_48; size_t x_49; lean_object* x_50; lean_object* x_51; 
x_48 = 0;
x_49 = lean_usize_of_nat(x_40);
lean_dec(x_40);
x_50 = lean_box(0);
x_51 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__14(x_38, x_7, x_48, x_49, x_50, x_9, x_10, x_39);
return x_51;
}
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_10);
lean_dec(x_9);
x_52 = !lean_is_exclusive(x_24);
if (x_52 == 0)
{
return x_24;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_24, 0);
x_54 = lean_ctor_get(x_24, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_24);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructure___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_initFn____x40_Lean_Class___hyg_627____closed__1;
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Command_elabStructure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_3);
x_6 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(x_1, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_2, x_8);
x_10 = l_Lean_Syntax_getKind(x_9);
x_11 = l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__20;
x_12 = lean_name_eq(x_10, x_11);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_2, x_13);
x_15 = lean_unsigned_to_nat(2u);
x_16 = l_Lean_Syntax_getArg(x_2, x_15);
x_17 = l_Lean_Syntax_getArgs(x_16);
lean_dec(x_16);
x_18 = lean_unsigned_to_nat(3u);
x_19 = l_Lean_Syntax_getArg(x_2, x_18);
x_20 = l_Lean_Syntax_isNone(x_19);
x_21 = lean_unsigned_to_nat(4u);
x_22 = l_Lean_Syntax_getArg(x_2, x_21);
x_23 = lean_unsigned_to_nat(6u);
x_24 = l_Lean_Syntax_getArg(x_2, x_23);
lean_inc(x_4);
lean_inc(x_3);
x_25 = l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(x_24, x_3, x_4, x_7);
lean_dec(x_24);
if (x_12 == 0)
{
x_26 = x_1;
goto block_74;
}
else
{
lean_object* x_75; lean_object* x_76; 
x_75 = l_Lean_Elab_Command_elabStructure___closed__1;
x_76 = l_Lean_Elab_Modifiers_addAttribute(x_1, x_75);
x_26 = x_76;
goto block_74;
}
block_74:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
if (x_20 == 0)
{
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_ctor_get(x_25, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_25, 1);
lean_inc(x_59);
lean_dec(x_25);
x_60 = l_Lean_Syntax_getArg(x_19, x_8);
lean_dec(x_19);
x_61 = l_Lean_Syntax_getArg(x_60, x_13);
lean_dec(x_60);
x_62 = l_Lean_Syntax_getSepArgs(x_61);
lean_dec(x_61);
x_27 = x_62;
x_28 = x_58;
x_29 = x_59;
goto block_57;
}
else
{
uint8_t x_63; 
lean_dec(x_26);
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_25);
if (x_63 == 0)
{
return x_25;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_25, 0);
x_65 = lean_ctor_get(x_25, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_25);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
lean_dec(x_19);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_25, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_25, 1);
lean_inc(x_68);
lean_dec(x_25);
x_69 = l_Array_empty___closed__1;
x_27 = x_69;
x_28 = x_67;
x_29 = x_68;
goto block_57;
}
else
{
uint8_t x_70; 
lean_dec(x_26);
lean_dec(x_22);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_70 = !lean_is_exclusive(x_25);
if (x_70 == 0)
{
return x_25;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_25, 0);
x_72 = lean_ctor_get(x_25, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_25);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
block_57:
{
uint8_t x_30; 
x_30 = l_Lean_Syntax_isNone(x_22);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = l_Lean_Syntax_getArg(x_22, x_8);
lean_dec(x_22);
x_32 = l_Lean_Syntax_getArg(x_31, x_13);
lean_dec(x_31);
x_33 = l_Lean_Elab_Command_elabStructure___lambda__5(x_14, x_26, x_2, x_12, x_27, x_17, x_28, x_32, x_3, x_4, x_29);
lean_dec(x_28);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_22);
x_34 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Command_mkDefViewOfConstant___spec__1(x_3, x_4, x_29);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Elab_Command_getCurrMacroScope(x_3, x_4, x_36);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l_Lean_Elab_Command_getMainModule___rarg(x_4, x_38);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__28;
lean_inc(x_35);
x_42 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_42, 0, x_35);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Array_empty___closed__1;
x_44 = lean_array_push(x_43, x_42);
x_45 = l_myMacro____x40_Init_Notation___hyg_13068____closed__14;
x_46 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_46, 0, x_35);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_array_push(x_43, x_46);
x_48 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__31;
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
x_50 = lean_array_push(x_43, x_49);
x_51 = l_Lean_nullKind___closed__2;
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = lean_array_push(x_44, x_52);
x_54 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__27;
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = l_Lean_Elab_Command_elabStructure___lambda__5(x_14, x_26, x_2, x_12, x_27, x_17, x_28, x_55, x_3, x_4, x_40);
lean_dec(x_28);
return x_56;
}
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_6);
if (x_77 == 0)
{
return x_6;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_6, 0);
x_79 = lean_ctor_get(x_6, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_6);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabStructure___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = l_Array_mapMUnsafe_map___at_Lean_Elab_Command_elabStructure___spec__3(x_7, x_8, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_9;
}
}
lean_object* l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_checkNotAlreadyDeclared___at_Lean_Elab_Command_elabStructure___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_applyVisibility___at_Lean_Elab_Command_elabStructure___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Elab_applyVisibility___at_Lean_Elab_Command_elabStructure___spec__6(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_mkDeclName___at_Lean_Elab_Command_elabStructure___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_addDocString___at_Lean_Elab_Command_elabStructure___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addDocString___at_Lean_Elab_Command_elabStructure___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_addDocString_x27___at_Lean_Elab_Command_elabStructure___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addDocString_x27___at_Lean_Elab_Command_elabStructure___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Command_elabStructure___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at_Lean_Elab_Command_elabStructure___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__13(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_expandDeclId___at_Lean_Elab_Command_elabStructure___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabStructure___spec__14(x_1, x_2, x_9, x_10, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; lean_object* x_20; 
x_19 = lean_unbox(x_4);
lean_dec(x_4);
x_20 = l_Lean_Elab_Command_elabStructure___lambda__1(x_1, x_2, x_3, x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_11);
return x_20;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; lean_object* x_20; 
x_19 = lean_unbox(x_5);
lean_dec(x_5);
x_20 = l_Lean_Elab_Command_elabStructure___lambda__2(x_1, x_2, x_3, x_4, x_19, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
return x_20;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; 
x_17 = lean_unbox(x_4);
lean_dec(x_4);
x_18 = l_Lean_Elab_Command_elabStructure___lambda__3(x_1, x_2, x_3, x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_1);
return x_18;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; lean_object* x_17; 
x_16 = lean_unbox(x_4);
lean_dec(x_4);
x_17 = l_Lean_Elab_Command_elabStructure___lambda__4(x_1, x_2, x_3, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_8);
return x_17;
}
}
lean_object* l_Lean_Elab_Command_elabStructure___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = l_Lean_Elab_Command_elabStructure___lambda__5(x_1, x_2, x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_7);
return x_13;
}
}
lean_object* l_Lean_Elab_Command_initFn____x40_Lean_Elab_Structure___hyg_3822_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
return x_3;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Parser_Command(lean_object*);
lean_object* initialize_Lean_Meta_Closure(lean_object*);
lean_object* initialize_Lean_Elab_Command(lean_object*);
lean_object* initialize_Lean_Elab_DeclModifiers(lean_object*);
lean_object* initialize_Lean_Elab_DeclUtil(lean_object*);
lean_object* initialize_Lean_Elab_Inductive(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Structure(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Closure(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclModifiers(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclUtil(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Inductive(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_instInhabitedStructFieldKind = _init_l_Lean_Elab_Command_instInhabitedStructFieldKind();
l_Lean_Elab_Command_StructFieldInfo_inferMod___default = _init_l_Lean_Elab_Command_StructFieldInfo_inferMod___default();
l_Lean_Elab_Command_StructFieldInfo_value_x3f___default = _init_l_Lean_Elab_Command_StructFieldInfo_value_x3f___default();
lean_mark_persistent(l_Lean_Elab_Command_StructFieldInfo_value_x3f___default);
l_Lean_Elab_Command_instInhabitedStructFieldInfo___closed__1 = _init_l_Lean_Elab_Command_instInhabitedStructFieldInfo___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_instInhabitedStructFieldInfo___closed__1);
l_Lean_Elab_Command_instInhabitedStructFieldInfo = _init_l_Lean_Elab_Command_instInhabitedStructFieldInfo();
lean_mark_persistent(l_Lean_Elab_Command_instInhabitedStructFieldInfo);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_defaultCtorName);
l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___closed__1 = _init_l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___closed__1();
lean_mark_persistent(l_Lean_Elab_toAttributeKind___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___spec__5___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___lambda__2___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandCtor___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__1___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__2___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__3___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___lambda__4___closed__3);
l_Lean_Elab_Command_checkValidFieldModifier___closed__1 = _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___closed__1);
l_Lean_Elab_Command_checkValidFieldModifier___closed__2 = _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___closed__2);
l_Lean_Elab_Command_checkValidFieldModifier___closed__3 = _init_l_Lean_Elab_Command_checkValidFieldModifier___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_checkValidFieldModifier___closed__3);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__1 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__1);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__2 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__2);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__3 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__3();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__16___closed__3);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__1 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__1);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__2 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__2);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__3 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__3();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__2___closed__3);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__1 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__1);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__2 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__2);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__3 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__3();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__3___closed__3);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__1 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__1);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__2 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__2);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__3 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__3();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___lambda__4___closed__3);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___closed__1 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___spec__18___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__1();
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__2();
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_expandFields___closed__3();
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__4);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_checkParentIsStructure___closed__5);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_processSubfields_loop___rarg___closed__4);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withParents___rarg___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabFieldTypeValue___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__4);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__5);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__6);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__7);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__8);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__9);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__10 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__10();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__10);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__11 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__11();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__11);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_withFields___rarg___closed__12);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_getResultUniverse___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_levelMVarToParamAux___boxed__const__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_updateResultingUniverse___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___boxed__const__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_addDefaults___boxed__const__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__3___closed__2);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__1 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__1);
l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__2 = _init_l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__2();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___spec__10___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___closed__3);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed__const__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___lambda__1___boxed__const__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__1);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__2);
l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3 = _init_l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Structure_0__Lean_Elab_Command_elabStructureView___closed__3);
l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed__const__1 = _init_l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2___boxed__const__1);
l_Lean_Elab_Command_elabStructure___lambda__4___closed__1 = _init_l_Lean_Elab_Command_elabStructure___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___lambda__4___closed__1);
l_Lean_Elab_Command_elabStructure___closed__1 = _init_l_Lean_Elab_Command_elabStructure___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabStructure___closed__1);
res = l_Lean_Elab_Command_initFn____x40_Lean_Elab_Structure___hyg_3822_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
