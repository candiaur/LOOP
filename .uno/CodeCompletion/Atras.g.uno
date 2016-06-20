[Uno.Compiler.UxGenerated]
public partial class Atras: Fuse.Controls.DockPanel
{
    static Atras()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Atras()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.Text();
        var temp1 = new Fuse.Rotation();
        this.Alignment = Fuse.Elements.Alignment.TopLeft;
        this.Margin = float4(0f, -50f, 0f, 23f);
        this.ZOffset = 2f;
        temp.Value = ">";
        temp.FontSize = 22f;
        temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp.TextColor = float4(1f, 1f, 1f, 1f);
        temp.Padding = float4(14f, 0f, 14f, 0f);
        temp.Font = MainView.pres_letter;
        temp1.Degrees = 180f;
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
