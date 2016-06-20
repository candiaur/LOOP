// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Indicador.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Atras.h>
#include <_root.Indicador.h>
#include <_root.Indicador.Template.h>
#include <_root.Indicador.Template1.h>
#include <_root.Indicador.Template2.h>
#include <_root.Indicador.Template3.h>
#include <_root.LOOP_bundle.h>
#include <_root.LOOP_FuseControlsDockPanel_Visibility_Property.h>
#include <_root.LOOP_FuseControlsGrid_Visibility_Property.h>
#include <_root.LOOP_FuseControlsPage_IsEnabled_Property.h>
#include <_root.LOOP_FuseControlsPage_Visibility_Property.h>
#include <_root.LOOP_FuseControlsPageControl_Active_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.LOOP_FuseReactiveEach_Items_Property.h>
#include <_root.MainView.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.NavigationControlInteraction.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Rotation.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[61];
static uType* TYPES[30];

namespace g{

// public partial sealed class Indicador :2
// {
// static Indicador() :405
static void Indicador__cctor_4_fn(uType* __type)
{
    Indicador::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[0/*"alumPage"*/], ::STRINGS[1/*"pagMiActivi...*/], ::STRINGS[2/*"pagAsistencia"*/], ::STRINGS[3/*"pagProgreso"*/], ::STRINGS[4/*"pagEvolucion"*/]);
    Indicador::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Items"*/]);
    Indicador::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Value"*/]);
    Indicador::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Active"*/]);
    Indicador::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"IsEnabled"*/]);
    Indicador::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Visibility"*/]);
    Indicador::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"alumPage"*/]);
    Indicador::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"pagMiActivi...*/]);
    Indicador::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"pagAsistencia"*/]);
    Indicador::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"pagProgreso"*/]);
    Indicador::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"pagEvolucion"*/]);
}

static void Indicador_build(uType* type)
{
    ::STRINGS[0] = uString::Const("alumPage");
    ::STRINGS[1] = uString::Const("pagMiActividad");
    ::STRINGS[2] = uString::Const("pagAsistencia");
    ::STRINGS[3] = uString::Const("pagProgreso");
    ::STRINGS[4] = uString::Const("pagEvolucion");
    ::STRINGS[5] = uString::Const("Items");
    ::STRINGS[6] = uString::Const("Value");
    ::STRINGS[7] = uString::Const("Active");
    ::STRINGS[8] = uString::Const("IsEnabled");
    ::STRINGS[9] = uString::Const("Visibility");
    ::STRINGS[10] = uString::Const("check");
    ::STRINGS[11] = uString::Const("falla");
    ::STRINGS[12] = uString::Const("resumenNotas");
    ::STRINGS[13] = uString::Const("total");
    ::STRINGS[14] = uString::Const("getHabilidadesAlcanzadas");
    ::STRINGS[15] = uString::Const("getFechasconActividades");
    ::STRINGS[16] = uString::Const("getFechasClases");
    ::STRINGS[17] = uString::Const("clases");
    ::STRINGS[18] = uString::Const("lastFechaCalificacion");
    ::STRINGS[19] = uString::Const("dia");
    ::STRINGS[20] = uString::Const("anio");
    ::STRINGS[21] = uString::Const("nextFechaCalificacion");
    ::STRINGS[22] = uString::Const("mostrarCalificacion");
    ::STRINGS[23] = uString::Const("calificacionAct");
    ::STRINGS[24] = uString::Const("comentario");
    ::STRINGS[25] = uString::Const("habilidadesAlcanzadas");
    ::STRINGS[26] = uString::Const("Indicador.ux");
    ::STRINGS[27] = uString::Const("auto,auto");
    ::STRINGS[28] = uString::Const("MI ");
    ::STRINGS[29] = uString::Const("ACTIVIDAD");
    ::STRINGS[30] = uString::Const("Conoce tu rendimiento y evoluci\303\263n en la temporada, revisando diariamente tu resumen de habilidades logradas, asistencia, progreso y calificaciones.");
    ::STRINGS[31] = uString::Const("auto,1*");
    ::STRINGS[32] = uString::Const("MIS ");
    ::STRINGS[33] = uString::Const("HABLIDADES");
    ::STRINGS[34] = uString::Const("Total de habilidades ejecutadas: ");
    ::STRINGS[35] = uString::Const("1*,5*");
    ::STRINGS[36] = uString::Const("Evoluci\303\263n");
    ::STRINGS[37] = uString::Const("Progresi\303\263n");
    ::STRINGS[38] = uString::Const("Asistencia");
    ::STRINGS[39] = uString::Const("ASISTENCIA");
    ::STRINGS[40] = uString::Const("PROGRESI\303\223N");
    ::STRINGS[41] = uString::Const("1*,9*,1*");
    ::STRINGS[42] = uString::Const(">");
    ::STRINGS[43] = uString::Const("7*,1*,1*,1*");
    ::STRINGS[44] = uString::Const("HABILIDADES");
    ::STRINGS[45] = uString::Const("S");
    ::STRINGS[46] = uString::Const("C");
    ::STRINGS[47] = uString::Const("L");
    ::STRINGS[48] = uString::Const("1*,auto,auto,auto,auto,auto");
    ::STRINGS[49] = uString::Const("S: ");
    ::STRINGS[50] = uString::Const("Seguir trabajando / ");
    ::STRINGS[51] = uString::Const("C: ");
    ::STRINGS[52] = uString::Const("Casi logrado / ");
    ::STRINGS[53] = uString::Const("L: ");
    ::STRINGS[54] = uString::Const("Logrado");
    ::STRINGS[55] = uString::Const("COMENTARIOS");
    ::STRINGS[56] = uString::Const("EVOLUCI\303\223N");
    ::STRINGS[57] = uString::Const("5*,2*");
    ::STRINGS[58] = uString::Const("HABILIDADES ");
    ::STRINGS[59] = uString::Const("ALCANZADAS");
    ::STRINGS[60] = uString::Const("Fecha");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[4] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[5] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[6] = uObject_typeof();
    ::TYPES[7] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof());
    ::TYPES[8] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[9] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[10] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[11] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[12] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[13] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[14] = ::g::Fuse::Visual_typeof();
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[16] = ::g::Fuse::Node_typeof();
    ::TYPES[17] = ::g::Fuse::Resources::ImageSource_typeof();
    ::TYPES[18] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[19] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[20] = ::g::Uno::UX::Template_typeof();
    ::TYPES[21] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[22] = ::g::Fuse::Binding_typeof();
    ::TYPES[23] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[24] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[25] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[26] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[27] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[28] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    ::TYPES[29] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(93,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Indicador, __g_nametable1), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::Indicador, alumPage), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::Indicador, alumPage_Active_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Indicador, pagAsistencia), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Indicador, pagAsistencia_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Indicador, pagAsistencia_Visibility_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Indicador, pagEvolucion), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Indicador, pagEvolucion_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Indicador, pagEvolucion_Visibility_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Indicador, pagMiActividad), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Indicador, pagProgreso), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Indicador, pagProgreso_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Indicador, pagProgreso_Visibility_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Indicador, temp_eb36), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Indicador, temp_eb37), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Indicador, temp_eb38), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Indicador, temp_eb40), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Indicador, temp_eb41), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Indicador, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Indicador, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Indicador, temp2_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Indicador, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Indicador, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Indicador, temp5_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Indicador, temp6_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Indicador, temp7_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Indicador, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Indicador, temp9_Items_inst), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::Indicador::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Indicador::__selector9_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Indicador__New4_fn, 0, true, Indicador_typeof(), 0));
}

::g::Fuse::Controls::Control_type* Indicador_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 132;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(Indicador);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Indicador", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_build_ = Indicador_build;
    type->fp_ctor_ = (void*)Indicador__New4_fn;
    type->fp_cctor_ = Indicador__cctor_4_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Indicador() :409
void Indicador__ctor_7_fn(Indicador* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :413
void Indicador__InitializeUX_fn(Indicador* __this)
{
    __this->InitializeUX();
}

// public Indicador New() :409
void Indicador__New4_fn(Indicador** __retval)
{
    *__retval = Indicador::New4();
}

uSStrong<uArray*> Indicador::__g_static_nametable1_;
::g::Uno::UX::Selector Indicador::__selector0_;
::g::Uno::UX::Selector Indicador::__selector1_;
::g::Uno::UX::Selector Indicador::__selector2_;
::g::Uno::UX::Selector Indicador::__selector3_;
::g::Uno::UX::Selector Indicador::__selector4_;
::g::Uno::UX::Selector Indicador::__selector5_;
::g::Uno::UX::Selector Indicador::__selector6_;
::g::Uno::UX::Selector Indicador::__selector7_;
::g::Uno::UX::Selector Indicador::__selector8_;
::g::Uno::UX::Selector Indicador::__selector9_;

// public Indicador() [instance] :409
void Indicador::ctor_7()
{
    uStackFrame __("Indicador", ".ctor()");
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :413
void Indicador::InitializeUX()
{
    uStackFrame __("Indicador", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Indicador::__g_static_nametable1());
    ::g::Fuse::Resources::FileImageSource* temp10 = ::g::Fuse::Resources::FileImageSource::New2();
    ::g::Fuse::Resources::FileImageSource* temp11 = ::g::Fuse::Resources::FileImageSource::New2();
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New2();
    temp_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp, Indicador::__selector0());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp1, Indicador::__selector1());
    alumPage = ::g::Fuse::Controls::PageControl::New4();
    alumPage_Active_inst = ::g::LOOP_FuseControlsPageControl_Active_Property::New1(alumPage, Indicador::__selector2());
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New2();
    temp2_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp2, Indicador::__selector0());
    pagAsistencia = ::g::Fuse::Controls::Page::New4();
    pagAsistencia_IsEnabled_inst = ::g::LOOP_FuseControlsPage_IsEnabled_Property::New1(pagAsistencia, Indicador::__selector3());
    pagAsistencia_Visibility_inst = ::g::LOOP_FuseControlsPage_Visibility_Property::New1(pagAsistencia, Indicador::__selector4());
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp3, Indicador::__selector1());
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    temp4_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp4, Indicador::__selector1());
    ::g::Fuse::Controls::DockPanel* temp5 = ::g::Fuse::Controls::DockPanel::New4();
    temp5_Visibility_inst = ::g::LOOP_FuseControlsDockPanel_Visibility_Property::New1(temp5, Indicador::__selector4());
    ::g::Fuse::Reactive::Each* temp6 = ::g::Fuse::Reactive::Each::New2();
    temp6_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp6, Indicador::__selector0());
    ::g::Fuse::Controls::Grid* temp7 = ::g::Fuse::Controls::Grid::New4();
    temp7_Visibility_inst = ::g::LOOP_FuseControlsGrid_Visibility_Property::New1(temp7, Indicador::__selector4());
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New3();
    temp8_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp8, Indicador::__selector1());
    pagProgreso = ::g::Fuse::Controls::Page::New4();
    pagProgreso_IsEnabled_inst = ::g::LOOP_FuseControlsPage_IsEnabled_Property::New1(pagProgreso, Indicador::__selector3());
    pagProgreso_Visibility_inst = ::g::LOOP_FuseControlsPage_Visibility_Property::New1(pagProgreso, Indicador::__selector4());
    ::g::Fuse::Reactive::Each* temp9 = ::g::Fuse::Reactive::Each::New2();
    temp9_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp9, Indicador::__selector0());
    pagEvolucion = ::g::Fuse::Controls::Page::New4();
    pagEvolucion_IsEnabled_inst = ::g::LOOP_FuseControlsPage_IsEnabled_Property::New1(pagEvolucion, Indicador::__selector3());
    pagEvolucion_Visibility_inst = ::g::LOOP_FuseControlsPage_Visibility_Property::New1(pagEvolucion, Indicador::__selector4());
    ::g::Fuse::Reactive::JavaScript* temp12 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Uno::UX::Resource* temp13 = ::g::Uno::UX::Resource::New1(::STRINGS[10/*"check"*/], temp10);
    ::g::Uno::UX::Resource* temp14 = ::g::Uno::UX::Resource::New1(::STRINGS[11/*"falla"*/], temp11);
    pagMiActividad = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::DockPanel* temp15 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp16 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp17 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::StackPanel* temp18 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp19 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp20 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp22 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp23 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp24 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp25 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Grid* temp26 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp27 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp28 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp29 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp30 = ::g::Fuse::Controls::Grid::New4();
    Indicador__Template* temp31 = Indicador__Template::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp32 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<object>*/], temp_Items_inst, ::STRINGS[12/*"resumenNotas"*/]);
    ::g::Fuse::Controls::StackPanel* temp33 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp34 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp35 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp36 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[13/*"total"*/]);
    ::g::Fuse::Controls::DockPanel* temp37 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp38 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp39 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp40 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp41 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp42 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[9/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], alumPage_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp43 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb36 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[14/*"getHabilida...*/]);
    ::g::Fuse::Controls::Rectangle* temp44 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::DockPanel* temp45 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp46 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp47 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp48 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp49 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp50 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp51 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[9/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], alumPage_Active_inst);
    temp_eb37 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[15/*"getFechasco...*/]);
    ::g::Fuse::Controls::Rectangle* temp52 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::DockPanel* temp53 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp54 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp55 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp56 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp57 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp58 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp59 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp60 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[9/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], alumPage_Active_inst);
    temp_eb38 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[16/*"getFechasCl...*/]);
    ::g::Fuse::Controls::Rectangle* temp61 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp62 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp63 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp64 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp65 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp66 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[9/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], alumPage_Active_inst);
    ::g::Fuse::Controls::StackPanel* temp67 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp68 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp69 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp70 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::ScrollView* temp71 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp72 = ::g::Fuse::Controls::StackPanel::New4();
    Indicador__Template1* temp73 = Indicador__Template1::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp74 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<object>*/], temp2_Items_inst, ::STRINGS[17/*"clases"*/]);
    ::g::Fuse::Navigation::WhileInactive* temp75 = ::g::Fuse::Navigation::WhileInactive::New2();
    ::g::Fuse::Animations::Change* temp76 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<bool>*/], pagAsistencia_IsEnabled_inst);
    ::g::Fuse::Animations::Change* temp77 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[11/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], pagAsistencia_Visibility_inst);
    ::g::Fuse::Navigation::WhileActive* temp78 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Animations::Change* temp79 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<bool>*/], pagAsistencia_IsEnabled_inst);
    ::g::Fuse::Animations::Change* temp80 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[11/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], pagAsistencia_Visibility_inst);
    ::g::Fuse::Controls::StackPanel* temp81 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp82 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp83 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp84 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp85 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[9/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], alumPage_Active_inst);
    ::g::Fuse::Controls::StackPanel* temp86 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp87 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp88 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp89 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Grid* temp90 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp91 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp92 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Rotation* temp93 = ::g::Fuse::Rotation::New2();
    ::g::Fuse::Gestures::Clicked* temp94 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp95 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb40 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[18/*"lastFechaCa...*/]);
    ::g::Fuse::Controls::Grid* temp96 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp97 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp3_Value_inst, ::STRINGS[19/*"dia"*/]);
    ::g::Fuse::Reactive::DataBinding* temp98 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp4_Value_inst, ::STRINGS[20/*"anio"*/]);
    ::g::Fuse::Controls::DockPanel* temp99 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp100 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp101 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp102 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb41 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[21/*"nextFechaCa...*/]);
    ::g::Fuse::Controls::Grid* temp103 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp104 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp105 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp106 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp107 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp108 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>*/], temp5_Visibility_inst, ::STRINGS[22/*"mostrarCali...*/]);
    ::g::Fuse::Controls::ScrollView* temp109 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp110 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp111 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp112 = ::g::Fuse::Controls::Rectangle::New3();
    Indicador__Template2* temp113 = Indicador__Template2::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp114 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<object>*/], temp6_Items_inst, ::STRINGS[23/*"calificacio...*/]);
    ::g::Fuse::Controls::Text* temp115 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp116 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp117 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp118 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp119 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp120 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp121 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>*/], temp7_Visibility_inst, ::STRINGS[22/*"mostrarCali...*/]);
    ::g::Fuse::Controls::StackPanel* temp122 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp123 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp124 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp125 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp126 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp8_Value_inst, ::STRINGS[24/*"comentario"*/]);
    ::g::Fuse::Controls::Rectangle* temp127 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Navigation::WhileInactive* temp128 = ::g::Fuse::Navigation::WhileInactive::New2();
    ::g::Fuse::Animations::Change* temp129 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<bool>*/], pagProgreso_IsEnabled_inst);
    ::g::Fuse::Animations::Change* temp130 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[11/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], pagProgreso_Visibility_inst);
    ::g::Fuse::Navigation::WhileActive* temp131 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Animations::Change* temp132 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<bool>*/], pagProgreso_IsEnabled_inst);
    ::g::Fuse::Animations::Change* temp133 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[11/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], pagProgreso_Visibility_inst);
    ::g::Fuse::Controls::StackPanel* temp134 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp135 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp136 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp137 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp138 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[9/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], alumPage_Active_inst);
    ::g::Fuse::Controls::StackPanel* temp139 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp140 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp141 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp142 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp143 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::StackPanel* temp144 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp145 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Grid* temp146 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp147 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp148 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp149 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::ScrollView* temp150 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp151 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp152 = ::g::Fuse::Controls::Rectangle::New3();
    Indicador__Template3* temp153 = Indicador__Template3::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp154 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<object>*/], temp9_Items_inst, ::STRINGS[25/*"habilidades...*/]);
    ::g::Fuse::Navigation::WhileInactive* temp155 = ::g::Fuse::Navigation::WhileInactive::New2();
    ::g::Fuse::Animations::Change* temp156 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<bool>*/], pagEvolucion_IsEnabled_inst);
    ::g::Fuse::Animations::Change* temp157 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[11/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], pagEvolucion_Visibility_inst);
    ::g::Fuse::Navigation::WhileActive* temp158 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Animations::Change* temp159 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<bool>*/], pagEvolucion_IsEnabled_inst);
    ::g::Fuse::Animations::Change* temp160 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[11/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], pagEvolucion_Visibility_inst);
    Color(::g::Uno::Float4__New2(0.9333333f, 0.9215686f, 0.9411765f, 1.0f));
    temp12->LineNumber(3);
    temp12->FileName(::STRINGS[26/*"Indicador.ux"*/]);
    temp12->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::AdmAlumnosad51de2d()));
    temp10->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Checkbb07535c()));
    temp11->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_XRoja13ade520()));
    uPtr(alumPage)->Interaction(0);
    uPtr(alumPage)->Name(Indicador::__selector5());
    uPtr(alumPage)->Active(pagMiActividad);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(alumPage)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), pagMiActividad);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(alumPage)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), pagAsistencia);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(alumPage)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), pagProgreso);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(alumPage)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), pagEvolucion);
    uPtr(pagMiActividad)->Name(Indicador::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagMiActividad)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    temp17->Source(::g::MainView::cabecera());
    temp18->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp18->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp18->Alignment(8);
    temp18->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 0.0f));
    temp18->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp19->Columns(::STRINGS[27/*"auto,auto"*/]);
    temp19->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp20->Value(::STRINGS[28/*"MI "*/]);
    temp20->FontSize(14.0f);
    temp20->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp20->Font(::g::MainView::museo700_letter());
    temp21->Value(::STRINGS[29/*"ACTIVIDAD"*/]);
    temp21->FontSize(14.0f);
    temp21->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp21->Font(::g::MainView::museo100_letter());
    temp22->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    temp23->StretchMode(6);
    temp23->ContentAlignment(4);
    temp23->Layer(0);
    temp23->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Fondo546c10e0()));
    temp24->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp24->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp25->Value(::STRINGS[30/*"Conoce tu r...*/]);
    temp25->TextWrapping(1);
    temp25->FontSize(9.0f);
    temp25->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp25->Margin(::g::Uno::Float4__New2(14.0f, 15.0f, 0.0f, 37.0f));
    temp25->Font(::g::MainView::museo300I_letter());
    temp26->Columns(::STRINGS[31/*"auto,1*"*/]);
    temp26->Margin(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    temp27->Value(::STRINGS[32/*"MIS "*/]);
    temp27->FontSize(14.0f);
    temp27->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp27->Alignment(3);
    ::g::Fuse::Controls::DockPanel::SetDock(temp27, 2);
    temp27->Font(::g::MainView::museo700_letter());
    temp28->Value(::STRINGS[33/*"HABLIDADES"*/]);
    temp28->FontSize(14.0f);
    temp28->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp28->Alignment(1);
    ::g::Fuse::Controls::DockPanel::SetDock(temp28, 2);
    temp28->Font(::g::MainView::museo100_letter());
    temp29->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 100.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    temp30->ColumnCount(3);
    temp30->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp30->Height(::g::Uno::UX::Size__New1(120.0f, 1));
    temp30->Opacity(0.78f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp32);
    temp33->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp33->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp33->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    temp34->Columns(::STRINGS[27/*"auto,auto"*/]);
    temp34->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp35->Value(::STRINGS[34/*"Total de ha...*/]);
    temp35->FontSize(12.0f);
    temp35->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp35->Font(::g::MainView::museo300_letter());
    temp1->FontSize(12.0f);
    temp1->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp36);
    temp37->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp37->Height(::g::Uno::UX::Size__New1(9.0f, 4));
    temp37->Padding(::g::Uno::Float4__New2(10.0f, 20.0f, 10.0f, 20.0f));
    temp37->ZOffset(2.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp37, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    temp38->Columns(::STRINGS[35/*"1*,5*"*/]);
    temp38->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    temp39->Height(::g::Uno::UX::Size__New1(34.0f, 1));
    temp39->Alignment(10);
    temp39->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp39->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Progreso927c7883()));
    temp40->Value(::STRINGS[36/*"Evolución"*/]);
    temp40->FontSize(12.5f);
    temp40->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp40->Alignment(10);
    temp40->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb36);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp42, pagEvolucion);
    temp43->add_Handler(uDelegate::New(::TYPES[25/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb36)));
    temp44->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp44->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp44->Alignment(12);
    temp44->Layer(0);
    temp45->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp45->Height(::g::Uno::UX::Size__New1(9.0f, 4));
    temp45->Padding(::g::Uno::Float4__New2(10.0f, 20.0f, 10.0f, 20.0f));
    temp45->ZOffset(2.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp45, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    temp46->Columns(::STRINGS[35/*"1*,5*"*/]);
    temp46->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    temp47->Height(::g::Uno::UX::Size__New1(34.0f, 1));
    temp47->Alignment(10);
    temp47->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp47->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Califica6febbe16()));
    temp48->Value(::STRINGS[37/*"Progresión"*/]);
    temp48->FontSize(12.5f);
    temp48->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp48->Alignment(10);
    temp48->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb37);
    temp50->add_Handler(uDelegate::New(::TYPES[25/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb37)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp51, pagProgreso);
    temp52->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp52->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp52->Alignment(12);
    temp52->Layer(0);
    temp53->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp53->Height(::g::Uno::UX::Size__New1(9.0f, 4));
    temp53->Padding(::g::Uno::Float4__New2(10.0f, 20.0f, 10.0f, 20.0f));
    temp53->ZOffset(2.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp53, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    temp54->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp54->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp54->Alignment(4);
    temp54->Layer(0);
    temp55->Columns(::STRINGS[35/*"1*,5*"*/]);
    temp55->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    temp56->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp56->Alignment(10);
    temp56->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp56->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Lista5a5d1c57()));
    temp57->Value(::STRINGS[38/*"Asistencia"*/]);
    temp57->FontSize(12.5f);
    temp57->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp57->Alignment(10);
    temp57->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb38);
    temp59->add_Handler(uDelegate::New(::TYPES[25/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb38)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp60, pagAsistencia);
    temp61->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp61->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp61->Alignment(12);
    temp61->Layer(0);
    uPtr(pagAsistencia)->Name(Indicador::__selector7());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagAsistencia)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagAsistencia)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagAsistencia)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp71);
    temp63->Source(::g::MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp66);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp66, pagMiActividad);
    temp67->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp67->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp67->Alignment(8);
    temp67->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 0.0f));
    temp67->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    temp68->Columns(::STRINGS[27/*"auto,auto"*/]);
    temp68->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    temp69->Value(::STRINGS[28/*"MI "*/]);
    temp69->FontSize(14.0f);
    temp69->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp69->Font(::g::MainView::museo700_letter());
    temp70->Value(::STRINGS[39/*"ASISTENCIA"*/]);
    temp70->FontSize(14.0f);
    temp70->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp70->Font(::g::MainView::museo100_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Animators()), ::TYPES[26/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Animators()), ::TYPES[26/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp77);
    ::g::Fuse::Animations::Change__set_Value_fn(temp76, uCRef(false));
    ::g::Fuse::Animations::Change__set_Value_fn(temp77, uCRef<int>(2));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Animators()), ::TYPES[26/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp79);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Animators()), ::TYPES[26/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp80);
    ::g::Fuse::Animations::Change__set_Value_fn(temp79, uCRef(true));
    ::g::Fuse::Animations::Change__set_Value_fn(temp80, uCRef<int>(0));
    uPtr(pagProgreso)->Name(Indicador::__selector8());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagProgreso)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagProgreso)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp128);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagProgreso)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp131);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp90);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp109);
    temp82->Source(::g::MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp85);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp85, pagMiActividad);
    temp86->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp86->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp86->Alignment(8);
    temp86->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 0.0f));
    temp86->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp87);
    temp87->Columns(::STRINGS[27/*"auto,auto"*/]);
    temp87->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp89);
    temp88->Value(::STRINGS[28/*"MI "*/]);
    temp88->FontSize(14.0f);
    temp88->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp88->Font(::g::MainView::museo700_letter());
    temp89->Value(::STRINGS[40/*"PROGRESIÓN"*/]);
    temp89->FontSize(14.0f);
    temp89->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp89->Font(::g::MainView::museo100_letter());
    temp90->Columns(::STRINGS[41/*"1*,9*,1*"*/]);
    temp90->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp92);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp93);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp94);
    temp92->Value(::STRINGS[42/*">"*/]);
    temp92->FontSize(24.0f);
    temp92->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp92->Alignment(10);
    temp92->Padding(::g::Uno::Float4__New2(0.0f, 5.0f, 5.0f, 0.0f));
    temp92->Font(::g::MainView::pres_letter());
    temp93->Degrees(180.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp95);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb40);
    temp95->add_Handler(uDelegate::New(::TYPES[25/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb40)));
    temp96->Columns(::STRINGS[27/*"auto,auto"*/]);
    temp96->Alignment(10);
    temp96->Padding(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp3->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp97);
    temp4->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp4->Font(::g::MainView::museo100_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp99->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp100);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp99->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp101);
    temp100->Value(::STRINGS[42/*">"*/]);
    temp100->FontSize(24.0f);
    temp100->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp100->Alignment(10);
    temp100->Padding(::g::Uno::Float4__New2(0.0f, 4.0f, 5.0f, 1.0f));
    temp100->Font(::g::MainView::pres_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb41);
    temp102->add_Handler(uDelegate::New(::TYPES[25/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb41)));
    temp5->Padding(::g::Uno::Float4__New2(15.0f, 10.0f, 15.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp103);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp108);
    temp103->Columns(::STRINGS[43/*"7*,1*,1*,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp106);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp107);
    temp104->Value(::STRINGS[44/*"HABILIDADES"*/]);
    temp104->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp104->Alignment(9);
    temp104->Font(::g::MainView::museo100_letter());
    temp105->Value(::STRINGS[45/*"S"*/]);
    temp105->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp105->Alignment(10);
    temp105->Font(::g::MainView::museo700_letter());
    temp106->Value(::STRINGS[46/*"C"*/]);
    temp106->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp106->Alignment(10);
    temp106->Font(::g::MainView::museo700_letter());
    temp107->Value(::STRINGS[47/*"L"*/]);
    temp107->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp107->Alignment(10);
    temp107->Font(::g::MainView::museo700_letter());
    temp109->MaxHeight(::g::Uno::UX::Size__New1(400.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp111);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp122);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp111->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp112);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp111->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp112->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp112->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp112->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp114);
    temp7->Columns(::STRINGS[48/*"1*,auto,aut...*/]);
    temp7->Alignment(3);
    temp7->Padding(::g::Uno::Float4__New2(15.0f, 5.0f, 15.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp115);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp116);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp117);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp119);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp120);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp121);
    temp115->Value(::STRINGS[49/*"S: "*/]);
    temp115->FontSize(10.0f);
    temp115->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp115->Font(::g::MainView::museo700I_letter());
    temp116->Value(::STRINGS[50/*"Seguir trab...*/]);
    temp116->FontSize(10.0f);
    temp116->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp116->Font(::g::MainView::museo300I_letter());
    temp117->Value(::STRINGS[51/*"C: "*/]);
    temp117->FontSize(10.0f);
    temp117->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp117->Font(::g::MainView::museo700I_letter());
    temp118->Value(::STRINGS[52/*"Casi lograd...*/]);
    temp118->FontSize(10.0f);
    temp118->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp118->Font(::g::MainView::museo300I_letter());
    temp119->Value(::STRINGS[53/*"L: "*/]);
    temp119->FontSize(10.0f);
    temp119->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp119->Font(::g::MainView::museo700I_letter());
    temp120->Value(::STRINGS[54/*"Logrado"*/]);
    temp120->FontSize(10.0f);
    temp120->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp120->Font(::g::MainView::museo300I_letter());
    temp122->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp122->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp123);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp122->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp124);
    temp123->Value(::STRINGS[55/*"COMENTARIOS"*/]);
    temp123->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp123->Padding(::g::Uno::Float4__New2(15.0f, 10.0f, 15.0f, 5.0f));
    temp123->Font(::g::MainView::museo100_letter());
    temp124->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp124->MinHeight(::g::Uno::UX::Size__New1(80.0f, 1));
    temp124->Padding(::g::Uno::Float4__New2(15.0f, 0.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp125);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp127);
    temp125->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp125->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp125->Alignment(4);
    temp125->Layer(0);
    temp8->TextWrapping(1);
    temp8->FontSize(12.0f);
    temp8->TextAlignment(1);
    temp8->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp8->Alignment(10);
    temp8->Font(::g::MainView::museo300I_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp126);
    temp127->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp127->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp127->Alignment(12);
    temp127->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Animators()), ::TYPES[26/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp129);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp128->Animators()), ::TYPES[26/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp130);
    ::g::Fuse::Animations::Change__set_Value_fn(temp129, uCRef(false));
    ::g::Fuse::Animations::Change__set_Value_fn(temp130, uCRef<int>(2));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Animators()), ::TYPES[26/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp132);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Animators()), ::TYPES[26/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp133);
    ::g::Fuse::Animations::Change__set_Value_fn(temp132, uCRef(true));
    ::g::Fuse::Animations::Change__set_Value_fn(temp133, uCRef<int>(0));
    uPtr(pagEvolucion)->Name(Indicador::__selector9());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagEvolucion)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp134);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagEvolucion)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp155);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagEvolucion)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp158);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp134->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp135);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp134->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp136);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp134->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp139);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp134->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp143);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp134->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp144);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp134->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp150);
    temp135->Source(::g::MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp136->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp137);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp138);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp138, pagMiActividad);
    temp139->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp139->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp139->Alignment(8);
    temp139->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 0.0f));
    temp139->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp140);
    temp140->Columns(::STRINGS[27/*"auto,auto"*/]);
    temp140->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp140->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp141);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp140->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp142);
    temp141->Value(::STRINGS[28/*"MI "*/]);
    temp141->FontSize(14.0f);
    temp141->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp141->Font(::g::MainView::museo700_letter());
    temp142->Value(::STRINGS[56/*"EVOLUCIÓN"*/]);
    temp142->FontSize(14.0f);
    temp142->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp142->Font(::g::MainView::museo100_letter());
    temp143->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_CuadroProgreso34fad075()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp144->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp145);
    temp145->Columns(::STRINGS[57/*"5*,2*"*/]);
    temp145->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp145->Padding(::g::Uno::Float4__New2(15.0f, 7.0f, 15.0f, 7.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp145->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp146);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp145->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp149);
    temp146->Columns(::STRINGS[27/*"auto,auto"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp147);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp148);
    temp147->Value(::STRINGS[58/*"HABILIDADES "*/]);
    temp147->FontSize(16.0f);
    temp147->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp147->Font(::g::MainView::museo100_letter());
    temp148->Value(::STRINGS[59/*"ALCANZADAS"*/]);
    temp148->FontSize(16.0f);
    temp148->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp148->Font(::g::MainView::museo700_letter());
    temp149->Value(::STRINGS[60/*"Fecha"*/]);
    temp149->FontSize(12.0f);
    temp149->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp149->Alignment(11);
    temp149->Font(::g::MainView::museo100I_letter());
    temp150->MaxHeight(::g::Uno::UX::Size__New1(350.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp151);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp151->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp152);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp151->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp152->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp152->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp152->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp153);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp154);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp155->Animators()), ::TYPES[26/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp156);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp155->Animators()), ::TYPES[26/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp157);
    ::g::Fuse::Animations::Change__set_Value_fn(temp156, uCRef(false));
    ::g::Fuse::Animations::Change__set_Value_fn(temp157, uCRef<int>(2));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp158->Animators()), ::TYPES[26/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp159);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp158->Animators()), ::TYPES[26/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp160);
    ::g::Fuse::Animations::Change__set_Value_fn(temp159, uCRef(true));
    ::g::Fuse::Animations::Change__set_Value_fn(temp160, uCRef<int>(0));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[28/*Uno.Collections.ICollection<object>*/]), alumPage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[28/*Uno.Collections.ICollection<object>*/]), pagMiActividad);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[28/*Uno.Collections.ICollection<object>*/]), pagAsistencia);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[28/*Uno.Collections.ICollection<object>*/]), pagProgreso);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[28/*Uno.Collections.ICollection<object>*/]), pagEvolucion);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), alumPage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::TYPES[29/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::TYPES[29/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp14);
}

// public Indicador New() [static] :409
Indicador* Indicador::New4()
{
    Indicador* obj1 = (Indicador*)uNew(Indicador_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
