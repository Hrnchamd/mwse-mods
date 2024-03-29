
Weather Adjuster 3.0
---------------------
by Hrnchamd, released 2023-01-10


Summary
-------

Regional weather colours, skies and lighting. Seamless transitions between regions. Clouds can become truly dark at night.

Use the toggle weather editor keybind (default: Shift-F4) during gameplay to edit weather, create presets, and assign presets to regions. Weather Adjuster will transition between presets as you change regions.

You can share your custom weathers with others. All settings are saved in <Data Files/MWSE/config/Weather Adjuster.json>.

This is an MWSE mod for Morrowind. It is not compatible with OpenMW.


Requirements
------------

MGE XE 0.11.0 or later. https://www.nexusmods.com/morrowind/mods/41102
MGE XE 0.15.1 or later is required for skylight settings.
MWSE 2.1. Included with MGE XE.


Installation
------------

Extract the archive to the Data Files directory. Make sure MWSE 2.1 is updated by running its updater.


Usage
-----

Press Shift-F4 to open the editor (this key is re-bindable in the Mod Options menu). There are three tabs: Presets, Regions, and Editor.

Use the Editor tab to change weather colours and save them as new presets. You will have to play around with it. It uses LCh perceptual colour pickers for better selection of colours in the red-orange-yellow range, and makes chromaticity and brightness as independent as possible.

The Atmosphere tab in the editor allows changing the colours used by the High quality atmosphere setting of MGE XE. See the tooltips on each category title for more explanation of each colour.

Use the Preset tab to copy, rename and delete presets.

Use the Region tab to assign presets to regions. While Weather Adjuster is running, it will smoothly transition between presets when you cross regions, even when the weather is transitioning.


Compatibility
-------------

Some sky mods such as Watch the Skies will change sky textures. You can make it compatible by disabling texture changes in Weather Adjuster's MWSE Mod Config menu.

This mod will collide with other mods that change weather on cell change. It mostly causes visual glitches during weather transitions or region transitions.

Known compatibility problems:
Fliggerty's Almanac
XE Sky Variations

XE Sky Variations should be disabled. For other mods, I will add compatibility patches to the Nexus mod page over time.


Notes
-----

Morrowind has fully dynamic colours for all parts of the sky, driven by a few variables that are normally set in morrowind.ini. Weather Adjuster allows you to modify them. There is a less intuitive link; clouds are controlled by fog colour. Normally the game does not allow clouds to go all the way to black at night, only to 10% brightness, but this mod patches the game to allow darker clouds. The clouds will not look exactly the same without the mod active.


Changes
-------

3.0
- For high quality atmosphere rendering, skylight colour controls are added. This allows better control of sky and haze colour, and also opens up unnatural atmospheres that don't use blue shifted haze for distance cues. This requires MGE XE 0.15.1+ to use.
- Time can be changed in 5 min increments with Shift-click on the existing 30 min time buttons.
- The editor's window position is remembered.
- Weather Adjuster events run at high priority for compatibility with other weather mods.

2.0
- The weather adjuster window will appear without the regular inventory menus appearing.
- Texture changes can be disabled for compatibility with other sky mods.
- WeatherAdjuster.dll no longer required.
- Region transitions are paused while in interiors.
- Default keybind fixed to work on a fresh install without visiting settings first.
