[

https://github.com/user-attachments/assets/68288c1d-87c2-416f-ae1b-c3a8075222aa

# Better Panel for Windows 11

Better Panel for Windows 11 is a Windhawk mod that turns File Explorer's modern
Details pane into a more useful preview and file-action panel. It adds media
playback, responsive previews, archive tools, inline rename, and cross-tab file
operations while keeping the controls close to Windows 11's native appearance.

## Warning: compatibility

> **Windows 11 25H2 x64 is the only version currently confirmed working.** The
> mod has been tested on Windows 11 25H2 build 26200.8875.
>
> Windows 11 24H2 x64 is expected to work because Microsoft states that 24H2
> and 25H2 share the same core operating system and system files, but the mod
> has not yet been tested on an actual 24H2 installation. Earlier Windows 11
> releases and Windows 11 26H1 are untested. ARM64 and Windows 10 are not
> supported by the current build.

Better Panel uses private Explorer WinUI elements. A Windows update can change
those elements and require a mod update even on an otherwise compatible release.

## Important conflict warning

Explorer permits only one XAML diagnostics consumer at a time. Do not enable
Better Panel together with another File Explorer mod that uses XAML diagnostics.
The mod includes a compatibility setting that can alert, block, or allow a
competing diagnostics consumer but does not guarantee it will run.

## Features

- Middle-click a folder to request Explorer's native **Open in new tab** action.
- A custom Home panel with drives, capacity bars, available space, and recent
  folders that navigate in the active Explorer tab.
- Drive shortcuts, storage statistics, volume and filesystem information, Disk
  Cleanup, Optimize Drives, and Windows Storage controls.
- Folder and multiple-selection analysis with size, file and subfolder counts,
  file types, and modified-date summaries.
- Native-looking Share, Open, and Open with controls.
- File-type icons, one clean title row, and pencil-button inline renaming.
- Responsive image previews and animated GIF playback.
- Inline PDF viewing with page navigation, page counts, scrolling, and sharp
  50–250% re-rendered zoom.
- A Print button for PDFs, text, images, and other file types that expose a
  registered Windows print action.
- Inline preview and editing for TXT, Markdown, JSON, XML, YAML, INI, LOG, CSV,
  scripts, configuration files, and common source-code formats.
- Explicit Edit, Save, Cancel, and Reload controls with encoding and line-ending
  preservation, external-change detection, and safe size limits.
- Audio playback with artwork, play/pause, previous/next file, playback speed,
  repeat, shuffle, timeline, volume, mute, and elapsed/total time.
- Editable audio metadata for title, artist, album, genre, year, rating, tags,
  and comments, with Save, Cancel, Reload, and Copy All controls.
- Compact audio filename and play/pause controls remain available when the full
  media preview is hidden.
- Video playback with responsive sizing and compact auto-hiding controls.
- Automatic playback cleanup when selection changes or Explorer closes.
- Archive extraction through Windows, WinRAR, 7-Zip, or WinZip-compatible tools.
- Inline ZIP, RAR, and 7Z archive contents preview before extraction.
- Extract here, Extract to..., and Extract to "archive-name\\" choices.
- Cross-tab extraction and moving to any open filesystem folder or selected
  destination subfolder.
- Multi-selection Move to..., recycle-aware Delete, and Archive actions.
- A replacement Details section with individually copyable name, full
  path, size, modified date, and SHA-256 values.
- EXIF details for supported images, including dimensions, camera information,
  date taken, rating, and GPS coordinates when available.
- Rich multi-selection summaries with item/file/folder counts, combined file
  size, file-type totals, and modified-date ranges.
- A compact preview show/hide control and one-click copying of all core details.

Playback depends on codecs available to Windows. Print appears only when the
selected file type has a print handler registered in Windows. Archive choices
depend on the archive applications and shell integrations installed on the
computer. Metadata editing depends on the audio format's Windows property
handler; some formats may expose only part of the metadata or be read-only.

## Known limitations

- Middle-click depends on Explorer's native **Open in new tab** command. Some
  virtual folders, protected locations, special shell items, and third-party
  folder types may open in a new window or may not respond.

## Installation

### From the Windhawk catalog

Once the mod is accepted into the official Windhawk catalog, search for
**Better Panel for Windows 11** in Windhawk and select **Install**.

### Install the source locally

1. Install [Windhawk](https://windhawk.net/).
2. Download `better-panel-for-windows-11.wh.cpp` from this repository.
3. Use Windhawk's local mod editor to create a mod and replace the generated
   source with the downloaded file.
4. Compile the mod and enable it.
5. Open File Explorer and turn on **View > Show > Details pane**.

Windhawk's official guide explains the local mod format and editor workflow:
[Creating a new mod](https://github.com/ramensoftware/windhawk/wiki/Creating-a-new-mod).

## Reporting a problem

Open a GitHub issue and include:

- Windows edition, version, and OS build.
- Windhawk version.
- File type involved.
- Whether the problem occurs with one file or multiple selected files.
- Clear reproduction steps and, when useful, a screenshot.
- Other enabled File Explorer or XAML-related Windhawk mods.

## License and attribution

Copyright (C) 2026 Nicole S.

Better Panel is its own separate mod. Its XAML diagnostics compatibility layer
allows Explorer functionality that needs the single diagnostics connection to
work together; it does not make Better Panel a theme or styling mod.

Distributed under the [GNU General Public License v3.0 or later](LICENSE).
](https://github.com/user-attachments/assets/68288c1d-87c2-416f-ae1b-c3a8075222aa

# Better Panel for Windows 11

Better Panel for Windows 11 is a Windhawk mod that turns File Explorer’s basic Details pane into a full preview and file-action panel. It adds media playback, responsive previews, archive tools, file information, inline editing, and cross-tab file operations while staying close to Windows 11’s native appearance.

## ⚠️ Compatibility

| Windows version                   | Architecture | Status                                       |
| --------------------------------- | -----------: | -------------------------------------------- |
| Windows 11 25H2, build 26200.8875 |          x64 | ✅ Confirmed working                          |
| Windows 11 24H2                   |          x64 | ⚠️ Expected to work, but not directly tested |
| Earlier Windows 11 releases       |          x64 | ❔ Untested                                   |
| Windows 11 26H1                   |          x64 | ❔ Untested                                   |
| Windows 11                        |        ARM64 | ❌ Not supported                              |
| Windows 10                        | x64 or ARM64 | ❌ Not supported                              |

> [!WARNING]
> Better Panel uses private Explorer WinUI elements. Windows updates may change these elements and require an update to the mod, even on an otherwise supported Windows version.

## ⚠️ XAML diagnostics conflict

> [!IMPORTANT]
> File Explorer only allows one XAML diagnostics consumer at a time. Do not enable Better Panel alongside another File Explorer mod that also uses XAML diagnostics.

Better Panel includes a compatibility setting that can alert you, block the competing consumer, or allow it to take over. Allowing another consumer to take over may stop Better Panel from working.

## Features

### File Explorer and navigation

* Middle-click folders to open them in a new Explorer tab.
* Custom Home panel with drives, capacity bars, available space, and recently visited folders.
* Navigate between available drives directly from the Details pane.
* Native-looking **Share**, **Open**, and **Open with** buttons.
* File-type icons, a cleaner title row, and pencil-button inline renaming.
* Compact preview show and hide control.

### Drive information and tools

* Used, free, and total drive space.
* Drive capacity bars.
* Volume label, filesystem, drive type, and serial number.
* Quick access to **Disk Cleanup**, **Optimize Drives**, and **Windows Storage** settings.

### Folder and multiple-selection details

* Folder size.
* File and subfolder counts.
* File-type totals.
* Combined size of selected files and folders.
* Earliest and latest modified dates.
* Native **Move to**, recycle-aware **Delete**, and **Archive** actions for multiple selections.

### Images and GIFs

* Responsive image previews.
* Animated GIF playback.
* Image dimensions and supported EXIF information.
* Camera details, date taken, rating, and GPS coordinates when available.

### PDF previews and printing

* Inline PDF viewing.
* Page navigation and page counts.
* Smooth scrolling.
* Sharp re-rendered zoom from 50% to 250%.
* Printing for PDFs, text, images, and other supported file types.

### Text and code files

* Preview and edit TXT, Markdown, JSON, XML, YAML, INI, LOG, CSV, scripts, configuration files, and common source-code formats.
* **Edit**, **Save**, **Cancel**, and **Reload** controls.
* Encoding and line-ending preservation.
* External file-change detection.
* Safe preview and editing size limits.

### Audio playback and metadata

* Album artwork.
* Play, pause, previous file, and next file controls.
* Playback speed, repeat, and shuffle.
* Timeline with elapsed and total time.
* Volume and mute controls.
* Compact filename and playback controls when the full preview is hidden.
* Edit title, artist, album, genre, year, rating, tags, and comments.
* **Save**, **Cancel**, **Reload**, and **Copy All** metadata controls.

### Video playback

* Responsive video sizing.
* Compact auto-hiding playback controls.
* Automatic playback cleanup when the selection changes or Explorer closes.

### Archive tools

* Preview the contents of ZIP, RAR, and 7Z archives before extraction.
* Extract archives using Windows, WinRAR, 7-Zip, or WinZip-compatible tools.
* **Extract here**, **Extract to...**, and **Extract to “archive-name\”** options.
* Extract archives into any open Explorer folder or selected destination subfolder.

### File details

* Copy individual values for name, full path, size, modified date, and SHA-256.
* Copy all core file details with one button.

## Feature requirements

> [!NOTE]
>
> * Media playback depends on the codecs installed in Windows.
> * The **Print** button only appears when Windows has a print action registered for the selected file type.
> * Archive options depend on the archive applications and shell integrations installed on the computer.
> * Audio metadata editing depends on the format’s Windows property handler. Some formats may expose only limited information or may be read-only.

## Known limitations

* Middle-click uses Explorer’s native **Open in new tab** command. Some virtual folders, protected locations, special shell items, and third-party folder types may open in a new window or may not respond.

## Installation

### Install from the Windhawk catalog

Once Better Panel is accepted into the official Windhawk catalog:

1. Open Windhawk.
2. Search for **Better Panel for Windows 11**.
3. Select **Install**.

### Install the source locally

1. Install [Windhawk](https://windhawk.net/).
2. Download `better-panel-for-windows-11.wh.cpp` from this repository.
3. Open Windhawk’s local mod editor.
4. Create a new mod and replace the generated source with the downloaded file.
5. Compile and enable the mod.
6. Open File Explorer.
7. Enable **View > Show > Details pane**.

For more information, see Windhawk’s official [Creating a new mod](https://github.com/ramensoftware/windhawk/wiki/Creating-a-new-mod) guide.

## Reporting a problem

Open a GitHub issue and include:

* Your Windows edition, version, and OS build.
* Your Windhawk version.
* The file type involved.
* Whether it happens with one file or multiple selected files.
* Clear steps for reproducing the problem.
* A screenshot or screen recording when useful.
* Any other enabled File Explorer or XAML-related Windhawk mods.

## License and attribution

Copyright © 2026 Nicole S.

Better Panel is a separate mod with its own identity and features. Its XAML diagnostics compatibility layer allows Explorer features that require the single diagnostics connection to work together. It does not make Better Panel a theme or styling mod.

Distributed under the [GNU General Public License v3.0 or later](LICENSE).
)
