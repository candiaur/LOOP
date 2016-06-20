// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/Cursos.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Atras.h>
#include <_root.Checkbox.h>
#include <_root.Cursos.h>
#include <_root.Cursos.Template.h>
#include <_root.Cursos.Template1.h>
#include <_root.Cursos.Template10.h>
#include <_root.Cursos.Template11.h>
#include <_root.Cursos.Template2.h>
#include <_root.Cursos.Template3.h>
#include <_root.Cursos.Template4.h>
#include <_root.Cursos.Template5.h>
#include <_root.Cursos.Template6.h>
#include <_root.Cursos.Template7.h>
#include <_root.Cursos.Template8.h>
#include <_root.Cursos.Template9.h>
#include <_root.LOOP_bundle.h>
#include <_root.LOOP_Checkbox_Value_Property.h>
#include <_root.LOOP_FuseControlsDockPanel_Visibility_Property.h>
#include <_root.LOOP_FuseControlsGrid_Visibility_Property.h>
#include <_root.LOOP_FuseControlsImage_Url_Property.h>
#include <_root.LOOP_FuseControlsPageControl_Active_Property.h>
#include <_root.LOOP_FuseControlsStackPanel_Visibility_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.LOOP_FuseControlsTextInput_Value_Property.h>
#include <_root.LOOP_FuseReactiveEach_Items_Property.h>
#include <_root.LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property.h>
#include <_root.LOOP_FuseTriggersActionsSetFuseVisual_Value_Property.h>
#include <_root.LOOP_FuseTriggersWhileFalse_Value_Property.h>
#include <_root.LOOP_FuseTriggersWhileTrue_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Skew.h>
#include <Fuse.Animations.TrackAnimator.h>
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
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
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
#include <Fuse.Triggers.WhileEnabled.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
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
static uString* STRINGS[123];
static uType* TYPES[34];

namespace g{

// public partial sealed class Cursos :2
// {
// static Cursos() :1372
static void Cursos__cctor_4_fn(uType* __type)
{
    Cursos::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[0/*"actPage"*/], ::STRINGS[1/*"pagRamas"*/], ::STRINGS[2/*"pagInstruct...*/], ::STRINGS[3/*"showInstruc...*/], ::STRINGS[4/*"pagCursos"*/], ::STRINGS[5/*"addCurso"*/], ::STRINGS[6/*"showaddCurso"*/], ::STRINGS[7/*"pagCalendario"*/], ::STRINGS[8/*"showCalenda...*/], ::STRINGS[9/*"pagActividad"*/], ::STRINGS[10/*"addActividad"*/], ::STRINGS[11/*"showActividad"*/], ::STRINGS[12/*"pagAlumnos"*/], ::STRINGS[13/*"crearAlumno"*/], ::STRINGS[14/*"showCreaAlu...*/], ::STRINGS[15/*"calificaAlu...*/], ::STRINGS[16/*"addAlumnos"*/]);
    Cursos::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"Items"*/]);
    Cursos::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"Active"*/]);
    Cursos::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"Visibility"*/]);
    Cursos::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"Value"*/]);
    Cursos::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"Url"*/]);
    Cursos::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"actPage"*/]);
    Cursos::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"pagRamas"*/]);
    Cursos::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"pagInstruct...*/]);
    Cursos::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"showInstruc...*/]);
    Cursos::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"pagCursos"*/]);
    Cursos::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"addCurso"*/]);
    Cursos::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"showaddCurso"*/]);
    Cursos::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"pagCalendario"*/]);
    Cursos::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"showCalenda...*/]);
    Cursos::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"pagActividad"*/]);
    Cursos::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"addActividad"*/]);
    Cursos::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"showActividad"*/]);
    Cursos::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"pagAlumnos"*/]);
    Cursos::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"crearAlumno"*/]);
    Cursos::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"showCreaAlu...*/]);
    Cursos::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"calificaAlu...*/]);
    Cursos::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"addAlumnos"*/]);
}

static void Cursos_build(uType* type)
{
    ::STRINGS[0] = uString::Const("actPage");
    ::STRINGS[1] = uString::Const("pagRamas");
    ::STRINGS[2] = uString::Const("pagInstructores");
    ::STRINGS[3] = uString::Const("showInstructores");
    ::STRINGS[4] = uString::Const("pagCursos");
    ::STRINGS[5] = uString::Const("addCurso");
    ::STRINGS[6] = uString::Const("showaddCurso");
    ::STRINGS[7] = uString::Const("pagCalendario");
    ::STRINGS[8] = uString::Const("showCalendario");
    ::STRINGS[9] = uString::Const("pagActividad");
    ::STRINGS[10] = uString::Const("addActividad");
    ::STRINGS[11] = uString::Const("showActividad");
    ::STRINGS[12] = uString::Const("pagAlumnos");
    ::STRINGS[13] = uString::Const("crearAlumno");
    ::STRINGS[14] = uString::Const("showCreaAlumno");
    ::STRINGS[15] = uString::Const("calificaAlumno");
    ::STRINGS[16] = uString::Const("addAlumnos");
    ::STRINGS[17] = uString::Const("Items");
    ::STRINGS[18] = uString::Const("Active");
    ::STRINGS[19] = uString::Const("Visibility");
    ::STRINGS[20] = uString::Const("Value");
    ::STRINGS[21] = uString::Const("Url");
    ::STRINGS[22] = uString::Const("cuadrado");
    ::STRINGS[23] = uString::Const("circulo");
    ::STRINGS[24] = uString::Const("diamante");
    ::STRINGS[25] = uString::Const("doble_Diamante");
    ::STRINGS[26] = uString::Const("ramas");
    ::STRINGS[27] = uString::Const("cargarInstructores");
    ::STRINGS[28] = uString::Const("instructores");
    ::STRINGS[29] = uString::Const("movCurso.paginaAct");
    ::STRINGS[30] = uString::Const("movCurso.pagAnterior");
    ::STRINGS[31] = uString::Const("cursos");
    ::STRINGS[32] = uString::Const("limpiarCurso");
    ::STRINGS[33] = uString::Const("curso");
    ::STRINGS[34] = uString::Const("agregarCurso");
    ::STRINGS[35] = uString::Const("lastMonth");
    ::STRINGS[36] = uString::Const("mes");
    ::STRINGS[37] = uString::Const("anio");
    ::STRINGS[38] = uString::Const("nextMonth");
    ::STRINGS[39] = uString::Const("dias");
    ::STRINGS[40] = uString::Const("cursoAct.curso");
    ::STRINGS[41] = uString::Const("getDias");
    ::STRINGS[42] = uString::Const("lastDay");
    ::STRINGS[43] = uString::Const("dia");
    ::STRINGS[44] = uString::Const("nextDay");
    ::STRINGS[45] = uString::Const("actividad.niveles");
    ::STRINGS[46] = uString::Const("getAlumxCursos");
    ::STRINGS[47] = uString::Const("niveles");
    ::STRINGS[48] = uString::Const("agregarActividad");
    ::STRINGS[49] = uString::Const("editarAlumnos");
    ::STRINGS[50] = uString::Const("mostrarEdicionAlumnos");
    ::STRINGS[51] = uString::Const("alumnosCurso");
    ::STRINGS[52] = uString::Const("limpiarDatos");
    ::STRINGS[53] = uString::Const("nombre");
    ::STRINGS[54] = uString::Const("apellido");
    ::STRINGS[55] = uString::Const("correo");
    ::STRINGS[56] = uString::Const("cel");
    ::STRINGS[57] = uString::Const("nacimiento");
    ::STRINGS[58] = uString::Const("creaEditaAlumno");
    ::STRINGS[59] = uString::Const("lastFechaconActividad");
    ::STRINGS[60] = uString::Const("nextFechaconActividad");
    ::STRINGS[61] = uString::Const("alumnoAct.imagen");
    ::STRINGS[62] = uString::Const("alumnoAct.nombre");
    ::STRINGS[63] = uString::Const("alumnoAct.apellido");
    ::STRINGS[64] = uString::Const("asistio");
    ::STRINGS[65] = uString::Const("marcaAsistencia");
    ::STRINGS[66] = uString::Const("mostrarCalificacion");
    ::STRINGS[67] = uString::Const("comentario");
    ::STRINGS[68] = uString::Const("agregarCalificaciones");
    ::STRINGS[69] = uString::Const("alumnos");
    ::STRINGS[70] = uString::Const("agregarAlumnosCurso");
    ::STRINGS[71] = uString::Const("Cursos.ux");
    ::STRINGS[72] = uString::Const("auto,auto");
    ::STRINGS[73] = uString::Const("MIS ");
    ::STRINGS[74] = uString::Const("COLEGIOS");
    ::STRINGS[75] = uString::Const("Listado de instructores");
    ::STRINGS[76] = uString::Const("INSTRUCTORES ");
    ::STRINGS[77] = uString::Const("ARSKI");
    ::STRINGS[78] = uString::Const("CURSOS");
    ::STRINGS[79] = uString::Const("+");
    ::STRINGS[80] = uString::Const("NUEVO ");
    ::STRINGS[81] = uString::Const("CURSO");
    ::STRINGS[82] = uString::Const("Guardar!");
    ::STRINGS[83] = uString::Const("CALENDARIO ");
    ::STRINGS[84] = uString::Const("COMPLETO");
    ::STRINGS[85] = uString::Const("2*,6*,2*");
    ::STRINGS[86] = uString::Const(">");
    ::STRINGS[87] = uString::Const("L");
    ::STRINGS[88] = uString::Const("M");
    ::STRINGS[89] = uString::Const("J");
    ::STRINGS[90] = uString::Const("V");
    ::STRINGS[91] = uString::Const("S");
    ::STRINGS[92] = uString::Const("D");
    ::STRINGS[93] = uString::Const("CURSO ");
    ::STRINGS[94] = uString::Const("Ver calendario completo");
    ::STRINGS[95] = uString::Const("2*,7*,2*");
    ::STRINGS[96] = uString::Const("auto,auto,auto,auto");
    ::STRINGS[97] = uString::Const(" de ");
    ::STRINGS[98] = uString::Const("Listado del curso");
    ::STRINGS[99] = uString::Const("AGREGAR ");
    ::STRINGS[100] = uString::Const("HABILIDADES");
    ::STRINGS[101] = uString::Const("LISTADO ");
    ::STRINGS[102] = uString::Const("ALUMNOS");
    ::STRINGS[103] = uString::Const("ALUMNO");
    ::STRINGS[104] = uString::Const("Nombre");
    ::STRINGS[105] = uString::Const("Apellido");
    ::STRINGS[106] = uString::Const("nombre@tumail.com");
    ::STRINGS[107] = uString::Const("+56 9 91234567");
    ::STRINGS[108] = uString::Const("11-07-1990");
    ::STRINGS[109] = uString::Const("CALIFICAR ");
    ::STRINGS[110] = uString::Const("Asistencia:");
    ::STRINGS[111] = uString::Const("7*,1*,1*,1*");
    ::STRINGS[112] = uString::Const("C");
    ::STRINGS[113] = uString::Const("1*,auto,auto,auto,auto,auto");
    ::STRINGS[114] = uString::Const("S: ");
    ::STRINGS[115] = uString::Const("Seguir trabajando / ");
    ::STRINGS[116] = uString::Const("C: ");
    ::STRINGS[117] = uString::Const("Casi logrado / ");
    ::STRINGS[118] = uString::Const("L: ");
    ::STRINGS[119] = uString::Const("Logrado");
    ::STRINGS[120] = uString::Const("COMENTARIOS");
    ::STRINGS[121] = uString::Const("Escribe aqui tus comentarios");
    ::STRINGS[122] = uString::Const("Agregar al curso!");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[4] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[5] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[6] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[7] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[8] = uObject_typeof();
    ::TYPES[9] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof());
    ::TYPES[10] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[11] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[12] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[13] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[14] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[15] = ::g::Fuse::Visual_typeof();
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[17] = ::g::Fuse::Node_typeof();
    ::TYPES[18] = ::g::Fuse::Resources::ImageSource_typeof();
    ::TYPES[19] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[20] = ::g::Uno::UX::Template_typeof();
    ::TYPES[21] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[22] = ::g::Fuse::Binding_typeof();
    ::TYPES[23] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[24] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[25] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[26] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[27] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[28] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[29] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[30] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[31] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[32] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    ::TYPES[33] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Cursos, __g_nametable1), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::Cursos, actPage), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::Cursos, actPage_Active_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Cursos, addActividad), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Cursos, addAlumnos), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Cursos, addCurso), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Cursos, calificaAlumno), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Cursos, crearAlumno), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Cursos, pagActividad), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Cursos, pagAlumnos), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Cursos, pagCalendario), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Cursos, pagCursos), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Cursos, pagInstructores), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Cursos, pagRamas), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(::g::Cursos, showActividad), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos, showActividad_Visibility_inst), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(::g::Cursos, showaddCurso), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos, showaddCurso_Visibility_inst), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Cursos, showCalendario), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos, showCalendario_Visibility_inst), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(::g::Cursos, showCreaAlumno), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos, showCreaAlumno_Visibility_inst), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Cursos, showInstructores), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos, showInstructores_Visibility_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb10), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb11), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb13), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb14), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb15), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb20), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb21), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb25), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb26), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb27), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb28), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb29), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb33), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb35), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb4), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb5), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb6), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb7), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Cursos, temp_eb9), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Cursos, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Cursos, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp11_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp12_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Cursos, temp13_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp14_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp15_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp16_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Cursos, temp17_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos, temp18_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos, temp19_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::Cursos, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Cursos, temp20_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp21_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp22_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp23_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp24_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp25_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp26_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp27_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp28_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp29_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp30_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp31_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Cursos, temp32_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos, temp33_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Cursos, temp34_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos, temp35_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp36_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::Cursos, temp37_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Cursos, temp38_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Cursos, temp4_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Cursos, temp8_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Cursos, temp9_Value_inst), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::Cursos::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Cursos::__selector9_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cursos__New4_fn, 0, true, Cursos_typeof(), 0));
}

::g::Fuse::Controls::Control_type* Cursos_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 199;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(Cursos);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Cursos", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_build_ = Cursos_build;
    type->fp_ctor_ = (void*)Cursos__New4_fn;
    type->fp_cctor_ = Cursos__cctor_4_fn;
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

// public Cursos() :1376
void Cursos__ctor_7_fn(Cursos* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :1380
void Cursos__InitializeUX_fn(Cursos* __this)
{
    __this->InitializeUX();
}

// public Cursos New() :1376
void Cursos__New4_fn(Cursos** __retval)
{
    *__retval = Cursos::New4();
}

uSStrong<uArray*> Cursos::__g_static_nametable1_;
::g::Uno::UX::Selector Cursos::__selector0_;
::g::Uno::UX::Selector Cursos::__selector1_;
::g::Uno::UX::Selector Cursos::__selector10_;
::g::Uno::UX::Selector Cursos::__selector11_;
::g::Uno::UX::Selector Cursos::__selector12_;
::g::Uno::UX::Selector Cursos::__selector13_;
::g::Uno::UX::Selector Cursos::__selector14_;
::g::Uno::UX::Selector Cursos::__selector15_;
::g::Uno::UX::Selector Cursos::__selector16_;
::g::Uno::UX::Selector Cursos::__selector17_;
::g::Uno::UX::Selector Cursos::__selector18_;
::g::Uno::UX::Selector Cursos::__selector19_;
::g::Uno::UX::Selector Cursos::__selector2_;
::g::Uno::UX::Selector Cursos::__selector20_;
::g::Uno::UX::Selector Cursos::__selector21_;
::g::Uno::UX::Selector Cursos::__selector3_;
::g::Uno::UX::Selector Cursos::__selector4_;
::g::Uno::UX::Selector Cursos::__selector5_;
::g::Uno::UX::Selector Cursos::__selector6_;
::g::Uno::UX::Selector Cursos::__selector7_;
::g::Uno::UX::Selector Cursos::__selector8_;
::g::Uno::UX::Selector Cursos::__selector9_;

// public Cursos() [instance] :1376
void Cursos::ctor_7()
{
    uStackFrame __("Cursos", ".ctor()");
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :1380
void Cursos::InitializeUX()
{
    uStackFrame __("Cursos", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Cursos::__g_static_nametable1());
    ::g::Fuse::Resources::FileImageSource* temp39 = ::g::Fuse::Resources::FileImageSource::New2();
    ::g::Fuse::Resources::FileImageSource* temp40 = ::g::Fuse::Resources::FileImageSource::New2();
    ::g::Fuse::Resources::FileImageSource* temp41 = ::g::Fuse::Resources::FileImageSource::New2();
    ::g::Fuse::Resources::FileImageSource* temp42 = ::g::Fuse::Resources::FileImageSource::New2();
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New2();
    temp_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp, Cursos::__selector0());
    actPage = ::g::Fuse::Controls::PageControl::New4();
    actPage_Active_inst = ::g::LOOP_FuseControlsPageControl_Active_Property::New1(actPage, Cursos::__selector1());
    showInstructores = ::g::Fuse::Controls::StackPanel::New4();
    showInstructores_Visibility_inst = ::g::LOOP_FuseControlsStackPanel_Visibility_Property::New1(showInstructores, Cursos::__selector2());
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New2();
    temp1_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp1, Cursos::__selector0());
    ::g::Fuse::Triggers::Actions::Set* temp2 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    temp2_Value_inst = ::g::LOOP_FuseTriggersActionsSetFuseVisual_Value_Property::New1(temp2, Cursos::__selector3());
    ::g::Fuse::Triggers::Actions::Set* temp3 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showInstructores_Visibility_inst);
    temp3_Value_inst = ::g::LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property::New1(temp3, Cursos::__selector3());
    ::g::Fuse::Reactive::Each* temp4 = ::g::Fuse::Reactive::Each::New2();
    temp4_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp4, Cursos::__selector0());
    showaddCurso = ::g::Fuse::Controls::DockPanel::New4();
    showaddCurso_Visibility_inst = ::g::LOOP_FuseControlsDockPanel_Visibility_Property::New1(showaddCurso, Cursos::__selector2());
    ::g::Fuse::Controls::TextInput* temp5 = ::g::Fuse::Controls::TextInput::New3();
    temp5_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp5, Cursos::__selector3());
    showCalendario = ::g::Fuse::Controls::StackPanel::New4();
    showCalendario_Visibility_inst = ::g::LOOP_FuseControlsStackPanel_Visibility_Property::New1(showCalendario, Cursos::__selector2());
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    temp6_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp6, Cursos::__selector3());
    ::g::Fuse::Controls::Text* temp7 = ::g::Fuse::Controls::Text::New3();
    temp7_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp7, Cursos::__selector3());
    ::g::Fuse::Reactive::Each* temp8 = ::g::Fuse::Reactive::Each::New2();
    temp8_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp8, Cursos::__selector0());
    ::g::Fuse::Controls::Text* temp9 = ::g::Fuse::Controls::Text::New3();
    temp9_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp9, Cursos::__selector3());
    ::g::Fuse::Controls::Text* temp10 = ::g::Fuse::Controls::Text::New3();
    temp10_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp10, Cursos::__selector3());
    ::g::Fuse::Controls::Text* temp11 = ::g::Fuse::Controls::Text::New3();
    temp11_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp11, Cursos::__selector3());
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New3();
    temp12_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp12, Cursos::__selector3());
    ::g::Fuse::Reactive::Each* temp13 = ::g::Fuse::Reactive::Each::New2();
    temp13_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp13, Cursos::__selector0());
    showActividad = ::g::Fuse::Controls::DockPanel::New4();
    showActividad_Visibility_inst = ::g::LOOP_FuseControlsDockPanel_Visibility_Property::New1(showActividad, Cursos::__selector2());
    ::g::Fuse::Controls::Text* temp14 = ::g::Fuse::Controls::Text::New3();
    temp14_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp14, Cursos::__selector3());
    ::g::Fuse::Controls::Text* temp15 = ::g::Fuse::Controls::Text::New3();
    temp15_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp15, Cursos::__selector3());
    ::g::Fuse::Controls::Text* temp16 = ::g::Fuse::Controls::Text::New3();
    temp16_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp16, Cursos::__selector3());
    ::g::Fuse::Reactive::Each* temp17 = ::g::Fuse::Reactive::Each::New2();
    temp17_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp17, Cursos::__selector0());
    ::g::Fuse::Triggers::WhileTrue* temp18 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp18_Value_inst = ::g::LOOP_FuseTriggersWhileTrue_Value_Property::New1(temp18, Cursos::__selector3());
    ::g::Fuse::Triggers::WhileFalse* temp19 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp19_Value_inst = ::g::LOOP_FuseTriggersWhileFalse_Value_Property::New1(temp19, Cursos::__selector3());
    ::g::Fuse::Reactive::Each* temp20 = ::g::Fuse::Reactive::Each::New2();
    temp20_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp20, Cursos::__selector0());
    showCreaAlumno = ::g::Fuse::Controls::DockPanel::New4();
    showCreaAlumno_Visibility_inst = ::g::LOOP_FuseControlsDockPanel_Visibility_Property::New1(showCreaAlumno, Cursos::__selector2());
    ::g::Fuse::Controls::TextInput* temp21 = ::g::Fuse::Controls::TextInput::New3();
    temp21_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp21, Cursos::__selector3());
    ::g::Fuse::Controls::TextInput* temp22 = ::g::Fuse::Controls::TextInput::New3();
    temp22_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp22, Cursos::__selector3());
    ::g::Fuse::Controls::TextInput* temp23 = ::g::Fuse::Controls::TextInput::New3();
    temp23_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp23, Cursos::__selector3());
    ::g::Fuse::Controls::TextInput* temp24 = ::g::Fuse::Controls::TextInput::New3();
    temp24_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp24, Cursos::__selector3());
    ::g::Fuse::Controls::TextInput* temp25 = ::g::Fuse::Controls::TextInput::New3();
    temp25_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp25, Cursos::__selector3());
    ::g::Fuse::Controls::Text* temp26 = ::g::Fuse::Controls::Text::New3();
    temp26_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp26, Cursos::__selector3());
    ::g::Fuse::Controls::Text* temp27 = ::g::Fuse::Controls::Text::New3();
    temp27_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp27, Cursos::__selector3());
    ::g::Fuse::Controls::Text* temp28 = ::g::Fuse::Controls::Text::New3();
    temp28_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp28, Cursos::__selector3());
    ::g::Fuse::Controls::Image* temp29 = ::g::Fuse::Controls::Image::New3();
    temp29_Url_inst = ::g::LOOP_FuseControlsImage_Url_Property::New1(temp29, Cursos::__selector4());
    ::g::Fuse::Controls::Text* temp30 = ::g::Fuse::Controls::Text::New3();
    temp30_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp30, Cursos::__selector3());
    ::g::Fuse::Controls::Text* temp31 = ::g::Fuse::Controls::Text::New3();
    temp31_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp31, Cursos::__selector3());
    ::g::Checkbox* temp32 = ::g::Checkbox::New5();
    temp32_Value_inst = ::g::LOOP_Checkbox_Value_Property::New1(temp32, Cursos::__selector3());
    ::g::Fuse::Controls::DockPanel* temp33 = ::g::Fuse::Controls::DockPanel::New4();
    temp33_Visibility_inst = ::g::LOOP_FuseControlsDockPanel_Visibility_Property::New1(temp33, Cursos::__selector2());
    ::g::Fuse::Reactive::Each* temp34 = ::g::Fuse::Reactive::Each::New2();
    temp34_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp34, Cursos::__selector0());
    ::g::Fuse::Controls::Grid* temp35 = ::g::Fuse::Controls::Grid::New4();
    temp35_Visibility_inst = ::g::LOOP_FuseControlsGrid_Visibility_Property::New1(temp35, Cursos::__selector2());
    ::g::Fuse::Controls::TextInput* temp36 = ::g::Fuse::Controls::TextInput::New3();
    temp36_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp36, Cursos::__selector3());
    ::g::Fuse::Controls::StackPanel* temp37 = ::g::Fuse::Controls::StackPanel::New4();
    temp37_Visibility_inst = ::g::LOOP_FuseControlsStackPanel_Visibility_Property::New1(temp37, Cursos::__selector2());
    ::g::Fuse::Reactive::Each* temp38 = ::g::Fuse::Reactive::Each::New2();
    temp38_Items_inst = ::g::LOOP_FuseReactiveEach_Items_Property::New1(temp38, Cursos::__selector0());
    ::g::Fuse::Reactive::JavaScript* temp43 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Uno::UX::Resource* temp44 = ::g::Uno::UX::Resource::New1(::STRINGS[22/*"cuadrado"*/], temp39);
    ::g::Uno::UX::Resource* temp45 = ::g::Uno::UX::Resource::New1(::STRINGS[23/*"circulo"*/], temp40);
    ::g::Uno::UX::Resource* temp46 = ::g::Uno::UX::Resource::New1(::STRINGS[24/*"diamante"*/], temp41);
    ::g::Uno::UX::Resource* temp47 = ::g::Uno::UX::Resource::New1(::STRINGS[25/*"doble_Diama...*/], temp42);
    pagRamas = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::DockPanel* temp48 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp49 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp50 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::StackPanel* temp51 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp52 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp53 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp54 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::ScrollView* temp55 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::DockPanel* temp56 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp57 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp58 = ::g::Fuse::Controls::Rectangle::New3();
    Cursos__Template* temp59 = Cursos__Template::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp60 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[9/*Fuse.Reactive.DataBinding<object>*/], temp_Items_inst, ::STRINGS[26/*"ramas"*/]);
    ::g::Fuse::Controls::Panel* temp61 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::DockPanel* temp62 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp63 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp64 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp65 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp66 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp67 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp68 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Triggers::Actions::Set* temp69 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showInstructores_Visibility_inst);
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[27/*"cargarInstr...*/]);
    pagInstructores = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Image* temp70 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp71 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp72 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp73 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showInstructores_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp74 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Controls::StackPanel* temp75 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp76 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp77 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp78 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::ScrollView* temp79 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp80 = ::g::Fuse::Controls::StackPanel::New4();
    Cursos__Template1* temp81 = Cursos__Template1::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp82 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[9/*Fuse.Reactive.DataBinding<object>*/], temp1_Items_inst, ::STRINGS[28/*"instructores"*/]);
    pagCursos = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::StackPanel* temp83 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp84 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp85 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp86 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::DataBinding* temp87 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[10/*Fuse.Reactive.DataBinding<Fuse.Visual>*/], temp2_Value_inst, ::STRINGS[29/*"movCurso.pa...*/]);
    ::g::Fuse::Reactive::DataBinding* temp88 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[11/*Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>*/], temp3_Value_inst, ::STRINGS[30/*"movCurso.pa...*/]);
    ::g::Fuse::Controls::StackPanel* temp89 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp90 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp91 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp92 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::ScrollView* temp93 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp94 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp95 = ::g::Fuse::Controls::StackPanel::New4();
    Cursos__Template2* temp96 = Cursos__Template2::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp97 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[9/*Fuse.Reactive.DataBinding<object>*/], temp4_Items_inst, ::STRINGS[31/*"cursos"*/]);
    ::g::Fuse::Controls::StackPanel* temp98 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp99 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp100 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Text* temp101 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp102 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp103 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp104 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Triggers::Actions::Set* temp105 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showaddCurso_Visibility_inst);
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[32/*"limpiarCurso"*/]);
    ::g::Fuse::Controls::Panel* temp106 = ::g::Fuse::Controls::Panel::New3();
    addCurso = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::StackPanel* temp107 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp108 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp109 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp110 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp111 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Triggers::Actions::Set* temp112 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showaddCurso_Visibility_inst);
    ::g::Fuse::Controls::StackPanel* temp113 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp114 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp115 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp116 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp117 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp118 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp119 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp5_Value_inst, ::STRINGS[33/*"curso"*/]);
    ::g::Fuse::Controls::Rectangle* temp120 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::DockPanel* temp121 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp122 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp123 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp124 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp125 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp126 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Triggers::Actions::Set* temp127 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showaddCurso_Visibility_inst);
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[34/*"agregarCurso"*/]);
    pagCalendario = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Image* temp128 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp129 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp130 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp131 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Triggers::Actions::Set* temp132 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showCalendario_Visibility_inst);
    ::g::Fuse::Controls::StackPanel* temp133 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp134 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp135 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp136 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Grid* temp137 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp138 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp139 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Rotation* temp140 = ::g::Fuse::Rotation::New2();
    ::g::Fuse::Gestures::Clicked* temp141 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp142 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[35/*"lastMonth"*/]);
    ::g::Fuse::Controls::Grid* temp143 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp144 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp6_Value_inst, ::STRINGS[36/*"mes"*/]);
    ::g::Fuse::Reactive::DataBinding* temp145 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp7_Value_inst, ::STRINGS[37/*"anio"*/]);
    ::g::Fuse::Controls::DockPanel* temp146 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp147 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp148 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp149 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[38/*"nextMonth"*/]);
    ::g::Fuse::Controls::StackPanel* temp150 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp151 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp152 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Grid* temp153 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp154 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp155 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp156 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp157 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp158 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp159 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp160 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp161 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp162 = ::g::Fuse::Controls::Grid::New4();
    Cursos__Template3* temp163 = Cursos__Template3::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp164 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[9/*Fuse.Reactive.DataBinding<object>*/], temp8_Items_inst, ::STRINGS[39/*"dias"*/]);
    pagActividad = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::DockPanel* temp165 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp166 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp167 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp168 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp169 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp170 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Controls::StackPanel* temp171 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp172 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp173 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp174 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp9_Value_inst, ::STRINGS[40/*"cursoAct.cu...*/]);
    ::g::Fuse::Controls::DockPanel* temp175 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp176 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp177 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp178 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp179 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp180 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showCalendario_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp181 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    temp_eb9 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[41/*"getDias"*/]);
    ::g::Fuse::Controls::Grid* temp182 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp183 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp184 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Rotation* temp185 = ::g::Fuse::Rotation::New2();
    ::g::Fuse::Gestures::Clicked* temp186 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp187 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[42/*"lastDay"*/]);
    ::g::Fuse::Controls::Grid* temp188 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp189 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp10_Value_inst, ::STRINGS[43/*"dia"*/]);
    ::g::Fuse::Controls::Text* temp190 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp191 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp11_Value_inst, ::STRINGS[36/*"mes"*/]);
    ::g::Fuse::Reactive::DataBinding* temp192 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp12_Value_inst, ::STRINGS[37/*"anio"*/]);
    ::g::Fuse::Controls::DockPanel* temp193 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp194 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp195 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp196 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[44/*"nextDay"*/]);
    ::g::Fuse::Controls::ScrollView* temp197 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp198 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp199 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp200 = ::g::Fuse::Controls::Rectangle::New3();
    Cursos__Template4* temp201 = Cursos__Template4::New2(this);
    Cursos__Template5* temp202 = Cursos__Template5::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp203 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[9/*Fuse.Reactive.DataBinding<object>*/], temp13_Items_inst, ::STRINGS[45/*"actividad.n...*/]);
    ::g::Fuse::Controls::StackPanel* temp204 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp205 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp206 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp207 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp208 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp209 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Triggers::Actions::Set* temp210 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showActividad_Visibility_inst);
    ::g::Fuse::Controls::Panel* temp211 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::DockPanel* temp212 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp213 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp214 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp215 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp216 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp217 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp218 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[46/*"getAlumxCur...*/]);
    addActividad = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::StackPanel* temp219 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp220 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp221 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp222 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp223 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Triggers::Actions::Set* temp224 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showActividad_Visibility_inst);
    ::g::Fuse::Controls::StackPanel* temp225 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp226 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp227 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp228 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Grid* temp229 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp230 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp231 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Rotation* temp232 = ::g::Fuse::Rotation::New2();
    ::g::Fuse::Gestures::Clicked* temp233 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp234 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb14 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[42/*"lastDay"*/]);
    ::g::Fuse::Controls::Grid* temp235 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp236 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp14_Value_inst, ::STRINGS[43/*"dia"*/]);
    ::g::Fuse::Controls::Text* temp237 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp238 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp15_Value_inst, ::STRINGS[36/*"mes"*/]);
    ::g::Fuse::Reactive::DataBinding* temp239 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp16_Value_inst, ::STRINGS[37/*"anio"*/]);
    ::g::Fuse::Controls::DockPanel* temp240 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp241 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp242 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp243 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb15 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[44/*"nextDay"*/]);
    ::g::Fuse::Controls::ScrollView* temp244 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp245 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp246 = ::g::Fuse::Controls::Rectangle::New3();
    Cursos__Template6* temp247 = Cursos__Template6::New2(this);
    Cursos__Template7* temp248 = Cursos__Template7::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp249 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[9/*Fuse.Reactive.DataBinding<object>*/], temp17_Items_inst, ::STRINGS[47/*"niveles"*/]);
    ::g::Fuse::Controls::Panel* temp250 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::DockPanel* temp251 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp252 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp253 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp254 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp255 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp256 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Triggers::Actions::Set* temp257 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showActividad_Visibility_inst);
    temp_eb20 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[48/*"agregarActi...*/]);
    pagAlumnos = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::StackPanel* temp258 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp259 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp260 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp261 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp262 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Controls::Panel* temp263 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp264 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp265 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[13/*Fuse.Reactive.DataBinding<bool>*/], temp18_Value_inst, ::STRINGS[49/*"editarAlumnos"*/]);
    ::g::Fuse::Controls::Image* temp266 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp267 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[13/*Fuse.Reactive.DataBinding<bool>*/], temp19_Value_inst, ::STRINGS[49/*"editarAlumnos"*/]);
    ::g::Fuse::Gestures::Clicked* temp268 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp269 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb21 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[50/*"mostrarEdic...*/]);
    ::g::Fuse::Controls::StackPanel* temp270 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp271 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp272 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp273 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::ScrollView* temp274 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp275 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp276 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp277 = ::g::Fuse::Controls::Rectangle::New3();
    Cursos__Template8* temp278 = Cursos__Template8::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp279 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[9/*Fuse.Reactive.DataBinding<object>*/], temp20_Items_inst, ::STRINGS[51/*"alumnosCurso"*/]);
    ::g::Fuse::Controls::StackPanel* temp280 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp281 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp282 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Text* temp283 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp284 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp285 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp286 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showCreaAlumno_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp287 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    temp_eb25 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[52/*"limpiarDatos"*/]);
    ::g::Fuse::Controls::Panel* temp288 = ::g::Fuse::Controls::Panel::New3();
    crearAlumno = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::StackPanel* temp289 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp290 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp291 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp292 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp293 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showCreaAlumno_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp294 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Controls::StackPanel* temp295 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp296 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp297 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp298 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::ScrollView* temp299 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp300 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp301 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp302 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp303 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp304 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp21_Value_inst, ::STRINGS[53/*"nombre"*/]);
    ::g::Fuse::Controls::Rectangle* temp305 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp306 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp307 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp308 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp22_Value_inst, ::STRINGS[54/*"apellido"*/]);
    ::g::Fuse::Controls::Rectangle* temp309 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp310 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp311 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp312 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp23_Value_inst, ::STRINGS[55/*"correo"*/]);
    ::g::Fuse::Controls::Rectangle* temp313 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp314 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp315 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp316 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp24_Value_inst, ::STRINGS[56/*"cel"*/]);
    ::g::Fuse::Controls::Rectangle* temp317 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp318 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp319 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp320 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp25_Value_inst, ::STRINGS[57/*"nacimiento"*/]);
    ::g::Fuse::Controls::Rectangle* temp321 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp322 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::DockPanel* temp323 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp324 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp325 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp326 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp327 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp328 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showCreaAlumno_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp329 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    temp_eb26 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[58/*"creaEditaAl...*/]);
    calificaAlumno = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::DockPanel* temp330 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp331 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp332 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp333 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp334 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp335 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Controls::StackPanel* temp336 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp337 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp338 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp339 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Grid* temp340 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp341 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp342 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Rotation* temp343 = ::g::Fuse::Rotation::New2();
    ::g::Fuse::Gestures::Clicked* temp344 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp345 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb27 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[59/*"lastFechaco...*/]);
    ::g::Fuse::Controls::Grid* temp346 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp347 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp26_Value_inst, ::STRINGS[43/*"dia"*/]);
    ::g::Fuse::Controls::Text* temp348 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp349 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp27_Value_inst, ::STRINGS[36/*"mes"*/]);
    ::g::Fuse::Reactive::DataBinding* temp350 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp28_Value_inst, ::STRINGS[37/*"anio"*/]);
    ::g::Fuse::Controls::DockPanel* temp351 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp352 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp353 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp354 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb28 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[60/*"nextFechaco...*/]);
    ::g::Fuse::Controls::DockPanel* temp355 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp356 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp357 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Reactive::DataBinding* temp358 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp29_Url_inst, ::STRINGS[61/*"alumnoAct.i...*/]);
    ::g::Fuse::Controls::Rectangle* temp359 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Triggers::WhileEnabled* temp360 = ::g::Fuse::Triggers::WhileEnabled::New2();
    ::g::Fuse::Animations::Skew* temp361 = ::g::Fuse::Animations::Skew::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp362 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Grid* temp363 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp364 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp30_Value_inst, ::STRINGS[62/*"alumnoAct.n...*/]);
    ::g::Fuse::Reactive::DataBinding* temp365 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp31_Value_inst, ::STRINGS[63/*"alumnoAct.a...*/]);
    ::g::Fuse::Controls::Text* temp366 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp367 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[13/*Fuse.Reactive.DataBinding<bool>*/], temp32_Value_inst, ::STRINGS[64/*"asistio"*/]);
    temp_eb29 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[65/*"marcaAsiste...*/]);
    ::g::Fuse::Controls::Grid* temp368 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp369 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp370 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp371 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp372 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp373 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[11/*Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>*/], temp33_Visibility_inst, ::STRINGS[66/*"mostrarCali...*/]);
    ::g::Fuse::Controls::ScrollView* temp374 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp375 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp376 = ::g::Fuse::Controls::Rectangle::New3();
    Cursos__Template9* temp377 = Cursos__Template9::New2(this);
    Cursos__Template10* temp378 = Cursos__Template10::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp379 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[9/*Fuse.Reactive.DataBinding<object>*/], temp34_Items_inst, ::STRINGS[45/*"actividad.n...*/]);
    ::g::Fuse::Controls::Text* temp380 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp381 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp382 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp383 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp384 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp385 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp386 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[11/*Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>*/], temp35_Visibility_inst, ::STRINGS[66/*"mostrarCali...*/]);
    ::g::Fuse::Controls::StackPanel* temp387 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp388 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp389 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp390 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp391 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[12/*Fuse.Reactive.DataBinding<string>*/], temp36_Value_inst, ::STRINGS[67/*"comentario"*/]);
    ::g::Fuse::Controls::Rectangle* temp392 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp393 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp394 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[11/*Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>*/], temp37_Visibility_inst, ::STRINGS[66/*"mostrarCali...*/]);
    ::g::Fuse::Controls::DockPanel* temp395 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp396 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp397 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp398 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp399 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp400 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    temp_eb33 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[68/*"agregarCali...*/]);
    addAlumnos = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::DockPanel* temp401 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp402 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp403 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp404 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp405 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp406 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], actPage_Active_inst);
    ::g::Fuse::Controls::StackPanel* temp407 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp408 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp409 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp410 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::ScrollView* temp411 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp412 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp413 = ::g::Fuse::Controls::Rectangle::New3();
    Cursos__Template11* temp414 = Cursos__Template11::New2(this);
    ::g::Fuse::Reactive::DataBinding* temp415 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[9/*Fuse.Reactive.DataBinding<object>*/], temp38_Items_inst, ::STRINGS[69/*"alumnos"*/]);
    ::g::Fuse::Controls::Panel* temp416 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::DockPanel* temp417 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp418 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp419 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp420 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp421 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb35 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[70/*"agregarAlum...*/]);
    Color(::g::Uno::Float4__New2(0.9333333f, 0.9215686f, 0.9411765f, 1.0f));
    temp43->LineNumber(3);
    temp43->FileName(::STRINGS[71/*"Cursos.ux"*/]);
    temp43->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::AdmCursosb5e54b73()));
    temp39->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_IconoPrincipiante857b106e()));
    temp40->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_IconoIntermedio870f9860()));
    temp41->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_IconoAvanzado27fcad9e()));
    temp42->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_IconoExperto24fd9969()));
    uPtr(actPage)->Interaction(0);
    uPtr(actPage)->Name(Cursos::__selector5());
    uPtr(actPage)->Active(pagRamas);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(actPage)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), pagRamas);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(actPage)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), pagInstructores);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(actPage)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), pagCursos);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(actPage)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), addCurso);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(actPage)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), pagCalendario);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(actPage)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), pagActividad);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(actPage)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), addActividad);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(actPage)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), pagAlumnos);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(actPage)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), crearAlumno);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(actPage)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), calificaAlumno);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(actPage)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), addAlumnos);
    uPtr(pagRamas)->Name(Cursos::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagRamas)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    temp50->Source(::g::MainView::cabecera());
    temp51->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp51->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp51->Alignment(8);
    temp51->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 8.0f));
    temp51->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    temp52->Columns(::STRINGS[72/*"auto,auto"*/]);
    temp52->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    temp53->Value(::STRINGS[73/*"MIS "*/]);
    temp53->FontSize(14.0f);
    temp53->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp53->Font(::g::MainView::museo700_letter());
    temp54->Value(::STRINGS[74/*"COLEGIOS"*/]);
    temp54->FontSize(14.0f);
    temp54->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp54->Font(::g::MainView::museo100_letter());
    temp55->LimitHeight(::g::Uno::UX::Size__New1(450.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    temp58->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp58->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp58->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp60);
    temp61->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp62->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp62->Height(::g::Uno::UX::Size__New1(9.0f, 4));
    temp62->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp62->ZOffset(2.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp62, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    temp63->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp63->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp63->Alignment(4);
    temp63->Layer(0);
    temp64->Height(::g::Uno::UX::Size__New1(34.0f, 1));
    temp64->Alignment(1);
    temp64->Margin(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    temp64->Layer(0);
    temp64->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Instructores5e61cde5()));
    temp65->Value(::STRINGS[75/*"Listado de ...*/]);
    temp65->FontSize(12.5f);
    temp65->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp65->Alignment(10);
    temp65->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp67->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp68, pagInstructores);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp69, uCRef<int>(0));
    uPtr(pagInstructores)->Name(Cursos::__selector7());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagInstructores)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), showInstructores);
    uPtr(showInstructores)->Visibility(1);
    uPtr(showInstructores)->Name(Cursos::__selector8());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showInstructores)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showInstructores)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showInstructores)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showInstructores)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp79);
    temp70->Source(::g::MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp74);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp73, uCRef<int>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp74, pagRamas);
    temp75->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp75->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp75->Alignment(8);
    temp75->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 8.0f));
    temp75->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    temp76->Columns(::STRINGS[72/*"auto,auto"*/]);
    temp76->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    temp77->Value(::STRINGS[76/*"INSTRUCTORES "*/]);
    temp77->FontSize(14.0f);
    temp77->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp77->Font(::g::MainView::museo700_letter());
    temp78->Value(::STRINGS[77/*"ARSKI"*/]);
    temp78->FontSize(14.0f);
    temp78->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp78->Font(::g::MainView::museo100_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp82);
    uPtr(pagCursos)->Name(Cursos::__selector9());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagCursos)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp89);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp93);
    temp84->Source(::g::MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp88);
    temp89->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp89->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp89->Alignment(8);
    temp89->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 8.0f));
    temp89->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp89->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp90);
    temp90->Columns(::STRINGS[72/*"auto,auto"*/]);
    temp90->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp90->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp92);
    temp91->Value(::STRINGS[73/*"MIS "*/]);
    temp91->FontSize(14.0f);
    temp91->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp91->Font(::g::MainView::museo700_letter());
    temp92->Value(::STRINGS[78/*"CURSOS"*/]);
    temp92->FontSize(14.0f);
    temp92->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp92->Font(::g::MainView::museo100_letter());
    temp93->MaxHeight(::g::Uno::UX::Size__New1(550.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp95);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp106);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp97);
    temp98->Color(::g::Uno::Float4__New2(0.9686275f, 0.9607843f, 0.9686275f, 1.0f));
    temp98->Margin(::g::Uno::Float4__New2(0.0f, 8.0f, 0.0f, 8.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp98, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp102);
    temp99->Opacity(0.5f);
    temp99->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp99->Strokes()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp100);
    temp100->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp100->Width(1.0f);
    temp101->Value(::STRINGS[79/*"+"*/]);
    temp101->FontSize(42.0f);
    temp101->TextAlignment(1);
    temp101->TextColor(::g::Uno::Float4__New2(0.8588235f, 0.8588235f, 0.8588235f, 1.0f));
    temp101->Font(::g::MainView::museo900_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp102->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp103);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp102->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp102->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp102->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    temp103->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp104, addCurso);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp105, uCRef<int>(0));
    temp106->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    uPtr(addCurso)->Name(Cursos::__selector10());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addCurso)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), showaddCurso);
    uPtr(showaddCurso)->Visibility(1);
    uPtr(showaddCurso)->Name(Cursos::__selector11());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showaddCurso)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp107);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showaddCurso)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp107->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp108);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp107->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp109);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp107->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp107->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp117);
    temp108->Source(::g::MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp111);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp110->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp112);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp111, pagCursos);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp112, uCRef<int>(1));
    temp113->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp113->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp113->Alignment(8);
    temp113->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 8.0f));
    temp113->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp113->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp114);
    temp114->Columns(::STRINGS[72/*"auto,auto"*/]);
    temp114->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp115);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp116);
    temp115->Value(::STRINGS[80/*"NUEVO "*/]);
    temp115->FontSize(14.0f);
    temp115->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp115->Font(::g::MainView::museo700_letter());
    temp116->Value(::STRINGS[81/*"CURSO"*/]);
    temp116->FontSize(14.0f);
    temp116->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp116->Font(::g::MainView::museo100_letter());
    temp117->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp117->MinHeight(::g::Uno::UX::Size__New1(50.0f, 1));
    temp117->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp120);
    temp118->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp118->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp118->Alignment(4);
    temp118->Layer(0);
    temp5->TextWrapping(1);
    temp5->FontSize(12.0f);
    temp5->TextAlignment(1);
    temp5->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp5->PlaceholderText(::STRINGS[81/*"CURSO"*/]);
    temp5->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp5->Alignment(10);
    temp5->Font(::g::MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp119);
    temp120->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp120->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp120->Alignment(12);
    temp120->Layer(0);
    temp121->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp121->Height(::g::Uno::UX::Size__New1(9.0f, 4));
    temp121->Padding(::g::Uno::Float4__New2(10.0f, 20.0f, 10.0f, 20.0f));
    temp121->ZOffset(2.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp121, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp121->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp122);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp121->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp123);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp121->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp124);
    temp122->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp122->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp122->Alignment(4);
    temp122->Layer(0);
    temp123->Value(::STRINGS[82/*"Guardar!"*/]);
    temp123->FontSize(12.5f);
    temp123->TextAlignment(1);
    temp123->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp123->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp125);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp126);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp127);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    temp125->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp126, pagCursos);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp127, uCRef<int>(1));
    uPtr(pagCalendario)->Name(Cursos::__selector12());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagCalendario)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), showCalendario);
    uPtr(showCalendario)->Visibility(1);
    uPtr(showCalendario)->Name(Cursos::__selector13());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showCalendario)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp128);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showCalendario)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp129);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showCalendario)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp133);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showCalendario)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp137);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showCalendario)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp150);
    temp128->Source(::g::MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp129->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp130);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp130->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp131);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp130->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp132);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp131, pagCursos);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp132, uCRef<int>(1));
    temp133->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp133->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp133->Alignment(8);
    temp133->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 8.0f));
    temp133->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp133->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp134);
    temp134->Columns(::STRINGS[72/*"auto,auto"*/]);
    temp134->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp134->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp135);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp134->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp136);
    temp135->Value(::STRINGS[83/*"CALENDARIO "*/]);
    temp135->FontSize(14.0f);
    temp135->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp135->Font(::g::MainView::museo700_letter());
    temp136->Value(::STRINGS[84/*"COMPLETO"*/]);
    temp136->FontSize(14.0f);
    temp136->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp136->Font(::g::MainView::museo100_letter());
    temp137->Columns(::STRINGS[85/*"2*,6*,2*"*/]);
    temp137->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp137->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp138);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp143);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp146);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp138->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp139);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp138->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp140);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp138->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp141);
    temp139->Value(::STRINGS[86/*">"*/]);
    temp139->FontSize(20.0f);
    temp139->TextAlignment(2);
    temp139->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp139->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 14.0f, 0.0f));
    temp139->Font(::g::MainView::pres_letter());
    temp140->Degrees(180.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp141->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp142);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp141->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    temp142->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    temp143->Columns(::STRINGS[72/*"auto,auto"*/]);
    temp143->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp143->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp6->FontSize(14.0f);
    temp6->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp6->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp144);
    temp7->FontSize(14.0f);
    temp7->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp7->Font(::g::MainView::museo100_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp145);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp147);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp148);
    temp147->Value(::STRINGS[86/*">"*/]);
    temp147->FontSize(20.0f);
    temp147->TextAlignment(2);
    temp147->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp147->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 14.0f, 0.0f));
    temp147->Font(::g::MainView::pres_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp148->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp149);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp148->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    temp149->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    temp150->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp150->Margin(::g::Uno::Float4__New2(0.0f, 8.0f, 0.0f, 8.0f));
    temp150->Padding(::g::Uno::Float4__New2(14.0f, 20.0f, 14.0f, 15.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp151);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp153);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp161);
    temp151->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp151->Strokes()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp152);
    temp152->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp152->Width(1.0f);
    temp153->ColumnCount(7);
    temp153->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp154);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp155);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp156);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp157);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp158);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp159);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp160);
    temp154->Value(::STRINGS[87/*"L"*/]);
    temp154->FontSize(12.0f);
    temp154->TextAlignment(1);
    temp154->TextColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp154->Font(::g::MainView::museo700_letter());
    temp155->Value(::STRINGS[88/*"M"*/]);
    temp155->FontSize(12.0f);
    temp155->TextAlignment(1);
    temp155->TextColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp155->Font(::g::MainView::museo700_letter());
    temp156->Value(::STRINGS[88/*"M"*/]);
    temp156->FontSize(12.0f);
    temp156->TextAlignment(1);
    temp156->TextColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp156->Font(::g::MainView::museo700_letter());
    temp157->Value(::STRINGS[89/*"J"*/]);
    temp157->FontSize(12.0f);
    temp157->TextAlignment(1);
    temp157->TextColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp157->Font(::g::MainView::museo700_letter());
    temp158->Value(::STRINGS[90/*"V"*/]);
    temp158->FontSize(12.0f);
    temp158->TextAlignment(1);
    temp158->TextColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp158->Font(::g::MainView::museo700_letter());
    temp159->Value(::STRINGS[91/*"S"*/]);
    temp159->FontSize(12.0f);
    temp159->TextAlignment(1);
    temp159->TextColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp159->Font(::g::MainView::museo700_letter());
    temp160->Value(::STRINGS[92/*"D"*/]);
    temp160->FontSize(12.0f);
    temp160->TextAlignment(1);
    temp160->TextColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp160->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp161->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp162);
    temp162->ColumnCount(7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp162->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp163);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp164);
    uPtr(pagActividad)->Name(Cursos::__selector14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagActividad)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp165);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp165->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp166);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp165->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp212);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp166->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp167);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp166->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp168);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp166->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp171);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp166->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp175);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp166->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp182);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp166->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp197);
    temp167->Source(::g::MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp168->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp169);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp169->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp170);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp170, pagCursos);
    temp171->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp171->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp171->Alignment(8);
    temp171->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 8.0f));
    temp171->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp172);
    temp172->Columns(::STRINGS[72/*"auto,auto"*/]);
    temp172->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp173);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp172->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp173->Value(::STRINGS[93/*"CURSO "*/]);
    temp173->FontSize(14.0f);
    temp173->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp173->Font(::g::MainView::museo700_letter());
    temp9->FontSize(14.0f);
    temp9->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp9->Font(::g::MainView::museo100_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp174);
    temp175->Color(::g::Uno::Float4__New2(0.7490196f, 0.7490196f, 0.7490196f, 1.0f));
    temp175->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp176);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp177);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp178);
    temp176->Value(::STRINGS[94/*"Ver calenda...*/]);
    temp176->FontSize(14.0f);
    temp176->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp176->Alignment(10);
    temp176->Font(::g::MainView::museo300_letter());
    temp177->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp177->Alignment(3);
    temp177->Margin(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    temp177->Layer(0);
    temp177->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Calendario488530fe()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp178->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp179);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp178->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp180);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp178->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp181);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp178->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb9);
    temp179->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb9)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp180, uCRef<int>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp181, pagCalendario);
    temp182->Columns(::STRINGS[95/*"2*,7*,2*"*/]);
    temp182->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp182->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp182->Margin(::g::Uno::Float4__New2(0.0f, 8.0f, 0.0f, 8.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp182->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp183);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp182->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp188);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp182->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp193);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp184);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp185);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp186);
    temp184->Value(::STRINGS[86/*">"*/]);
    temp184->FontSize(20.0f);
    temp184->TextAlignment(2);
    temp184->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp184->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 14.0f, 0.0f));
    temp184->Font(::g::MainView::pres_letter());
    temp185->Degrees(180.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp186->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp187);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp186->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb10);
    temp187->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    temp188->Columns(::STRINGS[96/*"auto,auto,a...*/]);
    temp188->Alignment(10);
    temp188->Padding(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp190);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp10->FontSize(14.0f);
    temp10->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp10->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp189);
    temp190->Value(::STRINGS[97/*" de "*/]);
    temp190->FontSize(14.0f);
    temp190->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp190->Font(::g::MainView::museo700_letter());
    temp11->FontSize(14.0f);
    temp11->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp11->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp191);
    temp12->FontSize(14.0f);
    temp12->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp12->Font(::g::MainView::museo100_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp192);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp193->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp194);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp193->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp195);
    temp194->Value(::STRINGS[86/*">"*/]);
    temp194->FontSize(20.0f);
    temp194->TextAlignment(2);
    temp194->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp194->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 14.0f, 0.0f));
    temp194->Font(::g::MainView::pres_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp195->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp196);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp195->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb11);
    temp196->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb11)));
    temp197->MaxHeight(::g::Uno::UX::Size__New1(450.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp197->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp198);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp198->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp199);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp198->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp204);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp198->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp211);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp199->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp200);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp199->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp200->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp200->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp200->Alignment(4);
    temp200->ZOffset(2.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp201);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp202);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp203);
    temp204->Color(::g::Uno::Float4__New2(0.9686275f, 0.9607843f, 0.972549f, 1.0f));
    temp204->Margin(::g::Uno::Float4__New2(0.0f, 8.0f, 0.0f, 8.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp204, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp204->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp205);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp204->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp206);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp204->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp207);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp204->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp208);
    temp205->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp205->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp205->Alignment(4);
    temp205->Layer(0);
    temp206->Value(::STRINGS[79/*"+"*/]);
    temp206->FontSize(38.0f);
    temp206->TextAlignment(1);
    temp206->TextColor(::g::Uno::Float4__New2(0.8588235f, 0.8588235f, 0.8588235f, 1.0f));
    temp206->Font(::g::MainView::museo900_letter());
    temp207->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp207->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp207->Alignment(12);
    temp207->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp208->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp209);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp208->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp210);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp209, addActividad);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp210, uCRef<int>(0));
    temp211->Height(::g::Uno::UX::Size__New1(130.0f, 1));
    temp212->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp212->Height(::g::Uno::UX::Size__New1(9.0f, 4));
    temp212->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp212->ZOffset(2.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp212, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp212->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp213);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp212->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp214);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp212->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp215);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp212->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp216);
    temp213->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp213->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp213->Alignment(4);
    temp213->Layer(0);
    temp214->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp214->Alignment(1);
    temp214->Margin(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    temp214->Layer(0);
    temp214->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Lista5a5d1c57()));
    temp215->Value(::STRINGS[98/*"Listado del...*/]);
    temp215->FontSize(12.5f);
    temp215->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp215->Alignment(10);
    temp215->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp216->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp217);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp216->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp218);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp216->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb13);
    temp217->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp218, pagAlumnos);
    uPtr(addActividad)->Name(Cursos::__selector15());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addActividad)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), showActividad);
    uPtr(showActividad)->Visibility(1);
    uPtr(showActividad)->Name(Cursos::__selector16());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showActividad)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp219);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showActividad)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp251);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp219->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp220);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp219->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp221);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp219->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp225);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp219->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp229);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp219->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp244);
    temp220->Source(::g::MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp221->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp222);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp222->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp223);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp222->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp224);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp223, pagActividad);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp224, uCRef<int>(1));
    temp225->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp225->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp225->Alignment(8);
    temp225->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 8.0f));
    temp225->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp225->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp226);
    temp226->Columns(::STRINGS[72/*"auto,auto"*/]);
    temp226->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp226->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp227);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp226->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp228);
    temp227->Value(::STRINGS[99/*"AGREGAR "*/]);
    temp227->FontSize(14.0f);
    temp227->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp227->Font(::g::MainView::museo700_letter());
    temp228->Value(::STRINGS[100/*"HABILIDADES"*/]);
    temp228->FontSize(14.0f);
    temp228->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp228->Font(::g::MainView::museo100_letter());
    temp229->Columns(::STRINGS[95/*"2*,7*,2*"*/]);
    temp229->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp229->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp229->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp230);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp229->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp235);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp229->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp240);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp230->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp231);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp230->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp232);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp230->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp233);
    temp231->Value(::STRINGS[86/*">"*/]);
    temp231->FontSize(20.0f);
    temp231->TextAlignment(2);
    temp231->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp231->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 14.0f, 0.0f));
    temp231->Font(::g::MainView::pres_letter());
    temp232->Degrees(180.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp233->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp234);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp233->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb14);
    temp234->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb14)));
    temp235->Columns(::STRINGS[96/*"auto,auto,a...*/]);
    temp235->Alignment(10);
    temp235->Padding(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp235->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp235->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp237);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp235->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp235->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp14->FontSize(14.0f);
    temp14->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp14->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp236);
    temp237->Value(::STRINGS[97/*" de "*/]);
    temp237->FontSize(14.0f);
    temp237->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp237->Font(::g::MainView::museo700_letter());
    temp15->FontSize(14.0f);
    temp15->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp15->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp238);
    temp16->FontSize(14.0f);
    temp16->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp16->Font(::g::MainView::museo100_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp239);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp240->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp241);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp240->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp242);
    temp241->Value(::STRINGS[86/*">"*/]);
    temp241->FontSize(20.0f);
    temp241->TextAlignment(2);
    temp241->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp241->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 14.0f, 0.0f));
    temp241->Font(::g::MainView::pres_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp242->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp243);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp242->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb15);
    temp243->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb15)));
    temp244->MaxHeight(::g::Uno::UX::Size__New1(450.0f, 1));
    temp244->Margin(::g::Uno::Float4__New2(0.0f, 8.0f, 0.0f, 8.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp244->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp245);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp245->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp246);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp245->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp245->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp250);
    temp246->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp246->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp246->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp247);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp248);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp249);
    temp250->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp251->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp251->Height(::g::Uno::UX::Size__New1(9.0f, 4));
    temp251->Padding(::g::Uno::Float4__New2(10.0f, 20.0f, 10.0f, 20.0f));
    temp251->ZOffset(10.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp251, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp251->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp252);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp251->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp253);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp251->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp254);
    temp252->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp252->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp252->Alignment(4);
    temp252->Layer(0);
    temp253->Value(::STRINGS[82/*"Guardar!"*/]);
    temp253->FontSize(12.5f);
    temp253->TextAlignment(1);
    temp253->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp253->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp254->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp255);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp254->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp256);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp254->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp257);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp254->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb20);
    temp255->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb20)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp256, pagActividad);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp257, uCRef<int>(1));
    uPtr(pagAlumnos)->Name(Cursos::__selector17());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagAlumnos)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp258);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp258->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp259);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp258->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp260);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp258->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp263);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp258->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp270);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp258->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp274);
    temp259->Source(::g::MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp260->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp261);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp261->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp262);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp262, pagActividad);
    temp263->Alignment(3);
    temp263->Margin(::g::Uno::Float4__New2(0.0f, -10.0f, 14.0f, 6.0f));
    temp263->ZOffset(2.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp263->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp263->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp263->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp268);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Nodes()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp264);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp265);
    temp264->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp264->Source(::g::MainView::editVerde());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Nodes()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp266);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp267);
    temp266->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp266->Source(::g::MainView::editNegro());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp268->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp269);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp268->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb21);
    temp269->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb21)));
    temp270->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp270->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp270->Alignment(8);
    temp270->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 8.0f));
    temp270->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp270->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp271);
    temp271->Columns(::STRINGS[72/*"auto,auto"*/]);
    temp271->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp271->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp272);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp271->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp273);
    temp272->Value(::STRINGS[101/*"LISTADO "*/]);
    temp272->FontSize(14.0f);
    temp272->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp272->Font(::g::MainView::museo700_letter());
    temp273->Value(::STRINGS[102/*"ALUMNOS"*/]);
    temp273->FontSize(14.0f);
    temp273->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp273->Font(::g::MainView::museo100_letter());
    temp274->MaxHeight(::g::Uno::UX::Size__New1(550.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp274->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp275);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp275->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp276);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp275->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp280);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp275->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp288);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp276->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp277);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp276->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp277->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp277->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp277->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp278);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp279);
    temp280->Color(::g::Uno::Float4__New2(0.9686275f, 0.9607843f, 0.9686275f, 1.0f));
    temp280->Margin(::g::Uno::Float4__New2(0.0f, 8.0f, 0.0f, 8.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp280->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp281);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp280->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp283);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp280->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp284);
    temp281->Opacity(0.5f);
    temp281->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp281->Strokes()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp282);
    temp282->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp282->Width(1.0f);
    temp283->Value(::STRINGS[79/*"+"*/]);
    temp283->FontSize(42.0f);
    temp283->TextAlignment(1);
    temp283->TextColor(::g::Uno::Float4__New2(0.8588235f, 0.8588235f, 0.8588235f, 1.0f));
    temp283->Font(::g::MainView::museo900_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp284->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp285);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp284->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp286);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp284->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp287);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp284->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb25);
    temp285->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb25)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp286, uCRef<int>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp287, crearAlumno);
    temp288->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    uPtr(crearAlumno)->Name(Cursos::__selector18());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(crearAlumno)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), showCreaAlumno);
    uPtr(showCreaAlumno)->Visibility(1);
    uPtr(showCreaAlumno)->Name(Cursos::__selector19());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showCreaAlumno)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp289);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showCreaAlumno)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp323);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp289->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp290);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp289->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp291);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp289->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp295);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp289->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp299);
    temp290->Source(::g::MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp291->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp292);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp292->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp293);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp292->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp294);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp293, uCRef<int>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp294, pagAlumnos);
    temp295->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp295->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp295->Alignment(8);
    temp295->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 8.0f));
    temp295->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp295->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp296);
    temp296->Columns(::STRINGS[72/*"auto,auto"*/]);
    temp296->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp296->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp297);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp296->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp298);
    temp297->Value(::STRINGS[80/*"NUEVO "*/]);
    temp297->FontSize(14.0f);
    temp297->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp297->Font(::g::MainView::museo700_letter());
    temp298->Value(::STRINGS[103/*"ALUMNO"*/]);
    temp298->FontSize(14.0f);
    temp298->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp298->Font(::g::MainView::museo100_letter());
    temp299->MaxHeight(::g::Uno::UX::Size__New1(500.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp299->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp300);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp300->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp301);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp300->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp302);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp300->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp306);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp300->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp310);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp300->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp314);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp300->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp318);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp300->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp322);
    temp301->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp301->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp301->Source(::g::MainView::logoCircular());
    temp302->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp302->MinHeight(::g::Uno::UX::Size__New1(40.0f, 1));
    temp302->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp302->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp303);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp302->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp302->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp305);
    temp303->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp303->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp303->Alignment(4);
    temp303->Layer(0);
    temp21->TextWrapping(1);
    temp21->FontSize(12.0f);
    temp21->TextAlignment(1);
    temp21->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp21->PlaceholderText(::STRINGS[104/*"Nombre"*/]);
    temp21->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp21->Alignment(10);
    temp21->Font(::g::MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp304);
    temp305->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp305->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp305->Alignment(12);
    temp305->Layer(0);
    temp306->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp306->MinHeight(::g::Uno::UX::Size__New1(40.0f, 1));
    temp306->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    temp306->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp306->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp307);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp306->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp306->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp309);
    temp307->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp307->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp307->Alignment(4);
    temp307->Layer(0);
    temp22->TextWrapping(1);
    temp22->FontSize(12.0f);
    temp22->TextAlignment(1);
    temp22->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp22->PlaceholderText(::STRINGS[105/*"Apellido"*/]);
    temp22->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp22->Alignment(10);
    temp22->Font(::g::MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp308);
    temp309->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp309->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp309->Alignment(12);
    temp309->Layer(0);
    temp310->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp310->MinHeight(::g::Uno::UX::Size__New1(40.0f, 1));
    temp310->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp310->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp311);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp310->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp310->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp313);
    temp311->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp311->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp311->Alignment(4);
    temp311->Layer(0);
    temp23->TextWrapping(1);
    temp23->FontSize(12.0f);
    temp23->TextAlignment(1);
    temp23->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp23->InputHint(1);
    temp23->PlaceholderText(::STRINGS[106/*"nombre@tuma...*/]);
    temp23->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp23->Alignment(10);
    temp23->Font(::g::MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp312);
    temp313->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp313->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp313->Alignment(12);
    temp313->Layer(0);
    temp314->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp314->MinHeight(::g::Uno::UX::Size__New1(40.0f, 1));
    temp314->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    temp314->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp314->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp315);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp314->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp314->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp317);
    temp315->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp315->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp315->Alignment(4);
    temp315->Layer(0);
    temp24->TextWrapping(1);
    temp24->FontSize(12.0f);
    temp24->TextAlignment(1);
    temp24->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp24->InputHint(3);
    temp24->PlaceholderText(::STRINGS[107/*"+56 9 91234...*/]);
    temp24->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp24->Alignment(10);
    temp24->Font(::g::MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp316);
    temp317->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp317->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp317->Alignment(12);
    temp317->Layer(0);
    temp318->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp318->MinHeight(::g::Uno::UX::Size__New1(40.0f, 1));
    temp318->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp318->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp319);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp318->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp318->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp321);
    temp319->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp319->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp319->Alignment(4);
    temp319->Layer(0);
    temp25->TextWrapping(1);
    temp25->FontSize(12.0f);
    temp25->TextAlignment(1);
    temp25->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp25->PlaceholderText(::STRINGS[108/*"11-07-1990"*/]);
    temp25->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp25->Alignment(10);
    temp25->Font(::g::MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp320);
    temp321->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp321->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp321->Alignment(12);
    temp321->Layer(0);
    temp322->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp323->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp323->Height(::g::Uno::UX::Size__New1(9.0f, 4));
    temp323->Padding(::g::Uno::Float4__New2(10.0f, 20.0f, 10.0f, 20.0f));
    temp323->ZOffset(3.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp323, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp323->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp324);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp323->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp325);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp323->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp326);
    temp324->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp324->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp324->Alignment(4);
    temp324->Layer(0);
    temp325->Value(::STRINGS[82/*"Guardar!"*/]);
    temp325->FontSize(12.5f);
    temp325->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp325->Alignment(10);
    temp325->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp326->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp327);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp326->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp328);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp326->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp329);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp326->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb26);
    temp327->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb26)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp328, uCRef<int>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp329, pagAlumnos);
    uPtr(calificaAlumno)->Name(Cursos::__selector20());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(calificaAlumno)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp330);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp330->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp331);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp330->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp395);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp331->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp332);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp331->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp333);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp331->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp336);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp331->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp340);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp331->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp355);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp331->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp331->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp374);
    temp332->Source(::g::MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp333->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp334);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp334->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp335);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp335, pagAlumnos);
    temp336->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp336->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp336->Alignment(8);
    temp336->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 8.0f));
    temp336->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp336->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp337);
    temp337->Columns(::STRINGS[72/*"auto,auto"*/]);
    temp337->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp337->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp338);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp337->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp339);
    temp338->Value(::STRINGS[109/*"CALIFICAR "*/]);
    temp338->FontSize(14.0f);
    temp338->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp338->Font(::g::MainView::museo700_letter());
    temp339->Value(::STRINGS[103/*"ALUMNO"*/]);
    temp339->FontSize(14.0f);
    temp339->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp339->Font(::g::MainView::museo100_letter());
    temp340->Columns(::STRINGS[95/*"2*,7*,2*"*/]);
    temp340->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp340->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp340->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp341);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp340->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp346);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp340->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp351);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp341->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp342);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp341->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp343);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp341->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp344);
    temp342->Value(::STRINGS[86/*">"*/]);
    temp342->FontSize(20.0f);
    temp342->TextAlignment(2);
    temp342->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp342->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 14.0f, 0.0f));
    temp342->Font(::g::MainView::pres_letter());
    temp343->Degrees(180.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp344->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp345);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp344->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb27);
    temp345->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb27)));
    temp346->Columns(::STRINGS[96/*"auto,auto,a...*/]);
    temp346->Alignment(10);
    temp346->Padding(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp346->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp346->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp348);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp346->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp346->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    temp26->FontSize(14.0f);
    temp26->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp26->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp347);
    temp348->Value(::STRINGS[97/*" de "*/]);
    temp348->FontSize(14.0f);
    temp348->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp348->Font(::g::MainView::museo700_letter());
    temp27->FontSize(14.0f);
    temp27->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp27->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp349);
    temp28->FontSize(14.0f);
    temp28->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp28->Font(::g::MainView::museo100_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp350);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp351->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp352);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp351->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp353);
    temp352->Value(::STRINGS[86/*">"*/]);
    temp352->FontSize(20.0f);
    temp352->TextAlignment(2);
    temp352->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp352->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 14.0f, 0.0f));
    temp352->Font(::g::MainView::pres_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp353->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp354);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp353->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb28);
    temp354->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb28)));
    temp355->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp355->Margin(::g::Uno::Float4__New2(0.0f, 8.0f, 0.0f, 0.0f));
    temp355->Padding(::g::Uno::Float4__New2(0.0f, 1.0f, 0.0f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp355->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp356);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp355->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp355->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp359);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp355->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp363);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp355->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp366);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp355->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp356->Opacity(0.5f);
    temp356->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp356->Strokes()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp357);
    temp357->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp357->Width(1.0f);
    temp29->StretchMode(6);
    temp29->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp29->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp29->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp358);
    temp359->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp359->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp359->Alignment(1);
    temp359->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    temp359->ZOffset(2.0f);
    temp359->Fill(temp362);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp359->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp360);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp360->Animators()), ::TYPES[29/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp361);
    temp361->DegreesX(-15.0f);
    temp361->Duration(0.4);
    temp363->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp363->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp363->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    temp30->FontSize(16.0f);
    temp30->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp30->Alignment(9);
    temp30->Margin(::g::Uno::Float4__New2(65.0f, 0.0f, 0.0f, 0.0f));
    temp30->Font(::g::MainView::museo300I_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp364);
    temp31->FontSize(16.0f);
    temp31->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp31->Alignment(9);
    temp31->Margin(::g::Uno::Float4__New2(60.0f, 0.0f, 0.0f, 0.0f));
    temp31->Font(::g::MainView::museo700I_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp365);
    temp366->Value(::STRINGS[110/*"Asistencia:"*/]);
    temp366->FontSize(10.0f);
    temp366->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp366->Alignment(11);
    temp366->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 50.0f, 0.0f));
    temp366->Font(::g::MainView::museo300I_letter());
    temp32->Alignment(11);
    temp32->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 23.0f, 0.0f));
    temp32->TextColor(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp32, uDelegate::New(::TYPES[31/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb29)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp367);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb29);
    temp33->Padding(::g::Uno::Float4__New2(14.0f, 10.0f, 15.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp368);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp373);
    temp368->Columns(::STRINGS[111/*"7*,1*,1*,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp368->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp369);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp368->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp370);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp368->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp371);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp368->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp372);
    temp369->Value(::STRINGS[100/*"HABILIDADES"*/]);
    temp369->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp369->Alignment(9);
    temp369->Font(::g::MainView::museo100_letter());
    temp370->Value(::STRINGS[91/*"S"*/]);
    temp370->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp370->Alignment(10);
    temp370->Font(::g::MainView::museo700_letter());
    temp371->Value(::STRINGS[112/*"C"*/]);
    temp371->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp371->Alignment(10);
    temp371->Font(::g::MainView::museo700_letter());
    temp372->Value(::STRINGS[87/*"L"*/]);
    temp372->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp372->Alignment(10);
    temp372->Font(::g::MainView::museo700_letter());
    temp374->MaxHeight(::g::Uno::UX::Size__New1(300.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp374->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp375);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp387);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp393);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp394);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp375->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp376);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp375->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    temp376->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp376->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp376->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp377);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp378);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp379);
    temp35->Columns(::STRINGS[113/*"1*,auto,aut...*/]);
    temp35->Alignment(3);
    temp35->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp380);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp381);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp382);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp383);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp384);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp385);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp386);
    temp380->Value(::STRINGS[114/*"S: "*/]);
    temp380->FontSize(10.0f);
    temp380->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp380->Font(::g::MainView::museo700I_letter());
    temp381->Value(::STRINGS[115/*"Seguir trab...*/]);
    temp381->FontSize(10.0f);
    temp381->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp381->Font(::g::MainView::museo300I_letter());
    temp382->Value(::STRINGS[116/*"C: "*/]);
    temp382->FontSize(10.0f);
    temp382->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp382->Font(::g::MainView::museo700I_letter());
    temp383->Value(::STRINGS[117/*"Casi lograd...*/]);
    temp383->FontSize(10.0f);
    temp383->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp383->Font(::g::MainView::museo300I_letter());
    temp384->Value(::STRINGS[118/*"L: "*/]);
    temp384->FontSize(10.0f);
    temp384->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp384->Font(::g::MainView::museo700I_letter());
    temp385->Value(::STRINGS[119/*"Logrado"*/]);
    temp385->FontSize(10.0f);
    temp385->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp385->Font(::g::MainView::museo300I_letter());
    temp387->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp387->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp388);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp387->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp389);
    temp388->Value(::STRINGS[120/*"COMENTARIOS"*/]);
    temp388->TextColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp388->Margin(::g::Uno::Float4__New2(14.0f, 10.0f, 15.0f, 5.0f));
    temp388->Font(::g::MainView::museo100_letter());
    temp389->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp389->MinHeight(::g::Uno::UX::Size__New1(80.0f, 1));
    temp389->Padding(::g::Uno::Float4__New2(14.0f, 2.0f, 14.0f, 2.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp389->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp390);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp389->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp389->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp392);
    temp390->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp390->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp390->Alignment(4);
    temp390->Layer(0);
    temp36->TextWrapping(1);
    temp36->FontSize(12.0f);
    temp36->TextAlignment(1);
    temp36->PlaceholderText(::STRINGS[121/*"Escribe aqu...*/]);
    temp36->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp36->Alignment(4);
    temp36->Font(::g::MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp391);
    temp392->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp392->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp392->Alignment(12);
    temp392->Layer(0);
    temp393->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp395->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp395->Height(::g::Uno::UX::Size__New1(9.0f, 4));
    temp395->Padding(::g::Uno::Float4__New2(10.0f, 20.0f, 10.0f, 20.0f));
    temp395->ZOffset(3.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp395, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp395->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp396);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp395->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp397);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp395->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp398);
    temp396->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp396->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp396->Alignment(4);
    temp396->Layer(0);
    temp397->Value(::STRINGS[82/*"Guardar!"*/]);
    temp397->FontSize(12.5f);
    temp397->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp397->Alignment(10);
    temp397->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp398->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp399);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp398->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp400);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp398->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb33);
    temp399->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb33)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp400, pagAlumnos);
    uPtr(addAlumnos)->Name(Cursos::__selector21());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(addAlumnos)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp401);
    temp401->Visibility(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp401->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp402);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp401->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp417);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp402->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp403);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp402->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp404);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp402->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp407);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp402->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp411);
    temp403->Source(::g::MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp404->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp405);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp405->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp406);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp406, pagAlumnos);
    temp407->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp407->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp407->Alignment(8);
    temp407->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 8.0f));
    temp407->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp407->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp408);
    temp408->Columns(::STRINGS[72/*"auto,auto"*/]);
    temp408->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp408->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp409);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp408->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp410);
    temp409->Value(::STRINGS[99/*"AGREGAR "*/]);
    temp409->FontSize(14.0f);
    temp409->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp409->Font(::g::MainView::museo700_letter());
    temp410->Value(::STRINGS[102/*"ALUMNOS"*/]);
    temp410->FontSize(14.0f);
    temp410->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp410->Font(::g::MainView::museo100_letter());
    temp411->MaxHeight(::g::Uno::UX::Size__New1(450.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp411->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp412);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp412->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp413);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp412->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp412->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp416);
    temp413->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp413->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp413->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Templates()), ::TYPES[19/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp414);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp415);
    temp416->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp417->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp417->Height(::g::Uno::UX::Size__New1(9.0f, 4));
    temp417->Padding(::g::Uno::Float4__New2(10.0f, 20.0f, 10.0f, 20.0f));
    temp417->ZOffset(2.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp417, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp417->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp418);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp417->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp419);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp417->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp420);
    temp418->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp418->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp418->Alignment(4);
    temp418->Layer(0);
    temp419->Value(::STRINGS[122/*"Agregar al ...*/]);
    temp419->FontSize(12.5f);
    temp419->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp419->Alignment(10);
    temp419->Font(::g::MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp420->Actions()), ::TYPES[24/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp421);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp420->Bindings()), ::TYPES[21/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb35);
    temp421->add_Handler(uDelegate::New(::TYPES[26/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb35)));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), actPage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), pagRamas);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), pagInstructores);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), showInstructores);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), pagCursos);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), addCurso);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), showaddCurso);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), pagCalendario);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), showCalendario);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), pagActividad);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), addActividad);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), showActividad);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), pagAlumnos);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), crearAlumno);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), showCreaAlumno);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), calificaAlumno);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), addAlumnos);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), actPage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::TYPES[33/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::TYPES[33/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::TYPES[33/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Resources()), ::TYPES[33/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), temp47);
}

// public Cursos New() [static] :1376
Cursos* Cursos::New4()
{
    Cursos* obj1 = (Cursos*)uNew(Cursos_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
