# Changelog

## 2.2.1

### Added

- Added bulk rename with prefix, suffix, find and replace, numbering, and a preview before applying.
- Added search inside text, code, INF, LOG, and PDF previews.
- Added highlighted text matches and matching-page controls for PDFs.
- Added Install actions for TTF, OTF, TTC, FON, INF, and REG files.
- Added File actions for mounting ISO/VHD files and installing certificates.
- Added a right-click image-preview menu for rotating images and setting wallpaper.
- Added text preview and editing for INF files.
- Added settings to hide Rename, preview search, Install, and File actions.

### Changed

- Narrow action rows now move buttons onto new lines instead of cutting them off.
- Hiding Rename keeps the file name visible but read-only.
- Hiding preview search keeps the language selector visible.
- Moved Feature visibility below the animation settings.
- Video controls stay readable and inside narrow Details panes.

### Bug

- Photo rotation doesn't auto reload
### Fixed

- File renames now update immediately and the rename box closes when changing folders.
- Fixed the cross-tab Move item list clipping on drive destinations.

## 2.2

### Added

- Added syntax highlighting to text previews.
- Added automatic code-language detection and a manual language selector.
- Added overlapping Shell icons for multiple selections. Duplicate file types are shown once.
- Added an expandable list showing which items are waiting to be moved between tabs.

### Changed

- Cross-tab Move now shows both the selected item and destination folder.
- Drive roots can now be used as cross-tab Move destinations.
- Multiple-selection actions now sit near the top of the panel, with Delete as  a compact icon button.


### Fixed

- Fixed old previews and Open-button icons remaining after selecting an unsupported file type.
- *Potentially* fixed Details-pane recovery after sleep or hibernation.
- Fixed sizing for Copy all and other icon buttons.
## 2.1.2

### Added

- Added a saved text-preview size menu.
- Added Compact, Comfort, and Custom button layouts.

### Changed

- Temporary messages now sit beside the controls they belong to.
- Custom padding and animations are consistent across panel sizes.

## 2.1.2-beta.3

> Adds button customization, animations, and potentially a faster loading for slower PC's

### Added

- Added a circular loading indicator for slower systems.
- Added settings for button margins, padding, height, width, and icon size.
- Added hover animations: Scale, Lift, Tilt, and Spring.
- Added click animations: Press, Pulse, Bounce, Flash, Shake, Spring, Spin,
  Squash, and Wobble.
- Settings update live and can be reset to default.

### Changed

- Buttons now use Explorer's style.
- Home and the Details pane now load faster.

## 2.1.2-beta.2

> **Beta:** This update expands the diagnostics-free Beta 1 build with native
> Favorites integration and a redesigned Home experience. Compatibility with
> Windows 11 File Explorer Styler remains confirmed on the tested Windows 11
> 25H2 system; broader Windows-build testing is still needed.

### Added

- Added a native **Add to Favorites** and **Remove from Favorites** action.
- Added persistent **Recent** and **Favorites** views to the custom Home panel.
- Added Windows Shell icons for Home files, folders, archives, and drives using
  the user's current file associations.
- Added a Delete action for eligible files and folders.

### Changed

- Restyled **Devices and drives** with larger native drive artwork, clearer
  capacity bars, compact spacing, and a flatter classic Explorer layout.
- Moved **Move to** and archive extraction actions below the primary action row
  so they remain visible at the panel's normal height.
- Matched Open, Open with, rename, expand, restore, Print, Delete, and Copy more
  closely to Explorer's native button styling, dimensions, and alignment.
- Replaced the separate rename pencil with click-to-edit title text and refined
  the editor dimensions to prevent clipping.
- Removed the unavailable Share action from folder selections.
- Protected main system and known folders from the panel's Delete action.

### Fixed

- Fixed folder actions and destination transfer controls being unavailable or
  positioned below the panel's normally visible area.

## 2.0.0-beta.1

> **Beta:** The new diagnostics-free Better Details-panel integration has been
> confirmed on the tested Windows 11 25H2 system. Other Windows builds and mod
> combinations still need broader testing.

### Notes

The first start after installing or updating may take longer while Windhawk
resolves and caches Explorer's private symbols. If the panel loads incompletely,
allow symbol processing to finish and restart File Explorer. Restart Windows if
the problem remains, or wait until Windhawk refreshes its cache.

### Added

- Added Details-pane discovery through Explorer lifecycle hooks in
  `FileExplorerExtensions.dll`.
- Added live WinUI visual-tree discovery anchored to the exact Explorer Details
  pane.
- Added direct association between each Better Panel instance and its owning
  Explorer window and active tab.
- Added compatibility with Windows 11 File Explorer Styler on the tested
  Windows 11 25H2 system.

### Changed

- Selection changes now use Explorer's native Details-pane selection event.
- Details-pane installation and refreshes no longer require Better Panel to
  occupy Explorer's XAML Diagnostics connection.

### Removed

- Removed the requirement to disable other File Explorer mods solely because
  they use XAML Diagnostics.
- Removed the obsolete XAML Diagnostics compatibility setting.

## 1.15.22

> **Stability recovery:** The major v1.15.10 recode exposed timing instability
> between Better Panel and Explorer's native details UI. This release preserves
> the working v1.15.10 feature set while correcting that native XAML race.

### Changed

- Native Explorer details elements are now suppressed when they are added to
  the XAML visual tree instead of waiting for a later panel refresh.
- The native Details section is now guarded with a visibility-change callback
  so Explorer cannot briefly restore it during file, folder, or tab changes.
- Native-element watchers are removed safely when the panel or mod unloads.

### Fixed

- Fixed Explorer's old Details section appearing briefly before Better Panel's
  replacement Details section.
- Fixed the native "Select a single file" information banner appearing on
  single-file and drive views.
- Fixed replacement native Details elements escaping suppression after
  Explorer rebuilt part of the details-pane visual tree.

## 1.15.10

> **Major recode:** This release substantially rewrites panel updates, folder
> analysis, Home navigation, and drive handling to reduce system-resource use
> and improve responsiveness. New bugs may still be present while the revised
> behavior receives broader testing.

### Added

- Added middle-click folder navigation to open folders in a new Explorer tab.
- Added a custom Home panel with devices, drives, capacity bars, available
  space, and recently visited folders.
- Added direct navigation between available drives from the Details pane.
- Added drive used space, free space, capacity, volume label, file system,
  drive type, and serial number information.
- Added Disk Cleanup, Optimize Drives, and Windows Storage controls.
- Added folder size, file count, subfolder count, and file-type analysis.
- Added multiple-selection item, file, folder, contained-file, subfolder,
  combined-size, file-type, and modified-date summaries.

### Changed

- Replaced frequent polling with event-driven selection and navigation updates.
- Improved response times when selecting files, changing folders, switching
  tabs, and navigating between drives.
- Made drive-capacity reporting instant instead of scanning the entire drive.
- Added limits and caching for large folder and multiple-selection analysis to
  protect Explorer responsiveness.
- Made the drive panel more compact and reduced spacing between the preview eye
  button and drive shortcuts.
- Removed unnecessary Share, Open, Open with, rename, and native information
  elements from drive views.

### Fixed

- Fixed folder sizes being reported before analysis completed.
- Fixed inaccurate folder-size totals.
- Fixed multiple-folder selections sometimes showing zero information.
- Fixed Explorer crashing when navigating or opening a tab during a large
  folder scan.
- Fixed delays when navigating from Home to a drive or folder.
- Fixed Home sometimes displaying an empty panel.
- Fixed Home shortcuts opening separate windows instead of using the active tab.
- Fixed stale Home content remaining after leaving Home.
- Fixed the native empty-selection text, icon, and outlined box appearing in
  drive views.
- Fixed excessive spacing above drive shortcuts.

### Known limitations

- Middle-click relies on Explorer's native **Open in new tab** command. Some
  virtual folders, protected locations, special shell items, and third-party
  folder types may open in a new window or may not respond. Broader support is
  planned for a future update.
- Explorer can create its native empty-selection banner after Better Panel
  loads. The banner may remain visible for approximately one second before it
  is removed.
- Folder totals may exclude inaccessible, protected, offline, cloud-only, or
  unsupported reparse-point contents.
- Very large folder selections are intentionally limited to prevent Explorer
  freezes or crashes, so their displayed totals may be partial.

## 1.14.0

- Added editable audio metadata for title, artist, album, genre, year, rating,
  tags, and comments.
- Added Metadata Edit, Save, Cancel, Reload, and Copy All controls.

## 1.13.2

- Fixed Backspace navigating Explorer while editing text. Explorer consumed the
  key as Back navigation before the injected editor, so Better Panel now routes
  it to the active editor first.

## 1.13.1

- Fixed video resizing during playback.

## 1.13.0

- Added a collapsible Details section with click-to-copy fields and Copy All.
- Added SHA-256 hashes and image EXIF details.
- Added folder size, file count, subfolder count, and file-type totals.
- Added multiple-selection counts, combined size, types, and modified dates.
- Added preview show/hide and compact audio playback.
- Added audio volume, mute, speed, repeat, shuffle, previous, and next controls.
- Added Fluent media icons.
- Added ZIP, RAR, and 7Z contents preview.
- Removed Explorer's duplicate Details section.
- Removed Copy path.
- Removed 10-second back and forward controls.

## 1.12.0

- Added an inline PDF viewer powered by Windows' PDF rendering API.
- Added previous/next page controls, current and total page counts, scrolling,
  and 50–250% zoom.
- Re-rendered PDF pages at each zoom level so enlarged text remains sharp.
- Added a compact Print button beside Share, Open, Open with, and Copy.
- Made Print appear dynamically for PDFs, text, images, and any other file type
  with a print action registered in Windows.

## 1.11.0

- Added inline preview and editing for common text, configuration, markup,
  script, and source-code files.
- Added Edit, Save, Cancel, and Reload controls.
- Preserved UTF-8, UTF-8 BOM, UTF-16 LE/BE, and compatible ANSI encodings.
- Preserved each file's CRLF, LF, or CR line-ending convention.
- Added external-change detection to prevent overwriting newer file contents.
- Paused Better Panel selection refresh during editing so the editor remains
  bound to its original file until Save or Cancel.
- Added binary-content detection, read-only handling, a 2 MB preview limit, and
  a 1 MB editing limit to protect Explorer responsiveness.

## 1.10.1

- Reworked action and media controls to use native WinUI button proportions.
- Added consistent edge, title, text, media-card, and transfer-row padding.
- Standardized icon size, label spacing, and control heights.

## 1.10.0

- Added dedicated multi-selection Move to, Delete, and Archive actions.
- Deferred selection-changing operations outside XAML click callbacks and
  paused panel refreshes during operations to prevent Explorer crashes.
- Hid single-file title, media, extraction, and share controls during multiple
  selection.

## 1.9.1

- Limited cross-tab transfer controls to destination folder views.
- Cleared stale transfer messages from normal file panels.

## 1.9.0

- Added cross-tab archive extraction and native multi-file/folder Move to.
- Added dynamic destination-folder and selected-subfolder detection.

## 1.8.2

- Replaced duplicated archive-provider menus with three extraction choices and
  automatic extractor fallback.

## 1.8.0

- Added inline archive detection and extraction support for Windows, WinRAR,
  7-Zip, and WinZip-compatible formats.

## 1.7.5

- Added reliable animated GIF previews with responsive inline expansion.

## 1.7.4

- Stopped audio and video when changing files, closing Explorer, closing the
  Details pane, or unloading the mod.

## 1.7.2

- Made the video player responsive to Details-pane resizing.
- Added compact, faster auto-hiding transport controls.

## 1.7.0

- Added Windows-codec video playback, file-type icons, a unified title layout,
  and inline file renaming.
