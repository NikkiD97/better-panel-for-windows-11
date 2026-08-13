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

## Known issue: screen recording and media capture

Screen-recording or capture software that uses GPU hardware acceleration,
hardware video encoding, overlays, or system-audio capture may conflict with
Explorer's media pipeline while Better Panel is previewing audio or video. This
can cause playback glitches, missing frames, slow interface updates, or Explorer
instability during recording even when the same actions work normally without
the recorder running.

If this occurs, try disabling hardware acceleration or system-audio capture in
the recorder, lowering its resolution or frame rate, recording only a selected
region, or closing the recorder before using Better Panel's media preview.

## Features

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
computer.

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

## Important conflict warning

Explorer permits only one XAML diagnostics consumer at a time. Do not enable
Better Panel together with another File Explorer mod that uses XAML diagnostics.
The mod includes a compatibility setting that can alert, block, or allow a
competing diagnostics consumer.

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
