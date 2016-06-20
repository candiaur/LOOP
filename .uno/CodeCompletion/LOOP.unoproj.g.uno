sealed class LOOP_FuseControlsText_TextColor_Property: Uno.UX.Property<float4>
{
    Fuse.Controls.Text _obj;
    public LOOP_FuseControlsText_TextColor_Property(Fuse.Controls.Text obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.TextColor; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.TextColor = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class LOOP_FuseReactiveEach_Items_Property: Uno.UX.Property<object>
{
    Fuse.Reactive.Each _obj;
    public LOOP_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get() { return _obj.Items; }
    public override void Set(object v, global::Uno.UX.IPropertyListener origin) { _obj.Items = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class LOOP_FuseControlsText_Value_Property: Uno.UX.Property<string>
{
    Fuse.Controls.Text _obj;
    public LOOP_FuseControlsText_Value_Property(Fuse.Controls.Text obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Value; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class LOOP_FuseControlsImage_Url_Property: Uno.UX.Property<string>
{
    Fuse.Controls.Image _obj;
    public LOOP_FuseControlsImage_Url_Property(Fuse.Controls.Image obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Url; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.Url = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class LOOP_FuseTriggersActionsSetFuseVisual_Value_Property: Uno.UX.Property<Fuse.Visual>
{
    Fuse.Triggers.Actions.Set<Fuse.Visual> _obj;
    public LOOP_FuseTriggersActionsSetFuseVisual_Value_Property(Fuse.Triggers.Actions.Set<Fuse.Visual> obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Visual Get() { return _obj.Value; }
    public override void Set(Fuse.Visual v, global::Uno.UX.IPropertyListener origin) { _obj.Value = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property: Uno.UX.Property<Fuse.Elements.Visibility>
{
    Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility> _obj;
    public LOOP_FuseTriggersActionsSetFuseElementsVisibility_Value_Property(Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility> obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Visibility Get() { return _obj.Value; }
    public override void Set(Fuse.Elements.Visibility v, global::Uno.UX.IPropertyListener origin) { _obj.Value = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class LOOP_FuseControlsDockPanel_IsEnabled_Property: Uno.UX.Property<bool>
{
    Fuse.Controls.DockPanel _obj;
    public LOOP_FuseControlsDockPanel_IsEnabled_Property(Fuse.Controls.DockPanel obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get() { return _obj.IsEnabled; }
    public override void Set(bool v, global::Uno.UX.IPropertyListener origin) { _obj.IsEnabled = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class LOOP_FuseControlsText_Visibility_Property: Uno.UX.Property<Fuse.Elements.Visibility>
{
    Fuse.Controls.Text _obj;
    public LOOP_FuseControlsText_Visibility_Property(Fuse.Controls.Text obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Visibility Get() { return _obj.Visibility; }
    public override void Set(Fuse.Elements.Visibility v, global::Uno.UX.IPropertyListener origin) { _obj.SetVisibility(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class LOOP_FuseControlsTextInput_Value_Property: Uno.UX.Property<string>
{
    Fuse.Controls.TextInput _obj;
    public LOOP_FuseControlsTextInput_Value_Property(Fuse.Controls.TextInput obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get() { return _obj.Value; }
    public override void Set(string v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class LOOP_FuseControlsCircle_Color_Property: Uno.UX.Property<float4>
{
    Fuse.Controls.Circle _obj;
    public LOOP_FuseControlsCircle_Color_Property(Fuse.Controls.Circle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.Color; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class LOOP_Checkbox_Value_Property: Uno.UX.Property<bool>
{
    Checkbox _obj;
    public LOOP_Checkbox_Value_Property(Checkbox obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get() { return _obj.Value; }
    public override void Set(bool v, global::Uno.UX.IPropertyListener origin) { _obj.SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class LOOP_FuseControlsStackPanel_Visibility_Property: Uno.UX.Property<Fuse.Elements.Visibility>
{
    Fuse.Controls.StackPanel _obj;
    public LOOP_FuseControlsStackPanel_Visibility_Property(Fuse.Controls.StackPanel obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Visibility Get() { return _obj.Visibility; }
    public override void Set(Fuse.Elements.Visibility v, global::Uno.UX.IPropertyListener origin) { _obj.SetVisibility(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class LOOP_FuseTriggersWhileTrue_Value_Property: Uno.UX.Property<bool>
{
    Fuse.Triggers.WhileTrue _obj;
    public LOOP_FuseTriggersWhileTrue_Value_Property(Fuse.Triggers.WhileTrue obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get() { return _obj.Value; }
    public override void Set(bool v, global::Uno.UX.IPropertyListener origin) { _obj.Value = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class LOOP_FuseTriggersWhileFalse_Value_Property: Uno.UX.Property<bool>
{
    Fuse.Triggers.WhileFalse _obj;
    public LOOP_FuseTriggersWhileFalse_Value_Property(Fuse.Triggers.WhileFalse obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get() { return _obj.Value; }
    public override void Set(bool v, global::Uno.UX.IPropertyListener origin) { _obj.Value = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class LOOP_FuseControlsDockPanel_Visibility_Property: Uno.UX.Property<Fuse.Elements.Visibility>
{
    Fuse.Controls.DockPanel _obj;
    public LOOP_FuseControlsDockPanel_Visibility_Property(Fuse.Controls.DockPanel obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Visibility Get() { return _obj.Visibility; }
    public override void Set(Fuse.Elements.Visibility v, global::Uno.UX.IPropertyListener origin) { _obj.SetVisibility(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class LOOP_FuseControlsGrid_Visibility_Property: Uno.UX.Property<Fuse.Elements.Visibility>
{
    Fuse.Controls.Grid _obj;
    public LOOP_FuseControlsGrid_Visibility_Property(Fuse.Controls.Grid obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Visibility Get() { return _obj.Visibility; }
    public override void Set(Fuse.Elements.Visibility v, global::Uno.UX.IPropertyListener origin) { _obj.SetVisibility(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class LOOP_FuseControlsCircle_LengthAngleDegrees_Property: Uno.UX.Property<float>
{
    Fuse.Controls.Circle _obj;
    public LOOP_FuseControlsCircle_LengthAngleDegrees_Property(Fuse.Controls.Circle obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get() { return _obj.LengthAngleDegrees; }
    public override void Set(float v, global::Uno.UX.IPropertyListener origin) { _obj.LengthAngleDegrees = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class LOOP_FuseControlsImage_Source_Property: Uno.UX.Property<Fuse.Resources.ImageSource>
{
    Fuse.Controls.Image _obj;
    public LOOP_FuseControlsImage_Source_Property(Fuse.Controls.Image obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Resources.ImageSource Get() { return _obj.Source; }
    public override void Set(Fuse.Resources.ImageSource v, global::Uno.UX.IPropertyListener origin) { _obj.Source = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class LOOP_FuseControlsPageControl_Active_Property: Uno.UX.Property<Fuse.Visual>
{
    Fuse.Controls.PageControl _obj;
    public LOOP_FuseControlsPageControl_Active_Property(Fuse.Controls.PageControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Visual Get() { return _obj.Active; }
    public override void Set(Fuse.Visual v, global::Uno.UX.IPropertyListener origin) { _obj.Active = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class LOOP_Checkbox_TextColor_Property: Uno.UX.Property<float4>
{
    Checkbox _obj;
    public LOOP_Checkbox_TextColor_Property(Checkbox obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.TextColor; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.SetTextColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class LOOP_Operation_Opacity_Property: Uno.UX.Property<float>
{
    Operation _obj;
    public LOOP_Operation_Opacity_Property(Operation obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get() { return _obj.Opacity; }
    public override void Set(float v, global::Uno.UX.IPropertyListener origin) { _obj.SetOpacity(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class LOOP_FuseDrawingSolidColor_Color_Property: Uno.UX.Property<float4>
{
    Fuse.Drawing.SolidColor _obj;
    public LOOP_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get() { return _obj.Color; }
    public override void Set(float4 v, global::Uno.UX.IPropertyListener origin) { _obj.SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class LOOP_FuseControlsPage_IsEnabled_Property: Uno.UX.Property<bool>
{
    Fuse.Controls.Page _obj;
    public LOOP_FuseControlsPage_IsEnabled_Property(Fuse.Controls.Page obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get() { return _obj.IsEnabled; }
    public override void Set(bool v, global::Uno.UX.IPropertyListener origin) { _obj.IsEnabled = v; }
    public override bool SupportsOriginSetter { get { return false; } }
}
sealed class LOOP_FuseControlsPage_Visibility_Property: Uno.UX.Property<Fuse.Elements.Visibility>
{
    Fuse.Controls.Page _obj;
    public LOOP_FuseControlsPage_Visibility_Property(Fuse.Controls.Page obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Visibility Get() { return _obj.Visibility; }
    public override void Set(Fuse.Elements.Visibility v, global::Uno.UX.IPropertyListener origin) { _obj.SetVisibility(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
