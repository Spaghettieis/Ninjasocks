modded class PluginRecipesManagerBase extends PluginBase
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		RegisterRecipe(new seis_CraftNinjaSocksDye);
		RegisterRecipe(new seis_CraftNinjaSocksHard);
		RegisterRecipe(new seis_CraftNinjaSocksDyeHard1);
		RegisterRecipe(new seis_CraftNinjaSocksDyeHard2);
	}
};