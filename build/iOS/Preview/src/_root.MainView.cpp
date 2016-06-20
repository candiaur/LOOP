// This file was generated based on '/Users/carla/Documents/Fuse Examples/LOOP/build/iOS/Preview/cache/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Atras.h>
#include <_root.Cursos.h>
#include <_root.Indicador.h>
#include <_root.LOOP_bundle.h>
#include <_root.LOOP_FuseControlsDockPanel_Visibility_Property.h>
#include <_root.LOOP_FuseControlsPageControl_Active_Property.h>
#include <_root.LOOP_FuseControlsText_Value_Property.h>
#include <_root.LOOP_FuseControlsTextInput_Value_Property.h>
#include <_root.MainView.h>
#include <_root.udPage.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.NavigationControlInteraction.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.GeoLocation.GeoLocation.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.DirectNavigation.h>
#include <Fuse.Navigation.LinearNavigation.h>
#include <Fuse.Navigation.StructuredNavigation.h>
#include <Fuse.Navigation.SwipeDirection.h>
#include <Fuse.Navigation.SwipeNavigate.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Rotation.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.Includes.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
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
#include <Uno.UX.Unit.h>
static uString* STRINGS[85];
static uType* TYPES[21];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :81
static void MainView__cctor__fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[0/*"principalPage"*/], ::STRINGS[1/*"login"*/], ::STRINGS[2/*"inicio"*/], ::STRINGS[3/*"left"*/], ::STRINGS[4/*"leftControl"*/], ::STRINGS[5/*"informe"*/], ::STRINGS[6/*"calificacion"*/], ::STRINGS[7/*"middle"*/], ::STRINGS[8/*"top"*/], ::STRINGS[9/*"controlPerfil"*/], ::STRINGS[10/*"pagPerfil"*/], ::STRINGS[11/*"pagConfigura"*/], ::STRINGS[12/*"pagEditaDatos"*/], ::STRINGS[13/*"showEditaDa...*/], ::STRINGS[14/*"pagEditaClave"*/], ::STRINGS[15/*"center"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Value"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"Active"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"Visibility"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"principalPage"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"login"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"inicio"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"left"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"leftControl"*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"informe"*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"calificacion"*/]);
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"middle"*/]);
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"top"*/]);
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"controlPerfil"*/]);
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"pagPerfil"*/]);
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"pagConfigura"*/]);
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"pagEditaDatos"*/]);
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"showEditaDa...*/]);
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"pagEditaClave"*/]);
    MainView::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"center"*/]);
    MainView::GlobalElem_ = ::g::Fuse::Reactive::JavaScript::New2(::g::Uno::UX::NameTable::Empty());
    MainView::pres_letter_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::PrestigeEliteStdBddc8e0495()));
    MainView::museo100_letter_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::MuseoSans100a82ee625()));
    MainView::museo300_letter_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::MuseoSans30011fb5ca7()));
    MainView::museo700_letter_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::MuseoSans_7002f8f0d39()));
    MainView::museo900_letter_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::MuseoSans_900995b83bb()));
    MainView::museo700I_letter_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::MuseoSans700Italic58b42efb()));
    MainView::museo500I_letter_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::MuseoSans_500_Italic4d7fac76()));
    MainView::museo300I_letter_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::MuseoSans300Italic9ea814f7()));
    MainView::museo100I_letter_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::MuseoSans100Italicc1a207f5()));
    MainView::cabecera_ = ::g::Fuse::Resources::FileImageSource::New2();
    MainView::logoCircular_ = ::g::Fuse::Resources::FileImageSource::New2();
    MainView::editNegro_ = ::g::Fuse::Resources::FileImageSource::New2();
    MainView::editVerde_ = ::g::Fuse::Resources::FileImageSource::New2();
    uPtr(MainView::GlobalElem_)->LineNumber(3);
    uPtr(MainView::GlobalElem_)->FileName(::STRINGS[19/*"MainView.ux"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::GlobalElem_, ::STRINGS[20/*"GlobalElem"*/]);
    uPtr(MainView::GlobalElem_)->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::GlobalElements1e8034b8()));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::pres_letter_, ::STRINGS[21/*"pres_letter"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::museo100_letter_, ::STRINGS[22/*"museo100_le...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::museo300_letter_, ::STRINGS[23/*"museo300_le...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::museo700_letter_, ::STRINGS[24/*"museo700_le...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::museo900_letter_, ::STRINGS[25/*"museo900_le...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::museo700I_letter_, ::STRINGS[26/*"museo700I_l...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::museo500I_letter_, ::STRINGS[27/*"museo500I_l...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::museo300I_letter_, ::STRINGS[28/*"museo300I_l...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::museo100I_letter_, ::STRINGS[29/*"museo100I_l...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::cabecera_, ::STRINGS[30/*"cabecera"*/]);
    uPtr(MainView::cabecera_)->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Cabecera40e60890()));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::logoCircular_, ::STRINGS[31/*"logoCircular"*/]);
    uPtr(MainView::logoCircular_)->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::logoencirculo4dbde192()));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::editNegro_, ::STRINGS[32/*"editNegro"*/]);
    uPtr(MainView::editNegro_)->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_EditaNegrobd7add90()));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::editVerde_, ::STRINGS[33/*"editVerde"*/]);
    uPtr(MainView::editVerde_)->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_EditaVerde8d121da7()));
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("principalPage");
    ::STRINGS[1] = uString::Const("login");
    ::STRINGS[2] = uString::Const("inicio");
    ::STRINGS[3] = uString::Const("left");
    ::STRINGS[4] = uString::Const("leftControl");
    ::STRINGS[5] = uString::Const("informe");
    ::STRINGS[6] = uString::Const("calificacion");
    ::STRINGS[7] = uString::Const("middle");
    ::STRINGS[8] = uString::Const("top");
    ::STRINGS[9] = uString::Const("controlPerfil");
    ::STRINGS[10] = uString::Const("pagPerfil");
    ::STRINGS[11] = uString::Const("pagConfigura");
    ::STRINGS[12] = uString::Const("pagEditaDatos");
    ::STRINGS[13] = uString::Const("showEditaDatos");
    ::STRINGS[14] = uString::Const("pagEditaClave");
    ::STRINGS[15] = uString::Const("center");
    ::STRINGS[16] = uString::Const("Value");
    ::STRINGS[17] = uString::Const("Active");
    ::STRINGS[18] = uString::Const("Visibility");
    ::STRINGS[19] = uString::Const("MainView.ux");
    ::STRINGS[20] = uString::Const("GlobalElem");
    ::STRINGS[21] = uString::Const("pres_letter");
    ::STRINGS[22] = uString::Const("museo100_letter");
    ::STRINGS[23] = uString::Const("museo300_letter");
    ::STRINGS[24] = uString::Const("museo700_letter");
    ::STRINGS[25] = uString::Const("museo900_letter");
    ::STRINGS[26] = uString::Const("museo700I_letter");
    ::STRINGS[27] = uString::Const("museo500I_letter");
    ::STRINGS[28] = uString::Const("museo300I_letter");
    ::STRINGS[29] = uString::Const("museo100I_letter");
    ::STRINGS[30] = uString::Const("cabecera");
    ::STRINGS[31] = uString::Const("logoCircular");
    ::STRINGS[32] = uString::Const("editNegro");
    ::STRINGS[33] = uString::Const("editVerde");
    ::STRINGS[34] = uString::Const("email");
    ::STRINGS[35] = uString::Const("clave");
    ::STRINGS[36] = uString::Const("loginUser");
    ::STRINGS[37] = uString::Const("mensajeError");
    ::STRINGS[38] = uString::Const("leftPage");
    ::STRINGS[39] = uString::Const("persona.nombre");
    ::STRINGS[40] = uString::Const("persona.apellido");
    ::STRINGS[41] = uString::Const("persona.nacio");
    ::STRINGS[42] = uString::Const("persona.correo");
    ::STRINGS[43] = uString::Const("persona.cel");
    ::STRINGS[44] = uString::Const("limpiarDatos");
    ::STRINGS[45] = uString::Const("limpiarClaves");
    ::STRINGS[46] = uString::Const("nombre");
    ::STRINGS[47] = uString::Const("apellido");
    ::STRINGS[48] = uString::Const("cel");
    ::STRINGS[49] = uString::Const("fechaNacio");
    ::STRINGS[50] = uString::Const("modificarDatos");
    ::STRINGS[51] = uString::Const("claveAct");
    ::STRINGS[52] = uString::Const("nuevaClave1");
    ::STRINGS[53] = uString::Const("nuevaClave2");
    ::STRINGS[54] = uString::Const("mensajeClave");
    ::STRINGS[55] = uString::Const("modificarClave");
    ::STRINGS[56] = uString::Const("perfilPage");
    ::STRINGS[57] = uString::Const("currentPage");
    ::STRINGS[58] = uString::Const("1*,3*");
    ::STRINGS[59] = uString::Const("Mail");
    ::STRINGS[60] = uString::Const("Contrase\303\261a");
    ::STRINGS[61] = uString::Const("INICIAR SESI\303\223N");
    ::STRINGS[62] = uString::Const("auto,auto");
    ::STRINGS[63] = uString::Const(">");
    ::STRINGS[64] = uString::Const("CONFIGURACI\303\223N");
    ::STRINGS[65] = uString::Const("7*,3*");
    ::STRINGS[66] = uString::Const("EDITAR PERFIL");
    ::STRINGS[67] = uString::Const("CAMBIAR CONTRASE\303\221A");
    ::STRINGS[68] = uString::Const("EDITAR ");
    ::STRINGS[69] = uString::Const("DATOS");
    ::STRINGS[70] = uString::Const("Nombre");
    ::STRINGS[71] = uString::Const("Apellido");
    ::STRINGS[72] = uString::Const("nombre@tumail.com");
    ::STRINGS[73] = uString::Const("+56 9 91234567");
    ::STRINGS[74] = uString::Const("11-07-1990");
    ::STRINGS[75] = uString::Const("Guardar!");
    ::STRINGS[76] = uString::Const("CAMBIAR ");
    ::STRINGS[77] = uString::Const("CONTRASE\303\221A");
    ::STRINGS[78] = uString::Const("Contrase\303\261a Actual");
    ::STRINGS[79] = uString::Const("Nueva Contrase\303\261a");
    ::STRINGS[80] = uString::Const("Repetir Nueva Contrase\303\261a");
    ::STRINGS[81] = uString::Const("Cambiar!");
    ::STRINGS[82] = uString::Const("\302\241HOLA");
    ::STRINGS[83] = uString::Const("!");
    ::STRINGS[84] = uString::Const("\302\277Qu\303\251 quieres hacer hoy?");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[5] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[6] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[7] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[8] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[9] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[11] = ::g::Fuse::Node_typeof();
    ::TYPES[12] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[14] = ::g::Fuse::Binding_typeof();
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[16] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[17] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Visual_typeof();
    ::TYPES[19] = ::g::Fuse::Resources::ImageSource_typeof();
    ::TYPES[20] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    type->SetFields(12,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, calificacion), 0,
        ::g::udPage_typeof(), offsetof(::g::MainView, center), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, controlPerfil), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::MainView, controlPerfil_Active_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, informe), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, inicio), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, left), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, leftControl), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::MainView, leftControl_Active_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, login), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, middle), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, pagConfigura), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, pagEditaClave), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, pagEditaDatos), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, pagPerfil), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, principalPage), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::MainView, principalPage_Active_inst), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(::g::MainView, showEditaDatos), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof()), offsetof(::g::MainView, showEditaDatos_Visibility_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb42), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb43), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb44), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb45), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb46), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb47), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp11_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp12_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp13_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp14_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp15_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp16_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp17_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp9_Value_inst), 0,
        ::g::udPage_typeof(), offsetof(::g::MainView, top), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector9_, uFieldFlagsStatic,
        ::g::Fuse::Resources::FileImageSource_typeof(), (uintptr_t)&::g::MainView::cabecera_, uFieldFlagsStatic,
        ::g::Fuse::Resources::FileImageSource_typeof(), (uintptr_t)&::g::MainView::editNegro_, uFieldFlagsStatic,
        ::g::Fuse::Resources::FileImageSource_typeof(), (uintptr_t)&::g::MainView::editVerde_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::JavaScript_typeof(), (uintptr_t)&::g::MainView::GlobalElem_, uFieldFlagsStatic,
        ::g::Fuse::Resources::FileImageSource_typeof(), (uintptr_t)&::g::MainView::logoCircular_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::museo100_letter_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::museo100I_letter_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::museo300_letter_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::museo300I_letter_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::museo500I_letter_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::museo700_letter_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::museo700I_letter_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::museo900_letter_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::pres_letter_, uFieldFlagsStatic);
    type->Reflection.SetFields(14,
        new uField("cabecera", 77),
        new uField("editNegro", 78),
        new uField("editVerde", 79),
        new uField("GlobalElem", 80),
        new uField("logoCircular", 81),
        new uField("museo100_letter", 82),
        new uField("museo100I_letter", 83),
        new uField("museo300_letter", 84),
        new uField("museo300I_letter", 85),
        new uField("museo500I_letter", 86),
        new uField("museo700_letter", 87),
        new uField("museo700I_letter", 88),
        new uField("museo900_letter", 89),
        new uField("pres_letter", 90));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New2_fn, 0, true, MainView_typeof(), 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 91;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New2_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :120
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :124
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :120
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector10_;
::g::Uno::UX::Selector MainView::__selector11_;
::g::Uno::UX::Selector MainView::__selector12_;
::g::Uno::UX::Selector MainView::__selector13_;
::g::Uno::UX::Selector MainView::__selector14_;
::g::Uno::UX::Selector MainView::__selector15_;
::g::Uno::UX::Selector MainView::__selector16_;
::g::Uno::UX::Selector MainView::__selector17_;
::g::Uno::UX::Selector MainView::__selector18_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;
uSStrong< ::g::Fuse::Resources::FileImageSource*> MainView::cabecera_;
uSStrong< ::g::Fuse::Resources::FileImageSource*> MainView::editNegro_;
uSStrong< ::g::Fuse::Resources::FileImageSource*> MainView::editVerde_;
uSStrong< ::g::Fuse::Reactive::JavaScript*> MainView::GlobalElem_;
uSStrong< ::g::Fuse::Resources::FileImageSource*> MainView::logoCircular_;
uSStrong< ::g::Fuse::Font*> MainView::museo100_letter_;
uSStrong< ::g::Fuse::Font*> MainView::museo100I_letter_;
uSStrong< ::g::Fuse::Font*> MainView::museo300_letter_;
uSStrong< ::g::Fuse::Font*> MainView::museo300I_letter_;
uSStrong< ::g::Fuse::Font*> MainView::museo500I_letter_;
uSStrong< ::g::Fuse::Font*> MainView::museo700_letter_;
uSStrong< ::g::Fuse::Font*> MainView::museo700I_letter_;
uSStrong< ::g::Fuse::Font*> MainView::museo900_letter_;
uSStrong< ::g::Fuse::Font*> MainView::pres_letter_;

// public MainView() [instance] :120
void MainView::ctor_3()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :124
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp18 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp19 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Storage::StorageModule* temp20 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::GeoLocation::GeoLocation* temp21 = ::g::Fuse::GeoLocation::GeoLocation::New2();
    ::g::Polyfills::Window::Includes* temp22 = ::g::Polyfills::Window::Includes::New2();
    ::g::FuseJS::Globals* temp23 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp24 = ::g::FuseJS::Lifecycle::New2();
    ::g::FuseJS::Environment* temp25 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp26 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp27 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp28 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp29 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp, MainView::__selector0());
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp1, MainView::__selector0());
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp2, MainView::__selector0());
    leftControl = ::g::Fuse::Controls::PageControl::New4();
    leftControl_Active_inst = ::g::LOOP_FuseControlsPageControl_Active_Property::New1(leftControl, MainView::__selector1());
    controlPerfil = ::g::Fuse::Controls::PageControl::New4();
    controlPerfil_Active_inst = ::g::LOOP_FuseControlsPageControl_Active_Property::New1(controlPerfil, MainView::__selector1());
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp3, MainView::__selector0());
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    temp4_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp4, MainView::__selector0());
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    temp5_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp5, MainView::__selector0());
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    temp6_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp6, MainView::__selector0());
    ::g::Fuse::Controls::Text* temp7 = ::g::Fuse::Controls::Text::New3();
    temp7_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp7, MainView::__selector0());
    showEditaDatos = ::g::Fuse::Controls::DockPanel::New4();
    showEditaDatos_Visibility_inst = ::g::LOOP_FuseControlsDockPanel_Visibility_Property::New1(showEditaDatos, MainView::__selector2());
    ::g::Fuse::Controls::TextInput* temp8 = ::g::Fuse::Controls::TextInput::New3();
    temp8_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp8, MainView::__selector0());
    ::g::Fuse::Controls::TextInput* temp9 = ::g::Fuse::Controls::TextInput::New3();
    temp9_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp9, MainView::__selector0());
    ::g::Fuse::Controls::TextInput* temp10 = ::g::Fuse::Controls::TextInput::New3();
    temp10_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp10, MainView::__selector0());
    ::g::Fuse::Controls::TextInput* temp11 = ::g::Fuse::Controls::TextInput::New3();
    temp11_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp11, MainView::__selector0());
    ::g::Fuse::Controls::TextInput* temp12 = ::g::Fuse::Controls::TextInput::New3();
    temp12_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp12, MainView::__selector0());
    ::g::Fuse::Controls::TextInput* temp13 = ::g::Fuse::Controls::TextInput::New3();
    temp13_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp13, MainView::__selector0());
    ::g::Fuse::Controls::TextInput* temp14 = ::g::Fuse::Controls::TextInput::New3();
    temp14_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp14, MainView::__selector0());
    ::g::Fuse::Controls::TextInput* temp15 = ::g::Fuse::Controls::TextInput::New3();
    temp15_Value_inst = ::g::LOOP_FuseControlsTextInput_Value_Property::New1(temp15, MainView::__selector0());
    ::g::Fuse::Controls::Text* temp16 = ::g::Fuse::Controls::Text::New3();
    temp16_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp16, MainView::__selector0());
    ::g::Fuse::Controls::Text* temp17 = ::g::Fuse::Controls::Text::New3();
    temp17_Value_inst = ::g::LOOP_FuseControlsText_Value_Property::New1(temp17, MainView::__selector0());
    principalPage = ::g::Fuse::Controls::PageControl::New4();
    principalPage_Active_inst = ::g::LOOP_FuseControlsPageControl_Active_Property::New1(principalPage, MainView::__selector1());
    ::g::Fuse::Controls::DockPanel* temp30 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::JavaScript* temp31 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StatusBarBackground* temp32 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::BottomBarBackground* temp33 = ::g::Fuse::Controls::BottomBarBackground::New3();
    login = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::DockPanel* temp34 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp35 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp36 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp37 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Image* temp38 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp39 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp40 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp41 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp42 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Rectangle* temp43 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp44 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp45 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp46 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp47 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp48 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[34/*"email"*/]);
    ::g::Fuse::Controls::Rectangle* temp49 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp50 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::DockPanel* temp51 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp52 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp53 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp54 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[35/*"clave"*/]);
    ::g::Fuse::Controls::Rectangle* temp55 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp56 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp57 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp58 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb42 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[36/*"loginUser"*/]);
    ::g::Fuse::Reactive::DataBinding* temp59 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp2_Value_inst, ::STRINGS[37/*"mensajeError"*/]);
    inicio = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::PageControl* temp60 = ::g::Fuse::Controls::PageControl::New4();
    ::g::Fuse::Navigation::DirectNavigation* temp61 = ::g::Fuse::Navigation::DirectNavigation::New2();
    left = ::g::Fuse::Controls::Page::New4();
    informe = ::g::Fuse::Controls::Page::New4();
    ::g::Indicador* temp62 = ::g::Indicador::New4();
    calificacion = ::g::Fuse::Controls::Page::New4();
    ::g::Cursos* temp63 = ::g::Cursos::New4();
    ::g::Fuse::Reactive::DataBinding* temp64 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<Fuse.Visual>*/], leftControl_Active_inst, ::STRINGS[38/*"leftPage"*/]);
    middle = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Panel* temp65 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Navigation::LinearNavigation* temp66 = ::g::Fuse::Navigation::LinearNavigation::New2();
    ::g::Fuse::Navigation::SwipeNavigate* temp67 = ::g::Fuse::Navigation::SwipeNavigate::New2();
    top = ::g::udPage::New4();
    pagPerfil = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::DockPanel* temp68 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp69 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp70 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp71 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], controlPerfil_Active_inst);
    ::g::Fuse::Controls::StackPanel* temp72 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp73 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Grid* temp74 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp75 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp3_Value_inst, ::STRINGS[39/*"persona.nom...*/]);
    ::g::Fuse::Reactive::DataBinding* temp76 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp4_Value_inst, ::STRINGS[40/*"persona.ape...*/]);
    ::g::Fuse::Controls::Rectangle* temp77 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp78 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp79 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp5_Value_inst, ::STRINGS[41/*"persona.nacio"*/]);
    ::g::Fuse::Reactive::DataBinding* temp80 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp6_Value_inst, ::STRINGS[42/*"persona.cor...*/]);
    ::g::Fuse::Reactive::DataBinding* temp81 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp7_Value_inst, ::STRINGS[43/*"persona.cel"*/]);
    ::g::Fuse::Controls::DockPanel* temp82 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp83 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Rotation* temp84 = ::g::Fuse::Rotation::New2();
    pagConfigura = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::StackPanel* temp85 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp86 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp87 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp88 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp89 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp90 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], controlPerfil_Active_inst);
    temp_eb43 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[44/*"limpiarDatos"*/]);
    ::g::Fuse::Controls::StackPanel* temp91 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp92 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp93 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp94 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::DockPanel* temp95 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp96 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp97 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp98 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp99 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp100 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp101 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp102 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[9/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showEditaDatos_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp103 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], controlPerfil_Active_inst);
    temp_eb44 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[44/*"limpiarDatos"*/]);
    ::g::Fuse::Controls::DockPanel* temp104 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp105 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp106 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp107 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp108 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp109 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp110 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp111 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], controlPerfil_Active_inst);
    temp_eb45 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[45/*"limpiarClaves"*/]);
    pagEditaDatos = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::StackPanel* temp112 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp113 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp114 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp115 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp116 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[9/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showEditaDatos_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp117 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], controlPerfil_Active_inst);
    ::g::Fuse::Controls::StackPanel* temp118 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp119 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp120 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp121 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::ScrollView* temp122 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp123 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp124 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp125 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp126 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp127 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp8_Value_inst, ::STRINGS[46/*"nombre"*/]);
    ::g::Fuse::Controls::Rectangle* temp128 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp129 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp130 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp131 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp9_Value_inst, ::STRINGS[47/*"apellido"*/]);
    ::g::Fuse::Controls::Rectangle* temp132 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp133 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp134 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp135 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp10_Value_inst, ::STRINGS[34/*"email"*/]);
    ::g::Fuse::Controls::Rectangle* temp136 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp137 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp138 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp139 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp11_Value_inst, ::STRINGS[48/*"cel"*/]);
    ::g::Fuse::Controls::Rectangle* temp140 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp141 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp142 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp143 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp12_Value_inst, ::STRINGS[49/*"fechaNacio"*/]);
    ::g::Fuse::Controls::Rectangle* temp144 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp145 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::DockPanel* temp146 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp147 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp148 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp149 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp150 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Set* temp151 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[9/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], showEditaDatos_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp152 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], controlPerfil_Active_inst);
    temp_eb46 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[50/*"modificarDa...*/]);
    pagEditaClave = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::DockPanel* temp153 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp154 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp155 = ::g::Fuse::Controls::Image::New3();
    ::g::Atras* temp156 = ::g::Atras::New5();
    ::g::Fuse::Gestures::Clicked* temp157 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp158 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], controlPerfil_Active_inst);
    ::g::Fuse::Controls::StackPanel* temp159 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp160 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp161 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp162 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp163 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp164 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp165 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp13_Value_inst, ::STRINGS[51/*"claveAct"*/]);
    ::g::Fuse::Controls::Rectangle* temp166 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp167 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp168 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp169 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp14_Value_inst, ::STRINGS[52/*"nuevaClave1"*/]);
    ::g::Fuse::Controls::Rectangle* temp170 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp171 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp172 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp173 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp15_Value_inst, ::STRINGS[53/*"nuevaClave2"*/]);
    ::g::Fuse::Controls::Rectangle* temp174 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp175 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp176 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp16_Value_inst, ::STRINGS[54/*"mensajeClave"*/]);
    ::g::Fuse::Controls::DockPanel* temp177 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp178 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp179 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp180 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp181 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb47 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[55/*"modificarCl...*/]);
    ::g::Fuse::Reactive::DataBinding* temp182 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<Fuse.Visual>*/], controlPerfil_Active_inst, ::STRINGS[56/*"perfilPage"*/]);
    center = ::g::udPage::New4();
    ::g::Fuse::Controls::DockPanel* temp183 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp184 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp185 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp186 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Rotation* temp187 = ::g::Fuse::Rotation::New2();
    ::g::Fuse::Controls::Image* temp188 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp189 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::SwipeNavigate* temp190 = ::g::Fuse::Navigation::SwipeNavigate::New2();
    ::g::Fuse::Controls::Grid* temp191 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp192 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp193 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Rotation* temp194 = ::g::Fuse::Rotation::New2();
    ::g::Fuse::Controls::Image* temp195 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Grid* temp196 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp197 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp198 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp199 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp200 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Grid* temp201 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp202 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp17_Value_inst, ::STRINGS[39/*"persona.nom...*/]);
    ::g::Fuse::Controls::Text* temp203 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp204 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp205 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp206 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<Fuse.Visual>*/], principalPage_Active_inst, ::STRINGS[57/*"currentPage"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), principalPage);
    temp31->LineNumber(4);
    temp31->FileName(::STRINGS[19/*"MainView.ux"*/]);
    temp31->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::Mainedc9b719()));
    ::g::Fuse::Controls::DockPanel::SetDock(temp32, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp33, 3);
    uPtr(principalPage)->Interaction(0);
    uPtr(principalPage)->Name(MainView::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(principalPage)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), login);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(principalPage)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), inicio);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(principalPage)->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp206);
    uPtr(login)->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    uPtr(login)->Name(MainView::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(login)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    temp35->RowCount(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    temp37->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    temp37->Alignment(8);
    temp37->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::looplogoc7d6ea78()));
    temp38->Alignment(14);
    temp38->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, -15.0f));
    temp38->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Triangulof3f7815d()));
    temp39->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp39->Margin(::g::Uno::Float4__New2(0.0f, -10.0f, 0.0f, 0.0f));
    temp39->ZOffset(2.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    temp40->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp41->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp41->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp41->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    temp41->Alignment(6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    temp42->Padding(::g::Uno::Float4__New2(5.0f, 10.0f, 5.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    temp43->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp43->Color(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    temp43->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp43->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp43->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    temp44->Columns(::STRINGS[58/*"1*,3*"*/]);
    temp44->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 5.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    temp46->Alignment(10);
    temp46->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Mail40099691()));
    temp47->Color(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp47->Width(::g::Uno::UX::Size__New1(1.0f, 1));
    temp47->Alignment(3);
    temp->InputHint(1);
    temp->PlaceholderText(::STRINGS[59/*"Mail"*/]);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp->Padding(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp->Font(MainView::museo100_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp48);
    temp49->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp49->Color(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    temp49->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp49->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp49->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    temp50->Columns(::STRINGS[58/*"1*,3*"*/]);
    temp50->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 5.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    temp52->Alignment(10);
    temp52->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Candadof4e6d4ac()));
    temp53->Color(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp53->Width(::g::Uno::UX::Size__New1(1.0f, 1));
    temp53->Alignment(3);
    temp1->IsPassword(true);
    temp1->PlaceholderText(::STRINGS[60/*"Contraseña"*/]);
    temp1->PlaceholderColor(::g::Uno::Float4__New2(0.3254902f, 0.3254902f, 0.3254902f, 1.0f));
    temp1->Padding(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp1->Font(MainView::museo100_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp54);
    temp55->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp55->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp55->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp55->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    temp56->Value(::STRINGS[61/*"INICIAR SES...*/]);
    temp56->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp56->Alignment(10);
    temp56->Font(MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb42);
    temp58->add_Handler(uDelegate::New(::TYPES[17/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb42)));
    temp2->TextWrapping(1);
    temp2->FontSize(12.0f);
    temp2->TextAlignment(1);
    temp2->TextColor(::g::Uno::Float4__New2(1.0f, 0.0f, 0.0f, 1.0f));
    temp2->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp2->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp2->Font(MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp59);
    uPtr(inicio)->Name(MainView::__selector5());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(inicio)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    temp60->Active(middle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), left);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), middle);
    temp61->Active(middle);
    uPtr(left)->Name(MainView::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(left)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), leftControl);
    uPtr(leftControl)->Interaction(0);
    uPtr(leftControl)->Name(MainView::__selector7());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(leftControl)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), informe);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(leftControl)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), calificacion);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(leftControl)->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp64);
    uPtr(informe)->Name(MainView::__selector8());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(informe)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    uPtr(calificacion)->Name(MainView::__selector9());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(calificacion)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    uPtr(middle)->Name(MainView::__selector10());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(middle)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), top);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), center);
    temp66->Active(center);
    temp67->SwipeDirection(3);
    uPtr(top)->Name(MainView::__selector11());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(top)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), controlPerfil);
    uPtr(controlPerfil)->Interaction(0);
    uPtr(controlPerfil)->Name(MainView::__selector12());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(controlPerfil)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), pagPerfil);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(controlPerfil)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), pagConfigura);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(controlPerfil)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), pagEditaDatos);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(controlPerfil)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), pagEditaClave);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(controlPerfil)->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp182);
    uPtr(pagPerfil)->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    uPtr(pagPerfil)->Name(MainView::__selector13());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagPerfil)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp82);
    temp69->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    temp69->Alignment(7);
    temp69->Margin(::g::Uno::Float4__New2(14.0f, 14.0f, 14.0f, 14.0f));
    temp69->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_configuraa89845d6()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp71);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp71, pagConfigura);
    temp72->Margin(::g::Uno::Float4__New2(0.0f, 100.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp73->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    temp73->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 50.0f));
    temp73->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::looplogoc7d6ea78()));
    temp74->Columns(::STRINGS[62/*"auto,auto"*/]);
    temp74->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    temp3->FontSize(27.0f);
    temp3->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Padding(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp3->Font(MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp75);
    temp4->FontSize(27.0f);
    temp4->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp4->Padding(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp4->Font(MainView::museo100_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp76);
    temp77->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp77->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp77->Alignment(12);
    temp77->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    temp78->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp78->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp78->Alignment(12);
    temp78->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    temp5->FontSize(14.0f);
    temp5->TextAlignment(1);
    temp5->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp5->Margin(::g::Uno::Float4__New2(8.0f, 8.0f, 8.0f, 8.0f));
    temp5->Font(MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp79);
    temp6->FontSize(14.0f);
    temp6->TextAlignment(1);
    temp6->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp6->Margin(::g::Uno::Float4__New2(8.0f, 8.0f, 8.0f, 8.0f));
    temp6->Font(MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp80);
    temp7->FontSize(14.0f);
    temp7->TextAlignment(1);
    temp7->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp7->Margin(::g::Uno::Float4__New2(8.0f, 8.0f, 8.0f, 8.0f));
    temp7->Font(MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp81);
    ::g::Fuse::Controls::DockPanel::SetDock(temp82, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp83);
    temp83->Value(::STRINGS[63/*">"*/]);
    temp83->FontSize(30.0f);
    temp83->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp83->Alignment(10);
    temp83->Margin(::g::Uno::Float4__New2(6.0f, 0.0f, 0.0f, 0.0f));
    temp83->Font(MainView::pres_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    temp84->Degrees(-90.0f);
    uPtr(pagConfigura)->Color(::g::Uno::Float4__New2(0.9333333f, 0.9215686f, 0.9411765f, 1.0f));
    uPtr(pagConfigura)->Name(MainView::__selector14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagConfigura)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp93);
    temp86->Source(MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp89);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp90);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb43);
    temp89->add_Handler(uDelegate::New(::TYPES[17/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb43)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp90, pagPerfil);
    temp91->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp91->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp91->Alignment(8);
    temp91->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 8.0f));
    temp91->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp92);
    temp92->Value(::STRINGS[64/*"CONFIGURACIÓN"*/]);
    temp92->FontSize(14.0f);
    temp92->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp92->Alignment(9);
    temp92->Font(MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp95);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp93->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp104);
    temp94->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp94->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp94->Alignment(4);
    temp95->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp95->Padding(::g::Uno::Float4__New2(15.0f, 10.0f, 15.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp95->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp100);
    temp96->Columns(::STRINGS[65/*"7*,3*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp97);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp98);
    temp97->Value(::STRINGS[66/*"EDITAR PERFIL"*/]);
    temp97->FontSize(16.0f);
    temp97->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp97->Alignment(9);
    temp97->Font(MainView::museo700_letter());
    temp98->Value(::STRINGS[63/*">"*/]);
    temp98->FontSize(24.0f);
    temp98->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp98->Alignment(11);
    temp98->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp98->Font(MainView::pres_letter());
    temp99->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp99->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp99->Alignment(12);
    temp99->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp103);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb44);
    temp101->add_Handler(uDelegate::New(::TYPES[17/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb44)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp102, uCRef<int>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp103, pagEditaDatos);
    temp104->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp104->Margin(::g::Uno::Float4__New2(0.0f, 3.0f, 0.0f, 3.0f));
    temp104->Padding(::g::Uno::Float4__New2(15.0f, 10.0f, 15.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp108);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp109);
    temp105->Columns(::STRINGS[65/*"7*,3*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp105->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp106);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp105->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp107);
    temp106->Value(::STRINGS[67/*"CAMBIAR CON...*/]);
    temp106->FontSize(16.0f);
    temp106->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp106->Alignment(9);
    temp106->Font(MainView::museo700_letter());
    temp107->Value(::STRINGS[63/*">"*/]);
    temp107->FontSize(24.0f);
    temp107->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp107->Alignment(11);
    temp107->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp107->Font(MainView::pres_letter());
    temp108->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp108->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp108->Alignment(12);
    temp108->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp111);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp109->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb45);
    temp110->add_Handler(uDelegate::New(::TYPES[17/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb45)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp111, pagEditaClave);
    uPtr(pagEditaDatos)->Color(::g::Uno::Float4__New2(0.9333333f, 0.9215686f, 0.9411765f, 1.0f));
    uPtr(pagEditaDatos)->Name(MainView::__selector15());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagEditaDatos)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), showEditaDatos);
    uPtr(showEditaDatos)->Visibility(1);
    uPtr(showEditaDatos)->Name(MainView::__selector16());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showEditaDatos)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp112);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showEditaDatos)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp146);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp114);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp122);
    temp113->Source(MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp115);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp116);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp117);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp116, uCRef<int>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp117, pagConfigura);
    temp118->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp118->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp118->Alignment(8);
    temp118->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 8.0f));
    temp118->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp118->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp119);
    temp119->Columns(::STRINGS[62/*"auto,auto"*/]);
    temp119->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp119->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp120);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp119->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp121);
    temp120->Value(::STRINGS[68/*"EDITAR "*/]);
    temp120->FontSize(14.0f);
    temp120->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp120->Font(MainView::museo700_letter());
    temp121->Value(::STRINGS[69/*"DATOS"*/]);
    temp121->FontSize(14.0f);
    temp121->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp121->Font(MainView::museo100_letter());
    temp122->MaxHeight(::g::Uno::UX::Size__New1(500.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp122->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp123);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp123->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp124);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp123->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp125);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp123->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp129);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp123->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp133);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp123->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp137);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp123->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp141);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp123->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp145);
    temp124->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp124->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp124->Source(MainView::logoCircular());
    temp125->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp125->MinHeight(::g::Uno::UX::Size__New1(40.0f, 1));
    temp125->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp125->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp126);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp125->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp125->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp128);
    temp126->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp126->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp126->Alignment(4);
    temp126->Layer(0);
    temp8->TextWrapping(1);
    temp8->FontSize(12.0f);
    temp8->TextAlignment(1);
    temp8->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp8->PlaceholderText(::STRINGS[70/*"Nombre"*/]);
    temp8->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp8->Alignment(10);
    temp8->Font(MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp127);
    temp128->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp128->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp128->Alignment(12);
    temp128->Layer(0);
    temp129->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp129->MinHeight(::g::Uno::UX::Size__New1(40.0f, 1));
    temp129->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    temp129->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp129->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp130);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp129->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp129->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp132);
    temp130->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp130->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp130->Alignment(4);
    temp130->Layer(0);
    temp9->TextWrapping(1);
    temp9->FontSize(12.0f);
    temp9->TextAlignment(1);
    temp9->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp9->PlaceholderText(::STRINGS[71/*"Apellido"*/]);
    temp9->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp9->Alignment(10);
    temp9->Font(MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp131);
    temp132->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp132->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp132->Alignment(12);
    temp132->Layer(0);
    temp133->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp133->MinHeight(::g::Uno::UX::Size__New1(40.0f, 1));
    temp133->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp133->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp134);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp133->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp133->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp136);
    temp134->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp134->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp134->Alignment(4);
    temp134->Layer(0);
    temp10->TextWrapping(1);
    temp10->FontSize(12.0f);
    temp10->TextAlignment(1);
    temp10->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp10->InputHint(1);
    temp10->PlaceholderText(::STRINGS[72/*"nombre@tuma...*/]);
    temp10->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp10->Alignment(10);
    temp10->Font(MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp135);
    temp136->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp136->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp136->Alignment(12);
    temp136->Layer(0);
    temp137->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp137->MinHeight(::g::Uno::UX::Size__New1(40.0f, 1));
    temp137->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    temp137->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp138);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp137->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp140);
    temp138->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp138->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp138->Alignment(4);
    temp138->Layer(0);
    temp11->TextWrapping(1);
    temp11->FontSize(12.0f);
    temp11->TextAlignment(1);
    temp11->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp11->InputHint(3);
    temp11->PlaceholderText(::STRINGS[73/*"+56 9 91234...*/]);
    temp11->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp11->Alignment(10);
    temp11->Font(MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp139);
    temp140->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp140->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp140->Alignment(12);
    temp140->Layer(0);
    temp141->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp141->MinHeight(::g::Uno::UX::Size__New1(40.0f, 1));
    temp141->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp141->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp142);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp141->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp141->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp144);
    temp142->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp142->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp142->Alignment(4);
    temp142->Layer(0);
    temp12->TextWrapping(1);
    temp12->FontSize(12.0f);
    temp12->TextAlignment(1);
    temp12->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp12->PlaceholderText(::STRINGS[74/*"11-07-1990"*/]);
    temp12->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp12->Alignment(10);
    temp12->Font(MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp143);
    temp144->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp144->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp144->Alignment(12);
    temp144->Layer(0);
    temp145->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp146->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp146->Height(::g::Uno::UX::Size__New1(9.0f, 4));
    temp146->Padding(::g::Uno::Float4__New2(10.0f, 20.0f, 10.0f, 20.0f));
    temp146->ZOffset(3.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp146, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp147);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp148);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp146->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp149);
    temp147->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp147->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp147->Alignment(4);
    temp147->Layer(0);
    temp148->Value(::STRINGS[75/*"Guardar!"*/]);
    temp148->FontSize(12.5f);
    temp148->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp148->Alignment(10);
    temp148->Font(MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp150);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp151);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp152);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp149->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb46);
    temp150->add_Handler(uDelegate::New(::TYPES[17/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb46)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp151, uCRef<int>(1));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp152, pagConfigura);
    uPtr(pagEditaClave)->Color(::g::Uno::Float4__New2(0.9333333f, 0.9215686f, 0.9411765f, 1.0f));
    uPtr(pagEditaClave)->Name(MainView::__selector17());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pagEditaClave)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp153);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp154);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp153->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp177);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp155);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp156);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp159);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp163);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp167);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp171);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp175);
    temp155->Source(MainView::cabecera());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp156->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp157);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp157->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp158);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp158, pagConfigura);
    temp159->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp159->Height(::g::Uno::UX::Size__New1(28.0f, 1));
    temp159->Alignment(8);
    temp159->Margin(::g::Uno::Float4__New2(0.0f, 26.0f, 0.0f, 8.0f));
    temp159->Padding(::g::Uno::Float4__New2(14.0f, 0.0f, 14.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp160);
    temp160->Columns(::STRINGS[62/*"auto,auto"*/]);
    temp160->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp160->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp161);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp160->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp162);
    temp161->Value(::STRINGS[76/*"CAMBIAR "*/]);
    temp161->FontSize(14.0f);
    temp161->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp161->Font(MainView::museo700_letter());
    temp162->Value(::STRINGS[77/*"CONTRASEÑA"*/]);
    temp162->FontSize(14.0f);
    temp162->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp162->Font(MainView::museo100_letter());
    temp163->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp163->MinHeight(::g::Uno::UX::Size__New1(50.0f, 1));
    temp163->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp163->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp164);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp163->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp163->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp166);
    temp164->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp164->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp164->Alignment(4);
    temp164->Layer(0);
    temp13->IsPassword(true);
    temp13->TextWrapping(1);
    temp13->FontSize(12.0f);
    temp13->TextAlignment(1);
    temp13->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp13->PlaceholderText(::STRINGS[78/*"Contraseña ...*/]);
    temp13->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp13->Alignment(10);
    temp13->Font(MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp165);
    temp166->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp166->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp166->Alignment(12);
    temp166->Layer(0);
    temp167->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp167->MinHeight(::g::Uno::UX::Size__New1(50.0f, 1));
    temp167->Margin(::g::Uno::Float4__New2(0.0f, 8.0f, 0.0f, 8.0f));
    temp167->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp168);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp170);
    temp168->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp168->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp168->Alignment(4);
    temp168->Layer(0);
    temp14->IsPassword(true);
    temp14->TextWrapping(1);
    temp14->FontSize(12.0f);
    temp14->TextAlignment(1);
    temp14->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp14->PlaceholderText(::STRINGS[79/*"Nueva Contr...*/]);
    temp14->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp14->Alignment(10);
    temp14->Font(MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp169);
    temp170->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp170->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp170->Alignment(12);
    temp170->Layer(0);
    temp171->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp171->MinHeight(::g::Uno::UX::Size__New1(50.0f, 1));
    temp171->Padding(::g::Uno::Float4__New2(14.0f, 5.0f, 14.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp172);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp174);
    temp172->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp172->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp172->Alignment(4);
    temp172->Layer(0);
    temp15->IsPassword(true);
    temp15->TextWrapping(1);
    temp15->FontSize(12.0f);
    temp15->TextAlignment(1);
    temp15->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp15->PlaceholderText(::STRINGS[80/*"Repetir Nue...*/]);
    temp15->PlaceholderColor(::g::Uno::Float4__New2(0.7882353f, 0.7882353f, 0.7882353f, 1.0f));
    temp15->Alignment(10);
    temp15->Font(MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp173);
    temp174->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp174->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp174->Alignment(12);
    temp174->Layer(0);
    temp175->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp16->TextWrapping(1);
    temp16->FontSize(12.0f);
    temp16->TextAlignment(1);
    temp16->TextColor(::g::Uno::Float4__New2(1.0f, 0.0f, 0.0f, 1.0f));
    temp16->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp16->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp16->Font(MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp176);
    temp177->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    temp177->Height(::g::Uno::UX::Size__New1(9.0f, 4));
    temp177->Padding(::g::Uno::Float4__New2(10.0f, 20.0f, 10.0f, 20.0f));
    temp177->ZOffset(2.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp177, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp177->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp178);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp177->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp179);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp177->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp180);
    temp178->Color(::g::Uno::Float4__New2(0.8235294f, 0.8235294f, 0.8235294f, 1.0f));
    temp178->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp178->Alignment(4);
    temp178->Layer(0);
    temp179->Value(::STRINGS[81/*"Cambiar!"*/]);
    temp179->FontSize(12.5f);
    temp179->TextAlignment(1);
    temp179->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp179->Alignment(8);
    temp179->Font(MainView::museo700_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Actions()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp181);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb47);
    temp181->add_Handler(uDelegate::New(::TYPES[17/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb47)));
    uPtr(center)->Color(::g::Uno::Float4__New2(0.0f, 0.8509804f, 0.772549f, 1.0f));
    uPtr(center)->Name(MainView::__selector18());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(center)->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp183);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp184);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp191);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp183->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp196);
    temp184->Width(::g::Uno::UX::Size__New1(10.0f, 4));
    temp184->Alignment(6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp184->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp185);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp184->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp188);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp184->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp189);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp185->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp186);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp185->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp187);
    temp186->Value(::STRINGS[63/*">"*/]);
    temp186->FontSize(24.0f);
    temp186->TextAlignment(1);
    temp186->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp186->Margin(::g::Uno::Float4__New2(0.0f, 2.0f, 0.0f, 0.0f));
    temp186->Font(MainView::pres_letter());
    temp187->Degrees(270.0f);
    temp188->Alignment(10);
    temp188->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp188->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Perfil02eda766()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp189->Nodes()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp190);
    temp190->SwipeDirection(3);
    temp191->ColumnCount(2);
    temp191->Width(::g::Uno::UX::Size__New1(20.0f, 4));
    temp191->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp191->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp192);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp191->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp195);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp192->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp193);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp192->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp194);
    temp193->Value(::STRINGS[63/*">"*/]);
    temp193->FontSize(24.0f);
    temp193->TextAlignment(1);
    temp193->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp193->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp193->Font(MainView::pres_letter());
    temp194->Degrees(180.0f);
    temp195->Alignment(1);
    temp195->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    temp195->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::img_Progreso927c7883()));
    temp196->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp196->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp197);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp196->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp198);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp196->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp199);
    temp197->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    temp197->File(::g::Uno::UX::BundleFileSource::New1(::g::LOOP_bundle::looplogoc7d6ea78()));
    temp198->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp199->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp199->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp199->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp200);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp199->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp201);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp199->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp204);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp199->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp205);
    temp200->Value(::STRINGS[82/*"¡HOLA"*/]);
    temp200->FontSize(26.0f);
    temp200->TextAlignment(1);
    temp200->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp200->Font(MainView::museo700_letter());
    temp201->Columns(::STRINGS[62/*"auto,auto"*/]);
    temp201->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp201->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp201->Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp203);
    temp17->FontSize(26.0f);
    temp17->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp17->Font(MainView::museo300_letter());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp202);
    temp203->Value(::STRINGS[83/*"!"*/]);
    temp203->FontSize(24.0f);
    temp203->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp203->Font(MainView::museo300_letter());
    temp204->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp204->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp204->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 15.0f));
    temp205->Value(::STRINGS[84/*"¿Qué quiere...*/]);
    temp205->FontSize(14.0f);
    temp205->TextAlignment(1);
    temp205->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp205->Font(MainView::museo700_letter());
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), principalPage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), login);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), inicio);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), left);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), leftControl);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), informe);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), calificacion);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), middle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), top);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), controlPerfil);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), pagPerfil);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), pagConfigura);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), pagEditaDatos);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), showEditaDatos);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), pagEditaClave);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), center);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
}

// public MainView New() [static] :120
MainView* MainView::New2()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
