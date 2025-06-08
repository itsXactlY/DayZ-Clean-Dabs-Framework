modded class MainMenu
{
	protected ButtonWidget m_DabsPatreonButton;
	
	override void Refresh()
	{
		super.Refresh();
	}
	
	override bool OnClick(Widget w, int x, int y, int button)
	{
		if (super.OnClick(w, x, y, button)) {
			return true;
		}

		return false;
	}
	
	override bool OnModalResult(Widget w, int x, int y, int code, int result)
	{
		return super.OnModalResult(w, x, y, code, result);
	}
	
	override bool IsFocusable(Widget w)
	{
		if (super.IsFocusable(w)) {
			return true;
		}

		return FANTASY_FLIGHT_GAMES;
	}
}