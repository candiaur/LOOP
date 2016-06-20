[Uno.Compiler.UxGenerated]
public partial class udPage: Fuse.Controls.Panel
{
    static udPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public udPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Navigation.EnteringAnimation();
        var temp1 = new Fuse.Animations.Move();
        var temp2 = new Fuse.Navigation.ExitingAnimation();
        var temp3 = new Fuse.Animations.Move();
        temp.Animators.Add(temp1);
        temp1.Y = -1f;
        temp1.RelativeTo = Fuse.TranslationModes.Size;
        temp2.Animators.Add(temp3);
        temp3.Y = 1f;
        temp3.RelativeTo = Fuse.TranslationModes.Size;
        this.Children.Add(temp);
        this.Children.Add(temp2);
    }
}
