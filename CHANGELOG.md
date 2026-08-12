# Changelog

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
