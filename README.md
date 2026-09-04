https://github.com/user-attachments/assets/68288c1d-87c2-416f-ae1b-c3a8075222aa

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

### File Explorer Styler compatibility

Better Panel does not occupy Explorer's XAML Diagnostics connection. It can run
beside Windows 11 File Explorer Styler on the tested Windows 11 25H2 system.

## Features

### File Explorer and navigation

- Middle-click folders to open them in a new Explorer tab.
- Custom Home panel with drives, capacity bars, available space, and saved **Recent** and **Favorites** views.
- Navigate between available drives directly from the Details pane.
- Native-looking **Share**, **Open**, and **Open with** buttons.
- File-type icons, a cleaner title row, and click-to-edit inline renaming.
- Compact preview show and hide control.

### Drive information and tools

- Used, free, and total drive space.
- Drive capacity bars.
- Volume label, filesystem, drive type, and serial number.
- Quick access to **Disk Cleanup**, **Optimize Drives**, and **Windows Storage** settings.

### Folder and multiple-selection details

- Folder size.
- File and subfolder counts.
- File-type totals.
- Combined size of selected files and folders.
- Earliest and latest modified dates.
- Overlapping Windows Shell icons representing the selected item types.
- Native **Move to**, recycle-aware **Delete**, and **Archive** actions for multiple selections.
- Multiple-selection actions stay near the top of the panel for quicker access.

### Images and GIFs

- Responsive image previews.
- Animated GIF playback.
- Image dimensions and supported EXIF information.
- Camera details, date taken, rating, and GPS coordinates when available.

### PDF previews and printing

- Inline PDF viewing.
- Page navigation and page counts.
- Smooth scrolling.
- Sharp re-rendered zoom from 50% to 250%.
- Printing for PDFs, text, images, and other supported file types.

### Text and code files

- Preview and edit TXT, Markdown, JSON, XML, YAML, INI, LOG, CSV, scripts, configuration files, and common source-code formats.
- Syntax highlighting for keywords, strings, comments, numbers, and types.
- Automatic language detection with a manual language selector for Markdown, C/C++, C#, JavaScript, TypeScript, JSON, Python, PowerShell, HTML/XML, CSS, YAML, INI/config, Batch, and SQL.
- **Edit**, **Save**, **Cancel**, and **Reload** controls.
- Saved text-preview size menu.
- Encoding and line-ending preservation.
- External file-change detection.
- Safe preview and editing size limits.

### Audio playback and metadata

- Album artwork.
- Play, pause, previous file, and next file controls.
- Playback speed, repeat, and shuffle.
- Timeline with elapsed and total time.
- Volume and mute controls.
- Compact filename and playback controls when the full preview is hidden.
- Edit title, artist, album, genre, year, rating, tags, and comments.
- **Save**, **Cancel**, **Reload**, and **Copy All** metadata controls.

### Video playback

- Responsive video sizing.
- Compact auto-hiding playback controls.
- Automatic playback cleanup when the selection changes or Explorer closes.

### Archive tools

- Preview the contents of ZIP, RAR, and 7Z archives before extraction.
- Extract archives using Windows, WinRAR, 7-Zip, or WinZip-compatible tools.
- **Extract here**, **Extract to...**, and **Extract to “archive-name\”** options.
- Extract archives into any open Explorer folder or selected destination subfolder.

### Cross-tab file transfers

- Move selected files and folders into another open Explorer tab.
- Use regular folders, selected subfolders, or drive roots as destinations.
- See the selected item and destination directly on the **Move** button.
- Expand **Items being moved** to review the full selection before moving it.

### File details

- Copy individual values for name, full path, size, modified date, and SHA-256.
- Copy all core file details with one button.

### Appearance and controls

- Compact, Comfort, and Custom button layouts.
- Adjustable button margins, padding, minimum dimensions, and icon-button size.
- Optional hover and click animations.
- Live settings updates without restarting Explorer.
- Circular loading indicator when the panel takes longer to open.

## Feature requirements

> [!NOTE]
> - Media playback depends on the codecs installed in Windows.
> - The Print button only appears when Windows has a print action registered for the selected file type.
> - Archive options depend on the archive applications and shell integrations installed on the computer.
> - Audio metadata editing depends on the format’s Windows property handler. Some formats may expose only limited information or may be read-only.

## Known limitations

- Middle-click uses Explorer’s native **Open in new tab** command. Some virtual folders, protected locations, special shell items, and third-party folder types may open in a new window or may not respond.
- Syntax highlighting falls back to plain text for large files to protect Explorer’s performance.

## Installation

### Install from the Windhawk catalog

Once Better Panel is accepted into the official Windhawk catalog:

1. Open Windhawk.
2. Search for **Better Panel for Windows 11**.
3. Select **Install**.

### Install the source locally

1. Install Windhawk.
2. Download `better-panel-for-windows-11.wh.cpp` from this repository.
3. Open Windhawk’s local mod editor.
4. Create a new mod and replace the generated source with the downloaded file.
5. Compile and enable the mod.
6. Open File Explorer.
7. Enable **View > Show > Details pane**.

For more information, see Windhawk’s official Creating a new mod guide.

## Reporting a problem

Open a GitHub issue and include:

- Your Windows edition, version, and OS build.
- Your Windhawk version.
- The file type involved.
- Whether it happens with one file or multiple selected files.
- Clear steps for reproducing the problem.
- A screenshot or screen recording when useful.
- Any other enabled File Explorer or XAML-related Windhawk mods.

## License and attribution

Copyright © 2026 Nicole S.

Better Panel is its own separate mod. It does not contain, fork, or replace
Windows 11 File Explorer Styler and is not a theme or styling mod.

Distributed under the [GNU General Public License v3.0 or later](LICENSE).
