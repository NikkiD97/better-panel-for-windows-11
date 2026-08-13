# Changelog

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
