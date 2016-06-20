[Uno.Compiler.UxGenerated]
public partial class Checkbox: Fuse.Controls.ToggleControl
{
    float4 _field_TextColor;
    [global::Uno.UX.UXOriginSetter("SetTextColor")]
    public float4 TextColor
    {
        get { return _field_TextColor; }
        set { SetTextColor(value, null); }
    }
    public void SetTextColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_TextColor)
        {
            _field_TextColor = value;
            OnPropertyChanged("TextColor", origin);
        }
    }
    global::Uno.UX.Property<float4> checkbox_TextColor_inst;
    global::Uno.UX.Property<float4> this_TextColor_inst;
    global::Uno.UX.Property<string> checkbox_Value_inst;
    [global::Uno.UX.UXGlobalResource("fa_icons")] public static readonly Fuse.Font fa_icons;
    internal Fuse.Controls.Text checkbox;
    static Checkbox()
    {
        fa_icons = new Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../Assets/Fonts/fontawesome-webfont.ttf")));
        global::Uno.UX.Resource.SetGlobalKey(fa_icons, "fa_icons");
    }
    [global::Uno.UX.UXConstructor]
    public Checkbox()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        checkbox = new Fuse.Controls.Text();
        checkbox_TextColor_inst = new LOOP_FuseControlsText_TextColor_Property(checkbox, __selector0);
        this_TextColor_inst = new LOOP_Checkbox_TextColor_Property(this, __selector0);
        checkbox_Value_inst = new LOOP_FuseControlsText_Value_Property(checkbox, __selector1);
        var temp = new Fuse.Gestures.Clicked();
        var temp1 = new Fuse.Controls.Toggle();
        var temp2 = new Fuse.Controls.Rectangle();
        var temp3 = new Fuse.Drawing.Stroke();
        var temp4 = new Fuse.Rotation();
        var temp5 = new Fuse.Controls.PropertyBinding<float4>(checkbox_TextColor_inst, this_TextColor_inst);
        var temp6 = new Fuse.Triggers.WhileTrue();
        var temp7 = new Fuse.Animations.Change<string>(checkbox_Value_inst);
        var temp8 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp.Actions.Add(temp1);
        temp1.Target = this;
        temp2.Width = new Uno.UX.Size(18f, Uno.UX.Unit.Unspecified);
        temp2.Height = new Uno.UX.Size(18f, Uno.UX.Unit.Unspecified);
        temp2.Fill = temp8;
        temp2.Strokes.Add(temp3);
        temp2.Children.Add(checkbox);
        temp2.Children.Add(temp6);
        temp3.Color = float4(0.8235294f, 0.8235294f, 0.8235294f, 1f);
        temp3.Width = 1f;
        checkbox.FontSize = 18f;
        checkbox.Name = __selector2;
        checkbox.Font = global::Checkbox.fa_icons;
        checkbox.Children.Add(temp4);
        checkbox.Bindings.Add(temp5);
        temp4.Degrees = -10f;
        temp6.Source = this;
        temp6.Animators.Add(temp7);
        temp7.Value = "\uF00C";
        this.Children.Add(temp);
        this.Children.Add(temp2);
    }
    static global::Uno.UX.Selector __selector0 = "TextColor";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "checkbox";
}
