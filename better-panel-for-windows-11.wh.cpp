// ==WindhawkMod==
// @id              better-panel-for-windows-11
// @name            Better Panel for Windows 11
// @description     Upgrades the Windows 11 Explorer details pane with previews, media playback, archive tools, file actions, and cross-tab transfers
// @version         2.2.2
// @author          Nicole S
// @github          https://github.com/NikkiD97
// @include         explorer.exe
// @architecture    x86-64
// @compilerOptions -lcomctl32 -lole32 -loleaut32 -lruntimeobject -lshell32 -lshlwapi -lbcrypt -lwindowscodecs
// @license         GPL-3.0-or-later
// ==/WindhawkMod==

// ==WindhawkModSettings==
/*
- hoverAnimation:
  - style: windows
    $name: Hover style
    $description: "Default: Windows default. Adds motion when the pointer moves over any Better Panel button, including Home cards and Details rows. None removes added motion while keeping native Windows color feedback."
    $options:
    - windows: Windows default
    - none: None
    - scale: Gentle scale
    - lift: Lift
    - tilt: Tilt
    - spring: Spring
  $name: Hover animation
  $description: Choose how Better Panel controls respond when the pointer moves over them.
- clickAnimation:
  - style: windows
    $name: Click style
    $description: "Default: Windows default. Adds motion after mouse, touch, pen, or keyboard activation. None removes added motion while keeping the button's native Windows response."
    $options:
    - windows: Windows default
    - none: None
    - press: Press and release
    - pulse: Pulse
    - bounce: Bounce
    - flash: Flash
    - shake: Shake
    - spring: Spring
    - spin: Spin
    - squash: Squash
    - wobble: Wobble
  $name: Click animation
  $description: Choose how every Better Panel button moves when activated.
- featureVisibility:
  - rename: true
    $name: Rename controls
    $description: Show single-file rename and multi-file bulk rename controls.
  - previewSearch: true
    $name: Preview search
    $description: Show search, previous match, and next match controls in text and PDF previews.
  - installActions: true
    $name: Install actions
    $description: Show Install for supported font, INF, and REG files.
  - fileActions: true
    $name: File actions
    $description: Show mounting and certificate actions, plus the image preview right-click menu.
  - experimentalPopout: false
    $name: Pop-out window (Experimental)
    $description: Show the pin/unpin control for a separate Better Panel window. This feature is still being tested; leave it off for the stable in-pane panel.
  $name: Feature visibility
  $description: Hide Better Panel features you do not use. Experimental pop-out is off by default.
- buttonLayout:
  - mode: native
    $name: Layout mode
    $description: "Default: Compact. Comfort uses the displayed default values below. Custom uses your entered values."
    $options:
    - native: Compact
    - comfort: Comfort
    - custom: Custom
  - horizontalMargin: 0
    $name: Horizontal margin
    $description: "Default: 0 px. Range: -20 to 40 px. Space added to the left and right of each button. Custom mode only."
  - verticalMargin: 0
    $name: Vertical margin
    $description: "Default: 0 px. Range: -20 to 40 px. Space added above and below each button. Custom mode only."
  - horizontalPadding: 10
    $name: Horizontal padding
    $description: "Default: 10 px. Range: 0 to 40 px. Space between a labeled button's content and its left and right edges. Custom mode only."
  - verticalPadding: 4
    $name: Vertical padding
    $description: "Default: 4 px. Range: 0 to 30 px. Space between a labeled button's content and its top and bottom edges. Custom mode only."
  - minimumWidth: 0
    $name: Minimum button width
    $description: "Default: 0 px. Range: 0 to 240 px. Minimum width for labeled buttons; zero keeps their natural width. Custom mode only."
  - minimumHeight: 32
    $name: Minimum button height
    $description: "Default: 32 px. Range: 24 to 80 px. Minimum height for labeled buttons. Custom mode only."
  - iconButtonSize: 32
    $name: Icon-only button size
    $description: "Default: 32 px. Range: 15 to 64 px. Width and height for compact icon-only buttons; the audio speed button keeps enough width for its text. Custom mode only."
  $name: Button layout
  $description: Choose a compact or comfortable preset, or customize Better Panel button spacing and dimensions.
*/
// ==/WindhawkModSettings==

// Copyright (C) 2026 Nicole S
//
// This program is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the Free
// Software Foundation, either version 3 of the License, or (at your option) any
// later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//
// This standalone local package is maintained independently. Upstream
// open-source attribution is retained in the source where required.

// ==WindhawkModReadme==
/*
# Better Panel for Windows 11

**Better Panel for Windows 11** is a standalone Windhawk mod package that adds
an interactive action area, rich previews, media playback, archive tools, and
cross-tab file operations to the modern Windows 11 File Explorer details pane.

This package has its own mod ID, source, DLL, settings, changelog, and release
version.


## WARNING: Windows compatibility

**Windows 11 25H2 x64 is the only version currently confirmed working.** It has
been tested on Windows 11 25H2 build 26200.8875.

Windows 11 24H2 x64 is expected to work because 24H2 and 25H2 share the same
core operating system and system files, but Better Panel has not yet been tested
on an actual 24H2 installation. Compatibility with Windows 11 24H2 must not be
described as confirmed until that direct testing is completed.

Earlier Windows 11 releases are untested, Windows 11 26H1 is untested, and the
current build does not support ARM64 or Windows 10. Because Better Panel uses
Explorer's private WinUI Details-pane structure, Windows updates can require
mod changes even on an otherwise compatible Windows release.

Better Panel discovers the Details pane through its own Explorer lifecycle and
selection hooks instead of occupying Explorer's XAML Diagnostics connection.
Other Explorer-mod combinations have not all been tested.

## Better Detail Panel features

* Middle-click folder navigation through Explorer's native **Open in new tab**
  command.
* A custom Home panel with native Shell icons, devices, drives, capacity bars,
  available space, and persistent Recent/Favorites views.
* Direct drive navigation, detailed storage information, Disk Cleanup, Optimize
  Drives, and Windows Storage controls.
* Folder and multiple-selection analysis with sizes, counts, types, and modified
  dates.
* Compact native-style **Share**, **Open**, and **Open with** actions, plus
  aligned icon-only Favorites, Print, Delete, and Copy controls where supported.
* File-type icons, a single clean title row, and click-to-rename titles.
* Responsive image previews with inline expand and restore controls.
* Animated GIF previews that use the original file instead of a static Explorer
  thumbnail.
* An inline PDF viewer with multi-page navigation, sharp re-rendered zoom, and
  scrolling for enlarged pages.
* A compact **Print** action for PDFs, text, images, and any other selected file
  type with a print command registered in Windows.
* Inline preview and editing for TXT, Markdown, JSON, XML, YAML, INI, LOG, CSV,
  scripts, configuration files, and common source-code formats, with explicit
  Save, Cancel, and Reload controls.
* Native syntax highlighting with automatic language detection and a manual
  language selector for common code, markup, configuration, and script files.
* An audio player with artwork, play/pause, previous/next file, playback speed,
  repeat, shuffle, timeline, volume, mute, and elapsed/total time for MP3, OGG,
  Opus, FLAC, WAV, AAC/M4A, WMA, and other Windows-supported audio formats.
* A responsive video player with compact auto-hiding controls for MOV, MP4, M4V,
  MKV, AVI, WMV, WebM, MPEG, TS, and other Windows-supported video formats.
* Automatic media cleanup when the selection changes, the Details pane closes,
  the Explorer window closes, or the mod unloads.
* Archive extraction actions for ZIP, RAR, 7Z, TAR, GZ, CAB, ISO, and other
  common formats, using WinRAR, 7-Zip, WinZip, or Windows archive support.
* Exact archive choices for **Extract here**, **Extract to...**, and **Extract to
  "archive-name\\"**.
* Inline archive contents preview for ZIP, RAR, and 7Z before extraction.
* Cross-tab **Extract here** and **Move to** actions that target any open
  filesystem folder, selected destination subfolder, or drive root.
* Cross-tab Move labels show the source and destination, with an expandable
  list of every item waiting to be moved.
* Multi-selection support for moving files and folders through Windows' native
  progress, conflict, elevation, and undo handling.
* A dedicated multi-selection row with **Move to...**, recycle-aware **Delete**,
  and **Archive** using an installed WinRAR, 7-Zip, WinZip, or Windows tool.
* Destination transfer controls appear only in the destination folder tab, not
  on normal audio, video, image, archive, or other source-file panels.
* Text safety protections include encoding preservation, external-change
  detection, read-only handling, binary-content detection, and conservative
  preview/editing size limits.
* A replacement **Details** section with click-to-copy name, path, size,
  modified date, and SHA-256 values.
* Image EXIF details including dimensions, camera maker/model, date taken,
  rating, and GPS coordinates when the file contains those fields.
* Rich multi-selection summaries with file/folder counts, combined file size,
  file-type totals, and the selected items' modified-date range.
* A compact overlapping preview of representative Shell icons for multiple
  selections without repeating the same item type.
* A compact show/hide control for file previews.

Better Panel is maintained as its own package with its own identity, features,
settings, documentation, changelog, source, and compiled library.

## Recent changelog

### 2.2.2

**Added**

* Added an experimental pop-out window for Better Panel, with Home and pin/unpin
  controls. Its switch is under Feature visibility and is off by default.
* Added a circular loading placeholder while the panel starts and a thin blue
  progress line beneath the Details header while file information loads.

**Changed**

* Reworked the video preview's width and height, with a full-width, 40-pixel
  playback strip below the picture.
* Moved the "Select a box to copy" hint below the Details header and removed
  the visible "Reading file details" message.
* Reduced spacing around the preview and action controls.

**Known issues**

* Enabling the mod while an Explorer window is already open may leave that
  window's native Details pane in place until the window is reopened.
* The pop-out window is experimental and can still fall out of sync with the
  active Explorer tab or selection.
* In text editing mode, starting a new mouse selection can leave parts of the
  previous RichEdit selection highlighted. Preview-mode selection and clicking
  outside the editor clear normally.

**Fixed**

* Removed unreachable legacy compatibility, settings, and telemetry code.
* Added cancellation and bounded shutdown handling for background preview,
  analysis, Home, and save work; cleaned up panel timers and callbacks on their
  owning UI threads when disabling the mod.
* Moved Home drive and Recent/Favorites gathering off Explorer's UI thread.
* Made text saves atomic to protect the original file if a write fails.
* Restricted archive-lister handle inheritance to its standard streams.
* Used the owning Explorer window for menus, dialogs, and file actions.
* Removed synthetic selection clicks from middle-click folder opening and
  improved Extract and native Details matching on localized systems.
* Limited Backspace handling to the panel's focused text editor.
* Moved suspend/resume recovery to an Explorer window callback.
* Reduced repeated whole-window scans when suppressing Explorer's native
  Details section.
* Removed cross-tab Move actions from Home and other virtual shell locations
  that cannot be used as filesystem destinations.
* Fixed an Explorer crash when advancing or reversing through audio files.

### 2.2.1

* Added bulk rename with prefix, suffix, find and replace, numbering, and a
  preview before applying.
* Added search inside text, code, INF, LOG, and PDF previews.
* Added highlighted text matches and matching-page controls for PDFs.
* Added Install actions for TTF, OTF, TTC, FON, INF, and REG files.
* Added File actions for mounting ISO/VHD files and installing certificates.
* Added a right-click image-preview menu for rotating images and setting
  wallpaper.
* Added text preview and editing for INF files.
* Added settings to hide Rename, preview search, Install, and File actions.
* Moved the language selector beside preview search.
* Narrow action rows now move buttons onto new lines instead of cutting them
  off.
* Hiding Rename keeps the file name visible but read-only.
* Hiding preview search keeps the language selector visible.
* Moved Feature visibility below the animation settings.
* Video controls stay readable and inside narrow Details panes.
* File renames now update immediately and the rename box closes when changing
  folders.
* Fixed the cross-tab Move item list clipping on drive destinations.

### 2.2.0

* Added syntax highlighting with automatic language detection and a manual
  language selector.
* Added representative Shell-icon previews for multiple selections.
* Added clearer cross-tab Move labels and an expandable source-item list.
* Added drive roots as cross-tab Move destinations.
* Moved multiple-selection actions higher in the panel.
* Made Compact sizing consistent across icon buttons.
* Prevented stale previews and Open-button icons on unsupported file types.
* Added safer Details-pane recovery after sleep or hibernation.

### 2.1.2

* Added a saved text-preview size menu.
* Put temporary messages beside the controls they belong to.
* Added Compact, Comfort, and Custom button layouts.
* Made custom padding and animations consistent across panel sizes.

### 2.1.2-beta.3

* Added a circular loading indicator for slower systems.
* Added settings for button margins, padding, height, width, and icon size.
* Added optional hover and click animations.
* Settings update live and can be reset to default.
* Buttons now use Explorer's style.
* Home and the Details pane now load faster.

### 2.1.2-beta.2

* Added a native **Add to Favorites** and **Remove from Favorites** action. The
  star now reflects the real Windows Favorites state and turns yellow when the
  selected item is favorited.
* Added persistent **Recent** and **Favorites** views to the custom Home panel.
  The selected view is restored the next time the panel opens.
* Replaced generic Home file, folder, archive, and drive glyphs with icons
  supplied by the Windows Shell and the user's current file associations.
* Restyled **Devices and drives** with larger native drive artwork, compact
  spacing, clearer capacity bars, and a flatter classic Explorer layout.
* Removed the unavailable Share action from folders, added a recycle-aware
  icon-only Delete action for eligible files and folders, and protected main
  system and known folders from that action.
* Moved **Move to** and archive extraction actions directly below the primary
  buttons so they remain visible at the panel's normal height.
* Matched the Open, Open with, rename, expand, restore, Print, Delete, and Copy
  controls more closely to Explorer's native button styling and alignment.
* Replaced the separate rename pencil with click-to-edit title text and refined
  the editor sizing to prevent clipping.

### 2.0.0-beta.1

* Replaced Better Panel's active XAML Diagnostics connection with Explorer
  lifecycle and selection hooks from `FileExplorerExtensions.dll`.
* Added diagnostics-free Details-pane discovery through the live WinUI visual
  tree.
* Added direct association between each Better Panel instance and its owning
  Explorer window and active tab.
* Improved compatibility with other Explorer mods by avoiding the process-wide
  XAML Diagnostics connection.
* Removed the requirement to disable other File Explorer mods solely because
  they use XAML Diagnostics.
* Removed the obsolete XAML Diagnostics compatibility setting.

### 1.15.10

* Added middle-click folder navigation, a custom Home panel, drive navigation,
  drive information and tools, and expanded folder/multiple-selection details.
* Replaced frequent polling with event-driven updates and added bounded,
  cache-backed folder analysis to improve responsiveness and resource use.
* Fixed folder totals, selection summaries, Home navigation and refresh issues,
  large-scan crashes, and unwanted native elements in drive views.
* Known limitations: some shell locations may not honor native new-tab actions;
  the native empty-selection banner can take about one second to disappear; and
  protected or very large folder totals can be incomplete.

### 1.13.2

* Fixed Backspace navigating Explorer while editing text. Explorer consumed the
  key as Back navigation before the injected editor, so Better Panel now routes
  it to the active editor first.

### 1.13.1

* Fixed video resizing during playback.

### 1.13.0

* Added a collapsible Details section with click-to-copy fields and Copy All.
* Added SHA-256 hashes and image EXIF details.
* Added folder and multiple-selection summaries.
* Added preview show/hide and compact audio playback.
* Added volume, mute, speed, repeat, shuffle, previous, and next controls.
* Added Fluent media icons.
* Added ZIP, RAR, and 7Z contents preview.
* Removed Explorer's duplicate Details section.
* Removed Copy path and 10-second back/forward controls.

### 1.12.0

* Added an inline PDF viewer with previous/next page navigation, page counts,
  scrolling, and 50–250% sharp re-rendered zoom.
* Added a Print action beside the existing file actions whenever Windows has a
  print handler registered for the selected file type.

### 1.11.0

* Added inline preview and editing for common text, configuration, markup,
  script, and source-code files.
* Added explicit Edit, Save, Cancel, and Reload controls with encoding
  and line-ending preservation plus external-change detection.
* Added safe 2 MB preview and 1 MB editing limits, binary-content detection,
  read-only handling, and paused selection refresh while editing.


### 1.10.1

* Reworked action and media controls to use native WinUI button proportions
  instead of circular custom shapes.
* Added consistent edge, title, text, media-card, and transfer-row padding.
* Standardized icon size, label spacing, and control heights for better
  alignment with Explorer's built-in Share and Properties buttons.

### 1.10.0

* Added dedicated multi-selection Move to, Delete, and Archive actions.
* Deferred selection-changing file operations outside XAML click callbacks and
  paused panel refreshes during operations to prevent Explorer crashes.
* Hid single-file title, media, extraction, and share controls while multiple
  items are selected.

### 1.9.1

* Limited cross-tab transfer controls to destination folder views and cleared
  stale transfer messages from normal file panels.

### 1.9.0

* Added cross-tab archive extraction and native multi-file/folder Move to.
* Added dynamic destination-folder and selected-subfolder detection.

### 1.8.2

* Replaced unreliable duplicated archive-provider menus with three consistent
  extraction choices and automatic extractor fallback.

### 1.8.0

* Added inline archive detection and extraction support for Windows, WinRAR,
  7-Zip, and WinZip-compatible formats.

### 1.7.5

* Added reliable animated GIF previews with responsive inline expansion.

### 1.7.4

* Stopped audio and video when changing files, closing Explorer, closing the
  Details pane, or unloading the mod.

### 1.7.2

* Made the video player responsive to Details-pane resizing and added compact,
  faster auto-hiding transport controls.

### 1.7.0

* Added Windows-codec video playback, file-type icons, a unified title layout,
  and inline file renaming.

## Compatibility

Better Panel uses its own Explorer lifecycle and selection hooks to locate and
update the modern Details pane without occupying Explorer's XAML Diagnostics
connection. Other Explorer-mod combinations have not all been tested. Windows
11 25H2 is the confirmed platform; other Windows builds remain untested.

The first start after installing or updating may take longer while
Windhawk resolves and caches Explorer's private symbols. If the panel loads
incompletely, continues showing old content, or does not react to selections,
allow Windhawk to finish processing and restart File Explorer. Restart Windows
if the problem remains. Manual cache deletion is not normally required and
should be used only when directed during troubleshooting.

## Attribution

Better Panel is an independently developed, function-focused mod created by
Nicole S. It is not a theme or styling mod and does not depend on one. Better
Panel is licensed under GPL-3.0-or-later.
*/
// ==/WindhawkModReadme==

#include <windhawk_utils.h>

#include <algorithm>
#include <cmath>
#include <cstdarg>
#include <iomanip>
#include <limits>
#include <map>
#include <mutex>
#include <optional>
#include <random>
#include <set>
#include <sstream>
#include <string>
#include <string_view>
#include <thread>
#include <utility>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std::string_view_literals;

#include <initguid.h>

#include <commctrl.h>
#include <bcrypt.h>
#include <shellapi.h>
#include <shlwapi.h>
#include <shlobj.h>
#include <uiautomationclient.h>
#include <knownfolders.h>
#include <wincodec.h>

#undef GetCurrentTime

#include <winrt/Microsoft.UI.Composition.h>
#include <winrt/Microsoft.UI.Content.h>
#include <winrt/Microsoft.UI.Dispatching.h>
#include <winrt/Microsoft.UI.Input.h>
#include <winrt/Microsoft.UI.Text.h>
#include <winrt/Microsoft.UI.Xaml.Controls.h>
#include <winrt/Microsoft.UI.Xaml.Controls.Primitives.h>
#include <winrt/Microsoft.UI.Xaml.Documents.h>
#include <winrt/Microsoft.UI.Xaml.Hosting.h>
#include <winrt/Microsoft.UI.Xaml.Input.h>
#include <winrt/Microsoft.UI.Xaml.Markup.h>
#include <winrt/Microsoft.UI.Xaml.Media.Imaging.h>
#include <winrt/Microsoft.UI.Xaml.Media.h>
#include <winrt/Microsoft.UI.Xaml.Automation.h>
#include <winrt/Microsoft.UI.Xaml.Automation.Peers.h>
#include <winrt/Microsoft.UI.Xaml.Automation.Provider.h>
#include <winrt/Microsoft.UI.Xaml.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Graphics.Imaging.h>
#include <winrt/Windows.Media.Ocr.h>
#include <winrt/Windows.Media.Core.h>
#include <winrt/Windows.Media.Playback.h>
#include <winrt/Windows.Data.Pdf.h>
#include <winrt/Windows.Storage.FileProperties.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.System.h>
#include <winrt/Windows.UI.h>
#include <winrt/Windows.UI.Text.h>

using namespace winrt::Microsoft::UI::Xaml;

namespace wf = winrt::Windows::Foundation;
namespace mux = winrt::Microsoft::UI::Xaml;
namespace muc = winrt::Microsoft::UI::Composition;
namespace muxh = mux::Hosting;

enum class BetterPanelHoverAnimation {
    WindowsDefault,
    None,
    Scale,
    Lift,
    Tilt,
    Spring,
};

enum class BetterPanelClickAnimation {
    WindowsDefault,
    None,
    Press,
    Pulse,
    Bounce,
    Flash,
    Shake,
    Spring,
    Spin,
    Squash,
    Wobble,
};

enum class BetterPanelButtonLayoutMode {
    Compact,
    Comfort,
    Custom,
};

struct {
    BetterPanelButtonLayoutMode buttonLayoutMode =
        BetterPanelButtonLayoutMode::Compact;
    int buttonHorizontalMargin = 0;
    int buttonVerticalMargin = 0;
    int buttonHorizontalPadding = 10;
    int buttonVerticalPadding = 4;
    int buttonMinimumWidth = 0;
    int buttonMinimumHeight = 32;
    int iconButtonSize = 32;
    BetterPanelHoverAnimation hoverAnimation =
        BetterPanelHoverAnimation::WindowsDefault;
    BetterPanelClickAnimation clickAnimation =
        BetterPanelClickAnimation::WindowsDefault;
    bool showRename = true;
    bool showPreviewSearch = true;
    bool showInstallActions = true;
    bool showFileActions = true;
    bool experimentalPopout = false;
} g_settings;

thread_local bool g_initializedForThread;
thread_local bool g_betterPanelThreadHasPanel = false;
thread_local HHOOK g_betterPanelMessageHook = nullptr;
[[clang::no_destroy]] std::mutex g_betterPanelMessageHooksMutex;
[[clang::no_destroy]] std::unordered_map<DWORD, HHOOK>
    g_betterPanelMessageHooks;
std::atomic_uint g_betterPanelActiveMessageCallbacks{0};

void BetterPanelScheduleCurrentThreadDiscovery();

////////////////////////////////////////////////////////////////////////////////
// Better Detail Panel additions.

////////////////////////////////////////////////////////////////////////////////
// Better Detail Panel 0.2: compact actions and an audio-only media card.

namespace muxc = winrt::Microsoft::UI::Xaml::Controls;
namespace muxp = winrt::Microsoft::UI::Xaml::Controls::Primitives;
namespace muxa = winrt::Microsoft::UI::Xaml::Automation;
namespace muxap = winrt::Microsoft::UI::Xaml::Automation::Peers;
namespace muxapr = winrt::Microsoft::UI::Xaml::Automation::Provider;
namespace muxd = winrt::Microsoft::UI::Xaml::Documents;
namespace muxh = winrt::Microsoft::UI::Xaml::Hosting;
namespace mut = winrt::Microsoft::UI::Text;
namespace mud = winrt::Microsoft::UI::Dispatching;
namespace wmc = winrt::Windows::Media::Core;
namespace wmp = winrt::Windows::Media::Playback;
namespace wdp = winrt::Windows::Data::Pdf;
namespace wss = winrt::Windows::Storage::Streams;
namespace wsf = winrt::Windows::Storage::FileProperties;
namespace ws = winrt::Windows::Storage;

#define CWM_GETISHELLBROWSER (WM_USER + 7)

enum class BetterPanelTextEncoding {
    Utf8,
    Utf8Bom,
    Utf16Le,
    Utf16Be,
    Ansi,
};

enum class BetterPanelSyntaxLanguage {
    Auto,
    PlainText,
    Markdown,
    Cpp,
    CSharp,
    JavaScript,
    TypeScript,
    Json,
    Python,
    PowerShell,
    HtmlXml,
    Css,
    Yaml,
    Ini,
    Batch,
    Sql,
};

struct BetterPanelAudioMetadata {
    std::wstring title;
    std::wstring artist;
    std::wstring album;
    std::wstring genre;
    std::wstring year;
    std::wstring rating;
    std::wstring tags;
    std::wstring comments;
};

struct BetterPanelButtonLayoutSnapshot {
    winrt::weak_ref<muxp::ButtonBase> button;
    Thickness margin{};
    Thickness padding{};
    double width = std::numeric_limits<double>::quiet_NaN();
    double height = std::numeric_limits<double>::quiet_NaN();
    double minWidth = 0;
    double minHeight = 0;
};

struct BetterPanelState {
    mud::DispatcherQueue dispatcher{nullptr};
    DWORD ownerThreadId = 0;
    HWND explorerWindow = nullptr;
    DispatcherTimer timer{nullptr};
    DispatcherTimer mediaTimer{nullptr};
    DispatcherTimer videoControlsTimer{nullptr};
    DispatcherTimer selectionSettleTimer{nullptr};
    winrt::event_token timerTickToken{};
    winrt::event_token mediaTimerTickToken{};
    winrt::event_token videoControlsTimerTickToken{};
    winrt::event_token selectionSettleTimerTickToken{};
    winrt::weak_ref<muxc::StackPanel> host;
    winrt::weak_ref<muxc::StackPanel> backgroundHost;
    mux::Media::Brush nativeHostBackground{nullptr};
    winrt::weak_ref<FrameworkElement> panel;
    winrt::weak_ref<muxc::StackPanel> startupLoadingHost;
    winrt::weak_ref<muxc::Button> detachButton;
    winrt::weak_ref<muxc::Button> homeButton;
    winrt::weak_ref<FrameworkElement> explorerDetailsPane;
    Visibility explorerDetailsPaneVisibility = Visibility::Visible;
    bool explorerDetailsPaneHidden = false;
    muxh::DesktopWindowXamlSource detachedXamlSource{nullptr};
    muxc::ScrollViewer detachedScroll{nullptr};
    muxc::StackPanel detachedContent{nullptr};
    std::optional<uint32_t> detachedNativePreviewIndex;
    std::optional<uint32_t> detachedMultiPreviewIndex;
    uint32_t detachedPanelIndex = 0;
    HWND detachedWindow = nullptr;
    HWND detachedIslandWindow = nullptr;
    bool detached = false;
    bool changingDetachedState = false;
    bool reattachRequested = false;
    bool nativePaneOpenForReattach = false;
    uint32_t initialRefreshRetries = 0;
    std::atomic<uint64_t> nativePaneCommandGeneration{0};
    std::mutex nativePaneCommandMutex;
    std::wstring detachedSelectionSignature;
    winrt::weak_ref<FrameworkElement> audioCard;
    winrt::weak_ref<FrameworkElement> videoCard;
    winrt::weak_ref<FrameworkElement> gifCard;
    winrt::weak_ref<muxc::Image> gifImage;
    winrt::weak_ref<muxc::MediaPlayerElement> videoPlayer;
    winrt::weak_ref<muxc::Viewbox> videoViewport;
    winrt::weak_ref<muxc::Button> videoPlayButton;
    winrt::weak_ref<muxc::Button> videoMuteButton;
    winrt::weak_ref<muxc::Slider> videoTimeline;
    bool updatingVideoTimeline = false;
    winrt::weak_ref<muxc::Grid> nativePreview;
    winrt::weak_ref<muxc::Image> nativePreviewImage;
    winrt::event_token nativePreviewRightTappedToken{};
    winrt::event_token hostPointerPressedToken{};
    winrt::weak_ref<FrameworkElement> multiPreviewSurface;
    winrt::Microsoft::UI::Xaml::Media::Imaging::BitmapImage animatedGif{nullptr};
    winrt::weak_ref<muxc::Image> artwork;
    winrt::weak_ref<muxc::TextBlock> artworkPlaceholder;
    winrt::weak_ref<muxc::TextBlock> audioTitle;
    winrt::weak_ref<FrameworkElement> fileTitleRow;
    winrt::weak_ref<muxc::TextBlock> fileTitle;
    winrt::weak_ref<muxc::Image> fileIcon;
    winrt::weak_ref<muxc::FontIcon> fileFallbackIcon;
    winrt::weak_ref<muxc::TextBox> fileRenameBox;
    winrt::weak_ref<muxc::Button> fileRenameButton;
    winrt::weak_ref<muxc::TextBox> audioRenameBox;
    winrt::weak_ref<muxc::Button> audioRenameButton;
    winrt::weak_ref<FrameworkElement> nativeTitleContainer;
    Visibility nativeTitleVisibility = Visibility::Visible;
    winrt::weak_ref<muxc::Button> playButton;
    winrt::weak_ref<muxc::Slider> timeline;
    winrt::weak_ref<muxc::TextBlock> timeText;
    winrt::weak_ref<muxc::Slider> volumeSlider;
    winrt::weak_ref<muxc::Button> muteButton;
    winrt::weak_ref<muxc::TextBlock> volumeText;
    winrt::weak_ref<muxc::Button> playbackSpeedButton;
    winrt::weak_ref<muxc::Button> repeatButton;
    winrt::weak_ref<muxc::Button> shuffleButton;
    winrt::weak_ref<muxc::TextBlock> status;
    winrt::weak_ref<muxc::Button> nativeShareButton;
    winrt::weak_ref<muxc::Button> shareButton;
    winrt::weak_ref<muxc::Panel> nativeShareParent;
    winrt::weak_ref<muxc::Grid> shareActionRow;
    winrt::weak_ref<muxc::Button> openButton;
    winrt::weak_ref<muxc::Image> openActionIcon;
    winrt::weak_ref<muxc::FontIcon> openActionFallbackIcon;
    winrt::weak_ref<muxc::Button> openWithButton;
    winrt::weak_ref<muxc::Button> runAsButton;
    winrt::weak_ref<muxc::Button> singleInstallButton;
    winrt::weak_ref<muxc::Button> nativeFileActionsButton;
    winrt::weak_ref<muxc::Button> singleDeleteButton;
    winrt::weak_ref<muxc::Button> extractButton;
    winrt::weak_ref<muxc::Button> previewExpandButton;
    winrt::weak_ref<muxc::Button> gifExpandButton;
    winrt::weak_ref<FrameworkElement> transferRow;
    winrt::weak_ref<muxc::Button> transferExtractButton;
    winrt::weak_ref<muxc::Button> transferMoveButton;
    winrt::weak_ref<muxc::Button> transferItemsToggle;
    winrt::weak_ref<FrameworkElement> transferItemsCard;
    winrt::weak_ref<muxc::TextBlock> transferItemsText;
    winrt::weak_ref<FrameworkElement> transferProgressRow;
    winrt::weak_ref<muxc::TextBlock> transferProgressText;
    winrt::weak_ref<muxc::ProgressBar> transferProgressBar;
    winrt::weak_ref<FrameworkElement> multiActionRow;
    winrt::weak_ref<muxc::StackPanel> multiPrimaryActionButtons;
    winrt::weak_ref<muxc::Button> multiInstallButton;
    winrt::weak_ref<muxc::Button> multiRenameButton;
    winrt::weak_ref<muxc::TextBlock> multiSelectionText;
    winrt::weak_ref<muxc::Grid> multiPreviewHost;
    winrt::weak_ref<muxc::Button> multiPreviewExpandButton;
    winrt::weak_ref<FrameworkElement> textCard;
    winrt::weak_ref<muxc::RichEditBox> textEditor;
    winrt::weak_ref<FrameworkElement> syntaxPreviewSurface;
    winrt::weak_ref<muxc::TextBlock> syntaxPreview;
    winrt::weak_ref<muxc::ComboBox> syntaxLanguagePicker;
    winrt::weak_ref<muxc::TextBox> textSearchBox;
    winrt::weak_ref<FrameworkElement> textSearchRow;
    winrt::weak_ref<muxc::TextBox> transientFocusedEditor;
    winrt::weak_ref<muxc::TextBlock> textSearchResult;
    winrt::weak_ref<muxc::Button> textSearchPreviousButton;
    winrt::weak_ref<muxc::Button> textSearchNextButton;
    winrt::weak_ref<muxc::Button> textEditButton;
    winrt::weak_ref<muxc::Button> textSaveButton;
    winrt::weak_ref<muxc::Button> textCancelButton;
    winrt::weak_ref<muxc::Button> textReloadButton;
    winrt::weak_ref<muxc::TextBlock> textInfo;
    winrt::weak_ref<muxc::TextBlock> textActionStatus;
    winrt::weak_ref<FrameworkElement> pdfCard;
    winrt::weak_ref<muxc::Image> pdfImage;
    winrt::weak_ref<muxc::TextBlock> pdfPageText;
    winrt::weak_ref<muxc::TextBlock> pdfZoomText;
    winrt::weak_ref<muxc::TextBlock> pdfInfo;
    winrt::weak_ref<muxc::Button> pdfPreviousButton;
    winrt::weak_ref<muxc::Button> pdfNextButton;
    winrt::weak_ref<muxc::TextBox> pdfSearchBox;
    winrt::weak_ref<FrameworkElement> pdfSearchRow;
    winrt::weak_ref<muxc::TextBlock> pdfSearchResult;
    winrt::weak_ref<muxc::Button> pdfSearchButton;
    winrt::weak_ref<muxc::Button> pdfSearchPreviousButton;
    winrt::weak_ref<muxc::Button> pdfSearchNextButton;
    winrt::weak_ref<muxc::Button> favoriteButton;
    winrt::weak_ref<muxc::Button> printButton;
    Style nativeButtonStyle{nullptr};
    winrt::weak_ref<muxc::StackPanel> rootPanel;
    winrt::weak_ref<muxc::StackPanel> actionsHost;
    winrt::weak_ref<FrameworkElement> primaryActionContainer;
    winrt::weak_ref<muxc::StackPanel> primaryActionButtons;
    winrt::weak_ref<muxc::StackPanel> transferActionButtons;
    winrt::weak_ref<FrameworkElement> panelUtilities;
    winrt::weak_ref<muxc::Button> previewToggleButton;
    winrt::weak_ref<muxc::Button> nativePreviewToggleButton;
    winrt::weak_ref<muxc::Button> multiPreviewToggleButton;
    winrt::weak_ref<FrameworkElement> quickAudioControls;
    winrt::weak_ref<muxc::TextBlock> quickAudioTitle;
    winrt::weak_ref<muxc::Button> quickAudioPlayButton;
    winrt::weak_ref<muxc::TextBlock> detailsCopyHint;
    winrt::weak_ref<FrameworkElement> nativeDetailsSection;
    Visibility nativeDetailsVisibility = Visibility::Visible;
    winrt::weak_ref<FrameworkElement> nativeDetailsVisibilityHook;
    int64_t nativeDetailsVisibilityToken = 0;
    winrt::weak_ref<FrameworkElement> nativeInfoBanner;
    Visibility nativeInfoBannerVisibility = Visibility::Visible;
    winrt::weak_ref<FrameworkElement> insightsCard;
    winrt::weak_ref<FrameworkElement> homeCard;
    winrt::weak_ref<muxc::StackPanel> homeContent;
    winrt::weak_ref<FrameworkElement> driveCard;
    winrt::weak_ref<muxc::StackPanel> driveContent;
    winrt::weak_ref<muxc::StackPanel> insightsContent;
    winrt::weak_ref<muxc::ProgressBar> insightsLoadingBar;
    winrt::weak_ref<muxc::Button> insightsToggleButton;
    winrt::weak_ref<FrameworkElement> metadataCard;
    winrt::weak_ref<muxc::StackPanel> metadataContent;
    winrt::weak_ref<muxc::Button> metadataToggleButton;
    winrt::weak_ref<muxc::TextBox> metadataTitle;
    winrt::weak_ref<muxc::TextBox> metadataArtist;
    winrt::weak_ref<muxc::TextBox> metadataAlbum;
    winrt::weak_ref<muxc::TextBox> metadataGenre;
    winrt::weak_ref<muxc::TextBox> metadataYear;
    winrt::weak_ref<muxc::TextBox> metadataRating;
    winrt::weak_ref<muxc::TextBox> metadataTags;
    winrt::weak_ref<muxc::TextBox> metadataComments;
    winrt::weak_ref<muxc::TextBox> metadataFocusedEditor;
    winrt::weak_ref<muxc::Button> metadataEditButton;
    winrt::weak_ref<muxc::Button> metadataSaveButton;
    winrt::weak_ref<muxc::Button> metadataCancelButton;
    winrt::weak_ref<muxc::Button> metadataReloadButton;
    winrt::weak_ref<muxc::TextBlock> metadataInfo;
    winrt::weak_ref<muxc::TextBlock> hashText;
    winrt::weak_ref<muxc::Button> hashCopyButton;
    winrt::weak_ref<FrameworkElement> pdfPageSurface;
    winrt::weak_ref<FrameworkElement> audioArtworkFrame;
    winrt::weak_ref<FrameworkElement> archivePreviewCard;
    winrt::weak_ref<muxc::TextBlock> archivePreviewText;
    uint32_t nativeShareIndex = 0;
    Thickness nativeShareMargin{};
    Visibility nativeShareVisibility = Visibility::Visible;
    bool previewExpanded = false;
    double previewOriginalHeight =
        std::numeric_limits<double>::quiet_NaN();
    double previewOriginalMinHeight = 0;
    std::wstring selectedPath;
    uint64_t adjacentAudioGeneration = 0;
    std::wstring pendingRenameOldPath;
    std::wstring pendingRenameNewPath;
    ULONGLONG pendingRenameTick = 0;
    bool updatingTimeline = false;
    bool updatingVolume = false;
    bool unloaded = false;
    bool gifExpanded = false;
    double gifNormalHeight = 260;
    std::vector<std::wstring> transferSources;
    std::wstring transferDestination;
    std::wstring transferItemsKey;
    bool transferItemsExpanded = false;
    std::wstring multiPreviewKey;
    bool multiPreviewExpanded = false;
    double multiPreviewNormalHeight = 200;
    std::wstring textLoadedPath;
    std::wstring textOriginal;
    std::wstring textLastFormattedContent;
    std::wstring textNewline = L"\r\n";
    BetterPanelTextEncoding textEncoding = BetterPanelTextEncoding::Utf8;
    FILETIME textLastWriteTime{};
    uint64_t textFileSize = 0;
    bool textLoading = false;
    bool textEditable = false;
    bool textEditing = false;
    bool textDirty = false;
    bool textSaving = false;
    uint64_t textSaveGeneration = 0;
    bool suppressTextChanged = false;
    bool textSearchActive = false;
    std::wstring textSearchQuery;
    std::vector<size_t> textSearchMatches;
    size_t textSearchMatchIndex = 0;
    BetterPanelSyntaxLanguage syntaxLanguage = BetterPanelSyntaxLanguage::Auto;
    BetterPanelSyntaxLanguage detectedSyntaxLanguage =
        BetterPanelSyntaxLanguage::PlainText;
    wdp::PdfDocument pdfDocument{nullptr};
    std::wstring pdfLoadedPath;
    uint32_t pdfPageIndex = 0;
    double pdfZoom = 1.0;
    double pdfBaseWidth = 420;
    bool pdfLoading = false;
    bool pdfSearchLoading = false;
    uint64_t pdfSearchGeneration = 0;
    std::vector<uint32_t> pdfSearchPages;
    size_t pdfSearchIndex = 0;
    std::wstring insightsLoadedPath;
    std::wstring hashValue;
    std::wstring detailsCopyText;
    std::wstring multiSelectionKey;
    bool insightsLoading = false;
    bool multiSummaryLoading = false;
    bool previewsCollapsed = false;
    bool insightsCollapsed = false;
    BetterPanelAudioMetadata metadataOriginal;
    std::wstring metadataLoadedPath;
    std::wstring metadataCopyText;
    bool metadataLoading = false;
    bool metadataEditing = false;
    bool metadataDirty = false;
    bool suppressMetadataChanged = false;
    bool metadataCollapsed = false;
    struct AnimationHandlerRegistration {
        winrt::weak_ref<muxp::ButtonBase> button;
        winrt::event_token pointerEntered{};
        winrt::event_token pointerExited{};
        winrt::event_token click{};
    };
    struct AnimationFlashOverlay {
        winrt::weak_ref<UIElement> element;
        muc::SpriteVisual visual{nullptr};
    };
    std::unordered_map<void*, AnimationHandlerRegistration>
        animationHandlersInstalled;
    std::unordered_map<void*, AnimationFlashOverlay> animationFlashOverlays;
    std::unordered_map<void*, BetterPanelButtonLayoutSnapshot>
        buttonLayoutSnapshots;
    std::atomic_uint64_t insightsGeneration{0};
    ULONGLONG transferLastScanTick = 0;
    HWND transferCachedActiveTab = nullptr;
    std::wstring transferCachedSourcePath;
    std::wstring printHandlerPath;
    bool printHandlerAvailable = false;
    std::wstring favoriteStatePath;
    bool favoriteStateKnown = false;
    bool favoritePinned = false;
    bool favoriteCheckPending = false;
    uint64_t favoriteCheckGeneration = 0;
    ULONGLONG nativeTitleLastSearchTick = 0;
    std::wstring nativeTitleSearchPath;
    ULONGLONG shareLastSearchTick = 0;
    int64_t displayedPositionSecond = -1;
    int64_t displayedDurationSecond = -1;
    bool displayedPlaying = false;
    bool displayedPlaybackInitialized = false;
    bool mediaTimerRunning = false;
    bool settledSelectionRefresh = false;
    bool interactiveRefreshQueued = false;
    winrt::event_token hostUnloadedToken{};
    winrt::event_token hostSizeChangedToken{};
    bool homeContentLoaded = false;
    std::atomic_bool homeContentLoading{false};
    uint64_t homeContentGeneration = 0;
    bool homeWasVisible = false;
    std::wstring archivePreviewPath;
    std::atomic_bool archivePreviewLoading{false};
};

std::mutex g_betterPanelMutex;
[[clang::no_destroy]] std::vector<std::shared_ptr<BetterPanelState>>
    g_betterPanels;
std::mutex g_betterMediaMutex;
[[clang::no_destroy]] wmp::MediaPlayer g_betterMediaPlayer{nullptr};
[[clang::no_destroy]] std::wstring g_betterMediaPath;
std::atomic<uint64_t> g_betterMediaRequestGeneration{0};
double g_betterMediaVolume = 0.75;
bool g_betterMediaMuted = false;
double g_betterPlaybackRate = 1.0;
bool g_betterRepeatEnabled = false;
bool g_betterShuffleEnabled = false;

struct BetterPanelWorkerTask {
    std::thread thread;
    std::shared_ptr<std::atomic_bool> finished;
};

[[clang::no_destroy]] std::mutex g_betterPanelWorkerMutex;
[[clang::no_destroy]] std::vector<BetterPanelWorkerTask>
    g_betterPanelWorkers;
std::atomic_bool g_betterPanelWorkersStopping{false};
HANDLE g_betterPanelWorkerStopEvent = nullptr;
std::atomic_uint32_t g_betterPanelActiveAsyncOperations{0};

struct BetterPanelAsyncLifetime {
    BetterPanelAsyncLifetime() {
        g_betterPanelActiveAsyncOperations.fetch_add(
            1, std::memory_order_acq_rel);
    }
    ~BetterPanelAsyncLifetime() {
        g_betterPanelActiveAsyncOperations.fetch_sub(
            1, std::memory_order_acq_rel);
    }
    BetterPanelAsyncLifetime(BetterPanelAsyncLifetime const&) = delete;
    BetterPanelAsyncLifetime& operator=(BetterPanelAsyncLifetime const&) =
        delete;
};

bool BetterPanelWorkerStopping() {
    return g_betterPanelWorkersStopping.load(std::memory_order_acquire);
}

bool BetterPanelWorkerWait(DWORD milliseconds) {
    HANDLE stopEvent = g_betterPanelWorkerStopEvent;
    if (!stopEvent) {
        Sleep(milliseconds);
        return BetterPanelWorkerStopping();
    }
    return WaitForSingleObject(stopEvent, milliseconds) == WAIT_OBJECT_0;
}

template <typename Work>
void BetterPanelStartWorker(Work&& work) {
    if (BetterPanelWorkerStopping()) return;

    auto finished = std::make_shared<std::atomic_bool>(false);
    std::lock_guard lock(g_betterPanelWorkerMutex);
    for (auto it = g_betterPanelWorkers.begin();
         it != g_betterPanelWorkers.end();) {
        if (!it->finished->load(std::memory_order_acquire)) {
            ++it;
            continue;
        }
        if (it->thread.joinable()) it->thread.join();
        it = g_betterPanelWorkers.erase(it);
    }
    if (BetterPanelWorkerStopping()) return;
    g_betterPanelWorkers.push_back({
        std::thread([finished, task = std::forward<Work>(work)]() mutable {
            try {
                task();
            } catch (...) {
                Wh_Log(L"Background task error %08X",
                       winrt::to_hresult().value);
            }
            finished->store(true, std::memory_order_release);
        }),
        std::move(finished),
    });
}

bool BetterPanelStopAndJoinWorkers() {
    g_betterPanelWorkersStopping.store(true, std::memory_order_release);
    if (g_betterPanelWorkerStopEvent) SetEvent(g_betterPanelWorkerStopEvent);

    std::vector<BetterPanelWorkerTask> workers;
    {
        std::lock_guard lock(g_betterPanelWorkerMutex);
        workers.swap(g_betterPanelWorkers);
    }
    ULONGLONG waitStart = GetTickCount64();
    std::vector<BetterPanelWorkerTask> stillRunning;
    for (auto& worker : workers) {
        while (!worker.finished->load(std::memory_order_acquire) &&
               GetTickCount64() - waitStart < 1500) {
            Sleep(10);
        }
        if (worker.finished->load(std::memory_order_acquire)) {
            if (worker.thread.joinable()) worker.thread.join();
        } else {
            stillRunning.push_back(std::move(worker));
        }
    }
    if (!stillRunning.empty()) {
        std::lock_guard lock(g_betterPanelWorkerMutex);
        for (auto& worker : stillRunning) {
            g_betterPanelWorkers.push_back(std::move(worker));
        }
        Wh_Log(L"%zu worker(s) still running at unload",
               stillRunning.size());
        return false;
    }
    return true;
}

bool BetterPanelPlayBrightFlash(
    std::shared_ptr<BetterPanelState> const& state,
    UIElement const& element,
    std::chrono::milliseconds duration) {
    if (!state || !element) return false;

    try {
        void* identity = winrt::get_abi(element);
        muc::SpriteVisual overlay{nullptr};
        if (auto existing = state->animationFlashOverlays.find(identity);
            existing != state->animationFlashOverlays.end()) {
            auto originalElement = existing->second.element.get();
            if (originalElement &&
                winrt::get_abi(originalElement) == identity) {
                overlay = existing->second.visual;
            } else {
                state->animationFlashOverlays.erase(existing);
            }
        }
        if (!overlay) {
            auto currentChild =
                muxh::ElementCompositionPreview::GetElementChildVisual(
                    element);
            if (currentChild) {
                // Never replace or reparent a visual owned by Explorer.
                // The caller will provide a safe transform fallback.
                return false;
            }
            auto visual = muxh::ElementCompositionPreview::GetElementVisual(
                element);
            auto compositor = visual.Compositor();
            overlay = compositor.CreateSpriteVisual();
            overlay.Brush(compositor.CreateColorBrush(
                winrt::Windows::UI::ColorHelper::FromArgb(
                    255, 255, 255, 255)));
            overlay.Opacity(0.0f);
            muxh::ElementCompositionPreview::SetElementChildVisual(
                element, overlay);
            state->animationFlashOverlays.emplace(
                identity, BetterPanelState::AnimationFlashOverlay{
                              winrt::make_weak(element), overlay});
        }

        overlay.Size(element.ActualSize());
        overlay.Opacity(0.0f);
        auto animation = overlay.Compositor().CreateScalarKeyFrameAnimation();
        animation.Duration(duration);
        animation.InsertKeyFrame(0.0f, 0.0f);
        animation.InsertKeyFrame(0.22f, 0.62f);
        animation.InsertKeyFrame(0.48f, 0.34f);
        animation.InsertKeyFrame(1.0f, 0.0f);
        overlay.StartAnimation(L"Opacity", animation);
        return true;
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Flash animation error %08X: %s", ex.code(),
               ex.message().c_str());
        return false;
    }
}

winrt::Windows::Foundation::Numerics::float3 BetterPanelClampedScale(
    UIElement const& element, float relativeChange,
    float maximumEdgeMovement = 4.0f) {
    auto size = element.ActualSize();
    auto clampedAxis = [relativeChange, maximumEdgeMovement](float length) {
        if (length <= 0.0f) return 1.0f + relativeChange;
        float limit = maximumEdgeMovement * 2.0f / length;
        float magnitude = std::min(std::abs(relativeChange), limit);
        return 1.0f + std::copysign(magnitude, relativeChange);
    };
    return {clampedAxis(size.x), clampedAxis(size.y), 1.0f};
}

float BetterPanelClampedRotation(UIElement const& element,
                                 float requestedDegrees,
                                 float maximumEdgeMovement = 4.0f) {
    auto size = element.ActualSize();
    float radius = std::max(size.x, size.y) / 2.0f;
    if (radius <= 0.0f) return requestedDegrees;
    constexpr float radiansToDegrees = 57.2957795131f;
    float limit = std::atan(maximumEdgeMovement / radius) * radiansToDegrees;
    return std::copysign(std::min(std::abs(requestedDegrees), limit),
                         requestedDegrees);
}

UIElement BetterPanelFindCompactAnimationTarget(DependencyObject const& root,
                                                int depth = 0) {
    if (!root || depth > 10) return nullptr;
    if (depth > 0 &&
        (root.try_as<muxc::FontIcon>() || root.try_as<muxc::Image>())) {
        return root.try_as<UIElement>();
    }
    int count = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
        GetChildrenCount(root);
    for (int index = 0; index < count; ++index) {
        auto target = BetterPanelFindCompactAnimationTarget(
            winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::GetChild(
                root, index),
            depth + 1);
        if (target) return target;
    }
    return nullptr;
}

winrt::Windows::Foundation::Numerics::float3 BetterPanelHoverRestScale(
    UIElement const& element, bool pointerOver) {
    if (!pointerOver) return {1.0f, 1.0f, 1.0f};
    switch (g_settings.hoverAnimation) {
        case BetterPanelHoverAnimation::Scale:
            return BetterPanelClampedScale(element, 0.07f);
        case BetterPanelHoverAnimation::Lift:
            return BetterPanelClampedScale(element, 0.025f, 2.0f);
        case BetterPanelHoverAnimation::Spring:
            return BetterPanelClampedScale(element, 0.08f);
        default:
            return {1.0f, 1.0f, 1.0f};
    }
}

void BetterPanelSetAnimationRestState(
                                      std::shared_ptr<BetterPanelState> const& state,
                                      UIElement const& element,
                                      bool pointerOver) {
    if (!element) return;

    try {
        auto visual = muxh::ElementCompositionPreview::GetElementVisual(
            element);
        auto compositor = visual.Compositor();
        visual.CenterPoint({element.ActualSize().x / 2,
                            element.ActualSize().y / 2, 0.0f});

        auto animateVector = [&](wchar_t const* property,
                                 winrt::Windows::Foundation::Numerics::float3
                                     from,
                                 winrt::Windows::Foundation::Numerics::float3
                                     to) {
            auto animation = compositor.CreateVector3KeyFrameAnimation();
            animation.Duration(std::chrono::milliseconds(140));
            auto easing = compositor.CreateCubicBezierEasingFunction(
                {0.1f, 0.9f}, {0.2f, 1.0f});
            animation.InsertKeyFrame(0.0f, from);
            animation.InsertKeyFrame(1.0f, to, easing);
            visual.StartAnimation(property, animation);
        };
        auto animateScalar = [&](wchar_t const* property, float from,
                                 float to) {
            auto animation = compositor.CreateScalarKeyFrameAnimation();
            animation.Duration(std::chrono::milliseconds(140));
            auto easing = compositor.CreateCubicBezierEasingFunction(
                {0.1f, 0.9f}, {0.2f, 1.0f});
            animation.InsertKeyFrame(0.0f, from);
            animation.InsertKeyFrame(1.0f, to, easing);
            visual.StartAnimation(property, animation);
        };

        auto targetScale = BetterPanelHoverRestScale(element, pointerOver);
        float targetOpacity = 1.0f;
        float targetRotation = 0.0f;
        auto targetTranslation =
            winrt::Windows::Foundation::Numerics::float3{0.0f, 0.0f, 0.0f};

        if (pointerOver) {
            switch (g_settings.hoverAnimation) {
                case BetterPanelHoverAnimation::Scale:
                    break;
                case BetterPanelHoverAnimation::Lift:
                    // A small scale plus a visible rise keeps Lift distinct
                    // from Explorer's built-in color-only hover response.
                    targetTranslation = {0.0f, -4.0f, 0.0f};
                    break;
                case BetterPanelHoverAnimation::Tilt:
                    targetRotation =
                        BetterPanelClampedRotation(element, -2.0f);
                    break;
                case BetterPanelHoverAnimation::Spring:
                    break;
                default:
                    break;
            }
        }

        auto currentScale = visual.Scale();
        float currentOpacity = visual.Opacity();
        float currentRotation = visual.RotationAngleInDegrees();
        visual.Scale(targetScale);
        visual.Opacity(targetOpacity);
        visual.RotationAngleInDegrees(targetRotation);

        Vector3Transition translationTransition;
        translationTransition.Duration(std::chrono::milliseconds(140));
        element.TranslationTransition(translationTransition);
        element.Translation(targetTranslation);

        animateVector(L"Scale", currentScale, targetScale);
        animateScalar(L"Opacity", currentOpacity, targetOpacity);
        animateScalar(L"RotationAngleInDegrees", currentRotation,
                      targetRotation);

        if (pointerOver &&
                   g_settings.hoverAnimation ==
                       BetterPanelHoverAnimation::Spring) {
            auto spring = compositor.CreateVector3KeyFrameAnimation();
            spring.Duration(std::chrono::milliseconds(380));
            spring.InsertKeyFrame(0.0f, {1.0f, 1.0f, 1.0f});
            spring.InsertKeyFrame(
                0.32f, BetterPanelClampedScale(element, 0.11f));
            spring.InsertKeyFrame(
                0.58f, BetterPanelClampedScale(element, 0.04f));
            spring.InsertKeyFrame(
                0.78f, BetterPanelClampedScale(element, 0.09f));
            spring.InsertKeyFrame(1.0f, targetScale);
            visual.StartAnimation(L"Scale", spring);
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Hover animation error %08X: %s", ex.code(),
               ex.message().c_str());
    }
}

void BetterPanelPlayClickAnimation(
                                   std::shared_ptr<BetterPanelState> const& state,
                                   UIElement const& element,
                                   bool pointerOver) {
    if (!element ||
        g_settings.clickAnimation ==
            BetterPanelClickAnimation::WindowsDefault ||
        g_settings.clickAnimation == BetterPanelClickAnimation::None) {
        return;
    }

    try {
        auto visual = muxh::ElementCompositionPreview::GetElementVisual(
            element);
        auto compositor = visual.Compositor();
        visual.CenterPoint({element.ActualSize().x / 2,
                            element.ActualSize().y / 2, 0.0f});

        auto restScale = BetterPanelHoverRestScale(element, pointerOver);
        float restRotation =
            pointerOver && g_settings.hoverAnimation ==
                               BetterPanelHoverAnimation::Tilt
                ? BetterPanelClampedRotation(element, -2.0f)
                : 0.0f;

        if (g_settings.clickAnimation == BetterPanelClickAnimation::Press ||
            g_settings.clickAnimation == BetterPanelClickAnimation::Pulse) {
            auto animation = compositor.CreateVector3KeyFrameAnimation();
            animation.Duration(std::chrono::milliseconds(220));
            animation.InsertKeyFrame(
                0.0f, restScale);
            animation.InsertKeyFrame(
                0.35f,
                g_settings.clickAnimation == BetterPanelClickAnimation::Press
                    ? BetterPanelClampedScale(element, -0.14f)
                    : BetterPanelClampedScale(element, 0.14f));
            animation.InsertKeyFrame(
                1.0f, restScale);
            visual.StartAnimation(L"Scale", animation);
        } else if (g_settings.clickAnimation ==
                   BetterPanelClickAnimation::Bounce) {
            auto base = visual.Offset();
            auto animation = compositor.CreateVector3KeyFrameAnimation();
            animation.Duration(std::chrono::milliseconds(330));
            animation.InsertKeyFrame(0.0f, base);
            animation.InsertKeyFrame(
                0.28f, {base.x, base.y + 7.0f, base.z});
            animation.InsertKeyFrame(
                0.62f, {base.x, base.y - 5.0f, base.z});
            animation.InsertKeyFrame(1.0f, base);
            visual.StartAnimation(L"Offset", animation);
        } else if (g_settings.clickAnimation ==
                   BetterPanelClickAnimation::Flash) {
            if (!BetterPanelPlayBrightFlash(
                    state, element, std::chrono::milliseconds(320))) {
                auto fallback = compositor.CreateVector3KeyFrameAnimation();
                fallback.Duration(std::chrono::milliseconds(280));
                fallback.InsertKeyFrame(
                    0.0f, restScale);
                fallback.InsertKeyFrame(
                    0.30f, BetterPanelClampedScale(element, 0.16f));
                fallback.InsertKeyFrame(
                    1.0f, restScale);
                visual.StartAnimation(L"Scale", fallback);
            }
        } else if (g_settings.clickAnimation ==
                   BetterPanelClickAnimation::Shake) {
            auto animation = compositor.CreateScalarKeyFrameAnimation();
            animation.Duration(std::chrono::milliseconds(300));
            animation.InsertKeyFrame(0.0f, restRotation);
            animation.InsertKeyFrame(
                0.22f, BetterPanelClampedRotation(element, -6.0f));
            animation.InsertKeyFrame(
                0.48f, BetterPanelClampedRotation(element, 6.0f));
            animation.InsertKeyFrame(
                0.74f, BetterPanelClampedRotation(element, -3.0f));
            animation.InsertKeyFrame(1.0f, restRotation);
            visual.StartAnimation(L"RotationAngleInDegrees", animation);
        } else if (g_settings.clickAnimation ==
                   BetterPanelClickAnimation::Spring) {
            auto animation = compositor.CreateVector3KeyFrameAnimation();
            animation.Duration(std::chrono::milliseconds(430));
            animation.InsertKeyFrame(
                0.0f, BetterPanelClampedScale(element, -0.16f));
            animation.InsertKeyFrame(
                0.30f, BetterPanelClampedScale(element, 0.15f));
            animation.InsertKeyFrame(
                0.55f, BetterPanelClampedScale(element, -0.04f));
            animation.InsertKeyFrame(
                0.76f, BetterPanelClampedScale(element, 0.07f));
            animation.InsertKeyFrame(1.0f, restScale);
            visual.StartAnimation(L"Scale", animation);
        } else if (g_settings.clickAnimation ==
                   BetterPanelClickAnimation::Spin) {
            auto spinTarget = BetterPanelFindCompactAnimationTarget(element);
            auto spinVisual = spinTarget
                ? muxh::ElementCompositionPreview::GetElementVisual(spinTarget)
                : visual;
            auto spinSize = spinTarget ? spinTarget.ActualSize()
                                       : element.ActualSize();
            spinVisual.CenterPoint(
                {spinSize.x / 2, spinSize.y / 2, 0.0f});
            auto animation =
                spinVisual.Compositor().CreateScalarKeyFrameAnimation();
            animation.Duration(std::chrono::milliseconds(360));
            animation.InsertKeyFrame(0.0f, spinTarget ? 0.0f : restRotation);
            animation.InsertKeyFrame(
                1.0f, (spinTarget ? 0.0f : restRotation) + 360.0f);
            spinVisual.StartAnimation(L"RotationAngleInDegrees", animation);
        } else if (g_settings.clickAnimation ==
                   BetterPanelClickAnimation::Squash) {
            auto animation = compositor.CreateVector3KeyFrameAnimation();
            animation.Duration(std::chrono::milliseconds(260));
            animation.InsertKeyFrame(
                0.0f, restScale);
            auto squashWide = BetterPanelClampedScale(element, 0.16f);
            auto squashShort = BetterPanelClampedScale(element, -0.22f);
            animation.InsertKeyFrame(
                0.36f, {squashWide.x, squashShort.y, 1.0f});
            animation.InsertKeyFrame(
                1.0f, restScale);
            visual.StartAnimation(L"Scale", animation);
        } else if (g_settings.clickAnimation ==
                   BetterPanelClickAnimation::Wobble) {
            auto animation = compositor.CreateScalarKeyFrameAnimation();
            animation.Duration(std::chrono::milliseconds(380));
            animation.InsertKeyFrame(0.0f, restRotation);
            animation.InsertKeyFrame(
                0.20f, BetterPanelClampedRotation(element, -7.0f));
            animation.InsertKeyFrame(
                0.43f, BetterPanelClampedRotation(element, 6.0f));
            animation.InsertKeyFrame(
                0.66f, BetterPanelClampedRotation(element, -4.0f));
            animation.InsertKeyFrame(
                0.84f, BetterPanelClampedRotation(element, 2.0f));
            animation.InsertKeyFrame(1.0f, restRotation);
            visual.StartAnimation(L"RotationAngleInDegrees", animation);
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Button animation error %08X: %s", ex.code(),
               ex.message().c_str());
    }
}

void BetterPanelRemoveAnimationHandlers(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state) return;

    for (auto const& [identity, registration] :
         state->animationHandlersInstalled) {
        try {
            if (auto button = registration.button.get()) {
                if (registration.pointerEntered.value) {
                    button.PointerEntered(registration.pointerEntered);
                }
                if (registration.pointerExited.value) {
                    button.PointerExited(registration.pointerExited);
                }
                if (registration.click.value) {
                    button.Click(registration.click);
                }
                if (auto overlay = state->animationFlashOverlays.find(identity);
                    overlay != state->animationFlashOverlays.end()) {
                    auto child = muxh::ElementCompositionPreview::
                        GetElementChildVisual(button);
                    if (child == overlay->second.visual) {
                        muxh::ElementCompositionPreview::SetElementChildVisual(
                            button, nullptr);
                    }
                }
            }
        } catch (...) {
            Wh_Log(L"Animation handler cleanup error %08X",
                   winrt::to_hresult().value);
        }
    }
    state->animationHandlersInstalled.clear();
    state->animationFlashOverlays.clear();
}

void BetterPanelDetachHostUnloadedHandler(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state) return;
    if (state->hostPointerPressedToken.value) {
        try {
            if (auto host = state->host.get()) {
                host.PointerPressed(state->hostPointerPressedToken);
            }
        } catch (...) {
            Wh_Log(L"Host pointer cleanup error %08X",
                   winrt::to_hresult().value);
        }
        state->hostPointerPressedToken = {};
    }
    if (state->hostSizeChangedToken.value) {
        try {
            if (auto host = state->host.get()) {
                host.SizeChanged(state->hostSizeChangedToken);
            }
        } catch (...) {
            Wh_Log(L"Host resize cleanup error %08X", winrt::to_hresult().value);
        }
        state->hostSizeChangedToken = {};
    }
    if (!state->hostUnloadedToken.value) return;
    try {
        if (auto host = state->host.get()) {
            host.Unloaded(state->hostUnloadedToken);
        }
    } catch (...) {
        Wh_Log(L"Host unload cleanup error %08X", winrt::to_hresult().value);
    }
    state->hostUnloadedToken = {};
}

void BetterPanelStopStateTimers(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state) return;
    auto stop = [](DispatcherTimer& timer, winrt::event_token& token) {
        if (!timer) return;
        try { timer.Stop(); } catch (...) {
            Wh_Log(L"Timer stop error %08X", winrt::to_hresult().value);
        }
        try { if (token.value) timer.Tick(token); } catch (...) {
            Wh_Log(L"Timer event cleanup error %08X",
                   winrt::to_hresult().value);
        }
        token = {};
        timer = nullptr;
    };
    stop(state->timer, state->timerTickToken);
    stop(state->mediaTimer, state->mediaTimerTickToken);
    state->mediaTimerRunning = false;
    stop(state->videoControlsTimer, state->videoControlsTimerTickToken);
    stop(state->selectionSettleTimer, state->selectionSettleTimerTickToken);
}

void BetterPanelAttachHostSizeChangedHandler(
    std::shared_ptr<BetterPanelState> const& state,
    muxc::StackPanel const& host) {
    auto weakState = std::weak_ptr<BetterPanelState>(state);
    state->hostSizeChangedToken = host.SizeChanged(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    SizeChangedEventArgs const& args) {
            if (auto state = weakState.lock(); state && !state->unloaded &&
                !state->detached) {
                if (auto viewport = state->videoViewport.get()) {
                    // Keep the decoder surface stable; only scale its view.
                    double availableWidth = std::max(
                        180.0,
                        static_cast<double>(args.NewSize().Width) - 32.0);
                    viewport.Width(availableWidth);
                    viewport.Height(std::max(
                        150.0, availableWidth * (236.0 / 420.0)));
                }
                state->gifNormalHeight =
                    std::clamp(static_cast<double>(args.NewSize().Width) * 0.62,
                               220.0, 380.0);
                if (!state->gifExpanded) {
                    if (auto gifCard = state->gifCard.get()) {
                        gifCard.Height(state->gifNormalHeight);
                    }
                }
                state->pdfBaseWidth = std::clamp(
                    static_cast<double>(args.NewSize().Width) - 52.0,
                    260.0, 680.0);
                if (auto pdfImage = state->pdfImage.get()) {
                    pdfImage.Width(state->pdfBaseWidth * state->pdfZoom);
                }
            }
        });
}

void BetterPanelInstallAnimationHandlers(
    std::shared_ptr<BetterPanelState> const& state,
    muxp::ButtonBase const& button) {
    if (!state || !button) return;

    void* identity = winrt::get_abi(button);
    if (auto existing = state->animationHandlersInstalled.find(identity);
        existing != state->animationHandlersInstalled.end()) {
        if (auto installedButton = existing->second.button.get();
            installedButton == button) {
            BetterPanelSetAnimationRestState(state, button,
                                              button.IsPointerOver());
            return;
        }
        state->animationHandlersInstalled.erase(existing);
    }

    auto weakButton = winrt::make_weak(button);
    std::weak_ptr<BetterPanelState> weakState = state;
    BetterPanelState::AnimationHandlerRegistration registration;
    registration.button = weakButton;
    registration.pointerEntered = button.PointerEntered(
        [weakButton, weakState](
                     winrt::Windows::Foundation::IInspectable const&,
                     winrt::Microsoft::UI::Xaml::Input::
                         PointerRoutedEventArgs const&) {
            if (auto element = weakButton.get(); element) {
                if (auto state = weakState.lock()) {
                    BetterPanelSetAnimationRestState(state, element, true);
                }
            }
        });
    registration.pointerExited = button.PointerExited(
        [weakButton, weakState](
                     winrt::Windows::Foundation::IInspectable const&,
                     winrt::Microsoft::UI::Xaml::Input::
                         PointerRoutedEventArgs const&) {
            if (auto element = weakButton.get(); element) {
                if (auto state = weakState.lock()) {
                    BetterPanelSetAnimationRestState(state, element, false);
                }
            }
        });

    registration.click = button.Click([weakButton, weakState](
                     winrt::Windows::Foundation::IInspectable const&,
                     RoutedEventArgs const&) {
        if (auto element = weakButton.get(); element) {
            if (auto state = weakState.lock()) {
                BetterPanelPlayClickAnimation(
                    state, element, element.IsPointerOver());
            }
        }
    });
    state->animationHandlersInstalled.emplace(identity,
                                               std::move(registration));
    BetterPanelSetAnimationRestState(state, button, button.IsPointerOver());
}

void BetterPanelApplyNativeButtonStyle(
    std::shared_ptr<BetterPanelState> const& state,
    DependencyObject const& root) {
    if (!state || !root) return;

    if (auto buttonBase = root.try_as<muxp::ButtonBase>()) {
        BetterPanelInstallAnimationHandlers(state, buttonBase);
    }

    if (auto button = root.try_as<muxc::Button>()) {
        if (state->nativeButtonStyle &&
            button.Style() != state->nativeButtonStyle) {
            button.Style(state->nativeButtonStyle);
        }
        auto buttonBase = button.as<muxp::ButtonBase>();
        void* identity = winrt::get_abi(buttonBase);
        auto snapshotIt = state->buttonLayoutSnapshots.find(identity);
        if (snapshotIt == state->buttonLayoutSnapshots.end() ||
            snapshotIt->second.button.get() != buttonBase) {
            snapshotIt = state->buttonLayoutSnapshots.insert_or_assign(
                identity,
                BetterPanelButtonLayoutSnapshot{
                    winrt::make_weak(buttonBase), button.Margin(), button.Padding(),
                    button.Width(), button.Height(), button.MinWidth(),
                    button.MinHeight()}).first;
        }
        auto const& snapshot = snapshotIt->second;
        button.Margin(snapshot.margin);
        button.Padding(snapshot.padding);
        button.Width(snapshot.width);
        button.Height(snapshot.height);
        button.MinWidth(snapshot.minWidth);
        button.MinHeight(snapshot.minHeight);

        bool compact = g_settings.buttonLayoutMode ==
                       BetterPanelButtonLayoutMode::Compact;
        bool comfort = g_settings.buttonLayoutMode ==
                       BetterPanelButtonLayoutMode::Comfort;
        auto content = button.Content();
        bool iconOnly = content &&
            (content.try_as<muxc::FontIcon>() || content.try_as<muxc::Image>());
        bool playbackSpeed = state->playbackSpeedButton.get() == button;
        if (!compact) {
            int horizontalMargin =
                comfort ? 0 : g_settings.buttonHorizontalMargin;
            int verticalMargin = comfort ? 0 : g_settings.buttonVerticalMargin;
            button.Margin(Thickness{
                snapshot.margin.Left + horizontalMargin,
                snapshot.margin.Top + verticalMargin,
                snapshot.margin.Right + horizontalMargin,
                snapshot.margin.Bottom + verticalMargin});
        }
        if (iconOnly || playbackSpeed) {
            // Compact is a real shared preset, not each control's unrelated
            // hard-coded starting size. This keeps Copy all, preview, print,
            // delete, expand, and media icon buttons in step with one another.
            double size = compact ? 28.0
                                  : (comfort ? 32.0
                                             : g_settings.iconButtonSize);
            double width = playbackSpeed ? std::max(34.0, size) : size;
            button.Width(width);
            button.Height(size);
            button.MinWidth(width);
            button.MinHeight(size);
            button.Padding(playbackSpeed ? Thickness{2, 0, 2, 0}
                                         : Thickness{0});
        } else if (!compact) {
                int horizontalPadding =
                    comfort ? 10 : g_settings.buttonHorizontalPadding;
                int verticalPadding =
                    comfort ? 4 : g_settings.buttonVerticalPadding;
                int minimumWidth = comfort ? 0 : g_settings.buttonMinimumWidth;
                int minimumHeight =
                    comfort ? 32 : g_settings.buttonMinimumHeight;
                button.MinWidth(minimumWidth);
                button.MinHeight(minimumHeight);
                button.Padding(Thickness{
                    static_cast<double>(horizontalPadding),
                    static_cast<double>(verticalPadding),
                    static_cast<double>(horizontalPadding),
                    static_cast<double>(verticalPadding)});
                // Fixed-size action buttons must grow with their padding too;
                // otherwise the content area shrinks and the setting appears
                // to do nothing (or clips the label).
                if (std::isfinite(snapshot.width)) {
                    double paddingDelta = horizontalPadding * 2.0 -
                        snapshot.padding.Left - snapshot.padding.Right;
                    button.Width(std::max(0.0,
                                          snapshot.width + paddingDelta));
                }
                if (std::isfinite(snapshot.height)) {
                    double paddingDelta = verticalPadding * 2.0 -
                        snapshot.padding.Top - snapshot.padding.Bottom;
                    button.Height(std::max(0.0,
                                           snapshot.height + paddingDelta));
                }
        }
    } else if (auto button = root.try_as<muxp::ToggleButton>();
               button) {
        auto buttonBase = button.as<muxp::ButtonBase>();
        void* identity = winrt::get_abi(buttonBase);
        auto snapshotIt = state->buttonLayoutSnapshots.find(identity);
        if (snapshotIt == state->buttonLayoutSnapshots.end() ||
            snapshotIt->second.button.get() != buttonBase) {
            snapshotIt = state->buttonLayoutSnapshots.insert_or_assign(
                identity,
                BetterPanelButtonLayoutSnapshot{
                    winrt::make_weak(buttonBase), button.Margin(), button.Padding(),
                    button.Width(), button.Height(), button.MinWidth(),
                    button.MinHeight()}).first;
        }
        auto const& snapshot = snapshotIt->second;
        button.Margin(snapshot.margin);
        button.Padding(snapshot.padding);
        button.Width(snapshot.width);
        button.Height(snapshot.height);
        button.MinWidth(snapshot.minWidth);
        button.MinHeight(snapshot.minHeight);
        if (g_settings.buttonLayoutMode !=
            BetterPanelButtonLayoutMode::Compact) {
            bool comfort = g_settings.buttonLayoutMode ==
                           BetterPanelButtonLayoutMode::Comfort;
            int horizontalMargin =
                comfort ? 0 : g_settings.buttonHorizontalMargin;
            int verticalMargin = comfort ? 0 : g_settings.buttonVerticalMargin;
            int horizontalPadding =
                comfort ? 10 : g_settings.buttonHorizontalPadding;
            int verticalPadding = comfort ? 4 : g_settings.buttonVerticalPadding;
            button.Margin(Thickness{
                snapshot.margin.Left + horizontalMargin,
                snapshot.margin.Top + verticalMargin,
                snapshot.margin.Right + horizontalMargin,
                snapshot.margin.Bottom + verticalMargin});
            button.MinWidth(comfort ? 0 : g_settings.buttonMinimumWidth);
            button.MinHeight(comfort ? 32 : g_settings.buttonMinimumHeight);
            button.Padding(Thickness{
                static_cast<double>(horizontalPadding),
                static_cast<double>(verticalPadding),
                static_cast<double>(horizontalPadding),
                static_cast<double>(verticalPadding)});
            if (std::isfinite(snapshot.width)) {
                double paddingDelta = horizontalPadding * 2.0 -
                    snapshot.padding.Left - snapshot.padding.Right;
                button.Width(std::max(0.0,
                                      snapshot.width + paddingDelta));
            }
            if (std::isfinite(snapshot.height)) {
                double paddingDelta = verticalPadding * 2.0 -
                    snapshot.padding.Top - snapshot.padding.Bottom;
                button.Height(std::max(0.0,
                                       snapshot.height + paddingDelta));
            }
        }
    }

    int childCount = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
        GetChildrenCount(root);
    for (int index = 0; index < childCount; index++) {
        BetterPanelApplyNativeButtonStyle(
            state,
            winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::GetChild(
                root, index));
    }
}

void BetterPanelPruneButtonLayoutSnapshots(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state) return;
    std::erase_if(state->buttonLayoutSnapshots, [](auto const& entry) {
        return !entry.second.button.get();
    });
}

std::optional<bool> BetterPanelReadFavoriteState(std::wstring const& path);
void BetterPanelSetStatus(winrt::weak_ref<muxc::TextBlock> weakStatus,
                          std::wstring_view text);
winrt::fire_and_forget BetterPanelShowTemporaryButtonMessage(
    winrt::weak_ref<muxc::Button> weakButton, std::wstring_view text);
IShellBrowser* BetterPanelGetShellBrowser(HWND window);
muxc::Image BetterPanelFindPreviewImage(DependencyObject const& root);

void BetterPanelRefreshFavoritesViews(
    std::shared_ptr<BetterPanelState> const& state,
    std::wstring const& path) {
    SHChangeNotify(SHCNE_UPDATEITEM,
                   SHCNF_PATHW | SHCNF_FLUSH,
                   path.c_str(), nullptr);

    PIDLIST_ABSOLUTE homePidl = nullptr;
    if (SUCCEEDED(SHParseDisplayName(L"shell:Home", nullptr, &homePidl,
                                     0, nullptr)) && homePidl) {
        SHChangeNotify(SHCNE_UPDATEDIR,
                       SHCNF_IDLIST | SHCNF_FLUSH,
                       homePidl, nullptr);
        CoTaskMemFree(homePidl);
    }

    HWND root = state ? state->explorerWindow : nullptr;
    root = root ? GetAncestor(root, GA_ROOT) : nullptr;
    for (HWND tab = nullptr; root &&
         (tab = FindWindowExW(root, tab, L"ShellTabWindowClass", nullptr));) {
        if (auto browser = BetterPanelGetShellBrowser(tab)) {
            winrt::com_ptr<IShellView> view;
            if (SUCCEEDED(browser->QueryActiveShellView(view.put())) && view) {
                view->Refresh();
            }
        }
    }
}

void BetterPanelSetTransferProgress(
    std::shared_ptr<BetterPanelState> const& state,
    std::wstring_view text, bool active) {
    if (!state) return;
    if (auto row = state->transferProgressRow.get()) {
        row.Visibility(active ? Visibility::Visible : Visibility::Collapsed);
    }
    if (auto label = state->transferProgressText.get()) label.Text(text);
    if (auto bar = state->transferProgressBar.get()) {
        bar.IsIndeterminate(active);
    }
}

void BetterPanelApplyFavoriteVisual(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state) return;
    auto button = state->favoriteButton.get();
    if (!button) return;
    auto icon = button.Content().try_as<muxc::FontIcon>();
    if (icon) {
        icon.Glyph(state->favoritePinned ? L"\uE735" : L"\uE734");
        if (state->favoritePinned) {
            icon.Foreground(
                winrt::Microsoft::UI::Xaml::Media::SolidColorBrush(
                    winrt::Windows::UI::ColorHelper::FromArgb(
                        255, 255, 193, 7)));
        } else {
            icon.ClearValue(muxc::IconElement::ForegroundProperty());
        }
    }
    std::wstring label = state->favoritePinned
                             ? L"Remove from Favorites"
                             : L"Add to Favorites";
    muxa::AutomationProperties::SetName(button, label);
    muxc::ToolTipService::SetToolTip(button, winrt::box_value(label));
}

void BetterPanelQueueFavoriteCheck(
    std::shared_ptr<BetterPanelState> const& state,
    std::wstring const& path, bool verifyAction = false,
    bool expectedPinned = true) {
    if (!state || path.empty()) return;
    state->favoriteCheckPending = true;
    uint64_t generation = ++state->favoriteCheckGeneration;
    auto dispatcher = state->dispatcher;
    std::weak_ptr<BetterPanelState> weakState = state;
    BetterPanelStartWorker([weakState, dispatcher, path, generation, verifyAction,
                 expectedPinned]() {
        HRESULT initialized = CoInitializeEx(nullptr,
                                             COINIT_MULTITHREADED);
        std::optional<bool> pinned;
        int attempts = verifyAction ? 12 : 1;
        for (int attempt = 0; attempt < attempts; attempt++) {
            if (attempt && BetterPanelWorkerWait(150)) break;
            pinned = BetterPanelReadFavoriteState(path);
            if (pinned &&
                (!verifyAction || *pinned == expectedPinned)) break;
        }
        if (SUCCEEDED(initialized)) CoUninitialize();
        if (BetterPanelWorkerStopping()) return;
        dispatcher.TryEnqueue(
            [weakState, path, generation, pinned, verifyAction,
             expectedPinned]() {
                auto state = weakState.lock();
                if (!state || state->unloaded ||
                    state->favoriteCheckGeneration != generation ||
                    state->selectedPath != path) {
                    return;
                }
                state->favoriteCheckPending = false;
                state->favoriteStatePath = path;
                state->favoriteStateKnown = pinned.has_value();
                state->favoritePinned = pinned.value_or(false);
                BetterPanelApplyFavoriteVisual(state);
                if (verifyAction) {
                    bool changed = state->favoriteStateKnown &&
                                   state->favoritePinned == expectedPinned;
                    if (changed) {
                        BetterPanelRefreshFavoritesViews(state, path);
                    }
                    BetterPanelShowTemporaryButtonMessage(
                        state->favoriteButton,
                        changed
                            ? (expectedPinned ? L"Added to Favorites"
                                              : L"Removed from Favorites")
                            : (expectedPinned
                                   ? L"Windows did not add this item to Favorites"
                                   : L"Windows did not remove this item from Favorites"));
                }
            });
    });
}

void BetterPanelRefresh(std::shared_ptr<BetterPanelState> const& state);
void BetterPanelInvalidateExplorerQueryCaches();
HWND BetterPanelGetFocusedTabWindow();
void BetterPanelHandlePowerMessage(MSG const* message);

void BetterPanelHandleMiddleClick(MSG const* message);

bool BetterPanelMessageCanChangeExplorerState(MSG const* message) {
    if (!message) return false;
    switch (message->message) {
        case WM_LBUTTONUP:
        case WM_RBUTTONUP:
        case WM_MBUTTONUP:
        case WM_XBUTTONUP:
        case WM_KEYUP:
        case WM_SYSKEYUP:
        case WM_COMMAND:
        case WM_APPCOMMAND:
            return true;
        default:
            return false;
    }
}

void BetterPanelQueueCurrentThreadRefresh(bool skipEditingStates = false) {
    BetterPanelInvalidateExplorerQueryCaches();
    std::vector<std::shared_ptr<BetterPanelState>> states;
    {
        std::lock_guard lock(g_betterPanelMutex);
        for (auto const& state : g_betterPanels) {
            if (state && state->dispatcher &&
                state->dispatcher.HasThreadAccess()) {
                states.push_back(state);
            }
        }
    }

    for (auto const& state : states) {
        if (state->unloaded || state->interactiveRefreshQueued) continue;
        if (skipEditingStates &&
            (state->textEditing || state->metadataEditing)) {
            continue;
        }

        state->transferLastScanTick = 0;
        state->interactiveRefreshQueued = true;
        std::weak_ptr<BetterPanelState> weakState = state;
        if (!state->dispatcher.TryEnqueue([weakState]() {
                auto state = weakState.lock();
                if (!state) return;
                state->interactiveRefreshQueued = false;
                BetterPanelRefresh(state);
            })) {
            state->interactiveRefreshQueued = false;
        }
    }
}

void BetterPanelQueueInteractiveRefresh(MSG const* message) {
    if (message && message->message == WM_MBUTTONDOWN) {
        return;
    }
    if (!BetterPanelMessageCanChangeExplorerState(message)) return;

    if (message->message == WM_MBUTTONUP) {
        BetterPanelHandleMiddleClick(message);
    }

    // Capture the native tab while Explorer's input message still has focus.
    // Deferred XAML refreshes often run after focus has moved into the details
    // pane, where enumerating visible ShellTabWindowClass windows can select a
    // stale background tab (commonly Home/This PC).
    BetterPanelGetFocusedTabWindow();
    BetterPanelScheduleCurrentThreadDiscovery();
    BetterPanelQueueCurrentThreadRefresh(
        message->message == WM_KEYUP || message->message == WM_SYSKEYUP);
}

void BetterPanelApplyEditorBackspace(muxc::TextBox const& editor) {
    int32_t selectionStart = editor.SelectionStart();
    int32_t selectionLength = editor.SelectionLength();
    if (selectionLength == 0) {
        if (selectionStart <= 0) return;

        auto text = editor.Text();
        int32_t deleteLength = 1;
        if (selectionStart >= 2) {
            wchar_t previous = text.c_str()[selectionStart - 1];
            wchar_t beforePrevious = text.c_str()[selectionStart - 2];
            bool surrogatePair = previous >= 0xDC00 && previous <= 0xDFFF &&
                                 beforePrevious >= 0xD800 &&
                                 beforePrevious <= 0xDBFF;
            bool windowsNewline = previous == L'\n' && beforePrevious == L'\r';
            if (surrogatePair || windowsNewline) deleteLength = 2;
        }
        selectionStart -= deleteLength;
        editor.Select(selectionStart, deleteLength);
    }

    editor.SelectedText(L"");
    editor.Select(selectionStart, 0);
}

bool BetterPanelConsumeBackspaceMessage(MSG* message) {
    if (!message || message->message != WM_KEYDOWN ||
        message->wParam != VK_BACK) {
        return false;
    }

    try {
        std::vector<std::shared_ptr<BetterPanelState>> states;
        {
            std::lock_guard lock(g_betterPanelMutex);
            for (auto const& state : g_betterPanels) {
                if (state && state->dispatcher &&
                    state->dispatcher.HasThreadAccess()) {
                    states.push_back(state);
                }
            }
        }

        for (auto const& state : states) {
            if (state->textEditing) {
                auto richEditor = state->textEditor.get();
                auto host = state->host.get();
                if (richEditor && host && host.XamlRoot()) {
                    auto focused = mux::Input::FocusManager::GetFocusedElement(
                        host.XamlRoot()).try_as<muxc::RichEditBox>();
                    if (focused && winrt::get_abi(focused) ==
                                       winrt::get_abi(richEditor)) {
                        // RichEditBox handles Backspace correctly on its own.
                        return false;
                    }
                }
            }
            muxc::TextBox editor{nullptr};
            if (state->metadataEditing) {
                editor = state->metadataFocusedEditor.get();
            } else {
                editor = state->transientFocusedEditor.get();
            }
            if (!editor) continue;

            auto host = state->host.get();
            if (!host || !host.XamlRoot()) continue;
            auto focused = mux::Input::FocusManager::GetFocusedElement(
                host.XamlRoot());
            auto focusedEditor = focused.try_as<muxc::TextBox>();
            if (!focusedEditor ||
                winrt::get_abi(focusedEditor) != winrt::get_abi(editor)) {
                continue;
            }

            BetterPanelApplyEditorBackspace(editor);
            message->message = WM_NULL;
            message->wParam = 0;
            message->lParam = 0;
            return true;
        }
    } catch (...) {
    }
    return false;
}

// A GetMessageW function hook leaves a return address in this DLL on every
// Explorer message-pump thread while GetMessageW blocks. Unloading the DLL
// before that call returns causes an execute-after-unload crash. A per-thread
// WH_GETMESSAGE hook runs only when a message is retrieved and is removed on
// the same UI thread during mod teardown.
LRESULT CALLBACK BetterPanelGetMessageHook(int code, WPARAM wParam,
                                           LPARAM lParam) {
    g_betterPanelActiveMessageCallbacks.fetch_add(1,
                                                   std::memory_order_acq_rel);
    struct CallbackGuard {
        ~CallbackGuard() {
            g_betterPanelActiveMessageCallbacks.fetch_sub(
                1, std::memory_order_acq_rel);
        }
    } guard;
    try {
        if (code == HC_ACTION && wParam == PM_REMOVE && lParam &&
            g_betterPanelThreadHasPanel && !BetterPanelWorkerStopping()) {
            MSG* message = reinterpret_cast<MSG*>(lParam);
            if (!BetterPanelConsumeBackspaceMessage(message) &&
                (message->message == WM_MBUTTONDOWN ||
                 message->message == WM_MBUTTONUP)) {
                BetterPanelQueueInteractiveRefresh(message);
            }
        }
    } catch (...) {
        Wh_Log(L"Message hook error %08X", winrt::to_hresult().value);
    }
    return CallNextHookEx(nullptr, code, wParam, lParam);
}

void BetterPanelUnhookRemainingMessageHooks() {
    std::unordered_map<DWORD, HHOOK> hooks;
    {
        std::lock_guard lock(g_betterPanelMessageHooksMutex);
        hooks.swap(g_betterPanelMessageHooks);
    }
    for (auto const& [threadId, hook] : hooks) {
        if (hook) UnhookWindowsHookEx(hook);
    }
    while (g_betterPanelActiveMessageCallbacks.load(
               std::memory_order_acquire) != 0) {
        Sleep(1);
    }
}

std::wstring BetterPanelExtractPath(IShellBrowser* shellBrowser) {
    if (!shellBrowser) {
        return {};
    }

    winrt::com_ptr<IShellView> shellView;
    if (FAILED(shellBrowser->QueryActiveShellView(shellView.put())) ||
        !shellView) {
        return {};
    }

    winrt::com_ptr<IFolderView2> folderView;
    if (FAILED(shellView->QueryInterface(IID_PPV_ARGS(folderView.put()))) ||
        !folderView) {
        return {};
    }

    winrt::com_ptr<IShellItemArray> selection;
    if (FAILED(folderView->GetSelection(FALSE, selection.put())) ||
        !selection) {
        return {};
    }

    DWORD count = 0;
    if (FAILED(selection->GetCount(&count)) || count != 1) {
        return {};
    }

    winrt::com_ptr<IShellItem> item;
    if (FAILED(selection->GetItemAt(0, item.put())) || !item) {
        return {};
    }

    PWSTR rawPath = nullptr;
    if (FAILED(item->GetDisplayName(SIGDN_FILESYSPATH, &rawPath)) ||
        !rawPath) {
        return {};
    }

    std::wstring path(rawPath);
    CoTaskMemFree(rawPath);
    return path;
}

IShellBrowser* BetterPanelGetShellBrowser(HWND window) {
    if (!window) {
        return nullptr;
    }

    DWORD processId = 0;
    GetWindowThreadProcessId(window, &processId);
    if (processId != GetCurrentProcessId()) {
        return nullptr;
    }

    WCHAR className[64]{};
    if (!GetClassNameW(window, className, ARRAYSIZE(className)) ||
        (_wcsicmp(className, L"CabinetWClass") != 0 &&
         _wcsicmp(className, L"ShellTabWindowClass") != 0)) {
        return nullptr;
    }

    return reinterpret_cast<IShellBrowser*>(
        SendMessageW(window, CWM_GETISHELLBROWSER, 0, 0));
}

std::wstring BetterPanelGetSelectedPath() {
    HWND focus = nullptr;
    GUITHREADINFO threadInfo{sizeof(threadInfo)};
    if (GetGUIThreadInfo(GetCurrentThreadId(), &threadInfo)) {
        focus = threadInfo.hwndFocus ? threadInfo.hwndFocus
                                     : threadInfo.hwndActive;
    }
    if (!focus) {
        focus = GetForegroundWindow();
    }
    if (!focus) {
        return {};
    }

    for (HWND window = focus; window; window = GetParent(window)) {
        if (auto browser = BetterPanelGetShellBrowser(window)) {
            auto path = BetterPanelExtractPath(browser);
            if (!path.empty()) {
                return path;
            }
        }
    }

    HWND root = GetAncestor(focus, GA_ROOT);
    for (HWND tab = nullptr; root &&
         (tab = FindWindowExW(root, tab, L"ShellTabWindowClass", nullptr));) {
        if (auto browser = BetterPanelGetShellBrowser(tab)) {
            auto path = BetterPanelExtractPath(browser);
            if (!path.empty()) {
                return path;
            }
        }
    }

    return {};
}

std::vector<std::wstring> BetterPanelExtractPaths(
    IShellBrowser* shellBrowser) {
    std::vector<std::wstring> paths;
    if (!shellBrowser) {
        return paths;
    }
    winrt::com_ptr<IShellView> shellView;
    if (FAILED(shellBrowser->QueryActiveShellView(shellView.put())) ||
        !shellView) {
        return paths;
    }
    winrt::com_ptr<IFolderView2> folderView;
    if (FAILED(shellView->QueryInterface(IID_PPV_ARGS(folderView.put()))) ||
        !folderView) {
        return paths;
    }
    winrt::com_ptr<IShellItemArray> selection;
    if (FAILED(folderView->GetSelection(FALSE, selection.put())) ||
        !selection) {
        return paths;
    }
    DWORD count = 0;
    if (FAILED(selection->GetCount(&count))) {
        return paths;
    }
    for (DWORD index = 0; index < count; index++) {
        winrt::com_ptr<IShellItem> item;
        if (FAILED(selection->GetItemAt(index, item.put())) || !item) {
            continue;
        }
        PWSTR rawPath = nullptr;
        if (SUCCEEDED(item->GetDisplayName(SIGDN_FILESYSPATH, &rawPath)) &&
            rawPath) {
            paths.emplace_back(rawPath);
        }
        CoTaskMemFree(rawPath);
    }
    return paths;
}

std::wstring BetterPanelExtractFolderPath(IShellBrowser* shellBrowser) {
    if (!shellBrowser) {
        return {};
    }
    winrt::com_ptr<IShellView> shellView;
    if (FAILED(shellBrowser->QueryActiveShellView(shellView.put())) ||
        !shellView) {
        return {};
    }
    winrt::com_ptr<IFolderView2> folderView;
    if (FAILED(shellView->QueryInterface(IID_PPV_ARGS(folderView.put()))) ||
        !folderView) {
        return {};
    }
    winrt::com_ptr<IShellItem> folderItem;
    if (FAILED(folderView->GetFolder(IID_PPV_ARGS(folderItem.put()))) ||
        !folderItem) {
        return {};
    }
    PWSTR rawPath = nullptr;
    if (FAILED(folderItem->GetDisplayName(SIGDN_FILESYSPATH, &rawPath)) ||
        !rawPath) {
        return {};
    }
    std::wstring path(rawPath);
    CoTaskMemFree(rawPath);
    return path;
}

thread_local HWND g_betterLastFocusedTabWindow = nullptr;
thread_local HWND g_betterQueryExplorerWindow = nullptr;

HWND BetterPanelGetWindowFromId(winrt::Microsoft::UI::WindowId windowId);

HWND BetterPanelGetExplorerWindowForElement(FrameworkElement const& element) {
    // ContentIslandEnvironment::AppWindowId is an identifier, not an HWND.
    // Treating its numeric Value as a window handle can associate the panel
    // with an unrelated/invalid root and makes selection queries read Home or
    // a background tab. DetailsPaneControl runs on its owning Explorer
    // window's UI thread, so resolve the real CabinetWClass on that thread.
    auto isExplorerRoot = [](HWND window) {
        if (!window) return false;
        WCHAR className[64]{};
        DWORD processId = 0;
        return GetWindowThreadProcessId(window, &processId) != 0 &&
               processId == GetCurrentProcessId() &&
               GetClassNameW(window, className, ARRAYSIZE(className)) != 0 &&
               _wcsicmp(className, L"CabinetWClass") == 0;
    };

    // The XAML island reports its owning top-level WindowId. Resolve that ID
    // to an HWND; its numeric value is not itself an HWND. This matters when
    // the detached panel has focus or several Explorer windows share a thread.
    try {
        if (auto root = element.XamlRoot()) {
            if (auto environment = root.ContentIslandEnvironment()) {
                HWND owner = BetterPanelGetWindowFromId(
                    environment.AppWindowId());
                if (isExplorerRoot(owner)) return owner;
            }
        }
    } catch (...) {
    }

    for (HWND candidate : {GetActiveWindow(), GetForegroundWindow()}) {
        HWND root = candidate ? GetAncestor(candidate, GA_ROOT) : nullptr;
        if (isExplorerRoot(root) &&
            GetWindowThreadProcessId(root, nullptr) == GetCurrentThreadId()) {
            return root;
        }
    }

    struct FindContext {
        HWND window = nullptr;
    } context;
    EnumThreadWindows(
        GetCurrentThreadId(),
        [](HWND window, LPARAM parameter) -> BOOL {
            auto context = reinterpret_cast<FindContext*>(parameter);
            WCHAR className[64]{};
            if (IsWindowVisible(window) &&
                GetClassNameW(window, className, ARRAYSIZE(className)) &&
                _wcsicmp(className, L"CabinetWClass") == 0) {
                context->window = window;
                return FALSE;
            }
            return TRUE;
        },
        reinterpret_cast<LPARAM>(&context));
    return context.window;
}

struct BetterPanelExplorerWindowScope {
    HWND previous = nullptr;

    explicit BetterPanelExplorerWindowScope(HWND window)
        : previous(g_betterQueryExplorerWindow) {
        g_betterQueryExplorerWindow = window;
    }

    ~BetterPanelExplorerWindowScope() {
        g_betterQueryExplorerWindow = previous;
    }
};

HWND BetterPanelGetFocusedTabWindow() {
    HWND focus = nullptr;
    GUITHREADINFO threadInfo{sizeof(threadInfo)};
    if (GetGUIThreadInfo(GetCurrentThreadId(), &threadInfo)) {
        focus = threadInfo.hwndFocus ? threadInfo.hwndFocus
                                     : threadInfo.hwndActive;
    }
    if (!focus) {
        focus = GetForegroundWindow();
    }
    HWND scopedRoot = g_betterQueryExplorerWindow &&
                              IsWindow(g_betterQueryExplorerWindow)
                          ? g_betterQueryExplorerWindow
                          : nullptr;
    for (HWND window = focus; window; window = GetParent(window)) {
        WCHAR className[64]{};
        DWORD processId = 0;
        if (GetClassNameW(window, className, ARRAYSIZE(className)) &&
            _wcsicmp(className, L"ShellTabWindowClass") == 0 &&
            GetWindowThreadProcessId(window, &processId) != 0 &&
            processId == GetCurrentProcessId() &&
            (!scopedRoot || GetAncestor(window, GA_ROOT) == scopedRoot)) {
            g_betterLastFocusedTabWindow = window;
            return window;
        }
    }

    // Focus moves into the injected details pane when its controls are used.
    // Resolve the currently visible tab before consulting the cache. Returning
    // a cached tab here first could permanently pin queries to a background
    // Home tab after the user switched tabs or navigated elsewhere.
    HWND root = scopedRoot ? scopedRoot
                           : (focus ? GetAncestor(focus, GA_ROOT) : nullptr);
    DWORD rootProcessId = 0;
    if (root &&
        (GetWindowThreadProcessId(root, &rootProcessId) == 0 ||
         rootProcessId != GetCurrentProcessId())) {
        root = nullptr;
    }
    HWND visibleTab = nullptr;
    if (root) {
        EnumChildWindows(root, [](HWND child, LPARAM parameter) -> BOOL {
            WCHAR className[64]{};
            if (IsWindowVisible(child) &&
                GetClassNameW(child, className, ARRAYSIZE(className)) &&
                _wcsicmp(className, L"ShellTabWindowClass") == 0 &&
                BetterPanelGetShellBrowser(child)) {
                *reinterpret_cast<HWND*>(parameter) = child;
                return FALSE;
            }
            return TRUE;
        }, reinterpret_cast<LPARAM>(&visibleTab));
    }
    if (visibleTab) {
        g_betterLastFocusedTabWindow = visibleTab;
        return visibleTab;
    }
    if (root && g_betterLastFocusedTabWindow &&
        GetAncestor(g_betterLastFocusedTabWindow, GA_ROOT) == root &&
        IsWindow(g_betterLastFocusedTabWindow) &&
        BetterPanelGetShellBrowser(g_betterLastFocusedTabWindow)) {
        return g_betterLastFocusedTabWindow;
    }
    return nullptr;
}

bool BetterPanelNavigateCurrentTab(std::wstring const& path) {
    if (path.empty()) return false;
    HWND tab = BetterPanelGetFocusedTabWindow();
    auto browser = BetterPanelGetShellBrowser(tab);
    if (!browser) return false;
    PIDLIST_ABSOLUTE itemId = nullptr;
    HRESULT result = SHParseDisplayName(path.c_str(), nullptr, &itemId, 0,
                                        nullptr);
    if (FAILED(result) || !itemId) return false;
    result = browser->BrowseObject(itemId, SBSP_SAMEBROWSER | SBSP_ABSOLUTE);
    CoTaskMemFree(itemId);
    return SUCCEEDED(result);
}

struct BetterPanelTransferContext {
    std::vector<std::wstring> sources;
    std::wstring destination;
};

BetterPanelTransferContext BetterPanelResolveTransferContext(
    std::wstring_view preferredSource,
    std::vector<std::wstring> const& fallbackSources) {
    struct TabInfo {
        HWND window = nullptr;
        std::wstring folder;
        std::vector<std::wstring> selection;
    };
    BetterPanelTransferContext context;
    HWND activeTab = BetterPanelGetFocusedTabWindow();
    HWND root = activeTab ? GetAncestor(activeTab, GA_ROOT)
                          : g_betterQueryExplorerWindow;
    std::vector<TabInfo> tabs;
    for (HWND tab = nullptr; root &&
         (tab = FindWindowExW(root, tab, L"ShellTabWindowClass", nullptr));) {
        if (auto browser = BetterPanelGetShellBrowser(tab)) {
            auto folder = BetterPanelExtractFolderPath(browser);
            if (!folder.empty()) {
                tabs.push_back(
                    TabInfo{tab, std::move(folder),
                            BetterPanelExtractPaths(browser)});
            }
        }
    }
    if (tabs.empty()) {
        return context;
    }

    size_t activeIndex = tabs.size();
    for (size_t index = 0; index < tabs.size(); index++) {
        if (tabs[index].window == activeTab) {
            activeIndex = index;
            break;
        }
    }
    // Home and other virtual shell locations don't have a filesystem path and
    // therefore aren't present in |tabs|. Never fall back to the first real
    // folder tab, since that makes Home display a misleading Move action for a
    // completely different destination.
    if (activeIndex == tabs.size()) {
        return context;
    }
    size_t sourceIndex = tabs.size();
    if (!preferredSource.empty()) {
        for (size_t index = 0; index < tabs.size(); index++) {
            if (std::find(tabs[index].selection.begin(),
                          tabs[index].selection.end(), preferredSource) !=
                tabs[index].selection.end()) {
                sourceIndex = index;
                break;
            }
        }
    }
    if (sourceIndex == tabs.size()) {
        for (size_t index = 0; index < tabs.size(); index++) {
            if (!tabs[index].selection.empty()) {
                sourceIndex = index;
                break;
            }
        }
    }

    if (sourceIndex < tabs.size()) {
        context.sources = tabs[sourceIndex].selection;
    } else {
        context.sources = fallbackSources;
    }
    if (context.sources.empty()) {
        return context;
    }

    // These actions belong to the destination folder view only. When the
    // source tab is active, its regular file-specific controls stay clean.
    if (sourceIndex != activeIndex) {
        context.destination = tabs[activeIndex].folder;
        if (tabs[activeIndex].selection.size() == 1) {
            DWORD attributes = GetFileAttributesW(
                tabs[activeIndex].selection[0].c_str());
            if (attributes != INVALID_FILE_ATTRIBUTES &&
                (attributes & FILE_ATTRIBUTE_DIRECTORY)) {
                context.destination = tabs[activeIndex].selection[0];
            }
        }
    }
    return context;
}

struct BetterPanelSelectionCache {
    HWND tab = nullptr;
    ULONGLONG tick = 0;
    std::vector<std::wstring> paths;
};

struct BetterPanelFolderCache {
    HWND tab = nullptr;
    ULONGLONG tick = 0;
    std::wstring path;
};

thread_local BetterPanelSelectionCache g_betterSelectionCache;
thread_local BetterPanelFolderCache g_betterFolderCache;

void BetterPanelInvalidateExplorerQueryCaches() {
    g_betterSelectionCache.tick = 0;
    g_betterFolderCache.tick = 0;
}

std::vector<std::wstring> BetterPanelGetActiveSelectionPaths(
    bool allowShortCache = true) {
    auto& cache = g_betterSelectionCache;
    HWND activeTab = BetterPanelGetFocusedTabWindow();
    if (!activeTab) {
        return {};
    }
    ULONGLONG now = GetTickCount64();
    if (allowShortCache && cache.tab == activeTab &&
        now - cache.tick <= 100) {
        return cache.paths;
    }
    auto paths = BetterPanelExtractPaths(BetterPanelGetShellBrowser(activeTab));
    cache.tab = activeTab;
    cache.tick = now;
    cache.paths = paths;
    return paths;
}

std::wstring BetterPanelFileName(std::wstring_view path) {
    size_t slash = path.find_last_of(L"\\/");
    return std::wstring(path.substr(slash == std::wstring_view::npos
                                        ? 0
                                        : slash + 1));
}

bool BetterPanelIsAudioFile(std::wstring_view path) {
    size_t dot = path.find_last_of(L'.');
    if (dot == std::wstring_view::npos) {
        return false;
    }

    std::wstring extension(path.substr(dot));
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    return extension == L".mp3" || extension == L".ogg" ||
           extension == L".oga" || extension == L".opus" ||
           extension == L".flac" || extension == L".wav" ||
           extension == L".m4a" || extension == L".aac" ||
           extension == L".wma";
}

bool BetterPanelIsVideoFile(std::wstring_view path) {
    size_t dot = path.find_last_of(L'.');
    if (dot == std::wstring_view::npos) {
        return false;
    }
    std::wstring extension(path.substr(dot));
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    return extension == L".mov" || extension == L".mp4" ||
           extension == L".m4v" || extension == L".mkv" ||
           extension == L".avi" || extension == L".wmv" ||
           extension == L".webm" || extension == L".mpeg" ||
           extension == L".mpg" || extension == L".ts" ||
           extension == L".mts" || extension == L".m2ts";
}

bool BetterPanelIsGifFile(std::wstring_view path) {
    size_t dot = path.find_last_of(L'.');
    if (dot == std::wstring_view::npos) {
        return false;
    }
    std::wstring extension(path.substr(dot));
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    return extension == L".gif";
}

bool BetterPanelIsArchiveFile(std::wstring_view path) {
    size_t dot = path.find_last_of(L'.');
    if (dot == std::wstring_view::npos) {
        return false;
    }
    std::wstring extension(path.substr(dot));
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    static constexpr std::wstring_view archiveExtensions[] = {
        L".zip", L".rar", L".7z",  L".tar", L".gz",  L".gzip",
        L".bz2", L".xz",  L".tgz", L".tbz", L".tbz2", L".txz",
        L".cab", L".iso", L".wim", L".arj", L".lzh", L".lha",
        L".zst", L".zipx"};
    return std::find(std::begin(archiveExtensions),
                     std::end(archiveExtensions), extension) !=
           std::end(archiveExtensions);
}

bool BetterPanelIsTextFile(std::wstring_view path) {
    size_t dot = path.find_last_of(L'.');
    if (dot == std::wstring_view::npos) {
        return false;
    }
    std::wstring extension(path.substr(dot));
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    static constexpr std::wstring_view textExtensions[] = {
        L".txt",        L".md",       L".markdown", L".log",
        L".csv",        L".tsv",      L".json",     L".jsonc",
        L".xml",        L".xaml",     L".yaml",     L".yml",
        L".ini",        L".inf",      L".cfg",      L".conf",
        L".config",
        L".properties", L".reg",      L".url",      L".bat",
        L".cmd",        L".ps1",      L".psm1",     L".psd1",
        L".sh",         L".py",       L".js",       L".jsx",
        L".ts",         L".tsx",      L".css",      L".scss",
        L".less",       L".html",     L".htm",      L".c",
        L".h",          L".cpp",      L".hpp",      L".cc",
        L".cs",         L".java",     L".kt",       L".kts",
        L".rs",         L".go",       L".php",      L".rb",
        L".swift",      L".sql",      L".toml",     L".gradle",
        L".sln",        L".vcxproj",  L".csproj",   L".props",
        L".targets",    L".gitignore", L".gitattributes"};
    return std::find(std::begin(textExtensions), std::end(textExtensions),
                     extension) != std::end(textExtensions);
}

bool BetterPanelIsPdfFile(std::wstring_view path) {
    size_t dot = path.find_last_of(L'.');
    if (dot == std::wstring_view::npos) {
        return false;
    }
    std::wstring extension(path.substr(dot));
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    return extension == L".pdf";
}

bool BetterPanelIsFontInstallFile(std::wstring_view path) {
    size_t dot = path.find_last_of(L'.');
    if (dot == std::wstring_view::npos) return false;
    std::wstring extension(path.substr(dot));
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    return extension == L".ttf" || extension == L".otf" ||
           extension == L".ttc" || extension == L".fon";
}

bool BetterPanelIsSystemInstallFile(std::wstring_view path) {
    size_t dot = path.find_last_of(L'.');
    if (dot == std::wstring_view::npos) return false;
    std::wstring extension(path.substr(dot));
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    return extension == L".inf" || extension == L".reg";
}

bool BetterPanelIsRegistryFile(std::wstring_view path) {
    size_t dot = path.find_last_of(L'.');
    if (dot == std::wstring_view::npos) return false;
    std::wstring extension(path.substr(dot));
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    return extension == L".reg";
}

bool BetterPanelCanInstallSelection(
    std::vector<std::wstring> const& paths) {
    if (paths.empty()) return false;
    bool allFonts = std::all_of(paths.begin(), paths.end(), [](auto const& path) {
        return BetterPanelIsFontInstallFile(path);
    });
    return allFonts ||
           (paths.size() == 1 &&
            BetterPanelIsSystemInstallFile(paths.front()));
}

bool BetterPanelHasTypeSpecificNativeActions(std::wstring_view path) {
    size_t dot = path.find_last_of(L'.');
    if (dot == std::wstring_view::npos) return false;
    std::wstring extension(path.substr(dot));
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    static constexpr std::wstring_view extensions[] = {
        L".iso", L".vhd", L".vhdx", L".cer", L".crt",
        L".p7b", L".pfx", L".p12"};
    return std::find(std::begin(extensions), std::end(extensions),
                     extension) != std::end(extensions);
}

bool BetterPanelHasPrintHandler(std::wstring_view path) {
    size_t dot = path.find_last_of(L'.');
    if (dot == std::wstring_view::npos) {
        return false;
    }
    std::wstring extension(path.substr(dot));
    WCHAR command[2048]{};
    DWORD commandLength = static_cast<DWORD>(std::size(command));
    return SUCCEEDED(AssocQueryStringW(
               ASSOCF_INIT_IGNOREUNKNOWN, ASSOCSTR_COMMAND,
               extension.c_str(), L"print", command, &commandLength)) &&
           command[0] != L'\0';
}

bool BetterPanelPrintFile(std::wstring const& path, HWND owner) {
    if (path.empty() || !BetterPanelHasPrintHandler(path)) {
        return false;
    }
    SHELLEXECUTEINFOW executeInfo{sizeof(executeInfo)};
    executeInfo.fMask = SEE_MASK_ASYNCOK;
    executeInfo.hwnd = owner;
    executeInfo.lpVerb = L"print";
    executeInfo.lpFile = path.c_str();
    executeInfo.nShow = SW_SHOWNORMAL;
    return ShellExecuteExW(&executeInfo) != FALSE;
}

struct BetterPanelTextFileData {
    bool success = false;
    bool editable = false;
    std::wstring text;
    std::wstring newline = L"\r\n";
    std::wstring message;
    BetterPanelTextEncoding encoding = BetterPanelTextEncoding::Utf8;
    FILETIME lastWriteTime{};
    uint64_t size = 0;
};

constexpr uint64_t kBetterPanelTextPreviewLimit = 2 * 1024 * 1024;
constexpr uint64_t kBetterPanelTextEditLimit = 1024 * 1024;

std::wstring BetterPanelTextEncodingName(BetterPanelTextEncoding encoding) {
    switch (encoding) {
        case BetterPanelTextEncoding::Utf8:
            return L"UTF-8";
        case BetterPanelTextEncoding::Utf8Bom:
            return L"UTF-8 BOM";
        case BetterPanelTextEncoding::Utf16Le:
            return L"UTF-16 LE";
        case BetterPanelTextEncoding::Utf16Be:
            return L"UTF-16 BE";
        case BetterPanelTextEncoding::Ansi:
            return L"ANSI";
    }
    return L"Text";
}

std::wstring BetterPanelFormatByteSize(uint64_t size) {
    WCHAR buffer[48]{};
    constexpr uint64_t tebibyte = 1024ULL * 1024 * 1024 * 1024;
    constexpr uint64_t gibibyte = 1024ULL * 1024 * 1024;
    if (size >= tebibyte) {
        swprintf_s(buffer, L"%.2f TB",
                   static_cast<double>(size) / static_cast<double>(tebibyte));
    } else if (size >= gibibyte) {
        swprintf_s(buffer, L"%.2f GB",
                   static_cast<double>(size) / static_cast<double>(gibibyte));
    } else if (size >= 1024 * 1024) {
        swprintf_s(buffer, L"%.2f MB",
                   static_cast<double>(size) / (1024.0 * 1024.0));
    } else if (size >= 1024) {
        swprintf_s(buffer, L"%.2f KB", static_cast<double>(size) / 1024.0);
    } else {
        swprintf_s(buffer, L"%llu bytes",
                   static_cast<unsigned long long>(size));
    }
    return buffer;
}

std::wstring BetterPanelGetActiveFolderPath() {
    auto& cache = g_betterFolderCache;
    HWND activeTab = BetterPanelGetFocusedTabWindow();
    if (!activeTab) return {};
    ULONGLONG now = GetTickCount64();
    if (cache.tab == activeTab && now - cache.tick <= 100) {
        return cache.path;
    }
    auto path = BetterPanelExtractFolderPath(BetterPanelGetShellBrowser(activeTab));
    cache.tab = activeTab;
    cache.tick = now;
    cache.path = path;
    return path;
}

bool BetterPanelCopyText(std::wstring const& text) {
    if (text.empty() || !OpenClipboard(nullptr)) return false;
    bool copied = false;
    if (EmptyClipboard()) {
        SIZE_T bytes = (text.size() + 1) * sizeof(WCHAR);
        HGLOBAL memory = GlobalAlloc(GMEM_MOVEABLE, bytes);
        if (memory) {
            if (void* target = GlobalLock(memory)) {
                memcpy(target, text.c_str(), bytes);
                GlobalUnlock(memory);
                copied = SetClipboardData(CF_UNICODETEXT, memory) != nullptr;
            }
            if (!copied) GlobalFree(memory);
        }
    }
    CloseClipboard();
    return copied;
}

std::wstring BetterPanelFormatFileTime(FILETIME fileTime) {
    FILETIME localTime{};
    SYSTEMTIME systemTime{};
    if (!FileTimeToLocalFileTime(&fileTime, &localTime) ||
        !FileTimeToSystemTime(&localTime, &systemTime)) {
        return L"Unknown";
    }
    WCHAR date[64]{};
    WCHAR time[64]{};
    GetDateFormatEx(LOCALE_NAME_USER_DEFAULT, DATE_SHORTDATE, &systemTime,
                    nullptr, date, ARRAYSIZE(date), nullptr);
    GetTimeFormatEx(LOCALE_NAME_USER_DEFAULT, TIME_NOSECONDS, &systemTime,
                    nullptr, time, ARRAYSIZE(time));
    return std::wstring(date) + L" " + time;
}

bool BetterPanelIsImageFile(std::wstring_view path) {
    size_t dot = path.find_last_of(L'.');
    if (dot == std::wstring_view::npos) return false;
    std::wstring extension(path.substr(dot));
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    static constexpr std::wstring_view extensions[] = {
        L".jpg", L".jpeg", L".jpe", L".png", L".bmp", L".tif",
        L".tiff", L".gif", L".webp", L".heic", L".heif", L".avif"};
    return std::find(std::begin(extensions), std::end(extensions), extension) !=
           std::end(extensions);
}

std::wstring BetterPanelSha256(
    std::wstring const& path, std::weak_ptr<BetterPanelState> weakState,
    uint64_t generation) {
    HANDLE file = CreateFileW(path.c_str(), GENERIC_READ,
                              FILE_SHARE_READ | FILE_SHARE_WRITE |
                                  FILE_SHARE_DELETE,
                              nullptr, OPEN_EXISTING,
                              FILE_ATTRIBUTE_NORMAL | FILE_FLAG_SEQUENTIAL_SCAN,
                              nullptr);
    if (file == INVALID_HANDLE_VALUE) return {};

    BCRYPT_ALG_HANDLE algorithm = nullptr;
    BCRYPT_HASH_HANDLE hash = nullptr;
    DWORD objectLength = 0;
    DWORD bytesWritten = 0;
    std::vector<UCHAR> hashObject;
    std::vector<UCHAR> digest(32);
    std::vector<UCHAR> buffer(1024 * 1024);
    bool success = false;
    if (BCryptOpenAlgorithmProvider(&algorithm, BCRYPT_SHA256_ALGORITHM,
                                    nullptr, 0) >= 0 &&
        BCryptGetProperty(algorithm, BCRYPT_OBJECT_LENGTH,
                          reinterpret_cast<PUCHAR>(&objectLength),
                          sizeof(objectLength), &bytesWritten, 0) >= 0) {
        hashObject.resize(objectLength);
        if (BCryptCreateHash(algorithm, &hash, hashObject.data(), objectLength,
                             nullptr, 0, 0) >= 0) {
            DWORD read = 0;
            success = true;
            while (true) {
                if (BetterPanelWorkerStopping()) {
                    success = false;
                    break;
                }
                auto state = weakState.lock();
                if (!state ||
                    state->insightsGeneration.load(std::memory_order_relaxed) !=
                        generation) {
                    success = false;
                    break;
                }
                if (!ReadFile(file, buffer.data(),
                              static_cast<DWORD>(buffer.size()), &read,
                              nullptr)) {
                    success = false;
                    break;
                }
                if (!read) break;
                if (BCryptHashData(hash, buffer.data(), read, 0) < 0) {
                    success = false;
                    break;
                }
            }
            if (success && BCryptFinishHash(hash, digest.data(),
                                            static_cast<ULONG>(digest.size()),
                                            0) < 0) {
                success = false;
            }
        }
    }
    if (hash) BCryptDestroyHash(hash);
    if (algorithm) BCryptCloseAlgorithmProvider(algorithm, 0);
    CloseHandle(file);
    if (!success) return {};

    static constexpr WCHAR digits[] = L"0123456789abcdef";
    std::wstring result;
    result.reserve(64);
    for (UCHAR byte : digest) {
        result.push_back(digits[byte >> 4]);
        result.push_back(digits[byte & 0x0F]);
    }
    return result;
}

struct BetterPanelInsightData {
    bool success = false;
    bool directory = false;
    uint64_t size = 0;
    FILETIME modified{};
    std::wstring path;
    std::wstring name;
};

BetterPanelInsightData BetterPanelReadInsightData(std::wstring const& path) {
    BetterPanelInsightData result;
    WIN32_FILE_ATTRIBUTE_DATA data{};
    if (!GetFileAttributesExW(path.c_str(), GetFileExInfoStandard, &data)) {
        return result;
    }
    result.success = true;
    result.path = path;
    result.name = BetterPanelFileName(path);
    result.directory = (data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) != 0;
    result.size = (static_cast<uint64_t>(data.nFileSizeHigh) << 32) |
                  data.nFileSizeLow;
    result.modified = data.ftLastWriteTime;
    return result;
}

struct BetterPanelMultiSummary {
    size_t selectedItems = 0;
    size_t files = 0;
    size_t folders = 0;
    size_t containedFiles = 0;
    size_t subfolders = 0;
    uint64_t totalSize = 0;
    std::map<std::wstring, size_t> types;
    FILETIME oldest{};
    FILETIME newest{};
    bool hasDate = false;
    bool incomplete = false;
    size_t scannedEntries = 0;
};

struct BetterPanelFolderSummaryCacheEntry {
    BetterPanelMultiSummary summary;
    ULONGLONG tick = 0;
};

std::mutex g_betterFolderSummaryCacheMutex;
std::unordered_map<std::wstring, BetterPanelFolderSummaryCacheEntry>
    g_betterFolderSummaryCache;

bool BetterPanelGetCachedFolderSummary(
    std::wstring const& path, BetterPanelMultiSummary& summary) {
    std::lock_guard lock(g_betterFolderSummaryCacheMutex);
    auto found = g_betterFolderSummaryCache.find(path);
    if (found == g_betterFolderSummaryCache.end() ||
        GetTickCount64() - found->second.tick > 60000) {
        return false;
    }
    summary = found->second.summary;
    return true;
}

void BetterPanelCacheFolderSummary(
    std::wstring const& path, BetterPanelMultiSummary const& summary) {
    if (summary.incomplete) return;
    std::lock_guard lock(g_betterFolderSummaryCacheMutex);
    if (g_betterFolderSummaryCache.size() >= 64) {
        auto oldest = std::min_element(
            g_betterFolderSummaryCache.begin(),
            g_betterFolderSummaryCache.end(), [](auto const& left,
                                                  auto const& right) {
                return left.second.tick < right.second.tick;
            });
        if (oldest != g_betterFolderSummaryCache.end()) {
            g_betterFolderSummaryCache.erase(oldest);
        }
    }
    g_betterFolderSummaryCache[path] = {summary, GetTickCount64()};
}

BetterPanelMultiSummary BetterPanelBuildFolderSummary(
    std::wstring const& folder, std::weak_ptr<BetterPanelState> weakState,
    uint64_t generation, size_t maxEntries = 75000,
    ULONGLONG deadline = 0) {
    BetterPanelMultiSummary summary;
    if (!deadline) deadline = GetTickCount64() + 3000;
    std::vector<std::wstring> pending{folder};
    size_t visited = 0;
    while (!pending.empty() && visited < maxEntries &&
           GetTickCount64() < deadline && !BetterPanelWorkerStopping()) {
        auto state = weakState.lock();
        if (!state ||
            state->insightsGeneration.load(std::memory_order_relaxed) !=
                generation) {
            return {};
        }
        std::wstring current = std::move(pending.back());
        pending.pop_back();
        std::wstring pattern = current;
        if (!pattern.ends_with(L'\\')) pattern += L'\\';
        pattern += L"*";
        WIN32_FIND_DATAW findData{};
        HANDLE find = FindFirstFileExW(pattern.c_str(), FindExInfoBasic,
                                       &findData, FindExSearchNameMatch,
                                       nullptr, FIND_FIRST_EX_LARGE_FETCH);
        if (find == INVALID_HANDLE_VALUE) {
            summary.incomplete = true;
            continue;
        }
        do {
            if (wcscmp(findData.cFileName, L".") == 0 ||
                wcscmp(findData.cFileName, L"..") == 0) continue;
            ++visited;
            if ((visited & 0x3F) == 0) {
                if (BetterPanelWorkerStopping()) {
                    FindClose(find);
                    return {};
                }
                auto state = weakState.lock();
                if (!state ||
                    state->insightsGeneration.load(
                        std::memory_order_relaxed) != generation) {
                    FindClose(find);
                    return {};
                }
                if (GetTickCount64() >= deadline) break;
            }
            std::wstring child = current;
            if (!child.ends_with(L'\\')) child += L'\\';
            child += findData.cFileName;
            if (findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
                ++summary.folders;
                if (!(findData.dwFileAttributes & FILE_ATTRIBUTE_REPARSE_POINT)) {
                    pending.push_back(std::move(child));
                }
            } else {
                ++summary.files;
                summary.totalSize +=
                    (static_cast<uint64_t>(findData.nFileSizeHigh) << 32) |
                    findData.nFileSizeLow;
                std::wstring name = findData.cFileName;
                size_t dot = name.find_last_of(L'.');
                std::wstring type = dot == std::wstring::npos
                                        ? L"No extension"
                                        : name.substr(dot + 1);
                std::transform(type.begin(), type.end(), type.begin(), towupper);
                summary.types[type]++;
            }
        } while (FindNextFileW(find, &findData) && visited < maxEntries &&
                 GetTickCount64() < deadline);
        FindClose(find);
    }
    summary.scannedEntries = visited;
    if (!pending.empty() || visited >= maxEntries ||
        GetTickCount64() >= deadline) {
        summary.incomplete = true;
    }
    return summary;
}

BetterPanelMultiSummary BetterPanelBuildMultiSummary(
    std::vector<std::wstring> const& paths,
    std::weak_ptr<BetterPanelState> weakState,
    uint64_t generation) {
    BetterPanelMultiSummary summary;
    summary.selectedItems = paths.size();
    size_t remainingEntries = 50000;
    ULONGLONG deadline = GetTickCount64() + 2000;
    for (auto const& path : paths) {
        if (BetterPanelWorkerStopping()) return {};
        auto state = weakState.lock();
        if (!state || state->insightsGeneration.load(
                          std::memory_order_relaxed) != generation) {
            return {};
        }
        WIN32_FILE_ATTRIBUTE_DATA data{};
        if (!GetFileAttributesExW(path.c_str(), GetFileExInfoStandard, &data))
            continue;
        if (data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
            ++summary.folders;
            summary.types[L"Folders"]++;
            if (!remainingEntries || GetTickCount64() >= deadline) {
                summary.incomplete = true;
                continue;
            }
            BetterPanelMultiSummary folderSummary;
            bool cached =
                BetterPanelGetCachedFolderSummary(path, folderSummary);
            if (!cached) {
                folderSummary = BetterPanelBuildFolderSummary(
                    path, weakState, generation, remainingEntries, deadline);
                BetterPanelCacheFolderSummary(path, folderSummary);
            }
            remainingEntries -=
                cached ? 0 : std::min(remainingEntries,
                                      folderSummary.scannedEntries);
            summary.containedFiles += folderSummary.files;
            summary.subfolders += folderSummary.folders;
            summary.totalSize += folderSummary.totalSize;
            summary.incomplete = summary.incomplete || folderSummary.incomplete;
            for (auto const& [type, count] : folderSummary.types) {
                summary.types[type] += count;
            }
        } else {
            ++summary.files;
            summary.totalSize +=
                (static_cast<uint64_t>(data.nFileSizeHigh) << 32) |
                data.nFileSizeLow;
            size_t dot = path.find_last_of(L'.');
            std::wstring type = dot == std::wstring::npos
                                    ? L"No extension"
                                    : path.substr(dot + 1);
            std::transform(type.begin(), type.end(), type.begin(), towupper);
            summary.types[type]++;
        }
        if (!summary.hasDate ||
            CompareFileTime(&data.ftLastWriteTime, &summary.oldest) < 0) {
            summary.oldest = data.ftLastWriteTime;
        }
        if (!summary.hasDate ||
            CompareFileTime(&data.ftLastWriteTime, &summary.newest) > 0) {
            summary.newest = data.ftLastWriteTime;
        }
        summary.hasDate = true;
    }
    return summary;
}

std::wstring BetterPanelFormatMultiSummary(
    BetterPanelMultiSummary const& summary) {
    std::wstring text = std::to_wstring(summary.selectedItems) +
                        L" selected  •  " + std::to_wstring(summary.files) +
                        L" files  •  " + std::to_wstring(summary.folders) +
                        L" folders\nCombined file size: " +
                        BetterPanelFormatByteSize(summary.totalSize);
    if (summary.folders) {
        text += L"\nInside folders: " +
                std::to_wstring(summary.containedFiles) + L" files, " +
                std::to_wstring(summary.subfolders) + L" subfolders";
    }
    if (!summary.types.empty()) {
        text += L"\nTypes: ";
        size_t shown = 0;
        for (auto const& [type, count] : summary.types) {
            if (shown++) text += L", ";
            text += type + L" × " + std::to_wstring(count);
            if (shown == 6 && summary.types.size() > shown) {
                text += L", +" + std::to_wstring(summary.types.size() - shown) +
                        L" more";
                break;
            }
        }
    }
    if (summary.hasDate) {
        text += L"\nModified: " + BetterPanelFormatFileTime(summary.oldest);
        if (CompareFileTime(&summary.oldest, &summary.newest) != 0) {
            text += L" – " + BetterPanelFormatFileTime(summary.newest);
        }
    }
    return text;
}

std::wstring BetterPanelFormatTypes(
    std::map<std::wstring, size_t> const& types) {
    std::wstring text;
    size_t shown = 0;
    for (auto const& [type, count] : types) {
        if (shown++) text += L", ";
        text += type + L" × " + std::to_wstring(count);
        if (shown == 8 && types.size() > shown) {
            text += L", +" + std::to_wstring(types.size() - shown) + L" more";
            break;
        }
    }
    return text.empty() ? L"None" : text;
}

bool BetterPanelDecodeMultiByte(UINT codePage, DWORD flags,
                                const char* bytes, int length,
                                std::wstring& text) {
    if (!length) {
        text.clear();
        return true;
    }
    int required = MultiByteToWideChar(codePage, flags, bytes, length, nullptr,
                                       0);
    if (required <= 0) {
        return false;
    }
    text.resize(required);
    return MultiByteToWideChar(codePage, flags, bytes, length, text.data(),
                               required) == required;
}

BetterPanelTextFileData BetterPanelReadTextFile(std::wstring const& path) {
    BetterPanelTextFileData result;
    HANDLE file = CreateFileW(path.c_str(), GENERIC_READ,
                              FILE_SHARE_READ | FILE_SHARE_WRITE |
                                  FILE_SHARE_DELETE,
                              nullptr, OPEN_EXISTING,
                              FILE_ATTRIBUTE_NORMAL | FILE_FLAG_SEQUENTIAL_SCAN,
                              nullptr);
    if (file == INVALID_HANDLE_VALUE) {
        result.message = L"Preview unavailable (error " +
                         std::to_wstring(GetLastError()) + L")";
        return result;
    }

    LARGE_INTEGER size{};
    if (!GetFileSizeEx(file, &size) || size.QuadPart < 0) {
        result.message = L"Could not read the file size";
        CloseHandle(file);
        return result;
    }
    result.size = static_cast<uint64_t>(size.QuadPart);
    GetFileTime(file, nullptr, nullptr, &result.lastWriteTime);
    if (result.size > kBetterPanelTextPreviewLimit) {
        result.message = L"Preview limited to text files up to 2 MB";
        CloseHandle(file);
        return result;
    }

    std::vector<uint8_t> bytes(static_cast<size_t>(result.size));
    DWORD total = 0;
    while (total < bytes.size()) {
        DWORD chunk = 0;
        DWORD requested = static_cast<DWORD>(
            std::min<size_t>(bytes.size() - total, 1024 * 1024));
        if (!ReadFile(file, bytes.data() + total, requested, &chunk, nullptr)) {
            result.message = L"Could not read the file";
            CloseHandle(file);
            return result;
        }
        if (!chunk) break;
        total += chunk;
    }
    CloseHandle(file);
    bytes.resize(total);
    result.size = total;

    size_t offset = 0;
    if (bytes.size() >= 3 && bytes[0] == 0xEF && bytes[1] == 0xBB &&
        bytes[2] == 0xBF) {
        result.encoding = BetterPanelTextEncoding::Utf8Bom;
        offset = 3;
    } else if (bytes.size() >= 2 && bytes[0] == 0xFF &&
               bytes[1] == 0xFE) {
        result.encoding = BetterPanelTextEncoding::Utf16Le;
        offset = 2;
    } else if (bytes.size() >= 2 && bytes[0] == 0xFE &&
               bytes[1] == 0xFF) {
        result.encoding = BetterPanelTextEncoding::Utf16Be;
        offset = 2;
    }

    if (result.encoding == BetterPanelTextEncoding::Utf16Le ||
        result.encoding == BetterPanelTextEncoding::Utf16Be) {
        size_t remaining = bytes.size() - offset;
        if (remaining % 2) {
            result.message = L"Invalid UTF-16 text file";
            return result;
        }
        result.text.resize(remaining / 2);
        for (size_t index = 0; index < result.text.size(); index++) {
            uint8_t first = bytes[offset + index * 2];
            uint8_t second = bytes[offset + index * 2 + 1];
            result.text[index] = static_cast<wchar_t>(
                result.encoding == BetterPanelTextEncoding::Utf16Le
                    ? first | (second << 8)
                    : (first << 8) | second);
        }
    } else {
        auto begin = reinterpret_cast<const char*>(bytes.data() + offset);
        int length = static_cast<int>(bytes.size() - offset);
        size_t nulCount = std::count(bytes.begin() + offset, bytes.end(), 0);
        if (nulCount > std::max<size_t>(2, (bytes.size() - offset) / 100)) {
            result.message = L"This file appears to contain binary data";
            return result;
        }
        if (!BetterPanelDecodeMultiByte(CP_UTF8, MB_ERR_INVALID_CHARS, begin,
                                        length, result.text)) {
            result.encoding = BetterPanelTextEncoding::Ansi;
            if (!BetterPanelDecodeMultiByte(CP_ACP, 0, begin, length,
                                            result.text)) {
                result.message = L"Unsupported text encoding";
                return result;
            }
        }
    }

    result.success = true;
    if (result.text.find(L"\r\n") != std::wstring::npos) {
        result.newline = L"\r\n";
    } else if (result.text.find(L'\n') != std::wstring::npos) {
        result.newline = L"\n";
    } else if (result.text.find(L'\r') != std::wstring::npos) {
        result.newline = L"\r";
    }
    result.editable = result.size <= kBetterPanelTextEditLimit;
    DWORD attributes = GetFileAttributesW(path.c_str());
    if (attributes != INVALID_FILE_ATTRIBUTES &&
        (attributes & FILE_ATTRIBUTE_READONLY)) {
        result.editable = false;
        result.message = L"Read-only file";
    } else if (!result.editable) {
        result.message = L"Read-only preview: editing is limited to 1 MB";
    }
    return result;
}

bool BetterPanelGetFileStamp(std::wstring const& path, uint64_t& size,
                             FILETIME& lastWriteTime) {
    HANDLE file = CreateFileW(path.c_str(), FILE_READ_ATTRIBUTES,
                              FILE_SHARE_READ | FILE_SHARE_WRITE |
                                  FILE_SHARE_DELETE,
                              nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL,
                              nullptr);
    if (file == INVALID_HANDLE_VALUE) return false;
    LARGE_INTEGER fileSize{};
    bool success = GetFileSizeEx(file, &fileSize) &&
                   GetFileTime(file, nullptr, nullptr, &lastWriteTime);
    CloseHandle(file);
    if (success) size = static_cast<uint64_t>(fileSize.QuadPart);
    return success;
}

std::wstring BetterPanelNormalizeLineEndings(
    std::wstring_view text, std::wstring_view newline) {
    std::wstring normalized;
    normalized.reserve(text.size() + 16);
    for (size_t index = 0; index < text.size(); index++) {
        if (text[index] == L'\r') {
            if (index + 1 < text.size() && text[index + 1] == L'\n') {
                index++;
            }
            normalized.append(newline);
        } else if (text[index] == L'\n') {
            normalized.append(newline);
        } else {
            normalized.push_back(text[index]);
        }
    }
    return normalized;
}

bool BetterPanelEncodeText(std::wstring const& text,
                           BetterPanelTextEncoding& encoding,
                           std::vector<uint8_t>& bytes) {
    bytes.clear();
    if (encoding == BetterPanelTextEncoding::Utf16Le ||
        encoding == BetterPanelTextEncoding::Utf16Be) {
        bytes.reserve(2 + text.size() * 2);
        bytes.push_back(encoding == BetterPanelTextEncoding::Utf16Le ? 0xFF
                                                                     : 0xFE);
        bytes.push_back(encoding == BetterPanelTextEncoding::Utf16Le ? 0xFE
                                                                     : 0xFF);
        for (wchar_t character : text) {
            uint8_t low = static_cast<uint8_t>(character & 0xFF);
            uint8_t high = static_cast<uint8_t>((character >> 8) & 0xFF);
            if (encoding == BetterPanelTextEncoding::Utf16Le) {
                bytes.push_back(low);
                bytes.push_back(high);
            } else {
                bytes.push_back(high);
                bytes.push_back(low);
            }
        }
        return true;
    }

    UINT codePage = encoding == BetterPanelTextEncoding::Ansi ? CP_ACP
                                                               : CP_UTF8;
    BOOL usedDefault = FALSE;
    int required = WideCharToMultiByte(
        codePage, encoding == BetterPanelTextEncoding::Ansi
                      ? WC_NO_BEST_FIT_CHARS
                      : WC_ERR_INVALID_CHARS,
        text.data(), static_cast<int>(text.size()), nullptr, 0, nullptr,
        encoding == BetterPanelTextEncoding::Ansi ? &usedDefault : nullptr);
    if (required <= 0 || usedDefault) {
        if (encoding != BetterPanelTextEncoding::Ansi) return false;
        encoding = BetterPanelTextEncoding::Utf8Bom;
        return BetterPanelEncodeText(text, encoding, bytes);
    }
    size_t prefix = encoding == BetterPanelTextEncoding::Utf8Bom ? 3 : 0;
    bytes.resize(prefix + required);
    if (prefix) {
        bytes[0] = 0xEF;
        bytes[1] = 0xBB;
        bytes[2] = 0xBF;
    }
    usedDefault = FALSE;
    return WideCharToMultiByte(
               codePage, encoding == BetterPanelTextEncoding::Ansi
                             ? WC_NO_BEST_FIT_CHARS
                             : WC_ERR_INVALID_CHARS,
               text.data(), static_cast<int>(text.size()),
               reinterpret_cast<char*>(bytes.data() + prefix), required,
               nullptr,
               encoding == BetterPanelTextEncoding::Ansi ? &usedDefault
                                                          : nullptr) ==
               required &&
           !usedDefault;
}

bool BetterPanelWriteTextFile(std::wstring const& path,
                              std::wstring const& text,
                              BetterPanelTextEncoding& encoding,
                              DWORD& error) {
    std::vector<uint8_t> bytes;
    if (!BetterPanelEncodeText(text, encoding, bytes)) {
        error = ERROR_NO_UNICODE_TRANSLATION;
        return false;
    }
    size_t separator = path.find_last_of(L"\\/");
    if (separator == std::wstring::npos) {
        error = ERROR_INVALID_NAME;
        return false;
    }

    std::wstring temporaryPath;
    HANDLE file = INVALID_HANDLE_VALUE;
    for (unsigned attempt = 0; attempt < 32; ++attempt) {
        temporaryPath = path.substr(0, separator + 1) + L".better-panel-" +
                        std::to_wstring(GetCurrentProcessId()) + L"-" +
                        std::to_wstring(GetCurrentThreadId()) + L"-" +
                        std::to_wstring(GetTickCount64()) + L"-" +
                        std::to_wstring(attempt) + L".tmp";
        file = CreateFileW(temporaryPath.c_str(), GENERIC_WRITE, 0, nullptr,
                           CREATE_NEW,
                           FILE_ATTRIBUTE_TEMPORARY |
                               FILE_ATTRIBUTE_NOT_CONTENT_INDEXED,
                           nullptr);
        if (file != INVALID_HANDLE_VALUE) break;
        error = GetLastError();
        if (error != ERROR_FILE_EXISTS && error != ERROR_ALREADY_EXISTS) {
            return false;
        }
    }
    if (file == INVALID_HANDLE_VALUE) {
        if (error == ERROR_SUCCESS) error = ERROR_FILE_EXISTS;
        return false;
    }
    DWORD total = 0;
    bool success = true;
    while (total < bytes.size()) {
        DWORD written = 0;
        DWORD requested = static_cast<DWORD>(
            std::min<size_t>(bytes.size() - total, 1024 * 1024));
        if (!WriteFile(file, bytes.data() + total, requested, &written,
                       nullptr) ||
            !written) {
            success = false;
            error = GetLastError();
            break;
        }
        total += written;
    }
    if (success && !FlushFileBuffers(file)) {
        success = false;
        error = GetLastError();
    }
    CloseHandle(file);
    if (!success) {
        DeleteFileW(temporaryPath.c_str());
        return false;
    }

    DWORD originalAttributes = GetFileAttributesW(path.c_str());
    if (originalAttributes != INVALID_FILE_ATTRIBUTES) {
        SetFileAttributesW(temporaryPath.c_str(), originalAttributes);
    }

    if (!ReplaceFileW(path.c_str(), temporaryPath.c_str(), nullptr,
                      REPLACEFILE_WRITE_THROUGH, nullptr, nullptr)) {
        error = GetLastError();
        if (!MoveFileExW(temporaryPath.c_str(), path.c_str(),
                         MOVEFILE_REPLACE_EXISTING |
                             MOVEFILE_WRITE_THROUGH)) {
            error = GetLastError();
            DeleteFileW(temporaryPath.c_str());
            return false;
        }
    }
    error = ERROR_SUCCESS;
    return true;
}

bool BetterPanelFindFavoriteMenuCommand(HMENU menu,
                                        IContextMenu* contextMenu,
                                        IContextMenu3* contextMenu3,
                                        IContextMenu2* contextMenu2,
                                        UINT& command,
                                        bool& removing) {
    int count = GetMenuItemCount(menu);
    for (int index = 0; index < count; index++) {
        WCHAR label[256]{};
        MENUITEMINFOW item{sizeof(item)};
        item.fMask = MIIM_FTYPE | MIIM_STATE | MIIM_ID | MIIM_SUBMENU |
                     MIIM_STRING;
        item.dwTypeData = label;
        item.cch = ARRAYSIZE(label) - 1;
        if (!GetMenuItemInfoW(menu, index, TRUE, &item) ||
            (item.fType & MFT_SEPARATOR)) {
            continue;
        }
        if (item.hSubMenu) {
            if (contextMenu3) {
                LRESULT menuResult = 0;
                contextMenu3->HandleMenuMsg2(
                    WM_INITMENUPOPUP,
                    reinterpret_cast<WPARAM>(item.hSubMenu),
                    MAKELPARAM(index, FALSE), &menuResult);
            } else if (contextMenu2) {
                contextMenu2->HandleMenuMsg(
                    WM_INITMENUPOPUP,
                    reinterpret_cast<WPARAM>(item.hSubMenu),
                    MAKELPARAM(index, FALSE));
            }
            if (BetterPanelFindFavoriteMenuCommand(
                    item.hSubMenu, contextMenu, contextMenu3, contextMenu2,
                    command, removing)) {
                return true;
            }
        }
        if (item.wID == static_cast<UINT>(-1) ||
            (item.fState & (MFS_DISABLED | MFS_GRAYED))) {
            continue;
        }

        std::wstring loweredLabel(label);
        loweredLabel.erase(
            std::remove(loweredLabel.begin(), loweredLabel.end(), L'&'),
            loweredLabel.end());
        std::transform(loweredLabel.begin(), loweredLabel.end(),
                       loweredLabel.begin(), towlower);

        WCHAR verb[128]{};
        std::wstring loweredVerb;
        if (SUCCEEDED(contextMenu->GetCommandString(
                item.wID - 1, GCS_VERBW, nullptr,
                reinterpret_cast<LPSTR>(verb), ARRAYSIZE(verb)))) {
            loweredVerb.assign(verb);
            std::transform(loweredVerb.begin(), loweredVerb.end(),
                           loweredVerb.begin(), towlower);
        }

        bool add = loweredLabel.find(L"add to favorites") !=
                       std::wstring::npos ||
                   loweredVerb.find(L"pintohome") != std::wstring::npos;
        bool remove = loweredLabel.find(L"remove from favorites") !=
                          std::wstring::npos ||
                      loweredVerb.find(L"unpinfromhome") !=
                          std::wstring::npos;
        if (add || remove) {
            command = item.wID;
            removing = remove;
            return true;
        }
    }
    return false;
}

std::wstring BetterPanelKnownFolderPath(REFKNOWNFOLDERID id);

std::wstring BetterPanelFavoritesListPath() {
    auto roamingAppData = BetterPanelKnownFolderPath(FOLDERID_RoamingAppData);
    if (roamingAppData.empty()) return {};
    return roamingAppData +
           L"\\Microsoft\\Windows\\Recent\\AutomaticDestinations\\"
           L"5f7b5f1e01b83767.automaticDestinations-ms";
}

uint16_t BetterPanelReadUInt16(std::vector<uint8_t> const& bytes,
                               size_t offset) {
    if (offset + 2 > bytes.size()) return 0;
    return static_cast<uint16_t>(bytes[offset]) |
           static_cast<uint16_t>(bytes[offset + 1] << 8);
}

uint32_t BetterPanelReadUInt32(std::vector<uint8_t> const& bytes,
                               size_t offset) {
    if (offset + 4 > bytes.size()) return 0;
    return static_cast<uint32_t>(bytes[offset]) |
           (static_cast<uint32_t>(bytes[offset + 1]) << 8) |
           (static_cast<uint32_t>(bytes[offset + 2]) << 16) |
           (static_cast<uint32_t>(bytes[offset + 3]) << 24);
}

std::optional<bool> BetterPanelReadFavoriteState(std::wstring const& path) {
    std::wstring listPath = BetterPanelFavoritesListPath();
    if (listPath.empty()) return std::nullopt;

    winrt::com_ptr<IStorage> storage;
    HRESULT result = StgOpenStorage(
        listPath.c_str(), nullptr, STGM_READ | STGM_SHARE_DENY_WRITE,
        nullptr, 0, storage.put());
    if (FAILED(result) || !storage) return std::nullopt;

    winrt::com_ptr<IStream> stream;
    result = storage->OpenStream(L"DestList", nullptr,
                                 STGM_READ | STGM_SHARE_EXCLUSIVE, 0,
                                 stream.put());
    if (FAILED(result) || !stream) return std::nullopt;

    STATSTG stat{};
    result = stream->Stat(&stat, STATFLAG_NONAME);
    if (FAILED(result) || stat.cbSize.QuadPart < 32 ||
        stat.cbSize.QuadPart > 16 * 1024 * 1024) {
        return std::nullopt;
    }
    std::vector<uint8_t> bytes(static_cast<size_t>(stat.cbSize.QuadPart));
    ULONG bytesRead = 0;
    result = stream->Read(bytes.data(), static_cast<ULONG>(bytes.size()),
                          &bytesRead);
    if (FAILED(result) || bytesRead < 32) return std::nullopt;
    bytes.resize(bytesRead);

    uint32_t version = BetterPanelReadUInt32(bytes, 0);
    uint32_t entryCount = BetterPanelReadUInt32(bytes, 4);
    if (version < 3 || entryCount > 10000) return std::nullopt;

    size_t offset = 32;
    for (uint32_t index = 0;
         index < entryCount && offset + 130 <= bytes.size(); index++) {
        uint16_t pathLength = BetterPanelReadUInt16(bytes, offset + 128);
        size_t pathBytes = static_cast<size_t>(pathLength) * 2;
        if (offset + 130 + pathBytes > bytes.size()) return std::nullopt;

        std::wstring entryPath;
        entryPath.reserve(pathLength);
        for (uint16_t character = 0; character < pathLength; character++) {
            entryPath.push_back(static_cast<wchar_t>(BetterPanelReadUInt16(
                bytes, offset + 130 + static_cast<size_t>(character) * 2)));
        }
        if (_wcsicmp(entryPath.c_str(), path.c_str()) == 0) {
            return BetterPanelReadUInt32(bytes, offset + 108) != UINT32_MAX;
        }
        offset += 130 + pathBytes + 4;
    }
    return false;
}

HRESULT BetterPanelInvokeFavoriteCommand(std::wstring const& path,
                                         IShellBrowser* shellBrowser) {
    CLSID commandClass{};
    HRESULT result = CLSIDFromString(
        L"{b455f46e-e4af-4035-b0a4-cf18d2f6f28e}", &commandClass);
    if (FAILED(result)) return result;

    winrt::com_ptr<IExecuteCommand> executeCommand;
    result = CoCreateInstance(commandClass, nullptr, CLSCTX_INPROC_SERVER,
                              IID_PPV_ARGS(executeCommand.put()));
    if (FAILED(result) || !executeCommand) return result;

    winrt::com_ptr<IShellItem> item;
    result = SHCreateItemFromParsingName(path.c_str(), nullptr,
                                         IID_PPV_ARGS(item.put()));
    if (FAILED(result) || !item) return result;

    winrt::com_ptr<IShellItemArray> selection;
    result = SHCreateShellItemArrayFromShellItem(
        item.get(), IID_PPV_ARGS(selection.put()));
    if (FAILED(result) || !selection) return result;

    winrt::com_ptr<IObjectWithSelection> objectWithSelection;
    result = executeCommand->QueryInterface(
        IID_PPV_ARGS(objectWithSelection.put()));
    if (FAILED(result) || !objectWithSelection) return result;
    result = objectWithSelection->SetSelection(selection.get());
    if (FAILED(result)) return result;

    winrt::com_ptr<IObjectWithSite> objectWithSite;
    if (shellBrowser &&
        SUCCEEDED(executeCommand->QueryInterface(
            IID_PPV_ARGS(objectWithSite.put()))) && objectWithSite) {
        objectWithSite->SetSite(shellBrowser);
    }

    executeCommand->SetKeyState(0);
    executeCommand->SetNoShowUI(FALSE);
    std::wstring directory = path;
    size_t separator = directory.find_last_of(L"\\/");
    if (separator != std::wstring::npos) {
        directory.resize(separator);
        executeCommand->SetDirectory(directory.c_str());
    }
    POINT point{};
    GetCursorPos(&point);
    executeCommand->SetParameters(L"");
    executeCommand->SetPosition(point);
    executeCommand->SetShowWindow(SW_SHOWNORMAL);
    return executeCommand->Execute();
}

HRESULT BetterPanelRemoveFavorite(std::wstring const& path) {
    winrt::com_ptr<IShellItem> item;
    HRESULT result = SHCreateItemFromParsingName(
        path.c_str(), nullptr, IID_PPV_ARGS(item.put()));
    if (FAILED(result) || !item) return result;

    winrt::com_ptr<IApplicationDestinations> destinations;
    result = CoCreateInstance(CLSID_ApplicationDestinations, nullptr,
                              CLSCTX_INPROC_SERVER,
                              IID_PPV_ARGS(destinations.put()));
    if (FAILED(result) || !destinations) return result;
    result = destinations->SetAppID(
        L"Microsoft.Windows.Explorer_RecentFiles");
    if (FAILED(result)) return result;
    result = destinations->RemoveDestination(item.get());
    if (SUCCEEDED(result)) {
        // Removing a destination also removes it from Recent. Put it back as
        // an ordinary unpinned recent item, matching Explorer's separation of
        // Recent and Favorites.
        SHAddToRecentDocs(SHARD_SHELLITEM, item.get());
    }
    return result;
}

void BetterPanelRunFavoriteAction(
    std::shared_ptr<BetterPanelState> const& state,
    std::wstring const& path, bool removing) {
    if (!state || path.empty()) return;
    auto dispatcher = state->dispatcher;
    std::weak_ptr<BetterPanelState> weakState = state;
    BetterPanelStartWorker([weakState, dispatcher, path, removing]() {
        HRESULT initialized = CoInitializeEx(nullptr,
                                             COINIT_MULTITHREADED);
        HRESULT result = E_FAIL;
        if (removing) {
            result = BetterPanelRemoveFavorite(path);
        } else {
            // Explorer's native command first creates a current Recent Files
            // destination, then pins that fresh entry.
            SHAddToRecentDocs(SHARD_PATHW, path.c_str());
            if (BetterPanelWorkerWait(150)) {
                if (SUCCEEDED(initialized)) CoUninitialize();
                return;
            }
            result = BetterPanelInvokeFavoriteCommand(path, nullptr);
        }
        if (SUCCEEDED(initialized)) CoUninitialize();
        if (BetterPanelWorkerStopping()) return;
        dispatcher.TryEnqueue([weakState, path, removing, result]() {
            auto state = weakState.lock();
            if (!state || state->unloaded || state->selectedPath != path) {
                return;
            }
            if (SUCCEEDED(result)) {
                BetterPanelQueueFavoriteCheck(state, path, true, !removing);
            } else {
                BetterPanelShowTemporaryButtonMessage(
                    state->favoriteButton, L"Favorites action failed");
            }
        });
    });
}

HRESULT BetterPanelInvokeLegacyFavoriteCommand(std::wstring const& path,
                                               bool& removing,
                                               HWND owner = nullptr) {
    removing = false;
    PIDLIST_ABSOLUTE absolutePidl = nullptr;
    HRESULT result = SHParseDisplayName(path.c_str(), nullptr, &absolutePidl,
                                        0, nullptr);
    if (FAILED(result)) return result;

    if (!owner) return E_INVALIDARG;
    winrt::com_ptr<IShellFolder> parentFolder;
    PCUITEMID_CHILD childPidl = nullptr;
    result = SHBindToParent(absolutePidl, IID_PPV_ARGS(parentFolder.put()),
                            &childPidl);
    if (FAILED(result)) {
        CoTaskMemFree(absolutePidl);
        return result;
    }

    winrt::com_ptr<IContextMenu> contextMenu;
    PCUITEMID_CHILD children[] = {childPidl};
    result = parentFolder->GetUIObjectOf(
        owner, 1, children, IID_IContextMenu, nullptr,
        reinterpret_cast<void**>(contextMenu.put()));
    if (FAILED(result)) {
        CoTaskMemFree(absolutePidl);
        return result;
    }
    winrt::com_ptr<IContextMenu3> contextMenu3;
    contextMenu->QueryInterface(IID_PPV_ARGS(contextMenu3.put()));
    winrt::com_ptr<IContextMenu2> contextMenu2;
    if (!contextMenu3) {
        contextMenu->QueryInterface(IID_PPV_ARGS(contextMenu2.put()));
    }

    HMENU menu = CreatePopupMenu();
    if (!menu) {
        CoTaskMemFree(absolutePidl);
        return E_OUTOFMEMORY;
    }
    result = contextMenu->QueryContextMenu(
        menu, 0, 1, 0x7FFF,
        CMF_NORMAL | CMF_EXPLORE | CMF_EXTENDEDVERBS |
            CMF_SYNCCASCADEMENU);
    UINT command = 0;
    if (SUCCEEDED(result) && BetterPanelFindFavoriteMenuCommand(
                                 menu, contextMenu.get(), contextMenu3.get(),
                                 contextMenu2.get(), command, removing)) {
        CMINVOKECOMMANDINFOEX invoke{sizeof(invoke)};
        // Keep the context-menu object, PIDL, and menu alive until Explorer's
        // native Favorites command has completed. ASYNCOK allowed those
        // objects to be released while the operation was still pending.
        invoke.fMask = CMIC_MASK_UNICODE;
        invoke.hwnd = owner;
        invoke.lpVerb = MAKEINTRESOURCEA(command - 1);
        invoke.lpVerbW = MAKEINTRESOURCEW(command - 1);
        invoke.nShow = SW_SHOWNORMAL;
        result = contextMenu->InvokeCommand(
            reinterpret_cast<LPCMINVOKECOMMANDINFO>(&invoke));
    } else if (SUCCEEDED(result)) {
        result = HRESULT_FROM_WIN32(ERROR_NOT_FOUND);
    }
    DestroyMenu(menu);
    CoTaskMemFree(absolutePidl);
    return result;
}

HRESULT BetterPanelInvokeSelectedFavoriteCommand(
    IShellBrowser* shellBrowser, bool& removing) {
    removing = false;
    if (!shellBrowser) return E_INVALIDARG;

    winrt::com_ptr<IShellView> shellView;
    HRESULT result = shellBrowser->QueryActiveShellView(shellView.put());
    if (FAILED(result) || !shellView) return result;

    HWND owner = nullptr;
    shellView->GetWindow(&owner);

    winrt::com_ptr<IContextMenu> contextMenu;
    result = shellView->GetItemObject(
        SVGIO_SELECTION, IID_IContextMenu,
        reinterpret_cast<void**>(contextMenu.put()));
    if (FAILED(result) || !contextMenu) return result;

    winrt::com_ptr<IContextMenu3> contextMenu3;
    contextMenu->QueryInterface(IID_PPV_ARGS(contextMenu3.put()));
    winrt::com_ptr<IContextMenu2> contextMenu2;
    if (!contextMenu3) {
        contextMenu->QueryInterface(IID_PPV_ARGS(contextMenu2.put()));
    }

    HMENU menu = CreatePopupMenu();
    if (!menu) return E_OUTOFMEMORY;
    result = contextMenu->QueryContextMenu(
        menu, 0, 1, 0x7FFF,
        CMF_NORMAL | CMF_EXPLORE | CMF_EXTENDEDVERBS |
            CMF_SYNCCASCADEMENU);
    UINT command = 0;
    if (SUCCEEDED(result) && BetterPanelFindFavoriteMenuCommand(
                                 menu, contextMenu.get(), contextMenu3.get(),
                                 contextMenu2.get(), command, removing)) {
        CMINVOKECOMMANDINFOEX invoke{sizeof(invoke)};
        invoke.fMask = CMIC_MASK_UNICODE;
        invoke.hwnd = owner;
        invoke.lpVerb = MAKEINTRESOURCEA(command - 1);
        invoke.lpVerbW = MAKEINTRESOURCEW(command - 1);
        invoke.nShow = SW_SHOWNORMAL;
        result = contextMenu->InvokeCommand(
            reinterpret_cast<LPCMINVOKECOMMANDINFO>(&invoke));
    } else if (SUCCEEDED(result)) {
        result = HRESULT_FROM_WIN32(ERROR_NOT_FOUND);
    }
    DestroyMenu(menu);
    return result;
}

bool BetterPanelFindContextMenuVerb(HMENU menu, IContextMenu* contextMenu,
                                    IContextMenu3* contextMenu3,
                                    IContextMenu2* contextMenu2,
                                    std::wstring_view requestedVerb,
                                    UINT& command) {
    int count = GetMenuItemCount(menu);
    for (int index = 0; index < count; ++index) {
        WCHAR label[256]{};
        MENUITEMINFOW item{sizeof(item)};
        item.fMask = MIIM_FTYPE | MIIM_STATE | MIIM_ID | MIIM_SUBMENU |
                     MIIM_STRING;
        item.dwTypeData = label;
        item.cch = ARRAYSIZE(label) - 1;
        if (!GetMenuItemInfoW(menu, index, TRUE, &item) ||
            (item.fType & MFT_SEPARATOR)) {
            continue;
        }

        if (item.hSubMenu) {
            if (contextMenu3) {
                LRESULT menuResult = 0;
                contextMenu3->HandleMenuMsg2(
                    WM_INITMENUPOPUP,
                    reinterpret_cast<WPARAM>(item.hSubMenu),
                    MAKELPARAM(index, FALSE), &menuResult);
            } else if (contextMenu2) {
                contextMenu2->HandleMenuMsg(
                    WM_INITMENUPOPUP,
                    reinterpret_cast<WPARAM>(item.hSubMenu),
                    MAKELPARAM(index, FALSE));
            }
            if (BetterPanelFindContextMenuVerb(
                    item.hSubMenu, contextMenu, contextMenu3, contextMenu2,
                    requestedVerb, command)) {
                return true;
            }
        }

        if (item.wID < 1 || item.wID == static_cast<UINT>(-1) ||
            (item.fState & (MFS_DISABLED | MFS_GRAYED))) {
            continue;
        }
        WCHAR verb[128]{};
        bool verbMatches = SUCCEEDED(contextMenu->GetCommandString(
                               item.wID - 1, GCS_VERBW, nullptr,
                               reinterpret_cast<LPSTR>(verb),
                               ARRAYSIZE(verb))) &&
                           _wcsicmp(
                               verb,
                               std::wstring(requestedVerb).c_str()) == 0;
        std::wstring normalizedLabel(label);
        normalizedLabel.erase(
            std::remove(normalizedLabel.begin(), normalizedLabel.end(), L'&'),
            normalizedLabel.end());
        while (!normalizedLabel.empty() &&
               iswspace(normalizedLabel.front())) {
            normalizedLabel.erase(normalizedLabel.begin());
        }
        while (!normalizedLabel.empty() &&
               iswspace(normalizedLabel.back())) {
            normalizedLabel.pop_back();
        }
        bool labelMatches =
            _wcsicmp(normalizedLabel.c_str(),
                     std::wstring(requestedVerb).c_str()) == 0;
        if (verbMatches || labelMatches) {
            command = item.wID;
            return true;
        }
    }
    return false;
}

HRESULT BetterPanelInvokeSelectedContextMenuVerb(PCWSTR requestedVerb) {
    auto browser = BetterPanelGetShellBrowser(BetterPanelGetFocusedTabWindow());
    if (!browser || !requestedVerb || !*requestedVerb) return E_INVALIDARG;

    winrt::com_ptr<IShellView> shellView;
    HRESULT result = browser->QueryActiveShellView(shellView.put());
    if (FAILED(result) || !shellView) return result;

    HWND owner = nullptr;
    shellView->GetWindow(&owner);
    winrt::com_ptr<IContextMenu> contextMenu;
    result = shellView->GetItemObject(
        SVGIO_SELECTION, IID_IContextMenu,
        reinterpret_cast<void**>(contextMenu.put()));
    if (FAILED(result) || !contextMenu) return result;

    winrt::com_ptr<IContextMenu3> contextMenu3;
    contextMenu->QueryInterface(IID_PPV_ARGS(contextMenu3.put()));
    winrt::com_ptr<IContextMenu2> contextMenu2;
    if (!contextMenu3) {
        contextMenu->QueryInterface(IID_PPV_ARGS(contextMenu2.put()));
    }

    HMENU menu = CreatePopupMenu();
    if (!menu) return E_OUTOFMEMORY;
    result = contextMenu->QueryContextMenu(
        menu, 0, 1, 0x7FFF,
        CMF_NORMAL | CMF_EXPLORE | CMF_EXTENDEDVERBS |
            CMF_SYNCCASCADEMENU);
    UINT command = 0;
    if (SUCCEEDED(result) && BetterPanelFindContextMenuVerb(
                                 menu, contextMenu.get(), contextMenu3.get(),
                                 contextMenu2.get(), requestedVerb, command)) {
        CMINVOKECOMMANDINFOEX invoke{sizeof(invoke)};
        invoke.fMask = CMIC_MASK_UNICODE;
        if (!owner) {
            DestroyMenu(menu);
            return E_FAIL;
        }
        invoke.hwnd = owner;
        invoke.lpVerb = MAKEINTRESOURCEA(command - 1);
        invoke.lpVerbW = MAKEINTRESOURCEW(command - 1);
        invoke.nShow = SW_SHOWNORMAL;
        result = contextMenu->InvokeCommand(
            reinterpret_cast<LPCMINVOKECOMMANDINFO>(&invoke));
    } else if (SUCCEEDED(result)) {
        result = HRESULT_FROM_WIN32(ERROR_NOT_FOUND);
    }
    DestroyMenu(menu);
    return result;
}

std::wstring BetterPanelNormalizeMenuText(std::wstring value) {
    value.erase(std::remove(value.begin(), value.end(), L'&'), value.end());
    while (!value.empty() && iswspace(value.front())) value.erase(value.begin());
    while (!value.empty() && iswspace(value.back())) value.pop_back();
    std::transform(value.begin(), value.end(), value.begin(), towlower);
    return value;
}

bool BetterPanelMatchesTypeSpecificNativeAction(
    std::wstring_view path, std::wstring const& rawLabel,
    std::wstring const& rawVerb) {
    size_t dot = path.find_last_of(L'.');
    if (dot == std::wstring_view::npos) return false;
    std::wstring extension(path.substr(dot));
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    auto label = BetterPanelNormalizeMenuText(rawLabel);
    auto verb = BetterPanelNormalizeMenuText(rawVerb);
    auto contains = [](std::wstring const& value, std::wstring_view part) {
        return value.find(part) != std::wstring::npos;
    };

    if (extension == L".iso" || extension == L".vhd" ||
        extension == L".vhdx") {
        return verb == L"mount" || label == L"mount";
    }
    if (extension == L".cer" || extension == L".crt" ||
        extension == L".p7b" || extension == L".pfx" ||
        extension == L".p12") {
        return contains(verb, L"install") ||
               contains(label, L"install certificate");
    }
    return false;
}

HRESULT BetterPanelShowTypeSpecificNativeActions(
    std::wstring const& path) {
    if (!BetterPanelHasTypeSpecificNativeActions(path)) return E_INVALIDARG;
    auto browser = BetterPanelGetShellBrowser(BetterPanelGetFocusedTabWindow());
    if (!browser) return E_FAIL;

    winrt::com_ptr<IShellView> shellView;
    HRESULT result = browser->QueryActiveShellView(shellView.put());
    if (FAILED(result) || !shellView) return result;
    HWND owner = nullptr;
    shellView->GetWindow(&owner);

    winrt::com_ptr<IContextMenu> contextMenu;
    result = shellView->GetItemObject(
        SVGIO_SELECTION, IID_IContextMenu,
        reinterpret_cast<void**>(contextMenu.put()));
    if (FAILED(result) || !contextMenu) return result;

    HMENU completeMenu = CreatePopupMenu();
    HMENU filteredMenu = CreatePopupMenu();
    if (!completeMenu || !filteredMenu) {
        if (completeMenu) DestroyMenu(completeMenu);
        if (filteredMenu) DestroyMenu(filteredMenu);
        return E_OUTOFMEMORY;
    }
    result = contextMenu->QueryContextMenu(
        completeMenu, 0, 1, 0x7FFF,
        CMF_NORMAL | CMF_EXPLORE | CMF_EXTENDEDVERBS |
            CMF_SYNCCASCADEMENU);
    if (SUCCEEDED(result)) {
        int count = GetMenuItemCount(completeMenu);
        for (int index = 0; index < count; ++index) {
            WCHAR label[256]{};
            MENUITEMINFOW item{sizeof(item)};
            item.fMask = MIIM_FTYPE | MIIM_STATE | MIIM_ID | MIIM_STRING |
                         MIIM_BITMAP;
            item.dwTypeData = label;
            item.cch = ARRAYSIZE(label) - 1;
            if (!GetMenuItemInfoW(completeMenu, index, TRUE, &item) ||
                (item.fType & MFT_SEPARATOR) || item.wID < 1 ||
                item.wID == static_cast<UINT>(-1)) {
                continue;
            }
            WCHAR verb[128]{};
            contextMenu->GetCommandString(
                item.wID - 1, GCS_VERBW, nullptr,
                reinterpret_cast<LPSTR>(verb), ARRAYSIZE(verb));
            if (!BetterPanelMatchesTypeSpecificNativeAction(
                    path, label, verb)) {
                continue;
            }
            MENUITEMINFOW output{sizeof(output)};
            output.fMask = MIIM_STRING | MIIM_ID | MIIM_STATE | MIIM_BITMAP;
            output.dwTypeData = label;
            output.wID = item.wID;
            output.fState = item.fState;
            output.hbmpItem = item.hbmpItem;
            InsertMenuItemW(filteredMenu, GetMenuItemCount(filteredMenu), TRUE,
                            &output);
        }
    }

    if (GetMenuItemCount(filteredMenu) == 0) {
        if (SUCCEEDED(result)) result = HRESULT_FROM_WIN32(ERROR_NOT_FOUND);
    } else {
        POINT point{};
        GetCursorPos(&point);
        if (!owner) {
            result = E_FAIL;
            DestroyMenu(filteredMenu);
            DestroyMenu(completeMenu);
            return result;
        }
        SetForegroundWindow(owner);
        UINT command = TrackPopupMenuEx(
            filteredMenu, TPM_RETURNCMD | TPM_RIGHTBUTTON | TPM_NONOTIFY,
            point.x, point.y, owner, nullptr);
        if (command) {
            CMINVOKECOMMANDINFOEX invoke{sizeof(invoke)};
            invoke.fMask = CMIC_MASK_UNICODE;
            invoke.hwnd = owner;
            invoke.lpVerb = MAKEINTRESOURCEA(command - 1);
            invoke.lpVerbW = MAKEINTRESOURCEW(command - 1);
            invoke.nShow = SW_SHOWNORMAL;
            result = contextMenu->InvokeCommand(
                reinterpret_cast<LPCMINVOKECOMMANDINFO>(&invoke));
        } else {
            result = S_FALSE;
        }
        PostMessageW(owner, WM_NULL, 0, 0);
    }
    DestroyMenu(filteredMenu);
    DestroyMenu(completeMenu);
    return result;
}

std::wstring BetterPanelQuoteCommandArgument(std::wstring_view value) {
    std::wstring quoted = L"\"";
    size_t backslashes = 0;
    for (wchar_t character : value) {
        if (character == L'\\') {
            ++backslashes;
            continue;
        }
        if (character == L'\"') {
            quoted.append(backslashes * 2 + 1, L'\\');
        } else {
            quoted.append(backslashes, L'\\');
        }
        backslashes = 0;
        quoted += character;
    }
    // Backslashes immediately before the closing quote must be doubled.
    quoted.append(backslashes * 2, L'\\');
    quoted += L'\"';
    return quoted;
}

bool BetterPanelFileExists(std::wstring const& path) {
    DWORD attributes = GetFileAttributesW(path.c_str());
    return attributes != INVALID_FILE_ATTRIBUTES &&
           !(attributes & FILE_ATTRIBUTE_DIRECTORY);
}

std::wstring BetterPanelSystemExecutable(std::wstring_view name) {
    WCHAR systemDirectory[MAX_PATH]{};
    UINT length = GetSystemDirectoryW(systemDirectory,
                                      ARRAYSIZE(systemDirectory));
    if (!length || length >= ARRAYSIZE(systemDirectory)) return {};
    return std::wstring(systemDirectory, length) + L"\\" + name.data();
}

std::wstring BetterPanelFindExtractor() {
    WCHAR programFiles[MAX_PATH]{};
    WCHAR programFilesX86[MAX_PATH]{};
    ExpandEnvironmentStringsW(L"%ProgramFiles%", programFiles,
                              ARRAYSIZE(programFiles));
    ExpandEnvironmentStringsW(L"%ProgramFiles(x86)%", programFilesX86,
                              ARRAYSIZE(programFilesX86));
    std::wstring candidates[] = {
        std::wstring(programFiles) + L"\\WinRAR\\WinRAR.exe",
        std::wstring(programFilesX86) + L"\\WinRAR\\WinRAR.exe",
        std::wstring(programFiles) + L"\\7-Zip\\7z.exe",
        std::wstring(programFilesX86) + L"\\7-Zip\\7z.exe",
        std::wstring(programFiles) + L"\\WinZip\\wzunzip.exe",
        std::wstring(programFilesX86) + L"\\WinZip\\wzunzip.exe",
        BetterPanelSystemExecutable(L"tar.exe")};
    for (auto const& candidate : candidates) {
        if (BetterPanelFileExists(candidate)) {
            return candidate;
        }
    }
    return {};
}

std::wstring BetterPanelReadArchiveListing(std::wstring const& archive) {
    std::wstring tool = BetterPanelFindExtractor();
    std::wstring lowered = tool;
    std::transform(lowered.begin(), lowered.end(), lowered.begin(), towlower);
    size_t dot = archive.find_last_of(L'.');
    std::wstring extension = dot == std::wstring::npos
                                 ? L""
                                 : archive.substr(dot);
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    std::wstring command;
    if (lowered.ends_with(L"7z.exe")) {
        command = BetterPanelQuoteCommandArgument(tool) + L" l -ba " +
                  BetterPanelQuoteCommandArgument(archive);
    } else if (lowered.ends_with(L"winrar.exe") && extension == L".rar") {
        // WinRAR.exe is the graphical program and shows an error dialog for
        // console-only listing commands. Use its companion console executable.
        size_t slash = tool.find_last_of(L"\\/");
        std::wstring folder = slash == std::wstring::npos
                                  ? L""
                                  : tool.substr(0, slash);
        std::wstring console = folder + L"\\UnRAR.exe";
        if (!BetterPanelFileExists(console)) console = folder + L"\\Rar.exe";
        if (!BetterPanelFileExists(console)) {
            return L"RAR preview requires UnRAR.exe or Rar.exe.";
        }
        command = BetterPanelQuoteCommandArgument(console) + L" lb -c- " +
                  BetterPanelQuoteCommandArgument(archive);
    } else {
        WCHAR systemDirectory[MAX_PATH]{};
        GetSystemDirectoryW(systemDirectory, ARRAYSIZE(systemDirectory));
        std::wstring tar = std::wstring(systemDirectory) + L"\\tar.exe";
        if (!BetterPanelFileExists(tar)) {
            return L"Archive preview requires Windows tar or 7-Zip for this format.";
        }
        command = BetterPanelQuoteCommandArgument(tar) + L" -tf " +
                  BetterPanelQuoteCommandArgument(archive);
    }

    WCHAR temporaryFolder[MAX_PATH]{};
    WCHAR temporaryFile[MAX_PATH]{};
    if (!GetTempPathW(ARRAYSIZE(temporaryFolder), temporaryFolder) ||
        !GetTempFileNameW(temporaryFolder, L"BPA", 0, temporaryFile)) {
        return L"Archive contents could not be read.";
    }
    SECURITY_ATTRIBUTES security{sizeof(security), nullptr, TRUE};
    HANDLE outputFile = CreateFileW(
        temporaryFile, GENERIC_READ | GENERIC_WRITE,
        FILE_SHARE_READ | FILE_SHARE_WRITE, &security, CREATE_ALWAYS,
        FILE_ATTRIBUTE_TEMPORARY, nullptr);
    HANDLE nullInput = CreateFileW(L"NUL", GENERIC_READ,
                                   FILE_SHARE_READ | FILE_SHARE_WRITE,
                                   &security, OPEN_EXISTING, 0, nullptr);
    if (outputFile == INVALID_HANDLE_VALUE || nullInput == INVALID_HANDLE_VALUE) {
        if (outputFile != INVALID_HANDLE_VALUE) CloseHandle(outputFile);
        if (nullInput != INVALID_HANDLE_VALUE) CloseHandle(nullInput);
        DeleteFileW(temporaryFile);
        return L"Archive contents could not be read.";
    }
    SIZE_T attributeBytes = 0;
    InitializeProcThreadAttributeList(nullptr, 1, 0, &attributeBytes);
    std::vector<std::byte> attributeStorage(attributeBytes);
    auto attributeList = reinterpret_cast<LPPROC_THREAD_ATTRIBUTE_LIST>(
        attributeStorage.data());
    if (!InitializeProcThreadAttributeList(attributeList, 1, 0,
                                           &attributeBytes)) {
        CloseHandle(outputFile);
        CloseHandle(nullInput);
        DeleteFileW(temporaryFile);
        return L"Archive preview could not be started.";
    }
    HANDLE inheritedHandles[] = {outputFile, nullInput};
    if (!UpdateProcThreadAttribute(
            attributeList, 0, PROC_THREAD_ATTRIBUTE_HANDLE_LIST,
            inheritedHandles, sizeof(inheritedHandles), nullptr, nullptr)) {
        DeleteProcThreadAttributeList(attributeList);
        CloseHandle(outputFile);
        CloseHandle(nullInput);
        DeleteFileW(temporaryFile);
        return L"Archive preview could not be started.";
    }

    STARTUPINFOEXW startup{};
    startup.StartupInfo.cb = sizeof(startup);
    startup.StartupInfo.dwFlags = STARTF_USESTDHANDLES;
    startup.StartupInfo.hStdOutput = outputFile;
    startup.StartupInfo.hStdError = outputFile;
    startup.StartupInfo.hStdInput = nullInput;
    startup.lpAttributeList = attributeList;
    PROCESS_INFORMATION process{};
    if (!CreateProcessW(nullptr, command.data(), nullptr, nullptr, TRUE,
                        CREATE_NO_WINDOW | EXTENDED_STARTUPINFO_PRESENT,
                        nullptr, nullptr, &startup.StartupInfo,
                        &process)) {
        DeleteProcThreadAttributeList(attributeList);
        CloseHandle(outputFile);
        CloseHandle(nullInput);
        DeleteFileW(temporaryFile);
        return L"Archive preview could not be started.";
    }
    DeleteProcThreadAttributeList(attributeList);
    CloseHandle(nullInput);
    CloseHandle(process.hThread);
    HANDLE waitHandles[] = {process.hProcess, g_betterPanelWorkerStopEvent};
    DWORD waitResult = g_betterPanelWorkerStopEvent
                           ? WaitForMultipleObjects(2, waitHandles, FALSE, 10000)
                           : WaitForSingleObject(process.hProcess, 10000);
    if (waitResult != WAIT_OBJECT_0) {
        TerminateProcess(process.hProcess, 1);
        WaitForSingleObject(process.hProcess, 1000);
    }
    DWORD exitCode = 1;
    GetExitCodeProcess(process.hProcess, &exitCode);
    CloseHandle(process.hProcess);

    LARGE_INTEGER start{};
    SetFilePointerEx(outputFile, start, nullptr, FILE_BEGIN);
    std::vector<char> bytes(512 * 1024);
    DWORD bytesRead = 0;
    if (!ReadFile(outputFile, bytes.data(), static_cast<DWORD>(bytes.size()),
                  &bytesRead, nullptr)) {
        bytesRead = 0;
    }
    bytes.resize(bytesRead);
    CloseHandle(outputFile);
    DeleteFileW(temporaryFile);

    std::wstring output;
    if (!bytes.empty() &&
        !BetterPanelDecodeMultiByte(CP_UTF8, MB_ERR_INVALID_CHARS,
                                    bytes.data(), static_cast<int>(bytes.size()),
                                    output)) {
        BetterPanelDecodeMultiByte(CP_ACP, 0, bytes.data(),
                                   static_cast<int>(bytes.size()), output);
    }
    std::wistringstream lines(output);
    std::wstring line;
    std::wstring preview;
    size_t shown = 0;
    while (std::getline(lines, line) && shown < 200) {
        if (!line.empty() && line.back() == L'\r') line.pop_back();
        if (line.empty()) continue;
        preview += line + L"\n";
        ++shown;
    }
    if (preview.empty()) {
        return exitCode == 0 ? L"No files were found in this archive."
                             : L"The archive contents could not be listed.";
    }
    if (!lines.eof()) preview += L"\u2026more entries are not shown";
    return preview;
}

void BetterPanelLoadArchivePreview(
    std::shared_ptr<BetterPanelState> const& state,
    std::wstring const& path) {
    if (!state || path.empty() || state->archivePreviewLoading ||
        state->archivePreviewPath == path) return;
    state->archivePreviewLoading = true;
    state->archivePreviewPath = path;
    if (auto text = state->archivePreviewText.get())
        text.Text(L"Reading archive contents…");
    auto weakState = std::weak_ptr<BetterPanelState>(state);
    auto dispatcher = state->dispatcher;
    BetterPanelStartWorker([weakState, dispatcher, path]() {
        auto listing = BetterPanelReadArchiveListing(path);
        if (BetterPanelWorkerStopping()) return;
        bool queued = dispatcher.TryEnqueue([weakState, path,
                                             listing = std::move(listing)]() {
            auto state = weakState.lock();
            if (!state || state->unloaded) return;
            // Always clear the in-flight flag, even if the selection changed
            // while the listing worker was running. Otherwise a stale request
            // can permanently disable archive previews for this panel.
            state->archivePreviewLoading = false;
            if (state->archivePreviewPath != path) return;
            if (auto text = state->archivePreviewText.get())
                text.Text(listing);
        });
        if (!queued) {
            if (auto state = weakState.lock()) {
                state->archivePreviewLoading.store(false,
                                                   std::memory_order_release);
            }
        }
    });
}

std::wstring BetterPanelArchiveParent(std::wstring_view path) {
    size_t slash = path.find_last_of(L"\\/");
    return slash == std::wstring_view::npos
               ? std::wstring()
               : std::wstring(path.substr(0, slash));
}

std::wstring BetterPanelArchiveBaseName(std::wstring_view path) {
    std::wstring name = BetterPanelFileName(path);
    std::wstring lowered = name;
    std::transform(lowered.begin(), lowered.end(), lowered.begin(), towlower);
    static constexpr std::wstring_view compoundExtensions[] = {
        L".tar.gz", L".tar.bz2", L".tar.xz", L".tar.zst"};
    for (auto extension : compoundExtensions) {
        if (lowered.ends_with(extension)) {
            name.resize(name.size() - extension.size());
            return name;
        }
    }
    size_t dot = name.find_last_of(L'.');
    if (dot != std::wstring::npos) {
        name.resize(dot);
    }
    return name;
}

HRESULT BetterPanelChooseExtractionFolder(HWND owner,
                                          std::wstring& destination) {
    winrt::com_ptr<IFileOpenDialog> dialog;
    HRESULT result = CoCreateInstance(CLSID_FileOpenDialog, nullptr,
                                      CLSCTX_INPROC_SERVER,
                                      IID_PPV_ARGS(dialog.put()));
    if (FAILED(result)) {
        return result;
    }
    FILEOPENDIALOGOPTIONS options{};
    dialog->GetOptions(&options);
    dialog->SetOptions(options | FOS_PICKFOLDERS | FOS_FORCEFILESYSTEM |
                       FOS_PATHMUSTEXIST);
    dialog->SetTitle(L"Choose destination folder");
    result = dialog->Show(owner);
    if (FAILED(result)) {
        return result;
    }
    winrt::com_ptr<IShellItem> item;
    result = dialog->GetResult(item.put());
    if (FAILED(result)) {
        return result;
    }
    PWSTR rawPath = nullptr;
    result = item->GetDisplayName(SIGDN_FILESYSPATH, &rawPath);
    if (SUCCEEDED(result) && rawPath) {
        destination = rawPath;
    }
    CoTaskMemFree(rawPath);
    return result;
}

HRESULT BetterPanelStartExtraction(std::wstring const& archive,
                                   std::wstring destination,
                                   HANDLE* processHandle = nullptr) {
    std::wstring extractor = BetterPanelFindExtractor();
    if (extractor.empty()) {
        return HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND);
    }
    int directoryResult =
        SHCreateDirectoryExW(nullptr, destination.c_str(), nullptr);
    if (directoryResult != ERROR_SUCCESS &&
        directoryResult != ERROR_ALREADY_EXISTS) {
        return HRESULT_FROM_WIN32(directoryResult);
    }

    std::wstring lowered = extractor;
    std::transform(lowered.begin(), lowered.end(), lowered.begin(), towlower);
    std::wstring command = BetterPanelQuoteCommandArgument(extractor);
    if (lowered.ends_with(L"winrar.exe")) {
        if (!destination.ends_with(L'\\')) destination += L'\\';
        command += L" x -o+ -ibck " + BetterPanelQuoteCommandArgument(archive) +
                   L" " + BetterPanelQuoteCommandArgument(destination);
    } else if (lowered.ends_with(L"7z.exe")) {
        command += L" x -y -o" + BetterPanelQuoteCommandArgument(destination) +
                   L" " + BetterPanelQuoteCommandArgument(archive);
    } else if (lowered.ends_with(L"wzunzip.exe")) {
        command += L" -d " + BetterPanelQuoteCommandArgument(archive) +
                   L" " + BetterPanelQuoteCommandArgument(destination);
    } else {
        command += L" -xf " + BetterPanelQuoteCommandArgument(archive) +
                   L" -C " + BetterPanelQuoteCommandArgument(destination);
    }

    STARTUPINFOW startup{sizeof(startup)};
    PROCESS_INFORMATION process{};
    if (!CreateProcessW(nullptr, command.data(), nullptr, nullptr, FALSE,
                        CREATE_NO_WINDOW, nullptr, nullptr, &startup,
                        &process)) {
        return HRESULT_FROM_WIN32(GetLastError());
    }
    CloseHandle(process.hThread);
    if (processHandle) {
        *processHandle = process.hProcess;
    } else {
        CloseHandle(process.hProcess);
    }
    return S_OK;
}

HRESULT BetterPanelShowSimpleExtractMenu(std::wstring const& archive,
                                         HWND owner) {
    std::wstring parent = BetterPanelArchiveParent(archive);
    std::wstring baseName = BetterPanelArchiveBaseName(archive);
    if (parent.empty() || baseName.empty()) {
        return E_INVALIDARG;
    }

    HMENU menu = CreatePopupMenu();
    if (!menu) {
        return E_OUTOFMEMORY;
    }
    AppendMenuW(menu, MF_STRING, 1, L"Extract here");
    AppendMenuW(menu, MF_STRING, 2, L"Extract to...");
    std::wstring folderLabel = L"Extract to \"" + baseName + L"\\\"";
    AppendMenuW(menu, MF_STRING, 3, folderLabel.c_str());

    POINT point{};
    GetCursorPos(&point);
    if (!owner) {
        DestroyMenu(menu);
        return E_INVALIDARG;
    }
    UINT command = TrackPopupMenuEx(
        menu, TPM_RETURNCMD | TPM_RIGHTBUTTON | TPM_NONOTIFY,
        point.x, point.y, owner, nullptr);
    DestroyMenu(menu);
    if (!command) {
        return S_FALSE;
    }

    std::wstring destination;
    if (command == 1) {
        destination = parent;
    } else if (command == 2) {
        HRESULT result = BetterPanelChooseExtractionFolder(owner, destination);
        if (FAILED(result)) {
            return result;
        }
    } else {
        destination = parent + L"\\" + baseName;
    }
    return BetterPanelStartExtraction(archive, destination);
}

HRESULT BetterPanelShellLaunch(HWND owner, std::wstring const& file,
                               std::wstring const& parameters,
                               bool elevated) {
    HINSTANCE result = ShellExecuteW(
        owner, elevated ? L"runas" : L"open", file.c_str(),
        parameters.empty() ? nullptr : parameters.c_str(), nullptr,
        SW_SHOWNORMAL);
    return reinterpret_cast<INT_PTR>(result) > 32
               ? S_OK
               : HRESULT_FROM_WIN32(static_cast<DWORD>(
                     reinterpret_cast<INT_PTR>(result)));
}

std::wstring BetterPanelContainingFolder(std::wstring const& path) {
    if (path.empty()) return {};
    DWORD attributes = GetFileAttributesW(path.c_str());
    if (attributes != INVALID_FILE_ATTRIBUTES &&
        (attributes & FILE_ATTRIBUTE_DIRECTORY)) {
        return path;
    }
    std::wstring folder = path;
    size_t slash = folder.find_last_of(L"\\/");
    return slash == std::wstring::npos ? L"" : folder.substr(0, slash);
}

HRESULT BetterPanelMoveItemsToFolder(
    std::vector<std::wstring> const& sources,
    std::wstring const& destination, HWND owner) {
    if (sources.empty() || destination.empty()) {
        return E_INVALIDARG;
    }
    winrt::com_ptr<IFileOperation> operation;
    HRESULT result = CoCreateInstance(CLSID_FileOperation, nullptr,
                                      CLSCTX_INPROC_SERVER,
                                      IID_PPV_ARGS(operation.put()));
    if (FAILED(result)) {
        return result;
    }
    operation->SetOwnerWindow(owner);
    operation->SetOperationFlags(FOF_ALLOWUNDO | FOF_NOCONFIRMMKDIR |
                                 FOFX_SHOWELEVATIONPROMPT |
                                 FOFX_ADDUNDORECORD);

    winrt::com_ptr<IShellItem> destinationItem;
    result = SHCreateItemFromParsingName(destination.c_str(), nullptr,
                                         IID_PPV_ARGS(destinationItem.put()));
    if (FAILED(result)) {
        return result;
    }
    for (auto const& source : sources) {
        winrt::com_ptr<IShellItem> sourceItem;
        result = SHCreateItemFromParsingName(source.c_str(), nullptr,
                                             IID_PPV_ARGS(sourceItem.put()));
        if (FAILED(result)) {
            return result;
        }
        result = operation->MoveItem(sourceItem.get(), destinationItem.get(),
                                     nullptr, nullptr);
        if (FAILED(result)) {
            return result;
        }
    }
    result = operation->PerformOperations();
    if (FAILED(result)) {
        return result;
    }
    BOOL aborted = FALSE;
    operation->GetAnyOperationsAborted(&aborted);
    return aborted ? HRESULT_FROM_WIN32(ERROR_CANCELLED) : S_OK;
}

HRESULT BetterPanelDeleteItems(std::vector<std::wstring> const& sources,
                               HWND owner) {
    if (sources.empty()) {
        return E_INVALIDARG;
    }
    winrt::com_ptr<IFileOperation> operation;
    HRESULT result = CoCreateInstance(CLSID_FileOperation, nullptr,
                                      CLSCTX_INPROC_SERVER,
                                      IID_PPV_ARGS(operation.put()));
    if (FAILED(result)) return result;
    operation->SetOwnerWindow(owner);
    operation->SetOperationFlags(FOF_ALLOWUNDO | FOF_WANTNUKEWARNING |
                                 FOFX_RECYCLEONDELETE |
                                 FOFX_SHOWELEVATIONPROMPT |
                                 FOFX_ADDUNDORECORD);
    for (auto const& source : sources) {
        winrt::com_ptr<IShellItem> sourceItem;
        result = SHCreateItemFromParsingName(source.c_str(), nullptr,
                                             IID_PPV_ARGS(sourceItem.put()));
        if (FAILED(result)) return result;
        result = operation->DeleteItem(sourceItem.get(), nullptr);
        if (FAILED(result)) return result;
    }
    result = operation->PerformOperations();
    if (FAILED(result)) return result;
    BOOL aborted = FALSE;
    operation->GetAnyOperationsAborted(&aborted);
    return aborted ? HRESULT_FROM_WIN32(ERROR_CANCELLED) : S_OK;
}

struct BetterPanelBulkRenameEntry {
    std::wstring path;
    std::wstring oldName;
    std::wstring newName;
};

std::wstring BetterPanelBulkRenameName(std::wstring const& path, int mode,
                                       std::wstring const& first,
                                       std::wstring const& second,
                                       size_t index, size_t count) {
    std::wstring filename = BetterPanelFileName(path);
    size_t dot = filename.find_last_of(L'.');
    if (dot == 0) dot = std::wstring::npos;
    std::wstring stem = dot == std::wstring::npos ? filename
                                                  : filename.substr(0, dot);
    std::wstring extension = dot == std::wstring::npos
                                 ? L""
                                 : filename.substr(dot);
    if (mode == 0) return first + stem + extension;
    if (mode == 1) return stem + first + extension;
    if (mode == 2) {
        if (first.empty()) return filename;
        size_t position = 0;
        while ((position = stem.find(first, position)) != std::wstring::npos) {
            stem.replace(position, first.size(), second);
            position += second.size();
        }
        return stem + extension;
    }
    int start = _wtoi(second.c_str());
    if (start < 0) start = 0;
    size_t lastNumber = static_cast<size_t>(start) + count - 1;
    size_t width = std::max<size_t>(2, std::to_wstring(lastNumber).size());
    std::wostringstream number;
    number << std::setw(static_cast<int>(width)) << std::setfill(L'0')
           << (static_cast<size_t>(start) + index);
    std::wstring base = first.empty() ? L"File" : first;
    return base + L" " + number.str() + extension;
}

std::vector<BetterPanelBulkRenameEntry> BetterPanelBuildBulkRenameEntries(
    std::vector<std::wstring> const& paths, int mode,
    std::wstring const& first, std::wstring const& second, bool& valid) {
    valid = true;
    std::vector<BetterPanelBulkRenameEntry> entries;
    std::set<std::wstring> names;
    for (size_t index = 0; index < paths.size(); ++index) {
        BetterPanelBulkRenameEntry entry;
        entry.path = paths[index];
        entry.oldName = BetterPanelFileName(entry.path);
        entry.newName = BetterPanelBulkRenameName(
            entry.path, mode, first, second, index, paths.size());
        if (entry.newName.empty() || entry.newName == L"." ||
            entry.newName == L".." ||
            entry.newName.find_first_of(L"\\/:*?\"<>|") !=
                std::wstring::npos ||
            entry.newName.back() == L'.' || entry.newName.back() == L' ') {
            valid = false;
        }
        std::wstring key = entry.newName;
        std::transform(key.begin(), key.end(), key.begin(), towlower);
        if (!names.insert(key).second) valid = false;
        entries.push_back(std::move(entry));
    }
    return entries;
}

HRESULT BetterPanelBulkRenameItems(
    std::vector<BetterPanelBulkRenameEntry> const& entries, HWND owner) {
    if (entries.empty()) return E_INVALIDARG;
    winrt::com_ptr<IFileOperation> operation;
    HRESULT result = CoCreateInstance(CLSID_FileOperation, nullptr,
                                      CLSCTX_INPROC_SERVER,
                                      IID_PPV_ARGS(operation.put()));
    if (FAILED(result)) return result;
    operation->SetOwnerWindow(owner);
    operation->SetOperationFlags(FOF_ALLOWUNDO | FOFX_SHOWELEVATIONPROMPT |
                                 FOFX_ADDUNDORECORD |
                                 FOFX_PRESERVEFILEEXTENSIONS);
    size_t renameCount = 0;
    for (auto const& entry : entries) {
        if (_wcsicmp(entry.oldName.c_str(), entry.newName.c_str()) == 0) {
            continue;
        }
        winrt::com_ptr<IShellItem> item;
        result = SHCreateItemFromParsingName(entry.path.c_str(), nullptr,
                                             IID_PPV_ARGS(item.put()));
        if (FAILED(result)) return result;
        result = operation->RenameItem(item.get(), entry.newName.c_str(),
                                       nullptr);
        if (FAILED(result)) return result;
        ++renameCount;
    }
    if (!renameCount) return S_FALSE;
    result = operation->PerformOperations();
    if (FAILED(result)) return result;
    BOOL aborted = FALSE;
    operation->GetAnyOperationsAborted(&aborted);
    return aborted ? HRESULT_FROM_WIN32(ERROR_CANCELLED) : S_OK;
}

std::wstring BetterPanelFindArchiveCreator() {
    WCHAR programFiles[MAX_PATH]{};
    WCHAR programFilesX86[MAX_PATH]{};
    ExpandEnvironmentStringsW(L"%ProgramFiles%", programFiles,
                              ARRAYSIZE(programFiles));
    ExpandEnvironmentStringsW(L"%ProgramFiles(x86)%", programFilesX86,
                              ARRAYSIZE(programFilesX86));
    std::wstring candidates[] = {
        std::wstring(programFiles) + L"\\WinRAR\\WinRAR.exe",
        std::wstring(programFilesX86) + L"\\WinRAR\\WinRAR.exe",
        std::wstring(programFiles) + L"\\7-Zip\\7z.exe",
        std::wstring(programFilesX86) + L"\\7-Zip\\7z.exe",
        std::wstring(programFiles) + L"\\WinZip\\wzzip.exe",
        std::wstring(programFilesX86) + L"\\WinZip\\wzzip.exe",
        BetterPanelSystemExecutable(L"tar.exe")};
    for (auto const& candidate : candidates) {
        if (BetterPanelFileExists(candidate)) return candidate;
    }
    return {};
}

HRESULT BetterPanelChooseArchivePath(HWND owner,
                                     std::wstring const& creator,
                                     std::wstring& archivePath) {
    winrt::com_ptr<IFileSaveDialog> dialog;
    HRESULT result = CoCreateInstance(CLSID_FileSaveDialog, nullptr,
                                      CLSCTX_INPROC_SERVER,
                                      IID_PPV_ARGS(dialog.put()));
    if (FAILED(result)) return result;
    std::wstring lowered = creator;
    std::transform(lowered.begin(), lowered.end(), lowered.begin(), towlower);
    COMDLG_FILTERSPEC filters[2]{};
    UINT filterCount = 0;
    if (lowered.ends_with(L"winrar.exe")) {
        filters[0] = {L"RAR archive (*.rar)", L"*.rar"};
        filters[1] = {L"ZIP archive (*.zip)", L"*.zip"};
        filterCount = 2;
        dialog->SetDefaultExtension(L"rar");
        dialog->SetFileName(L"Archive.rar");
    } else if (lowered.ends_with(L"7z.exe")) {
        filters[0] = {L"7-Zip archive (*.7z)", L"*.7z"};
        filters[1] = {L"ZIP archive (*.zip)", L"*.zip"};
        filterCount = 2;
        dialog->SetDefaultExtension(L"7z");
        dialog->SetFileName(L"Archive.7z");
    } else {
        filters[0] = {L"ZIP archive (*.zip)", L"*.zip"};
        filters[1] = {L"TAR archive (*.tar)", L"*.tar"};
        filterCount = 2;
        dialog->SetDefaultExtension(L"zip");
        dialog->SetFileName(L"Archive.zip");
    }
    dialog->SetFileTypes(filterCount, filters);
    dialog->SetTitle(L"Create archive from selected items");
    result = dialog->Show(owner);
    if (FAILED(result)) return result;
    winrt::com_ptr<IShellItem> item;
    result = dialog->GetResult(item.put());
    if (FAILED(result)) return result;
    PWSTR rawPath = nullptr;
    result = item->GetDisplayName(SIGDN_FILESYSPATH, &rawPath);
    if (SUCCEEDED(result) && rawPath) archivePath = rawPath;
    CoTaskMemFree(rawPath);
    return result;
}

HRESULT BetterPanelStartArchive(
    std::vector<std::wstring> const& sources,
    std::wstring const& creator,
    std::wstring const& archivePath) {
    if (sources.empty() || creator.empty() || archivePath.empty()) {
        return E_INVALIDARG;
    }
    std::wstring lowered = creator;
    std::transform(lowered.begin(), lowered.end(), lowered.begin(), towlower);
    std::wstring command = BetterPanelQuoteCommandArgument(creator);
    if (lowered.ends_with(L"winrar.exe")) {
        command += L" a -ep1 -r -ibck " +
                   BetterPanelQuoteCommandArgument(archivePath);
    } else if (lowered.ends_with(L"7z.exe")) {
        command += L" a -y " + BetterPanelQuoteCommandArgument(archivePath);
    } else if (lowered.ends_with(L"wzzip.exe")) {
        command += L" -a " + BetterPanelQuoteCommandArgument(archivePath);
    } else {
        command += L" -a -cf " +
                   BetterPanelQuoteCommandArgument(archivePath);
    }
    for (auto const& source : sources) {
        command += L" " + BetterPanelQuoteCommandArgument(source);
    }
    STARTUPINFOW startup{sizeof(startup)};
    PROCESS_INFORMATION process{};
    if (!CreateProcessW(nullptr, command.data(), nullptr, nullptr, FALSE,
                        CREATE_NO_WINDOW, nullptr, nullptr, &startup,
                        &process)) {
        return HRESULT_FROM_WIN32(GetLastError());
    }
    CloseHandle(process.hThread);
    CloseHandle(process.hProcess);
    return S_OK;
}

std::wstring BetterPanelFormatTime(int64_t ticks) {
    int64_t totalSeconds = std::max<int64_t>(0, ticks / 10000000);
    int64_t hours = totalSeconds / 3600;
    int64_t minutes = (totalSeconds % 3600) / 60;
    int64_t seconds = totalSeconds % 60;
    WCHAR buffer[32]{};
    if (hours) {
        swprintf_s(buffer, L"%lld:%02lld:%02lld", hours, minutes, seconds);
    } else {
        swprintf_s(buffer, L"%lld:%02lld", minutes, seconds);
    }
    return buffer;
}

winrt::fire_and_forget BetterPanelClearTemporaryMessageAfterDelay(
    winrt::weak_ref<muxc::TextBlock> weakMessage,
    mud::DispatcherQueue dispatcher,
    winrt::hstring temporaryText) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    co_await winrt::resume_after(std::chrono::seconds(2));
    dispatcher.TryEnqueue([weakMessage, temporaryText]() {
        if (auto message = weakMessage.get();
            message && message.Text() == temporaryText) {
            if (message.Name() == L"BetterPanelDetailsCopyHint") {
                message.Text(L"Select a box to copy");
            } else {
                message.Text(L"");
                if (message.Name() != L"BetterPanelTemporaryStatus") {
                    message.Visibility(Visibility::Collapsed);
                }
            }
        }
    });
}

winrt::fire_and_forget BetterPanelShowTemporaryButtonMessage(
    winrt::weak_ref<muxc::Button> weakButton, std::wstring_view text) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    auto button = weakButton.get();
    if (!button || text.empty()) co_return;

    muxc::ToolTip tip;
    tip.Content(winrt::box_value(text));
    muxc::ToolTipService::SetToolTip(button, tip);
    tip.IsOpen(true);
    auto weakTip = winrt::make_weak(tip);
    auto dispatcher = button.DispatcherQueue();
    auto restoreText = muxa::AutomationProperties::GetName(button);

    co_await winrt::resume_after(std::chrono::seconds(2));
    dispatcher.TryEnqueue([weakButton, weakTip, restoreText]() {
        if (auto tip = weakTip.get()) tip.IsOpen(false);
        if (auto button = weakButton.get()) {
            muxc::ToolTipService::SetToolTip(button,
                                             winrt::box_value(restoreText));
        }
    });
}

void BetterPanelSetStatus(winrt::weak_ref<muxc::TextBlock> weakStatus,
                          std::wstring_view text) {
    if (auto status = weakStatus.get()) {
        status.Text(text);
        status.Visibility(status.Name() == L"BetterPanelTemporaryStatus"
                              ? Visibility::Visible
                              : (text.empty() ? Visibility::Collapsed
                                              : Visibility::Visible));
        bool temporaryCopyHint =
            status.Name() == L"BetterPanelDetailsCopyHint" &&
            text != L"Select a box to copy";
        bool temporaryPanelMessage =
            (status.Name() == L"BetterPanelTemporaryStatus" ||
             status.Name() == L"BetterPanelTextActionStatus") &&
            !text.empty();
        if (temporaryCopyHint || temporaryPanelMessage) {
            BetterPanelClearTemporaryMessageAfterDelay(
                weakStatus, status.DispatcherQueue(), winrt::hstring(text));
        }
    }
}

struct BetterPanelSyntaxOption {
    BetterPanelSyntaxLanguage language;
    PCWSTR label;
};

constexpr std::array<BetterPanelSyntaxOption, 16> kBetterPanelSyntaxOptions{{
    {BetterPanelSyntaxLanguage::Auto, L"Auto"},
    {BetterPanelSyntaxLanguage::PlainText, L"Plain text"},
    {BetterPanelSyntaxLanguage::Markdown, L"Markdown"},
    {BetterPanelSyntaxLanguage::Cpp, L"C / C++"},
    {BetterPanelSyntaxLanguage::CSharp, L"C#"},
    {BetterPanelSyntaxLanguage::JavaScript, L"JavaScript"},
    {BetterPanelSyntaxLanguage::TypeScript, L"TypeScript"},
    {BetterPanelSyntaxLanguage::Json, L"JSON"},
    {BetterPanelSyntaxLanguage::Python, L"Python"},
    {BetterPanelSyntaxLanguage::PowerShell, L"PowerShell"},
    {BetterPanelSyntaxLanguage::HtmlXml, L"HTML / XML"},
    {BetterPanelSyntaxLanguage::Css, L"CSS"},
    {BetterPanelSyntaxLanguage::Yaml, L"YAML"},
    {BetterPanelSyntaxLanguage::Ini, L"INI / config"},
    {BetterPanelSyntaxLanguage::Batch, L"Batch"},
    {BetterPanelSyntaxLanguage::Sql, L"SQL"},
}};

PCWSTR BetterPanelSyntaxLanguageName(BetterPanelSyntaxLanguage language) {
    for (auto const& option : kBetterPanelSyntaxOptions) {
        if (option.language == language) return option.label;
    }
    return L"Plain text";
}

BetterPanelSyntaxLanguage BetterPanelDetectSyntaxLanguage(
    std::wstring const& path) {
    std::wstring extension = PathFindExtensionW(path.c_str());
    std::transform(extension.begin(), extension.end(), extension.begin(),
                   towlower);
    if (extension == L".md" || extension == L".markdown")
        return BetterPanelSyntaxLanguage::Markdown;
    if (extension == L".c" || extension == L".cc" ||
        extension == L".cpp" || extension == L".cxx" ||
        extension == L".h" || extension == L".hh" ||
        extension == L".hpp") return BetterPanelSyntaxLanguage::Cpp;
    if (extension == L".cs") return BetterPanelSyntaxLanguage::CSharp;
    if (extension == L".js" || extension == L".jsx" ||
        extension == L".mjs" || extension == L".cjs")
        return BetterPanelSyntaxLanguage::JavaScript;
    if (extension == L".ts" || extension == L".tsx")
        return BetterPanelSyntaxLanguage::TypeScript;
    if (extension == L".json" || extension == L".jsonc")
        return BetterPanelSyntaxLanguage::Json;
    if (extension == L".py" || extension == L".pyw")
        return BetterPanelSyntaxLanguage::Python;
    if (extension == L".ps1" || extension == L".psm1" ||
        extension == L".psd1") return BetterPanelSyntaxLanguage::PowerShell;
    if (extension == L".html" || extension == L".htm" ||
        extension == L".xml" || extension == L".xaml" ||
        extension == L".svg") return BetterPanelSyntaxLanguage::HtmlXml;
    if (extension == L".css" || extension == L".scss" ||
        extension == L".less") return BetterPanelSyntaxLanguage::Css;
    if (extension == L".yaml" || extension == L".yml")
        return BetterPanelSyntaxLanguage::Yaml;
    if (extension == L".ini" || extension == L".inf" ||
        extension == L".cfg" ||
        extension == L".conf") return BetterPanelSyntaxLanguage::Ini;
    if (extension == L".bat" || extension == L".cmd")
        return BetterPanelSyntaxLanguage::Batch;
    if (extension == L".sql") return BetterPanelSyntaxLanguage::Sql;
    return BetterPanelSyntaxLanguage::PlainText;
}

enum class BetterPanelSyntaxColor { Keyword, String, Comment, Number, Type };
struct BetterPanelSyntaxSpan {
    size_t start;
    size_t length;
    BetterPanelSyntaxColor color;
};

bool BetterPanelIsSyntaxKeyword(BetterPanelSyntaxLanguage language,
                                std::wstring const& token) {
    static const std::unordered_set<std::wstring> common{
        L"abstract", L"as", L"async", L"await", L"break", L"case",
        L"catch", L"class", L"const", L"continue", L"default", L"do",
        L"else", L"enum", L"export", L"extends", L"false", L"finally",
        L"for", L"foreach", L"from", L"function", L"if", L"import",
        L"in", L"interface", L"internal", L"let", L"namespace", L"new",
        L"null", L"nullptr", L"operator", L"out", L"override", L"private",
        L"protected", L"public", L"readonly", L"return", L"static",
        L"struct", L"switch", L"this", L"throw", L"true", L"try",
        L"typeof", L"using", L"var", L"virtual", L"void", L"while",
        L"yield", L"string", L"int", L"double", L"float", L"bool",
    };
    static const std::unordered_set<std::wstring> python{
        L"and", L"as", L"assert", L"async", L"await", L"break", L"class",
        L"continue", L"def", L"del", L"elif", L"else", L"except", L"False",
        L"finally", L"for", L"from", L"global", L"if", L"import", L"in",
        L"is", L"lambda", L"None", L"nonlocal", L"not", L"or", L"pass",
        L"raise", L"return", L"True", L"try", L"while", L"with", L"yield",
    };
    static const std::unordered_set<std::wstring> sql{
        L"alter", L"and", L"as", L"asc", L"begin", L"by", L"create",
        L"delete", L"desc", L"distinct", L"drop", L"else", L"end", L"from",
        L"group", L"having", L"in", L"insert", L"into", L"is", L"join",
        L"like", L"limit", L"not", L"null", L"on", L"or", L"order",
        L"select", L"set", L"table", L"then", L"union", L"update",
        L"values", L"when", L"where",
    };
    if (language == BetterPanelSyntaxLanguage::Python)
        return python.contains(token);
    if (language == BetterPanelSyntaxLanguage::Sql) {
        std::wstring lowered = token;
        std::transform(lowered.begin(), lowered.end(), lowered.begin(),
                       towlower);
        return sql.contains(lowered);
    }
    return common.contains(token);
}

std::vector<BetterPanelSyntaxSpan> BetterPanelBuildSyntaxSpans(
    std::wstring const& text, BetterPanelSyntaxLanguage language) {
    std::vector<BetterPanelSyntaxSpan> spans;
    if (language == BetterPanelSyntaxLanguage::PlainText ||
        text.size() > 200000) return spans;
    constexpr size_t maxSpans = 4000;
    auto add = [&](size_t start, size_t end, BetterPanelSyntaxColor color) {
        if (end > start && spans.size() < maxSpans)
            spans.push_back({start, end - start, color});
    };

    if (language == BetterPanelSyntaxLanguage::HtmlXml) {
        for (size_t i = 0; i < text.size() && spans.size() < maxSpans;) {
            if (text.compare(i, 4, L"<!--") == 0) {
                size_t end = text.find(L"-->", i + 4);
                end = end == std::wstring::npos ? text.size() : end + 3;
                add(i, end, BetterPanelSyntaxColor::Comment);
                i = end;
            } else if (text[i] == L'<') {
                size_t end = text.find(L'>', i + 1);
                end = end == std::wstring::npos ? text.size() : end + 1;
                add(i, end, BetterPanelSyntaxColor::Type);
                i = end;
            } else {
                ++i;
            }
        }
        return spans;
    }

    if (language == BetterPanelSyntaxLanguage::Markdown) {
        for (size_t i = 0; i < text.size() && spans.size() < maxSpans;) {
            bool lineStart = i == 0 || text[i - 1] == L'\n';
            if (lineStart && text.compare(i, 3, L"```") == 0) {
                size_t end = text.find(L'\n', i);
                end = end == std::wstring::npos ? text.size() : end;
                add(i, end, BetterPanelSyntaxColor::Keyword);
                i = end;
            } else if (lineStart && text[i] == L'#') {
                size_t end = text.find(L'\n', i);
                end = end == std::wstring::npos ? text.size() : end;
                add(i, end, BetterPanelSyntaxColor::Keyword);
                i = end;
            } else if (text[i] == L'`') {
                size_t end = text.find(L'`', i + 1);
                end = end == std::wstring::npos ? text.size() : end + 1;
                add(i, end, BetterPanelSyntaxColor::String);
                i = end;
            } else {
                ++i;
            }
        }
        return spans;
    }

    bool hashComments = language == BetterPanelSyntaxLanguage::Python ||
                        language == BetterPanelSyntaxLanguage::PowerShell ||
                        language == BetterPanelSyntaxLanguage::Yaml;
    bool semicolonComments = language == BetterPanelSyntaxLanguage::Ini;
    for (size_t i = 0; i < text.size() && spans.size() < maxSpans;) {
        if (i + 1 < text.size() && text[i] == L'/' && text[i + 1] == L'/') {
            size_t end = text.find(L'\n', i + 2);
            end = end == std::wstring::npos ? text.size() : end;
            add(i, end, BetterPanelSyntaxColor::Comment);
            i = end;
        } else if (i + 1 < text.size() && text[i] == L'/' &&
                   text[i + 1] == L'*') {
            size_t end = text.find(L"*/", i + 2);
            end = end == std::wstring::npos ? text.size() : end + 2;
            add(i, end, BetterPanelSyntaxColor::Comment);
            i = end;
        } else if ((hashComments && text[i] == L'#') ||
                   (semicolonComments && text[i] == L';')) {
            size_t end = text.find(L'\n', i + 1);
            end = end == std::wstring::npos ? text.size() : end;
            add(i, end, BetterPanelSyntaxColor::Comment);
            i = end;
        } else if (text[i] == L'"' || text[i] == L'\'' ||
                   (language == BetterPanelSyntaxLanguage::PowerShell &&
                    text[i] == L'`')) {
            wchar_t quote = text[i];
            size_t end = i + 1;
            while (end < text.size()) {
                if (text[end] == L'\\') {
                    end += std::min<size_t>(2, text.size() - end);
                } else if (text[end++] == quote) {
                    break;
                } else if (quote == L'`' && text[end - 1] == L'\n') {
                    break;
                }
            }
            add(i, end, BetterPanelSyntaxColor::String);
            i = end;
        } else if (iswdigit(text[i])) {
            size_t end = i + 1;
            while (end < text.size() &&
                   (iswalnum(text[end]) || text[end] == L'.' ||
                    text[end] == L'_')) ++end;
            add(i, end, BetterPanelSyntaxColor::Number);
            i = end;
        } else if (iswalpha(text[i]) || text[i] == L'_') {
            size_t end = i + 1;
            while (end < text.size() &&
                   (iswalnum(text[end]) || text[end] == L'_')) ++end;
            std::wstring token = text.substr(i, end - i);
            if (BetterPanelIsSyntaxKeyword(language, token)) {
                add(i, end, BetterPanelSyntaxColor::Keyword);
            } else if (!token.empty() && iswupper(token.front())) {
                add(i, end, BetterPanelSyntaxColor::Type);
            }
            i = end;
        } else {
            ++i;
        }
    }
    return spans;
}

void BetterPanelRenderSyntaxPreview(
    std::shared_ptr<BetterPanelState> const& state,
    std::wstring const& text) {
    auto preview = state->syntaxPreview.get();
    if (!preview) return;
    auto language = state->syntaxLanguage == BetterPanelSyntaxLanguage::Auto
                        ? BetterPanelDetectSyntaxLanguage(state->selectedPath)
                        : state->syntaxLanguage;
    state->detectedSyntaxLanguage = language;
    if (auto picker = state->syntaxLanguagePicker.get();
        picker && picker.Items().Size() > 0) {
        if (auto autoItem =
                picker.Items().GetAt(0).try_as<muxc::ComboBoxItem>()) {
            std::wstring autoLabel =
                std::wstring(L"Auto - ") +
                BetterPanelSyntaxLanguageName(
                    BetterPanelDetectSyntaxLanguage(state->selectedPath));
            std::wstring currentLabel;
            if (auto content = autoItem.Content()) {
                currentLabel = winrt::unbox_value_or<winrt::hstring>(
                                   content, L"")
                                   .c_str();
            }
            if (currentLabel != autoLabel) {
                // ComboBox caches the closed selection display. Briefly clear
                // and restore Auto so its visible label follows the newly
                // detected file type instead of keeping the first one shown.
                bool autoSelected = picker.SelectedIndex() == 0;
                if (autoSelected) picker.SelectedIndex(-1);
                autoItem.Content(winrt::box_value(autoLabel));
                if (autoSelected) picker.SelectedIndex(0);
            }
        }
    }
    auto spans = BetterPanelBuildSyntaxSpans(text, language);
    preview.Inlines().Clear();
    if (spans.empty()) {
        preview.Text(text);
        return;
    }

    using Brush = winrt::Microsoft::UI::Xaml::Media::SolidColorBrush;
    auto makeBrush = [](BYTE r, BYTE g, BYTE b) {
        return Brush(winrt::Windows::UI::ColorHelper::FromArgb(255, r, g, b));
    };
    Brush keyword = makeBrush(86, 156, 214);
    Brush string = makeBrush(206, 145, 120);
    Brush comment = makeBrush(106, 153, 85);
    Brush number = makeBrush(181, 206, 168);
    Brush type = makeBrush(78, 201, 176);
    size_t position = 0;
    for (auto const& span : spans) {
        if (span.start > position) {
            muxd::Run run;
            run.Text(text.substr(position, span.start - position));
            preview.Inlines().Append(run);
        }
        muxd::Run run;
        run.Text(text.substr(span.start, span.length));
        switch (span.color) {
            case BetterPanelSyntaxColor::Keyword: run.Foreground(keyword); break;
            case BetterPanelSyntaxColor::String: run.Foreground(string); break;
            case BetterPanelSyntaxColor::Comment: run.Foreground(comment); break;
            case BetterPanelSyntaxColor::Number: run.Foreground(number); break;
            case BetterPanelSyntaxColor::Type: run.Foreground(type); break;
        }
        preview.Inlines().Append(run);
        position = span.start + span.length;
    }
    if (position < text.size()) {
        muxd::Run run;
        run.Text(text.substr(position));
        preview.Inlines().Append(run);
    }
}

std::wstring BetterPanelEditorText(muxc::RichEditBox const& editor) {
    try {
        winrt::hstring value;
        editor.Document().GetText(mut::TextGetOptions::None, value);
        std::wstring text = value.c_str();
        // RichEdit keeps a final paragraph marker which isn't part of the file.
        if (!text.empty() && text.back() == L'\r') text.pop_back();
        return text;
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Rich editor read skipped after pane replacement: %08X",
               ex.code());
        return {};
    }
}

void BetterPanelSetEditorText(muxc::RichEditBox const& editor,
                              std::wstring const& text) {
    try {
        editor.Document().SetText(mut::TextSetOptions::None, text);
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Rich editor update skipped after pane replacement: %08X",
               ex.code());
    }
}

void BetterPanelCollapseEditorSelection(
    muxc::RichEditBox const& editor) {
    try {
        auto selection = editor.Document().Selection();
        int32_t caret = selection.EndPosition();
        selection.SetRange(caret, caret);
        editor.InvalidateArrange();
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Rich editor selection cleanup skipped: %08X",
               ex.code());
    }
}

void BetterPanelFormatTextEditor(
    std::shared_ptr<BetterPanelState> const& state,
    std::wstring const& text) {
    auto editor = state ? state->textEditor.get() : nullptr;
    if (!editor) return;
    bool previousSuppression = state->suppressTextChanged;
    state->suppressTextChanged = true;
    try {
        auto document = editor.Document();
        auto selection = document.Selection();
        int32_t selectionStart = selection.StartPosition();
        int32_t selectionEnd = selection.EndPosition();
        winrt::Windows::UI::Color normal =
            winrt::Windows::UI::ColorHelper::FromArgb(255, 232, 232, 232);
        if (auto brush = editor.Foreground().try_as<
                winrt::Microsoft::UI::Xaml::Media::SolidColorBrush>()) {
            normal = brush.Color();
        }
        document.GetRange(0, static_cast<int32_t>(text.size()))
            .CharacterFormat().ForegroundColor(normal);
        auto language = state->syntaxLanguage == BetterPanelSyntaxLanguage::Auto
                            ? BetterPanelDetectSyntaxLanguage(state->selectedPath)
                            : state->syntaxLanguage;
        for (auto const& span : BetterPanelBuildSyntaxSpans(text, language)) {
            winrt::Windows::UI::Color color{};
            switch (span.color) {
                case BetterPanelSyntaxColor::Keyword:
                    color = winrt::Windows::UI::ColorHelper::FromArgb(255, 86, 156, 214); break;
                case BetterPanelSyntaxColor::String:
                    color = winrt::Windows::UI::ColorHelper::FromArgb(255, 206, 145, 120); break;
                case BetterPanelSyntaxColor::Comment:
                    color = winrt::Windows::UI::ColorHelper::FromArgb(255, 106, 153, 85); break;
                case BetterPanelSyntaxColor::Number:
                    color = winrt::Windows::UI::ColorHelper::FromArgb(255, 181, 206, 168); break;
                case BetterPanelSyntaxColor::Type:
                    color = winrt::Windows::UI::ColorHelper::FromArgb(255, 78, 201, 176); break;
            }
            document.GetRange(static_cast<int32_t>(span.start),
                              static_cast<int32_t>(span.start + span.length))
                .CharacterFormat().ForegroundColor(color);
        }
        selection.SetRange(selectionStart, selectionEnd);
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Rich editor formatting skipped after pane replacement: %08X",
               ex.code());
    }
    state->suppressTextChanged = previousSuppression;
}

void BetterPanelUpdateTextControls(
    std::shared_ptr<BetterPanelState> const& state) {
    auto editor = state->textEditor.get();
    if (editor) {
        editor.IsReadOnly(!state->textEditing || state->textSaving);
        editor.Visibility(state->textEditing || state->textSearchActive
                              ? Visibility::Visible
                              : Visibility::Collapsed);
    }
    if (auto preview = state->syntaxPreviewSurface.get()) {
        preview.Visibility(state->textEditing || state->textSearchActive
                               ? Visibility::Collapsed
                               : Visibility::Visible);
    }
    if (auto button = state->textEditButton.get()) {
        button.Visibility(state->textEditable && !state->textEditing
                              ? Visibility::Visible
                              : Visibility::Collapsed);
    }
    if (auto button = state->textSaveButton.get()) {
        button.Visibility(state->textEditing ? Visibility::Visible
                                             : Visibility::Collapsed);
        button.IsEnabled(state->textDirty && !state->textSaving);
    }
    if (auto button = state->textCancelButton.get()) {
        button.Visibility(state->textEditing ? Visibility::Visible
                                             : Visibility::Collapsed);
        button.IsEnabled(!state->textSaving);
    }
    if (auto button = state->textReloadButton.get()) {
        button.Visibility(!state->textEditing && !state->textLoading
                              ? Visibility::Visible
                              : Visibility::Collapsed);
    }
    if (auto info = state->textInfo.get()) {
        if (state->textLoading) {
            info.Text(L"Loading preview…");
        } else if (!state->textLoadedPath.empty()) {
            std::wstring label = BetterPanelTextEncodingName(
                                     state->textEncoding) +
                                 L" • " +
                                 BetterPanelFormatByteSize(state->textFileSize);
            if (state->textSaving) {
                label += L" • Saving";
            } else if (state->textEditing) {
                label += state->textDirty ? L" • Unsaved changes"
                                          : L" • Editing";
            } else if (!state->textEditable) {
                label += L" • Read-only preview";
            }
            if (state->detectedSyntaxLanguage !=
                BetterPanelSyntaxLanguage::PlainText) {
                label += L" • ";
                label += BetterPanelSyntaxLanguageName(
                    state->detectedSyntaxLanguage);
            }
            info.Text(label);
        } else {
            info.Text(L"");
        }
    }
}

void BetterPanelUpdateTextSearch(
    std::shared_ptr<BetterPanelState> const& state, int direction,
    bool rebuildMatches) {
    auto search = state ? state->textSearchBox.get() : nullptr;
    auto editor = state ? state->textEditor.get() : nullptr;
    if (!state || !search || !editor) return;
    std::wstring query = search.Text().c_str();
    if (query.empty()) {
        state->textSearchActive = false;
        state->textSearchQuery.clear();
        state->textSearchMatches.clear();
        state->textSearchMatchIndex = 0;
        if (auto result = state->textSearchResult.get()) result.Text(L"");
        if (auto button = state->textSearchPreviousButton.get())
            button.IsEnabled(false);
        if (auto button = state->textSearchNextButton.get())
            button.IsEnabled(false);
        BetterPanelUpdateTextControls(state);
        return;
    }

    std::wstring text = BetterPanelEditorText(editor);
    rebuildMatches = rebuildMatches || query != state->textSearchQuery;
    if (rebuildMatches) {
        state->textSearchQuery = query;
        state->textSearchMatches.clear();
        std::wstring lowerText = text;
        std::wstring lowerQuery = query;
        std::transform(lowerText.begin(), lowerText.end(), lowerText.begin(),
                       towlower);
        std::transform(lowerQuery.begin(), lowerQuery.end(),
                       lowerQuery.begin(), towlower);
        size_t position = 0;
        while (position < lowerText.size() &&
               state->textSearchMatches.size() < 10000) {
            position = lowerText.find(lowerQuery, position);
            if (position == std::wstring::npos) break;
            state->textSearchMatches.push_back(position);
            position += std::max<size_t>(1, lowerQuery.size());
        }
        state->textSearchMatchIndex = 0;
    } else if (!state->textSearchMatches.empty()) {
        if (direction < 0) {
            state->textSearchMatchIndex =
                state->textSearchMatchIndex == 0
                    ? state->textSearchMatches.size() - 1
                    : state->textSearchMatchIndex - 1;
        } else if (direction > 0) {
            state->textSearchMatchIndex =
                (state->textSearchMatchIndex + 1) %
                state->textSearchMatches.size();
        }
    }

    state->textSearchActive = true;
    bool found = !state->textSearchMatches.empty();
    if (auto result = state->textSearchResult.get()) {
        result.Text(found ? std::to_wstring(state->textSearchMatchIndex + 1) +
                                L" of " +
                                std::to_wstring(state->textSearchMatches.size())
                          : L"No matches");
    }
    if (auto button = state->textSearchPreviousButton.get())
        button.IsEnabled(found);
    if (auto button = state->textSearchNextButton.get())
        button.IsEnabled(found);
    BetterPanelUpdateTextControls(state);
    try {
        if (found && !state->textEditing) {
            auto start = static_cast<int32_t>(
                state->textSearchMatches[state->textSearchMatchIndex]);
            editor.Document().Selection().SetRange(
                start, start + static_cast<int32_t>(query.size()));
        } else if (state->textEditing) {
            auto selection = editor.Document().Selection();
            selection.SetRange(selection.EndPosition(), selection.EndPosition());
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Text search selection skipped after pane replacement: %08X",
               ex.code());
    }
}

void BetterPanelLoadTextPreview(
    std::shared_ptr<BetterPanelState> const& state,
    std::wstring const& path) {
    if (path.empty() || state->textEditing) return;
    auto editor = state->textEditor.get();
    if (!editor) return;

    state->textLoading = true;
    state->textLoadedPath.clear();
    state->textEditable = false;
    state->textDirty = false;
    state->suppressTextChanged = true;
    editor.IsReadOnly(true);
    BetterPanelSetEditorText(editor, L"Loading preview…");
    BetterPanelRenderSyntaxPreview(state, L"Loading preview…");
    state->suppressTextChanged = false;
    BetterPanelUpdateTextControls(state);

    auto weakState = std::weak_ptr<BetterPanelState>(state);
    auto dispatcher = state->dispatcher;
    BetterPanelStartWorker([weakState, dispatcher, path]() {
        auto data = BetterPanelReadTextFile(path);
        if (BetterPanelWorkerStopping()) return;
        dispatcher.TryEnqueue(
            [weakState, path, data = std::move(data)]() mutable {
                auto state = weakState.lock();
                if (!state || state->unloaded || state->selectedPath != path ||
                    state->textEditing) {
                    return;
                }
                auto editor = state->textEditor.get();
                if (!editor) return;
                state->textLoading = false;
                state->textLoadedPath = path;
                state->textEncoding = data.encoding;
                state->textNewline = data.newline;
                state->textLastWriteTime = data.lastWriteTime;
                state->textFileSize = data.size;
                state->textEditable = data.success && data.editable;
                state->textDirty = false;
                state->suppressTextChanged = true;
                BetterPanelSetEditorText(
                    editor, data.success ? data.text : data.message);
                state->suppressTextChanged = false;
                // Keep the decoded file contents as the source of truth.
                // A collapsed RichEditBox can reject or defer SetText while
                // Explorer is composing the pane, so reading it back here can
                // incorrectly replace the file with an empty string.
                state->textOriginal = data.success ? data.text : L"";
                state->textLastFormattedContent = state->textOriginal;
                BetterPanelRenderSyntaxPreview(
                    state, data.success ? data.text : data.message);
                BetterPanelFormatTextEditor(
                    state, data.success ? data.text : data.message);
                BetterPanelUpdateTextControls(state);
                if (state->textSearchActive) {
                    BetterPanelUpdateTextSearch(state, 0, true);
                }
                if (!data.message.empty()) {
                    if (auto info = state->textInfo.get()) {
                        std::wstring existing = info.Text().c_str();
                        info.Text(existing.empty() ? data.message
                                                   : existing + L" • " +
                                                         data.message);
                    }
                }
            });
    });
}

void BetterPanelBeginTextEdit(
    std::shared_ptr<BetterPanelState> const& state) {
    if (state->textEditing || !state->textEditable ||
        state->textLoadedPath != state->selectedPath) {
        return;
    }
    state->textEditing = true;
    state->textDirty = false;
    if (state->timer) state->timer.Stop();
    BetterPanelUpdateTextControls(state);
    if (auto editor = state->textEditor.get()) {
        state->textLastFormattedContent = state->textOriginal;
        state->suppressTextChanged = true;
        BetterPanelSetEditorText(editor, state->textOriginal);
        state->suppressTextChanged = false;
        try {
            auto selection = editor.Document().Selection();
            selection.SetRange(0, 0);
        } catch (winrt::hresult_error const& ex) {
            Wh_Log(L"Editor selection reset skipped: %08X", ex.code());
        }
        BetterPanelFormatTextEditor(state, state->textOriginal);
        editor.Focus(FocusState::Programmatic);
    }
    BetterPanelSetStatus(
        state->textActionStatus,
        L"Editing " + BetterPanelFileName(state->textLoadedPath) +
            L" — Save or Cancel before changing files");
}

void BetterPanelCancelTextEdit(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state->textEditing) return;
    if (auto editor = state->textEditor.get()) {
        state->textLastFormattedContent = state->textOriginal;
        state->suppressTextChanged = true;
        BetterPanelSetEditorText(editor, state->textOriginal);
        state->suppressTextChanged = false;
        BetterPanelRenderSyntaxPreview(state, state->textOriginal);
    }
    state->textEditing = false;
    state->textDirty = false;
    BetterPanelUpdateTextControls(state);
    BetterPanelSetStatus(state->textActionStatus, L"Changes discarded");
    if (state->timer) state->timer.Start();
}

void BetterPanelSaveTextEdit(
    std::shared_ptr<BetterPanelState> const& state) {
    auto editor = state->textEditor.get();
    if (!state->textEditing || !state->textDirty || state->textSaving || !editor ||
        state->textLoadedPath.empty()) {
        return;
    }

    std::wstring editorText = BetterPanelEditorText(editor);
    std::wstring text = BetterPanelNormalizeLineEndings(
        editorText, state->textNewline);
    std::wstring path = state->textLoadedPath;
    auto encoding = state->textEncoding;
    uint64_t expectedSize = state->textFileSize;
    FILETIME expectedWriteTime = state->textLastWriteTime;
    uint64_t generation = ++state->textSaveGeneration;
    state->textSaving = true;
    BetterPanelUpdateTextControls(state);
    BetterPanelSetStatus(state->textActionStatus, L"Saving…");

    auto weakState = std::weak_ptr<BetterPanelState>(state);
    auto dispatcher = state->dispatcher;
    BetterPanelStartWorker(
        [weakState, dispatcher, path, text = std::move(text),
         editorText = std::move(editorText), encoding, expectedSize,
         expectedWriteTime, generation]() mutable {
            DWORD error = ERROR_SUCCESS;
            uint64_t currentSize = 0;
            FILETIME currentWriteTime{};
            bool changed =
                !BetterPanelGetFileStamp(path, currentSize,
                                         currentWriteTime) ||
                currentSize != expectedSize ||
                CompareFileTime(&currentWriteTime,
                                &expectedWriteTime) != 0;
            bool saved = false;
            uint64_t savedSize = 0;
            FILETIME savedWriteTime{};
            if (!changed && !BetterPanelWorkerStopping()) {
                saved = BetterPanelWriteTextFile(path, text, encoding, error);
                if (saved) {
                    BetterPanelGetFileStamp(path, savedSize, savedWriteTime);
                    SHChangeNotify(SHCNE_UPDATEITEM, SHCNF_PATHW,
                                   path.c_str(), nullptr);
                }
            }
            if (BetterPanelWorkerStopping()) return;
            dispatcher.TryEnqueue(
                [weakState, path, editorText = std::move(editorText),
                 encoding, generation, changed, saved, error, savedSize,
                 savedWriteTime]() mutable {
                    auto state = weakState.lock();
                    if (!state || state->unloaded ||
                        state->textSaveGeneration != generation ||
                        state->textLoadedPath != path) {
                        return;
                    }
                    state->textSaving = false;
                    if (changed) {
                        BetterPanelSetStatus(
                            state->textActionStatus,
                            L"The file changed outside Better Panel. Cancel and reload it before saving.");
                    } else if (!saved) {
                        BetterPanelSetStatus(
                            state->textActionStatus,
                            L"Save failed (error " +
                                std::to_wstring(error) + L")");
                    } else {
                        state->textEncoding = encoding;
                        state->textOriginal = editorText;
                        state->textLastFormattedContent = editorText;
                        state->textFileSize = savedSize;
                        state->textLastWriteTime = savedWriteTime;
                        state->textEditing = false;
                        state->textDirty = false;
                        BetterPanelRenderSyntaxPreview(state, editorText);
                        BetterPanelSetStatus(
                            state->textActionStatus,
                            L"Saved " + BetterPanelFileName(path));
                        if (state->timer) state->timer.Start();
                    }
                    BetterPanelUpdateTextControls(state);
                });
        });
}

winrt::fire_and_forget BetterPanelLoadArtwork(
    std::weak_ptr<BetterPanelState> weakState,
    std::wstring path) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    try {
        auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
        auto thumbnail = co_await file.GetThumbnailAsync(
            wsf::ThumbnailMode::MusicView, 256,
            wsf::ThumbnailOptions::UseCurrentScale);
        if (!thumbnail || thumbnail.Type() != wsf::ThumbnailType::Image) {
            co_return;
        }

        winrt::Microsoft::UI::Xaml::Media::Imaging::BitmapImage bitmap;
        co_await bitmap.SetSourceAsync(thumbnail);

        auto state = weakState.lock();
        if (!state || state->selectedPath != path) {
            co_return;
        }
        if (auto artwork = state->artwork.get()) {
            artwork.Source(bitmap);
        }
        if (auto placeholder = state->artworkPlaceholder.get()) {
            placeholder.Visibility(Visibility::Collapsed);
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Artwork error %08X: %s", ex.code(), ex.message().c_str());
    }
}

winrt::fire_and_forget BetterPanelLoadFileIcon(
    std::weak_ptr<BetterPanelState> weakState,
    std::wstring path) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    try {
        auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
        auto thumbnail = co_await file.GetThumbnailAsync(
            wsf::ThumbnailMode::SingleItem, 48,
            wsf::ThumbnailOptions::ResizeThumbnail);
        if (!thumbnail) {
            co_return;
        }
        winrt::Microsoft::UI::Xaml::Media::Imaging::BitmapImage bitmap;
        co_await bitmap.SetSourceAsync(thumbnail);
        auto state = weakState.lock();
        if (!state || state->selectedPath != path) {
            co_return;
        }
        if (auto icon = state->fileIcon.get()) {
            icon.Source(bitmap);
            if (auto fallback = state->fileFallbackIcon.get()) {
                fallback.Visibility(Visibility::Collapsed);
            }
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"File icon error %08X: %s", ex.code(), ex.message().c_str());
    }
}

winrt::fire_and_forget BetterPanelLoadFolderPreview(
    std::weak_ptr<BetterPanelState> weakState,
    std::wstring path) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    try {
        auto folder = co_await ws::StorageFolder::GetFolderFromPathAsync(path);
        auto thumbnail = co_await folder.GetThumbnailAsync(
            wsf::ThumbnailMode::SingleItem, 256,
            wsf::ThumbnailOptions::ResizeThumbnail);
        if (!thumbnail) co_return;

        winrt::Microsoft::UI::Xaml::Media::Imaging::BitmapImage bitmap;
        co_await bitmap.SetSourceAsync(thumbnail);
        auto state = weakState.lock();
        if (!state || state->unloaded || state->selectedPath != path) {
            co_return;
        }
        if (auto preview = state->nativePreviewImage.get()) {
            preview.Source(bitmap);
            preview.Visibility(Visibility::Visible);
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Folder preview error %08X: %s", ex.code(),
               ex.message().c_str());
    }
}

winrt::fire_and_forget BetterPanelLoadOpenActionIcon(
    std::weak_ptr<BetterPanelState> weakState,
    std::wstring path) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    try {
        auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
        // ListView requests the registered Shell/file-type artwork rather than
        // a large content preview, matching the modern context-menu command.
        auto thumbnail = co_await file.GetThumbnailAsync(
            wsf::ThumbnailMode::ListView, 32,
            wsf::ThumbnailOptions::UseCurrentScale);
        if (!thumbnail) {
            thumbnail = co_await file.GetThumbnailAsync(
                wsf::ThumbnailMode::SingleItem, 32,
                wsf::ThumbnailOptions::ResizeThumbnail);
        }
        if (!thumbnail) {
            co_return;
        }
        winrt::Microsoft::UI::Xaml::Media::Imaging::BitmapImage bitmap;
        co_await bitmap.SetSourceAsync(thumbnail);
        auto state = weakState.lock();
        if (!state || state->selectedPath != path) {
            co_return;
        }
        if (auto icon = state->openActionIcon.get()) {
            icon.Source(bitmap);
            if (auto fallback = state->openActionFallbackIcon.get()) {
                fallback.Visibility(Visibility::Collapsed);
            }
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Open action icon error %08X: %s", ex.code(),
               ex.message().c_str());
    }
}

winrt::fire_and_forget BetterPanelLoadNativeImagePreview(
    std::weak_ptr<BetterPanelState> weakState,
    std::wstring path) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    try {
        auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
        auto stream = co_await file.OpenAsync(ws::FileAccessMode::Read);
        winrt::Microsoft::UI::Xaml::Media::Imaging::BitmapImage bitmap;
        co_await bitmap.SetSourceAsync(stream);
        auto state = weakState.lock();
        if (!state || state->unloaded || state->selectedPath != path) co_return;
        muxc::Image preview{nullptr};
        if (auto surface = state->nativePreview.get()) {
            preview = BetterPanelFindPreviewImage(surface);
        }
        if (!preview) preview = state->nativePreviewImage.get();
        if (preview) {
            state->nativePreviewImage = winrt::make_weak(preview);
            preview.Source(nullptr);
            preview.Source(bitmap);
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Image preview reload error %08X: %s", ex.code(),
               ex.message().c_str());
    }
}

void BetterPanelQueueNativeImageRefresh(
    std::shared_ptr<BetterPanelState> const& state,
    std::wstring const& path,
    uint64_t originalSize,
    FILETIME originalWriteTime) {
    if (!state || path.empty()) return;
    auto weakState = std::weak_ptr<BetterPanelState>(state);
    auto dispatcher = state->dispatcher;
    BetterPanelStartWorker([weakState, dispatcher, path, originalSize,
                 originalWriteTime]() {
        for (int attempt = 0; attempt < 50; ++attempt) {
            if (BetterPanelWorkerWait(100)) return;
            uint64_t size = 0;
            FILETIME writeTime{};
            if (!BetterPanelGetFileStamp(path, size, writeTime) ||
                (size == originalSize &&
                 CompareFileTime(&writeTime, &originalWriteTime) == 0)) {
                continue;
            }
            // The file has changed. Give the writer a moment to close it, then
            // invalidate the Shell thumbnail and update the current preview.
            if (BetterPanelWorkerWait(100)) return;
            SHChangeNotify(SHCNE_UPDATEITEM, SHCNF_PATHW | SHCNF_FLUSH,
                           path.c_str(), nullptr);
            dispatcher.TryEnqueue([weakState, path]() {
                auto state = weakState.lock();
                if (!state || state->unloaded || state->selectedPath != path)
                    return;
                BetterPanelLoadNativeImagePreview(weakState, path);
            });
            break;
        }
    });
}

void BetterPanelShowImageActionsFlyout(
    std::shared_ptr<BetterPanelState> const& state,
    FrameworkElement const& anchor,
    winrt::Windows::Foundation::Point const& position,
    winrt::weak_ref<muxc::TextBlock> weakStatus) {
    if (!state || !anchor || !g_settings.showFileActions ||
        !BetterPanelIsImageFile(state->selectedPath))
        return;
    std::wstring path = state->selectedPath;
    auto weakState = std::weak_ptr<BetterPanelState>(state);
    muxc::MenuFlyout flyout;
    auto addAction = [&](PCWSTR label, PCWSTR verb, bool reloadImage) {
        muxc::MenuFlyoutItem item;
        item.Text(label);
        std::wstring actionVerb = verb;
        item.Click(
            [weakState, weakStatus, path, actionVerb, reloadImage](
                winrt::Windows::Foundation::IInspectable const&,
                RoutedEventArgs const&) {
                auto state = weakState.lock();
                if (!state || state->selectedPath != path) return;
                uint64_t originalSize = 0;
                FILETIME originalWriteTime{};
                BetterPanelGetFileStamp(path, originalSize,
                                        originalWriteTime);
                HRESULT result = BetterPanelInvokeSelectedContextMenuVerb(
                    actionVerb.c_str());
                if (result == HRESULT_FROM_WIN32(ERROR_NOT_FOUND)) {
                    BetterPanelSetStatus(weakStatus,
                                         L"This image action isn't available");
                } else if (FAILED(result)) {
                    BetterPanelSetStatus(weakStatus, L"Image action failed");
                } else {
                    BetterPanelSetStatus(weakStatus, L"");
                    if (reloadImage) {
                        BetterPanelQueueNativeImageRefresh(
                            state, path, originalSize, originalWriteTime);
                    }
                }
            });
        flyout.Items().Append(item);
    };
    // These built-in image commands often expose only their visible Shell
    // labels and no canonical verb on current Windows 11 builds.
    addAction(L"Set as desktop background", L"Set as desktop background",
              false);
    addAction(L"Rotate right", L"Rotate right", true);
    addAction(L"Rotate left", L"Rotate left", true);
    flyout.ShowAt(anchor, position);
}

winrt::fire_and_forget BetterPanelLoadHomeLocationIcon(
    winrt::weak_ref<muxc::Image> weakImage,
    winrt::weak_ref<muxc::FontIcon> weakFallback,
    std::wstring path) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    try {
        DWORD attributes = GetFileAttributesW(path.c_str());
        if (attributes == INVALID_FILE_ATTRIBUTES) {
            co_return;
        }

        wsf::StorageItemThumbnail thumbnail{nullptr};
        if (attributes & FILE_ATTRIBUTE_DIRECTORY) {
            auto folder = co_await ws::StorageFolder::GetFolderFromPathAsync(path);
            thumbnail = co_await folder.GetThumbnailAsync(
                wsf::ThumbnailMode::ListView, 48,
                wsf::ThumbnailOptions::UseCurrentScale);
        } else {
            auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
            thumbnail = co_await file.GetThumbnailAsync(
                wsf::ThumbnailMode::ListView, 48,
                wsf::ThumbnailOptions::UseCurrentScale);
        }
        if (!thumbnail) {
            co_return;
        }

        winrt::Microsoft::UI::Xaml::Media::Imaging::BitmapImage bitmap;
        co_await bitmap.SetSourceAsync(thumbnail);
        if (auto image = weakImage.get()) {
            image.Source(bitmap);
            image.Visibility(Visibility::Visible);
            if (auto fallback = weakFallback.get()) {
                fallback.Visibility(Visibility::Collapsed);
            }
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Home Shell icon error %08X: %s", ex.code(),
               ex.message().c_str());
    }
}

winrt::fire_and_forget BetterPanelLoadMultiPreviewIcon(
    std::weak_ptr<BetterPanelState> weakState,
    winrt::weak_ref<muxc::Image> weakImage,
    winrt::weak_ref<muxc::FontIcon> weakFallback,
    std::wstring path,
    std::wstring selectionKey) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    try {
        DWORD attributes = GetFileAttributesW(path.c_str());
        if (attributes == INVALID_FILE_ATTRIBUTES) {
            co_return;
        }

        wsf::StorageItemThumbnail thumbnail{nullptr};
        if (attributes & FILE_ATTRIBUTE_DIRECTORY) {
            auto folder = co_await ws::StorageFolder::GetFolderFromPathAsync(path);
            thumbnail = co_await folder.GetThumbnailAsync(
                wsf::ThumbnailMode::ListView, 64,
                wsf::ThumbnailOptions::UseCurrentScale);
        } else {
            auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
            thumbnail = co_await file.GetThumbnailAsync(
                wsf::ThumbnailMode::ListView, 64,
                wsf::ThumbnailOptions::UseCurrentScale);
        }
        if (!thumbnail) {
            co_return;
        }

        winrt::Microsoft::UI::Xaml::Media::Imaging::BitmapImage bitmap;
        co_await bitmap.SetSourceAsync(thumbnail);
        auto state = weakState.lock();
        if (!state || state->unloaded ||
            state->multiPreviewKey != selectionKey) {
            co_return;
        }
        if (auto image = weakImage.get()) {
            image.Source(bitmap);
            image.Visibility(Visibility::Visible);
            if (auto fallback = weakFallback.get()) {
                fallback.Visibility(Visibility::Collapsed);
            }
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Multi-selection icon error %08X: %s", ex.code(),
               ex.message().c_str());
    }
}

void BetterPanelPopulateMultiPreview(
    std::shared_ptr<BetterPanelState> const& state,
    std::vector<std::wstring> const& paths) {
    auto host = state->multiPreviewHost.get();
    if (!host) return;

    std::wstring key;
    for (auto const& path : paths) {
        key += path;
        key.push_back(L'\n');
    }
    if (key == state->multiPreviewKey) return;
    state->multiPreviewKey = key;
    host.Children().Clear();

    std::vector<std::wstring> representativePaths;
    std::unordered_set<std::wstring> representedTypes;
    for (auto const& path : paths) {
        DWORD attributes = GetFileAttributesW(path.c_str());
        bool directory = attributes != INVALID_FILE_ATTRIBUTES &&
                         (attributes & FILE_ATTRIBUTE_DIRECTORY);
        std::wstring typeKey;
        if (directory) {
            typeKey = L"<folder>";
        } else {
            PCWSTR extension = PathFindExtensionW(path.c_str());
            typeKey = extension && *extension ? extension : L"<file>";
            std::transform(typeKey.begin(), typeKey.end(), typeKey.begin(),
                           [](wchar_t ch) { return std::towlower(ch); });
        }
        if (representedTypes.insert(typeKey).second) {
            representativePaths.push_back(path);
            if (representativePaths.size() == 4) break;
        }
    }

    size_t visibleCount = representativePaths.size();
    if (visibleCount == 0) {
        host.Width(0);
        host.Height(0);
        return;
    }
    constexpr double iconSize = 56.0;
    constexpr double horizontalOffset = 24.0;
    constexpr double verticalOffset = 4.0;
    host.Width(iconSize +
               horizontalOffset * static_cast<double>(visibleCount - 1));
    host.Height(iconSize +
                verticalOffset * static_cast<double>(visibleCount - 1));
    for (size_t index = 0; index < visibleCount; ++index) {
        auto const& path = representativePaths[index];
        DWORD attributes = GetFileAttributesW(path.c_str());
        bool directory = attributes != INVALID_FILE_ATTRIBUTES &&
                         (attributes & FILE_ATTRIBUTE_DIRECTORY);

        muxc::Grid iconHost;
        iconHost.Width(iconSize);
        iconHost.Height(iconSize);
        iconHost.HorizontalAlignment(HorizontalAlignment::Left);
        iconHost.VerticalAlignment(VerticalAlignment::Top);
        iconHost.Margin(Thickness{
            horizontalOffset * static_cast<double>(index),
            verticalOffset * static_cast<double>(index), 0, 0});
        muxc::Canvas::SetZIndex(iconHost, static_cast<int32_t>(index));
        muxc::ToolTipService::SetToolTip(
            iconHost, winrt::box_value(BetterPanelFileName(path)));

        muxc::FontIcon fallback;
        fallback.Glyph(directory ? L"\uE8B7" : L"\uE7C3");
        fallback.FontSize(34);
        fallback.Opacity(0.80);
        iconHost.Children().Append(fallback);

        muxc::Image image;
        image.Width(48);
        image.Height(48);
        image.Stretch(
            winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
        image.Visibility(Visibility::Collapsed);
        iconHost.Children().Append(image);
        host.Children().Append(iconHost);

        BetterPanelLoadMultiPreviewIcon(
            std::weak_ptr<BetterPanelState>(state), winrt::make_weak(image),
            winrt::make_weak(fallback), path, key);
    }
}

std::wstring BetterPanelTransferItemsText(
    std::vector<std::wstring> const& sources) {
    std::wstring text;
    for (auto const& source : sources) {
        std::wstring name = BetterPanelFileName(source);
        if (name.empty()) name = source;
        if (!text.empty()) text += L"\r\n";
        text += L"\u2022 " + name;
    }
    return text;
}

winrt::fire_and_forget BetterPanelLoadVideo(
    std::weak_ptr<BetterPanelState> weakState,
    std::wstring path) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    try {
        auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
        auto stream = co_await file.OpenAsync(ws::FileAccessMode::Read);
        auto source =
            wmc::MediaSource::CreateFromStream(stream, file.ContentType());
        auto state = weakState.lock();
        if (!state || state->selectedPath != path) {
            co_return;
        }
        if (auto player = state->videoPlayer.get()) {
            player.Source(source);
            if (state->videoControlsTimer) state->videoControlsTimer.Start();
        }
    } catch (winrt::hresult_error const& ex) {
        auto state = weakState.lock();
        if (state) {
            BetterPanelSetStatus(state->status, L"Video preview unavailable");
        }
        Wh_Log(L"Video playback error %08X: %s", ex.code(),
               ex.message().c_str());
    }
}

winrt::fire_and_forget BetterPanelLoadAnimatedGif(
    std::weak_ptr<BetterPanelState> weakState,
    std::wstring path) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    try {
        auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
        auto stream = co_await file.OpenAsync(ws::FileAccessMode::Read);
        winrt::Microsoft::UI::Xaml::Media::Imaging::BitmapImage bitmap;
        bitmap.AutoPlay(true);
        co_await bitmap.SetSourceAsync(stream);

        auto state = weakState.lock();
        if (!state || state->selectedPath != path) {
            co_return;
        }
        state->animatedGif = bitmap;
        if (auto image = state->gifImage.get()) {
            image.Source(bitmap);
        }
        if (bitmap.IsAnimatedBitmap() && !bitmap.IsPlaying()) {
            bitmap.Play();
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Animated GIF error %08X: %s", ex.code(),
               ex.message().c_str());
    }
}

void BetterPanelUpdatePdfControls(
    std::shared_ptr<BetterPanelState> const& state) {
    uint32_t pageCount = state->pdfDocument ? state->pdfDocument.PageCount() : 0;
    if (auto pageText = state->pdfPageText.get()) {
        pageText.Text(pageCount
                          ? L"Page " + std::to_wstring(state->pdfPageIndex + 1) +
                                L" of " + std::to_wstring(pageCount)
                          : L"Page -- of --");
    }
    if (auto zoomText = state->pdfZoomText.get()) {
        zoomText.Text(std::to_wstring(
                          static_cast<int>(std::lround(state->pdfZoom * 100))) +
                      L"%");
    }
    if (auto previous = state->pdfPreviousButton.get()) {
        previous.IsEnabled(!state->pdfLoading && pageCount > 0 &&
                           state->pdfPageIndex > 0);
    }
    if (auto next = state->pdfNextButton.get()) {
        next.IsEnabled(!state->pdfLoading && pageCount > 0 &&
                       state->pdfPageIndex + 1 < pageCount);
    }
}

winrt::fire_and_forget BetterPanelRenderPdfPage(
    std::weak_ptr<BetterPanelState> weakState,
    std::wstring path,
    uint32_t pageIndex,
    double zoom) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    auto state = weakState.lock();
    if (!state || !state->pdfDocument || state->selectedPath != path ||
        pageIndex >= state->pdfDocument.PageCount()) {
        co_return;
    }
    auto document = state->pdfDocument;
    state->pdfLoading = true;
    if (auto info = state->pdfInfo.get()) {
        info.Text(L"Rendering page…");
        info.Visibility(Visibility::Visible);
    }
    BetterPanelUpdatePdfControls(state);

    try {
        auto page = document.GetPage(pageIndex);
        auto pageBox = page.Dimensions().MediaBox();
        uint32_t destinationWidth = static_cast<uint32_t>(std::clamp(
            state->pdfBaseWidth * zoom * 1.75, 420.0, 2400.0));
        uint32_t destinationHeight = static_cast<uint32_t>(std::max(
            1.0, static_cast<double>(destinationWidth) * pageBox.Height /
                     pageBox.Width));
        wdp::PdfPageRenderOptions options;
        options.DestinationWidth(destinationWidth);
        options.DestinationHeight(destinationHeight);
        wss::InMemoryRandomAccessStream stream;
        co_await page.RenderToStreamAsync(stream, options);
        stream.Seek(0);
        winrt::Microsoft::UI::Xaml::Media::Imaging::BitmapImage bitmap;
        co_await bitmap.SetSourceAsync(stream);
        page.Close();

        state = weakState.lock();
        if (!state || state->selectedPath != path ||
            state->pdfLoadedPath != path || state->pdfPageIndex != pageIndex ||
            std::abs(state->pdfZoom - zoom) > 0.001) {
            co_return;
        }
        if (auto image = state->pdfImage.get()) {
            image.Width(state->pdfBaseWidth * zoom);
            image.Source(bitmap);
        }
        if (auto info = state->pdfInfo.get()) {
            info.Text(L"");
            info.Visibility(Visibility::Collapsed);
        }
    } catch (winrt::hresult_error const& ex) {
        state = weakState.lock();
        if (state && state->selectedPath == path) {
            if (auto info = state->pdfInfo.get()) {
                info.Text(L"This PDF page could not be displayed");
                info.Visibility(Visibility::Visible);
            }
        }
        Wh_Log(L"PDF render error %08X: %s", ex.code(),
               ex.message().c_str());
    }
    state = weakState.lock();
    if (state && state->selectedPath == path &&
        state->pdfPageIndex == pageIndex) {
        state->pdfLoading = false;
        BetterPanelUpdatePdfControls(state);
    }
}

void BetterPanelUpdatePdfSearchControls(
    std::shared_ptr<BetterPanelState> const& state) {
    bool hasResults = !state->pdfSearchPages.empty();
    if (auto button = state->pdfSearchButton.get()) {
        button.IsEnabled(!state->pdfSearchLoading && state->pdfDocument != nullptr);
    }
    if (auto previous = state->pdfSearchPreviousButton.get()) {
        previous.IsEnabled(!state->pdfSearchLoading && hasResults);
    }
    if (auto next = state->pdfSearchNextButton.get()) {
        next.IsEnabled(!state->pdfSearchLoading && hasResults);
    }
}

void BetterPanelShowPdfSearchMatch(
    std::shared_ptr<BetterPanelState> const& state,
    std::weak_ptr<BetterPanelState> weakState,
    int direction) {
    if (state->pdfSearchPages.empty() || state->pdfSearchLoading) return;
    if (direction < 0) {
        state->pdfSearchIndex = state->pdfSearchIndex == 0
                                    ? state->pdfSearchPages.size() - 1
                                    : state->pdfSearchIndex - 1;
    } else if (direction > 0) {
        state->pdfSearchIndex =
            (state->pdfSearchIndex + 1) % state->pdfSearchPages.size();
    }
    state->pdfPageIndex = state->pdfSearchPages[state->pdfSearchIndex];
    if (auto result = state->pdfSearchResult.get()) {
        result.Text(std::to_wstring(state->pdfSearchIndex + 1) + L" of " +
                    std::to_wstring(state->pdfSearchPages.size()));
    }
    BetterPanelUpdatePdfControls(state);
    BetterPanelRenderPdfPage(weakState, state->selectedPath,
                             state->pdfPageIndex, state->pdfZoom);
}

winrt::fire_and_forget BetterPanelSearchPdf(
    std::weak_ptr<BetterPanelState> weakState,
    std::wstring path,
    std::wstring query) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    auto state = weakState.lock();
    if (!state || !state->pdfDocument || state->selectedPath != path) co_return;
    auto first = query.find_first_not_of(L" \t\r\n");
    if (first == std::wstring::npos) {
        query.clear();
    } else {
        query = query.substr(first, query.find_last_not_of(L" \t\r\n") - first + 1);
    }
    if (query.empty()) {
        state->pdfSearchPages.clear();
        if (auto result = state->pdfSearchResult.get()) result.Text(L"");
        BetterPanelUpdatePdfSearchControls(state);
        co_return;
    }

    uint64_t generation = ++state->pdfSearchGeneration;
    auto document = state->pdfDocument;
    uint32_t pageCount = document.PageCount();
    state->pdfSearchLoading = true;
    state->pdfSearchPages.clear();
    state->pdfSearchIndex = 0;
    if (auto result = state->pdfSearchResult.get()) result.Text(L"Starting…");
    BetterPanelUpdatePdfSearchControls(state);

    std::transform(query.begin(), query.end(), query.begin(), towlower);
    try {
        auto ocr = winrt::Windows::Media::Ocr::OcrEngine::
            TryCreateFromUserProfileLanguages();
        if (!ocr) {
            if (auto result = state->pdfSearchResult.get()) {
                result.Text(L"PDF search unavailable");
            }
        } else {
            uint32_t maxDimension =
                winrt::Windows::Media::Ocr::OcrEngine::MaxImageDimension();
            for (uint32_t index = 0; index < pageCount; ++index) {
                state = weakState.lock();
                if (!state || state->selectedPath != path ||
                    state->pdfSearchGeneration != generation) {
                    co_return;
                }
                if (auto result = state->pdfSearchResult.get()) {
                    result.Text(L"Searching " + std::to_wstring(index + 1) +
                                L" of " + std::to_wstring(pageCount) + L"…");
                }

                auto page = document.GetPage(index);
                auto box = page.Dimensions().MediaBox();
                double scale = 1400.0 / std::max(1.0f, box.Width);
                uint32_t width = static_cast<uint32_t>(std::clamp(
                    static_cast<double>(box.Width) * scale, 1.0,
                    static_cast<double>(maxDimension)));
                uint32_t height = static_cast<uint32_t>(std::clamp(
                    static_cast<double>(box.Height) * scale, 1.0,
                    static_cast<double>(maxDimension)));
                wdp::PdfPageRenderOptions options;
                options.DestinationWidth(width);
                options.DestinationHeight(height);
                wss::InMemoryRandomAccessStream stream;
                co_await page.RenderToStreamAsync(stream, options);
                page.Close();
                stream.Seek(0);
                auto decoder = co_await winrt::Windows::Graphics::Imaging::
                    BitmapDecoder::CreateAsync(stream);
                auto bitmap = co_await decoder.GetSoftwareBitmapAsync(
                    winrt::Windows::Graphics::Imaging::BitmapPixelFormat::Bgra8,
                    winrt::Windows::Graphics::Imaging::BitmapAlphaMode::Premultiplied);
                auto ocrResult = co_await ocr.RecognizeAsync(bitmap);
                std::wstring pageText = ocrResult.Text().c_str();
                std::transform(pageText.begin(), pageText.end(), pageText.begin(),
                               towlower);
                if (pageText.find(query) != std::wstring::npos) {
                    state = weakState.lock();
                    if (!state || state->selectedPath != path ||
                        state->pdfSearchGeneration != generation) {
                        co_return;
                    }
                    state->pdfSearchPages.push_back(index);
                }
            }
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"PDF search error %08X: %s", ex.code(), ex.message().c_str());
        state = weakState.lock();
        if (state && state->selectedPath == path &&
            state->pdfSearchGeneration == generation) {
            if (auto result = state->pdfSearchResult.get()) {
                result.Text(L"PDF search unavailable");
            }
        }
    }

    state = weakState.lock();
    if (!state || state->selectedPath != path ||
        state->pdfSearchGeneration != generation) {
        co_return;
    }
    state->pdfSearchLoading = false;
    BetterPanelUpdatePdfSearchControls(state);
    if (state->pdfSearchPages.empty()) {
        if (auto result = state->pdfSearchResult.get()) result.Text(L"No matches");
    } else {
        state->pdfSearchIndex = 0;
        BetterPanelShowPdfSearchMatch(state, weakState, 0);
    }
}

winrt::fire_and_forget BetterPanelLoadPdf(
    std::weak_ptr<BetterPanelState> weakState,
    std::wstring path) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    try {
        auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
        auto document = co_await wdp::PdfDocument::LoadFromFileAsync(file);
        auto state = weakState.lock();
        if (!state || state->selectedPath != path) {
            co_return;
        }
        state->pdfDocument = document;
        state->pdfLoadedPath = path;
        state->pdfPageIndex = 0;
        state->pdfZoom = 1.0;
        if (auto host = state->host.get()) {
            state->pdfBaseWidth = std::clamp(host.ActualWidth() - 52.0,
                                             260.0, 680.0);
        }
        BetterPanelUpdatePdfControls(state);
        BetterPanelUpdatePdfSearchControls(state);
        BetterPanelRenderPdfPage(weakState, path, 0, state->pdfZoom);
    } catch (winrt::hresult_error const& ex) {
        auto state = weakState.lock();
        if (state && state->selectedPath == path) {
            state->pdfLoading = false;
            state->pdfDocument = nullptr;
            if (auto info = state->pdfInfo.get()) {
                info.Text(L"PDF preview unavailable (the file may be protected or damaged)");
                info.Visibility(Visibility::Visible);
            }
            BetterPanelUpdatePdfControls(state);
            BetterPanelUpdatePdfSearchControls(state);
        }
        Wh_Log(L"PDF load error %08X: %s", ex.code(), ex.message().c_str());
    }
}

winrt::fire_and_forget BetterPanelLoadAndPlay(
    std::wstring path,
    winrt::weak_ref<muxc::TextBlock> weakStatus) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    uint64_t generation =
        g_betterMediaRequestGeneration.fetch_add(1,
                                                  std::memory_order_acq_rel) +
        1;
    try {
        auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
        if (generation != g_betterMediaRequestGeneration.load(
                              std::memory_order_acquire)) co_return;
        auto stream = co_await file.OpenAsync(ws::FileAccessMode::Read);
        if (generation != g_betterMediaRequestGeneration.load(
                              std::memory_order_acquire)) co_return;
        auto source =
            wmc::MediaSource::CreateFromStream(stream, file.ContentType());

        {
            std::lock_guard lock(g_betterMediaMutex);
            if (generation != g_betterMediaRequestGeneration.load(
                                  std::memory_order_acquire)) co_return;
            if (!g_betterMediaPlayer) {
                g_betterMediaPlayer = wmp::MediaPlayer();
                g_betterMediaPlayer.AutoPlay(false);
            }
            g_betterMediaPlayer.Volume(g_betterMediaVolume);
            g_betterMediaPlayer.IsMuted(g_betterMediaMuted);
            g_betterMediaPlayer.IsLoopingEnabled(g_betterRepeatEnabled);
            g_betterMediaPath = path;
            g_betterMediaPlayer.Source(source);
            g_betterMediaPlayer.PlaybackSession().PlaybackRate(
                g_betterPlaybackRate);
            g_betterMediaPlayer.Play();
        }
        BetterPanelSetStatus(weakStatus, L"Playing");
    } catch (winrt::hresult_error const& ex) {
        BetterPanelSetStatus(weakStatus, ex.message());
        Wh_Log(L"Playback error %08X: %s", ex.code(), ex.message().c_str());
    }
}

void BetterPanelTogglePlayback(const std::wstring& path,
                               winrt::weak_ref<muxc::TextBlock> weakStatus) {
    if (!BetterPanelIsAudioFile(path)) {
        BetterPanelSetStatus(weakStatus, L"Select one supported audio file");
        return;
    }

    {
        std::lock_guard lock(g_betterMediaMutex);
        if (g_betterMediaPlayer && g_betterMediaPath == path) {
            auto state = g_betterMediaPlayer.PlaybackSession().PlaybackState();
            if (state == wmp::MediaPlaybackState::Playing) {
                g_betterMediaPlayer.Pause();
                BetterPanelSetStatus(weakStatus, L"Paused");
            } else {
                g_betterMediaPlayer.Play();
                BetterPanelSetStatus(weakStatus, L"Playing");
            }
            return;
        }
    }

    BetterPanelSetStatus(weakStatus, L"Loading audio…");
    BetterPanelLoadAndPlay(path, weakStatus);
}

void BetterPanelSeek(int seconds,
                     winrt::weak_ref<muxc::TextBlock> weakStatus) {
    try {
        std::lock_guard lock(g_betterMediaMutex);
        if (!g_betterMediaPlayer) {
            BetterPanelSetStatus(weakStatus, L"No audio is loaded");
            return;
        }

        auto session = g_betterMediaPlayer.PlaybackSession();
        if (!session.CanSeek()) {
            BetterPanelSetStatus(weakStatus, L"This audio cannot be seeked");
            return;
        }

        int64_t duration = session.NaturalDuration().count();
        int64_t position = session.Position().count() +
                           static_cast<int64_t>(seconds) * 10000000;
        position = std::clamp<int64_t>(position, 0, duration);
        session.Position(winrt::Windows::Foundation::TimeSpan{position});
        BetterPanelSetStatus(weakStatus,
                             seconds < 0 ? L"Back 10 seconds"
                                         : L"Forward 10 seconds");
    } catch (winrt::hresult_error const& ex) {
        BetterPanelSetStatus(weakStatus, ex.message());
    }
}

void BetterPanelCloseMedia() {
    wmp::MediaPlayer player{nullptr};
    {
        std::lock_guard lock(g_betterMediaMutex);
        g_betterMediaRequestGeneration.fetch_add(
            1, std::memory_order_acq_rel);
        player = g_betterMediaPlayer;
        g_betterMediaPlayer = nullptr;
        g_betterMediaPath.clear();
    }
    if (player) {
        try {
            player.Pause();
            player.Source(nullptr);
            player.Close();
        } catch (...) {
        }
    }
}

void BetterPanelStopStateMedia(
    std::shared_ptr<BetterPanelState> const& state,
    std::wstring_view audioPath = {}) {
    if (!state) {
        return;
    }
    try {
        if (auto player = state->videoPlayer.get()) {
            player.Source(nullptr);
        }
        if (state->videoControlsTimer) state->videoControlsTimer.Stop();
    } catch (...) {
    }

    std::wstring_view path = audioPath.empty()
                                 ? std::wstring_view(state->selectedPath)
                                 : audioPath;
    wmp::MediaPlayer player{nullptr};
    {
        std::lock_guard lock(g_betterMediaMutex);
        g_betterMediaRequestGeneration.fetch_add(
            1, std::memory_order_acq_rel);
        if (!path.empty() && g_betterMediaPath == path) {
            player = g_betterMediaPlayer;
            g_betterMediaPath.clear();
        }
    }
    if (player) {
        try {
            player.Pause();
            player.Source(nullptr);
        } catch (winrt::hresult_error const& ex) {
            Wh_Log(L"Audio stop error %08X: %s", ex.code(),
                   ex.message().c_str());
        }
    }
}


void BetterPanelDetachTrace(PCWSTR format, ...) {
    wchar_t message[1024]{};
    va_list arguments;
    va_start(arguments, format);
    _vsnwprintf_s(message, ARRAYSIZE(message), _TRUNCATE, format, arguments);
    va_end(arguments);

    WCHAR tempPath[MAX_PATH]{};
    if (!GetTempPathW(ARRAYSIZE(tempPath), tempPath)) return;
    std::wstring path = tempPath;
    path += L"better-panel-detach.log";
    HANDLE file = CreateFileW(path.c_str(), FILE_APPEND_DATA,
                              FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr,
                              OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (file == INVALID_HANDLE_VALUE) return;
    std::wstring line = message;
    line += L"\r\n";
    int byteCount = WideCharToMultiByte(CP_UTF8, 0, line.c_str(),
                                        static_cast<int>(line.size()), nullptr,
                                        0, nullptr, nullptr);
    if (byteCount > 0) {
        std::string bytes(static_cast<size_t>(byteCount), '\0');
        WideCharToMultiByte(CP_UTF8, 0, line.c_str(),
                            static_cast<int>(line.size()), bytes.data(),
                            byteCount, nullptr, nullptr);
        DWORD written = 0;
        WriteFile(file, bytes.data(), static_cast<DWORD>(bytes.size()),
                  &written, nullptr);
    }
    CloseHandle(file);
}

std::vector<uint8_t> BetterPanelEncodeIcon(HICON icon,
                                           bool monochrome = false) {
    if (!icon) return {};
    winrt::com_ptr<IWICImagingFactory> factory;
    HRESULT result = CoCreateInstance(
        CLSID_WICImagingFactory, nullptr, CLSCTX_INPROC_SERVER,
        IID_PPV_ARGS(factory.put()));
    if (FAILED(result)) return {};

    winrt::com_ptr<IWICBitmap> bitmap;
    result = factory->CreateBitmapFromHICON(icon, bitmap.put());
    if (FAILED(result)) return {};

    if (monochrome) {
        UINT iconWidth = 0;
        UINT iconHeight = 0;
        bitmap->GetSize(&iconWidth, &iconHeight);
        winrt::com_ptr<IWICFormatConverter> converter;
        if (SUCCEEDED(factory->CreateFormatConverter(converter.put())) &&
            SUCCEEDED(converter->Initialize(
                bitmap.get(), GUID_WICPixelFormat32bppBGRA,
                WICBitmapDitherTypeNone, nullptr, 0,
                WICBitmapPaletteTypeCustom))) {
            UINT stride = iconWidth * 4;
            std::vector<uint8_t> pixels(
                static_cast<size_t>(stride) * iconHeight);
            if (SUCCEEDED(converter->CopyPixels(nullptr, stride,
                                                static_cast<UINT>(pixels.size()),
                                                pixels.data()))) {
                for (size_t index = 0; index + 3 < pixels.size(); index += 4) {
                    if (pixels[index + 3]) {
                        pixels[index] = 255;
                        pixels[index + 1] = 255;
                        pixels[index + 2] = 255;
                    }
                }
                winrt::com_ptr<IWICBitmap> whiteBitmap;
                if (SUCCEEDED(factory->CreateBitmapFromMemory(
                        iconWidth, iconHeight, GUID_WICPixelFormat32bppBGRA,
                        stride, static_cast<UINT>(pixels.size()), pixels.data(),
                        whiteBitmap.put()))) {
                    bitmap = std::move(whiteBitmap);
                }
            }
        }
    }

    winrt::com_ptr<IStream> stream;
    if (FAILED(CreateStreamOnHGlobal(nullptr, TRUE, stream.put()))) return {};
    winrt::com_ptr<IWICBitmapEncoder> encoder;
    if (FAILED(factory->CreateEncoder(GUID_ContainerFormatPng, nullptr,
                                      encoder.put())) ||
        FAILED(encoder->Initialize(stream.get(), WICBitmapEncoderNoCache))) {
        return {};
    }
    winrt::com_ptr<IWICBitmapFrameEncode> frame;
    winrt::com_ptr<IPropertyBag2> properties;
    if (FAILED(encoder->CreateNewFrame(frame.put(), properties.put())) ||
        FAILED(frame->Initialize(properties.get()))) {
        return {};
    }
    UINT width = 0;
    UINT height = 0;
    bitmap->GetSize(&width, &height);
    WICPixelFormatGUID format = GUID_WICPixelFormat32bppBGRA;
    if (FAILED(frame->SetSize(width, height)) ||
        FAILED(frame->SetPixelFormat(&format)) ||
        FAILED(frame->WriteSource(bitmap.get(), nullptr)) ||
        FAILED(frame->Commit()) || FAILED(encoder->Commit())) {
        return {};
    }

    HGLOBAL memory = nullptr;
    if (FAILED(GetHGlobalFromStream(stream.get(), &memory)) || !memory) {
        return {};
    }
    SIZE_T size = GlobalSize(memory);
    auto data = static_cast<uint8_t*>(GlobalLock(memory));
    if (!data || !size) return {};
    std::vector<uint8_t> bytes(data, data + size);
    GlobalUnlock(memory);
    return bytes;
}

std::vector<uint8_t> BetterPanelEncodeStockIcon(SHSTOCKICONID stockIcon) {
    SHSTOCKICONINFO stockInfo{sizeof(stockInfo)};
    if (FAILED(SHGetStockIconInfo(
            stockIcon, SHGSI_ICON | SHGSI_SMALLICON, &stockInfo)) ||
        !stockInfo.hIcon) {
        return {};
    }
    auto bytes = BetterPanelEncodeIcon(stockInfo.hIcon);
    DestroyIcon(stockInfo.hIcon);
    return bytes;
}

std::vector<uint8_t> BetterPanelEncodeSystemResourceIcon(
    PCWSTR modulePath, int iconIndex) {
    HICON largeIcon = nullptr;
    HICON smallIcon = nullptr;
    if (!ExtractIconExW(modulePath, iconIndex, &largeIcon, &smallIcon, 1)) {
        return {};
    }
    HICON selectedIcon = smallIcon ? smallIcon : largeIcon;
    auto bytes = BetterPanelEncodeIcon(selectedIcon, true);
    if (smallIcon) DestroyIcon(smallIcon);
    if (largeIcon) DestroyIcon(largeIcon);
    return bytes;
}

winrt::Windows::Foundation::IAsyncAction BetterPanelSetImageBytes(
    winrt::weak_ref<muxc::Image> weakImage,
    std::vector<uint8_t> bytes) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    try {
        if (bytes.empty()) co_return;
        wss::InMemoryRandomAccessStream stream;
        wss::DataWriter writer(stream);
        writer.WriteBytes(bytes);
        co_await writer.StoreAsync();
        writer.DetachStream();
        stream.Seek(0);
        winrt::Microsoft::UI::Xaml::Media::Imaging::BitmapImage bitmap;
        co_await bitmap.SetSourceAsync(stream);
        if (auto image = weakImage.get()) image.Source(bitmap);
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"System button icon error %08X: %s", ex.code(),
               ex.message().c_str());
    }
}

winrt::fire_and_forget BetterPanelLoadStockIcon(
    winrt::weak_ref<muxc::Image> weakImage,
    SHSTOCKICONID stockIcon) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    co_await BetterPanelSetImageBytes(
        weakImage, BetterPanelEncodeStockIcon(stockIcon));
}

winrt::fire_and_forget BetterPanelLoadSystemResourceIcon(
    winrt::weak_ref<muxc::Image> weakImage,
    PCWSTR modulePath, int iconIndex) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    co_await BetterPanelSetImageBytes(
        weakImage,
        BetterPanelEncodeSystemResourceIcon(modulePath, iconIndex));
}

muxc::Button BetterPanelMakeSystemIconButton(
    PCWSTR label, SHSTOCKICONID stockIcon) {
    muxc::Image icon;
    icon.Width(16);
    icon.Height(16);
    icon.Stretch(winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
    muxc::Button button;
    button.Content(icon);
    button.Width(32);
    button.Height(32);
    button.MinWidth(32);
    button.MinHeight(32);
    button.Padding(Thickness{7});
    muxa::AutomationProperties::SetName(button, label);
    muxc::ToolTipService::SetToolTip(button, winrt::box_value(label));
    BetterPanelLoadStockIcon(winrt::make_weak(icon), stockIcon);
    return button;
}

muxc::Button BetterPanelMakeSystemResourceIconButton(
    PCWSTR label, PCWSTR modulePath, int iconIndex) {
    muxc::Image icon;
    icon.Width(16);
    icon.Height(16);
    icon.Stretch(winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
    muxc::Button button;
    button.Content(icon);
    button.Width(32);
    button.Height(32);
    button.MinWidth(32);
    button.MinHeight(32);
    button.Padding(Thickness{7});
    muxa::AutomationProperties::SetName(button, label);
    muxc::ToolTipService::SetToolTip(button, winrt::box_value(label));
    BetterPanelLoadSystemResourceIcon(winrt::make_weak(icon), modulePath,
                                      iconIndex);
    return button;
}

muxc::Button BetterPanelMakeButton(PCWSTR label) {
    muxc::Button button;
    button.Content(winrt::box_value(label));
    button.MinWidth(0);
    button.Padding(Thickness{10, 5, 10, 5});
    button.HorizontalAlignment(HorizontalAlignment::Stretch);
    return button;
}

muxc::Button BetterPanelMakeIconButton(PCWSTR label, PCWSTR glyph) {
    muxc::StackPanel content;
    content.Orientation(muxc::Orientation::Horizontal);
    content.Spacing(6);

    muxc::FontIcon icon;
    icon.Glyph(glyph);
    icon.FontSize(13);
    content.Children().Append(icon);

    muxc::TextBlock text;
    text.Text(label);
    text.FontSize(12);
    text.VerticalAlignment(VerticalAlignment::Center);
    content.Children().Append(text);

    auto button = BetterPanelMakeButton(L"");
    button.Content(content);
    button.Padding(Thickness{10, 4, 10, 4});
    button.Height(32);
    return button;
}

void BetterPanelSetIconButtonLabel(muxc::Button const& button,
                                   std::wstring const& label) {
    if (!button) return;
    if (auto content = button.Content().try_as<muxc::StackPanel>();
        content && content.Children().Size() > 1) {
        if (auto text = content.Children().GetAt(1).try_as<muxc::TextBlock>()) {
            if (text.Text() != label) text.Text(label);
        }
    }
    muxa::AutomationProperties::SetName(button, label);
    muxc::ToolTipService::SetToolTip(button, winrt::box_value(label));
}


void BetterPanelUpdateDetachButton(BetterPanelState* state) {
    if (!state) return;
    if (auto button = state->detachButton.get()) {
        button.Visibility(g_settings.experimentalPopout || state->detached
                              ? Visibility::Visible
                              : Visibility::Collapsed);
        PCWSTR label = state->detached ? L"Pin panel to Explorer"
                                      : L"Unpin panel into its own window";
        muxa::AutomationProperties::SetName(button, label);
        muxc::ToolTipService::SetToolTip(button, winrt::box_value(label));
        if (auto image = button.Content().try_as<muxc::Image>()) {
            BetterPanelLoadSystemResourceIcon(
                winrt::make_weak(image), L"C:\\Windows\\System32\\imageres.dll",
                state->detached ? 234 : 235);
        }
    }
}

FrameworkElement BetterPanelFindOwningDetailsPane(
    FrameworkElement const& host);
void BetterPanelSetExplorerDetailsPaneHidden(BetterPanelState* state,
                                              bool hidden);

void BetterPanelCloseDetachedWindow(BetterPanelState* state,
                                    bool reattach);
void BetterPanelRequestPinDetachedWindow(BetterPanelState* state);
void BetterPanelRequestNativePaneVisibility(BetterPanelState* state,
                                            bool visible);
void BetterPanelRefreshDetachedState(BetterPanelState* state);

LRESULT CALLBACK BetterPanelDetachedWindowProc(HWND window, UINT message,
                                                WPARAM wParam,
                                                LPARAM lParam) {
    BetterPanelState* state = reinterpret_cast<BetterPanelState*>(
        GetWindowLongPtrW(window, GWLP_USERDATA));
    if (message == WM_NCCREATE) {
        auto create = reinterpret_cast<CREATESTRUCTW*>(lParam);
        state = static_cast<BetterPanelState*>(create->lpCreateParams);
        SetWindowLongPtrW(window, GWLP_USERDATA,
                          reinterpret_cast<LONG_PTR>(state));
    }
    switch (message) {
        case WM_TIMER:
            if (wParam == 1 && state && state->detached) {
                BetterPanelRefreshDetachedState(state);
                return 0;
            }
            break;
        case WM_SIZE:
            if (state && state->detachedIslandWindow) {
                MoveWindow(state->detachedIslandWindow, 0, 0,
                           LOWORD(lParam), HIWORD(lParam), TRUE);
            }
            return 0;
        case WM_CLOSE:
            if (state) {
                BetterPanelRequestPinDetachedWindow(state);
                return 0;
            }
            break;
        case WM_NCDESTROY:
            SetWindowLongPtrW(window, GWLP_USERDATA, 0);
            break;
    }
    return DefWindowProcW(window, message, wParam, lParam);
}

struct BetterPanelDetachedClassRegistration {
    ATOM atom = 0;
    HMODULE module = nullptr;
    std::wstring name;
};

std::atomic_bool g_betterPanelDetachedClassEverUsed{false};

BetterPanelDetachedClassRegistration& BetterPanelDetachedWindowClass() {
    static BetterPanelDetachedClassRegistration registration = []() {
        BetterPanelDetachedClassRegistration result;
        HMODULE module = nullptr;
        GetModuleHandleExW(
            GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            reinterpret_cast<LPCWSTR>(&BetterPanelDetachedWindowProc),
            &module);
        result.module = module;
        result.name = L"BetterPanelStandaloneWindow_" +
                      std::to_wstring(reinterpret_cast<uintptr_t>(module)) +
                      L"_" + std::to_wstring(GetTickCount64());
        WNDCLASSEXW value{sizeof(value)};
        value.lpfnWndProc = BetterPanelDetachedWindowProc;
        value.hInstance = module;
        value.hCursor = LoadCursorW(nullptr, IDC_ARROW);
        value.hIcon = LoadIconW(nullptr, IDI_APPLICATION);
        value.hIconSm = value.hIcon;
        value.hbrBackground = reinterpret_cast<HBRUSH>(COLOR_WINDOW + 1);
        value.lpszClassName = result.name.c_str();
        result.atom = RegisterClassExW(&value);
        return result;
    }();
    return registration;
}

ATOM BetterPanelRegisterDetachedWindowClass() {
    g_betterPanelDetachedClassEverUsed = true;
    return BetterPanelDetachedWindowClass().atom;
}

bool BetterPanelUnregisterDetachedWindowClass() {
    if (!g_betterPanelDetachedClassEverUsed) return true;
    auto& registration = BetterPanelDetachedWindowClass();
    if (!registration.atom) return true;
    if (!UnregisterClassW(registration.name.c_str(), registration.module)) {
        Wh_Log(L"Standalone window class unregister failed: %u",
               GetLastError());
        return false;
    } else {
        registration.atom = 0;
        return true;
    }
}

HMODULE BetterPanelGetThisModule() {
    HMODULE module = nullptr;
    GetModuleHandleExW(
        GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
            GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        reinterpret_cast<LPCWSTR>(&BetterPanelGetThisModule), &module);
    return module;
}

bool BetterPanelGetWindowId(HWND window,
                            winrt::Microsoft::UI::WindowId& windowId) {
    using GetWindowIdFromWindow_t = HRESULT(WINAPI*)(HWND, uint64_t*);
    HMODULE framework = GetModuleHandleW(L"Microsoft.Internal.FrameworkUdk.dll");
    if (!framework) return false;
    auto getWindowId = reinterpret_cast<GetWindowIdFromWindow_t>(
        GetProcAddress(framework, "Windowing_GetWindowIdFromWindow"));
    if (!getWindowId) return false;
    uint64_t value = 0;
    HRESULT result = getWindowId(window, &value);
    if (FAILED(result) || !value) return false;
    windowId = winrt::Microsoft::UI::WindowId{value};
    return true;
}

HWND BetterPanelGetWindowFromId(winrt::Microsoft::UI::WindowId windowId) {
    using GetWindowFromWindowId_t = HRESULT(WINAPI*)(uint64_t, HWND*);
    HMODULE framework = GetModuleHandleW(L"Microsoft.Internal.FrameworkUdk.dll");
    if (!framework) return nullptr;
    auto getWindow = reinterpret_cast<GetWindowFromWindowId_t>(
        GetProcAddress(framework, "Windowing_GetWindowFromWindowId"));
    if (!getWindow) return nullptr;
    HWND window = nullptr;
    return SUCCEEDED(getWindow(windowId.Value, &window)) ? window : nullptr;
}

void BetterPanelCloseDetachedWindow(BetterPanelState* state,
                                    bool reattach) {
    if (!state || state->changingDetachedState) return;
    state->nativePaneCommandGeneration.fetch_add(1, std::memory_order_relaxed);
    state->changingDetachedState = true;
    state->reattachRequested = false;
    state->nativePaneOpenForReattach = false;
    HWND window = state->detachedWindow;
    if (window && IsWindow(window)) KillTimer(window, 1);
    auto panel = state->panel.get().try_as<muxc::StackPanel>();
    auto host = state->host.get();
    auto nativePreview = state->nativePreview.get();
    auto multiPreview = state->multiPreviewSurface.get();
    BetterPanelSetExplorerDetailsPaneHidden(state, false);
    state->detachedSelectionSignature.clear();
    if (state->timer) {
        state->timer.Interval(
            winrt::Windows::Foundation::TimeSpan{40000000});
    }
    try {
        if (state->detachedScroll) {
            state->detachedScroll.Content(nullptr);
        }
        if (state->detachedContent) {
            state->detachedContent.Children().Clear();
        }
        if (state->detachedXamlSource) {
            state->detachedXamlSource.Content(nullptr);
            state->detachedXamlSource.Close();
        }
        if (host) {
            std::vector<std::pair<uint32_t, UIElement>> restore;
            if (nativePreview && state->detachedNativePreviewIndex) {
                restore.emplace_back(*state->detachedNativePreviewIndex,
                                     nativePreview);
            }
            if (multiPreview && state->detachedMultiPreviewIndex) {
                restore.emplace_back(*state->detachedMultiPreviewIndex,
                                     multiPreview);
            }
            if (reattach && !state->unloaded && panel) {
                restore.emplace_back(state->detachedPanelIndex, panel);
            }
            std::sort(restore.begin(), restore.end(),
                      [](auto const& left, auto const& right) {
                          return left.first < right.first;
                      });
            for (auto const& [index, child] : restore) {
                uint32_t existingIndex = 0;
                if (!host.Children().IndexOf(child, existingIndex)) {
                    host.Children().InsertAt(
                        std::min(index, host.Children().Size()), child);
                }
            }
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Standalone panel close error %08X: %s", ex.code(),
               ex.message().c_str());
    }
    state->detachedScroll = nullptr;
    state->detachedContent = nullptr;
    state->detachedNativePreviewIndex.reset();
    state->detachedMultiPreviewIndex.reset();
    state->detachedXamlSource = nullptr;
    state->detachedIslandWindow = nullptr;
    state->detachedWindow = nullptr;
    state->detached = false;
    state->changingDetachedState = false;
    BetterPanelUpdateDetachButton(state);
    if (window && IsWindow(window)) DestroyWindow(window);
}

enum class BetterPanelNativePaneCommandResult { Failed, Unchanged, Changed };

BetterPanelNativePaneCommandResult BetterPanelSetNativePaneVisibility(
    HWND explorerWindow, bool visible) {
    if (!explorerWindow || !IsWindow(explorerWindow))
        return BetterPanelNativePaneCommandResult::Failed;
    HRESULT initialized = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
    if (FAILED(initialized)) return BetterPanelNativePaneCommandResult::Failed;
    struct CoInitGuard { ~CoInitGuard() { CoUninitialize(); } } guard;
    winrt::com_ptr<IUIAutomation> automation;
    if (FAILED(CoCreateInstance(CLSID_CUIAutomation, nullptr,
                                CLSCTX_INPROC_SERVER,
                                IID_PPV_ARGS(automation.put()))))
        return BetterPanelNativePaneCommandResult::Failed;
    winrt::com_ptr<IUIAutomationElement> root;
    if (FAILED(automation->ElementFromHandle(explorerWindow, root.put())))
        return BetterPanelNativePaneCommandResult::Failed;

    auto findByProperty = [&](PROPERTYID property, PCWSTR value)
        -> winrt::com_ptr<IUIAutomationElement> {
        VARIANT variant{};
        variant.vt = VT_BSTR;
        variant.bstrVal = SysAllocString(value);
        if (!variant.bstrVal) return nullptr;
        winrt::com_ptr<IUIAutomationCondition> condition;
        HRESULT result = automation->CreatePropertyCondition(
            property, variant, condition.put());
        VariantClear(&variant);
        if (FAILED(result) || !condition) return nullptr;
        winrt::com_ptr<IUIAutomationElement> element;
        if (FAILED(root->FindFirst(TreeScope_Descendants, condition.get(),
                                   element.put())))
            return nullptr;
        return element;
    };

    auto button = findByProperty(UIA_AutomationIdPropertyId,
                                 L"DetailsPaneToggleButton");
    if (!button) return BetterPanelNativePaneCommandResult::Failed;
    auto pane = findByProperty(UIA_ClassNamePropertyId,
                               L"DetailsPaneHwndHostClass");
    bool paneVisible = false;
    if (pane) {
        BOOL offscreen = TRUE;
        RECT bounds{};
        if (SUCCEEDED(pane->get_CurrentIsOffscreen(&offscreen)) &&
            SUCCEEDED(pane->get_CurrentBoundingRectangle(&bounds))) {
            paneVisible = !offscreen && bounds.right > bounds.left &&
                          bounds.bottom > bounds.top;
        }
    }
    if (paneVisible == visible)
        return BetterPanelNativePaneCommandResult::Unchanged;
    winrt::com_ptr<IUIAutomationInvokePattern> invoke;
    if (FAILED(button->GetCurrentPatternAs(
            UIA_InvokePatternId, IID_IUIAutomationInvokePattern,
            invoke.put_void())) ||
        !invoke || FAILED(invoke->Invoke()))
        return BetterPanelNativePaneCommandResult::Failed;
    return BetterPanelNativePaneCommandResult::Changed;
}

void BetterPanelRequestNativePaneVisibility(BetterPanelState* rawState,
                                            bool visible) {
    if (!rawState) return;
    std::shared_ptr<BetterPanelState> state;
    {
        std::lock_guard lock(g_betterPanelMutex);
        for (auto const& candidate : g_betterPanels) {
            if (candidate.get() == rawState) {
                state = candidate;
                break;
            }
        }
    }
    if (!state) return;
    auto weakState = std::weak_ptr<BetterPanelState>(state);
    auto dispatcher = state->dispatcher;
    HWND explorerWindow = state->explorerWindow;
    uint64_t generation = state->nativePaneCommandGeneration.fetch_add(
                              1, std::memory_order_relaxed) + 1;
    BetterPanelStartWorker([weakState, dispatcher, explorerWindow, visible,
                            generation]() {
        auto state = weakState.lock();
        if (!state || BetterPanelWorkerStopping()) return;
        std::lock_guard commandLock(state->nativePaneCommandMutex);
        if (state->nativePaneCommandGeneration.load(
                std::memory_order_relaxed) != generation) return;
        auto result = BetterPanelSetNativePaneVisibility(explorerWindow,
                                                          visible);
        dispatcher.TryEnqueue([weakState, visible, generation, result]() {
            auto state = weakState.lock();
            if (!state || state->unloaded || !state->detached ||
                state->nativePaneCommandGeneration.load(
                    std::memory_order_relaxed) != generation) return;
            if (result == BetterPanelNativePaneCommandResult::Failed) {
                if (visible) {
                    state->reattachRequested = false;
                    state->nativePaneOpenForReattach = false;
                }
                BetterPanelSetStatus(state->status,
                    L"Couldn't change Explorer's Details pane");
                return;
            }
            if (visible && state->reattachRequested) {
                state->nativePaneOpenForReattach = true;
                if (auto host = state->host.get(); host && host.IsLoaded()) {
                    BetterPanelCloseDetachedWindow(state.get(), true);
                } else {
                    BetterPanelScheduleCurrentThreadDiscovery();
                }
            }
        });
    });
}

bool BetterPanelOpenDetachedWindow(BetterPanelState* state) {
    BetterPanelDetachTrace(L"open requested state=%p", state);
    if (!state || state->detached || state->changingDetachedState) {
        BetterPanelDetachTrace(
            L"rejected before class state=%p detached=%d changing=%d", state,
            state ? state->detached : 0,
            state ? state->changingDetachedState : 0);
        return false;
    }
    ATOM windowClass = BetterPanelRegisterDetachedWindowClass();
    BetterPanelDetachTrace(L"window class=%u lastError=%u", windowClass,
                           GetLastError());
    if (!windowClass) return false;
    auto host = state->host.get();
    auto panel = state->panel.get().try_as<muxc::StackPanel>();
    BetterPanelDetachTrace(L"resolved host=%p panel=%p", winrt::get_abi(host),
                           winrt::get_abi(panel));
    if (!host || !panel) return false;

    uint32_t panelIndex = 0;
    if (!host.Children().IndexOf(panel, panelIndex)) {
        BetterPanelDetachTrace(L"panel not found in host");
        return false;
    }
    BetterPanelDetachTrace(L"panel index=%u", panelIndex);
    constexpr int popupWidth = 520;
    constexpr int popupHeight = 760;
    constexpr int popupGap = 12;
    RECT ownerRect{};
    GetWindowRect(state->explorerWindow, &ownerRect);
    MONITORINFO monitorInfo{sizeof(monitorInfo)};
    RECT workArea = ownerRect;
    if (GetMonitorInfoW(MonitorFromWindow(state->explorerWindow,
                                          MONITOR_DEFAULTTONEAREST),
                        &monitorInfo)) {
        workArea = monitorInfo.rcWork;
    }
    int x = ownerRect.right + popupGap;
    if (x + popupWidth > workArea.right) {
        x = ownerRect.left - popupWidth - popupGap;
    }
    if (x < workArea.left) {
        // A maximized Explorer has no free side; overlap its right edge.
        x = std::clamp(ownerRect.right - popupWidth, workArea.left,
                       std::max(workArea.left, workArea.right - popupWidth));
    }
    int y = std::clamp(ownerRect.top, workArea.top,
                       std::max(workArea.top, workArea.bottom - popupHeight));
    HWND window = CreateWindowExW(
        WS_EX_APPWINDOW, BetterPanelDetachedWindowClass().name.c_str(), L"Better Panel",
        WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN, x, y, popupWidth, popupHeight,
        state->explorerWindow,
        nullptr, BetterPanelGetThisModule(), state);
    if (!window) {
        DWORD error = GetLastError();
        Wh_Log(L"Standalone panel window creation failed: %u", error);
        BetterPanelDetachTrace(L"CreateWindowEx failed error=%u", error);
        return false;
    }
    BetterPanelDetachTrace(L"window created hwnd=%p", window);

    state->detachedWindow = window;
    state->detachedPanelIndex = panelIndex;
    state->detachedNativePreviewIndex.reset();
    state->detachedMultiPreviewIndex.reset();
    if (auto preview = state->nativePreview.get()) {
        uint32_t index = 0;
        if (host.Children().IndexOf(preview, index)) {
            state->detachedNativePreviewIndex = index;
        }
    }
    if (auto preview = state->multiPreviewSurface.get()) {
        uint32_t index = 0;
        if (host.Children().IndexOf(preview, index)) {
            state->detachedMultiPreviewIndex = index;
        }
    }
    state->changingDetachedState = true;
    try {
        muxh::DesktopWindowXamlSource source;
        state->detachedXamlSource = source;
        BetterPanelDetachTrace(L"DesktopWindowXamlSource constructed");
        winrt::Microsoft::UI::WindowId parentWindowId{};
        if (!BetterPanelGetWindowId(window, parentWindowId)) {
            throw winrt::hresult_error(E_FAIL,
                                       L"Couldn't resolve the parent WindowId");
        }
        source.Initialize(parentWindowId);
        BetterPanelDetachTrace(L"DesktopWindowXamlSource initialized");
        HWND islandWindow = BetterPanelGetWindowFromId(
            source.SiteBridge().WindowId());
        if (!islandWindow) {
            throw winrt::hresult_error(E_FAIL,
                                       L"Couldn't resolve the island window");
        }
        BetterPanelDetachTrace(L"island hwnd=%p", islandWindow);

        host.Children().RemoveAt(panelIndex);
        BetterPanelDetachTrace(L"panel removed from Explorer host");
        muxc::StackPanel detachedContent;
        detachedContent.Spacing(10);
        state->detachedContent = detachedContent;
        if (auto preview = state->nativePreview.get();
            preview && state->detachedNativePreviewIndex) {
            uint32_t index = 0;
            if (host.Children().IndexOf(preview, index)) {
                host.Children().RemoveAt(index);
                detachedContent.Children().Append(preview);
            }
        }
        if (auto preview = state->multiPreviewSurface.get();
            preview && state->detachedMultiPreviewIndex) {
            uint32_t index = 0;
            if (host.Children().IndexOf(preview, index)) {
                host.Children().RemoveAt(index);
                detachedContent.Children().Append(preview);
            }
        }
        detachedContent.Children().Append(panel);
        muxc::Grid root;
        root.RequestedTheme(panel.ActualTheme());
        if (auto brush = winrt::Microsoft::UI::Xaml::Application::Current()
                             .Resources()
                             .TryLookup(winrt::box_value(
                                 L"SolidBackgroundFillColorBaseBrush"))
                             .try_as<winrt::Microsoft::UI::Xaml::Media::Brush>()) {
            root.Background(brush);
        }
        muxc::ScrollViewer scroll;
        scroll.HorizontalScrollBarVisibility(
            muxc::ScrollBarVisibility::Disabled);
        scroll.VerticalScrollBarVisibility(muxc::ScrollBarVisibility::Auto);
        scroll.Content(detachedContent);
        state->detachedScroll = scroll;
        root.Children().Append(scroll);
        BetterPanelDetachTrace(L"standalone XAML tree assembled");
        source.Content(root);
        BetterPanelDetachTrace(L"standalone XAML content assigned");

        state->detachedIslandWindow = islandWindow;
        state->detachedXamlSource = source;
        state->detached = true;
        state->changingDetachedState = false;
        BetterPanelUpdateDetachButton(state);
        BetterPanelSetExplorerDetailsPaneHidden(state, true);
        state->detachedSelectionSignature.clear();
        if (state->timer) {
            state->timer.Interval(
                winrt::Windows::Foundation::TimeSpan{40000000});
        }

        RECT client{};
        GetClientRect(window, &client);
        MoveWindow(islandWindow, 0, 0, client.right, client.bottom, TRUE);
        ShowWindow(islandWindow, SW_SHOW);
        ShowWindow(window, SW_SHOWNORMAL);
        SetTimer(window, 1, 500, nullptr);
        UpdateWindow(window);
        BetterPanelRequestNativePaneVisibility(state, false);
        BetterPanelRefreshDetachedState(state);
        BetterPanelDetachTrace(L"standalone window shown");
        return true;
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Standalone panel open error %08X: %s", ex.code(),
               ex.message().c_str());
        BetterPanelDetachTrace(L"WinRT failure hr=%08X message=%s", ex.code(),
                               ex.message().c_str());
    } catch (...) {
        Wh_Log(L"Standalone panel open error %08X",
               winrt::to_hresult().value);
        BetterPanelDetachTrace(L"unknown failure hr=%08X",
                               winrt::to_hresult().value);
    }
    state->changingDetachedState = false;
    BetterPanelCloseDetachedWindow(state, true);
    return false;
}

void BetterPanelRequestPinDetachedWindow(BetterPanelState* state) {
    if (!state || !state->detached || state->changingDetachedState ||
        state->reattachRequested) return;
    state->reattachRequested = true;
    state->nativePaneOpenForReattach = false;
    BetterPanelRequestNativePaneVisibility(state, true);
}

void BetterPanelToggleDetachedWindow(BetterPanelState* state) {
    if (!state) return;
    if (!state->detached && !g_settings.experimentalPopout) return;
    BetterPanelDetachTrace(L"button invoked detached=%d", state->detached);
    if (state->detached) {
        BetterPanelRequestPinDetachedWindow(state);
        BetterPanelSetStatus(state->status, L"");
    } else {
        if (!BetterPanelOpenDetachedWindow(state)) {
            BetterPanelSetStatus(state->status,
                                 L"Couldn't open the standalone panel");
        } else {
            BetterPanelSetStatus(state->status, L"");
        }
    }
}
std::wstring BetterPanelDestinationLabel(std::wstring const& path) {
    if (path.empty()) return {};
    if (PathIsRootW(path.c_str())) {
        WCHAR volumeName[MAX_PATH]{};
        GetVolumeInformationW(path.c_str(), volumeName, ARRAYSIZE(volumeName),
                              nullptr, nullptr, nullptr, nullptr, 0);
        std::wstring label = volumeName[0] ? volumeName : L"Local Disk";
        if (path.size() >= 2) {
            label += L" (" + path.substr(0, 2) + L")";
        }
        return label;
    }
    auto label = BetterPanelFileName(path);
    return label.empty() ? path : label;
}

std::wstring BetterPanelTransferMoveLabel(
    std::vector<std::wstring> const& sources,
    std::wstring const& destination) {
    if (sources.empty() || destination.empty()) return L"Move to";
    std::wstring sourceLabel;
    if (sources.size() == 1) {
        sourceLabel = BetterPanelFileName(sources.front());
        if (sourceLabel.empty()) sourceLabel = sources.front();
    } else {
        sourceLabel = std::to_wstring(sources.size()) + L" items";
    }
    return L"Move " + sourceLabel + L" to " +
           BetterPanelDestinationLabel(destination);
}

struct BetterPanelHomeLocation {
    std::wstring name;
    std::wstring path;
    std::wstring glyph;
    std::wstring description;
};

struct BetterPanelHomeDrive {
    std::wstring name;
    std::wstring path;
    uint64_t freeBytes = 0;
    uint64_t totalBytes = 0;
};

struct BetterPanelHomeData {
    bool showFavorites = false;
    std::vector<BetterPanelHomeDrive> drives;
    std::vector<BetterPanelHomeLocation> locations;
};

std::wstring BetterPanelKnownFolderPath(REFKNOWNFOLDERID id) {
    PWSTR rawPath = nullptr;
    if (FAILED(SHGetKnownFolderPath(id, KF_FLAG_DEFAULT, nullptr, &rawPath)) ||
        !rawPath) {
        return {};
    }
    std::wstring path(rawPath);
    CoTaskMemFree(rawPath);
    return path;
}

bool BetterPanelPathsEqual(std::wstring const& left,
                           std::wstring const& right) {
    if (left.empty() || right.empty()) return false;
    std::wstring leftFull(MAX_PATH, L'\0');
    std::wstring rightFull(MAX_PATH, L'\0');
    DWORD leftLength = GetFullPathNameW(left.c_str(),
                                        static_cast<DWORD>(leftFull.size()),
                                        leftFull.data(), nullptr);
    DWORD rightLength = GetFullPathNameW(right.c_str(),
                                         static_cast<DWORD>(rightFull.size()),
                                         rightFull.data(), nullptr);
    if (!leftLength || leftLength >= leftFull.size() || !rightLength ||
        rightLength >= rightFull.size()) {
        return _wcsicmp(left.c_str(), right.c_str()) == 0;
    }
    leftFull.resize(leftLength);
    rightFull.resize(rightLength);
    while (leftFull.size() > 3 &&
           (leftFull.back() == L'\\' || leftFull.back() == L'/')) {
        leftFull.pop_back();
    }
    while (rightFull.size() > 3 &&
           (rightFull.back() == L'\\' || rightFull.back() == L'/')) {
        rightFull.pop_back();
    }
    return _wcsicmp(leftFull.c_str(), rightFull.c_str()) == 0;
}

bool BetterPanelIsProtectedDeleteLocation(std::wstring const& path) {
    if (path.empty() || PathIsRootW(path.c_str())) return true;

    static std::vector<std::wstring> const protectedFolders = [] {
        std::vector<std::wstring> folders;
        auto addKnownFolder = [&folders](REFKNOWNFOLDERID id) {
            auto folder = BetterPanelKnownFolderPath(id);
            if (!folder.empty()) folders.push_back(std::move(folder));
        };
        addKnownFolder(FOLDERID_Profile);
        addKnownFolder(FOLDERID_Desktop);
        addKnownFolder(FOLDERID_Documents);
        addKnownFolder(FOLDERID_Downloads);
        addKnownFolder(FOLDERID_Music);
        addKnownFolder(FOLDERID_Pictures);
        addKnownFolder(FOLDERID_Videos);
        addKnownFolder(FOLDERID_Public);
        addKnownFolder(FOLDERID_ProgramData);
        addKnownFolder(FOLDERID_ProgramFiles);
        addKnownFolder(FOLDERID_ProgramFilesX86);
        addKnownFolder(FOLDERID_Windows);
        addKnownFolder(FOLDERID_System);
        addKnownFolder(FOLDERID_SystemX86);
        return folders;
    }();

    return std::any_of(protectedFolders.begin(), protectedFolders.end(),
                       [&path](auto const& protectedPath) {
                           return BetterPanelPathsEqual(path, protectedPath);
                       });
}

bool BetterPanelCanDeleteSelectedPath(std::wstring const& path) {
    if (BetterPanelIsProtectedDeleteLocation(path)) return false;
    winrt::com_ptr<IShellItem> item;
    if (FAILED(SHCreateItemFromParsingName(path.c_str(), nullptr,
                                           IID_PPV_ARGS(item.put())))) {
        return false;
    }
    SFGAOF attributes = SFGAO_CANDELETE | SFGAO_FILESYSTEM;
    if (FAILED(item->GetAttributes(attributes, &attributes))) return false;
    return (attributes & SFGAO_CANDELETE) != 0 &&
           (attributes & SFGAO_FILESYSTEM) != 0;
}

std::vector<BetterPanelHomeLocation> BetterPanelRecentFolders() {
    struct LinkEntry {
        std::wstring path;
        FILETIME modified{};
    };
    std::vector<LinkEntry> links;
    auto recentPath = BetterPanelKnownFolderPath(FOLDERID_Recent);
    if (recentPath.empty()) return {};

    WIN32_FIND_DATAW data{};
    HANDLE find = FindFirstFileExW((recentPath + L"\\*.lnk").c_str(),
                                   FindExInfoBasic, &data,
                                   FindExSearchNameMatch, nullptr,
                                   FIND_FIRST_EX_LARGE_FETCH);
    if (find == INVALID_HANDLE_VALUE) return {};
    do {
        if (BetterPanelWorkerStopping()) break;
        if (!(data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
            links.push_back({recentPath + L"\\" + data.cFileName,
                             data.ftLastWriteTime});
        }
    } while (FindNextFileW(find, &data));
    FindClose(find);
    std::sort(links.begin(), links.end(), [](auto const& left, auto const& right) {
        return CompareFileTime(&left.modified, &right.modified) > 0;
    });

    std::vector<BetterPanelHomeLocation> folders;
    std::unordered_set<std::wstring> seen;
    size_t checked = 0;
    for (auto const& linkEntry : links) {
        if (BetterPanelWorkerStopping()) break;
        if (folders.size() >= 8 || checked++ >= 100) break;
        winrt::com_ptr<IShellLinkW> link;
        if (FAILED(CoCreateInstance(CLSID_ShellLink, nullptr,
                                    CLSCTX_INPROC_SERVER,
                                    IID_PPV_ARGS(link.put()))) ||
            !link) {
            continue;
        }
        auto persist = link.try_as<IPersistFile>();
        if (!persist || FAILED(persist->Load(linkEntry.path.c_str(), STGM_READ))) {
            continue;
        }
        WCHAR target[MAX_PATH]{};
        WIN32_FIND_DATAW targetData{};
        if (FAILED(link->GetPath(target, ARRAYSIZE(target), &targetData,
                                 SLGP_RAWPATH)) ||
            !target[0] || PathIsUNCW(target)) {
            continue;
        }
        DWORD attributes = GetFileAttributesW(target);
        if (attributes == INVALID_FILE_ATTRIBUTES ||
            !(attributes & FILE_ATTRIBUTE_DIRECTORY)) {
            continue;
        }
        std::wstring key(target);
        std::transform(key.begin(), key.end(), key.begin(), towlower);
        if (!seen.insert(key).second) continue;
        auto name = BetterPanelFileName(target);
        if (name.empty()) name = target;
        folders.push_back({std::move(name), target, L"\uE8B7"});
    }
    return folders;
}

std::vector<BetterPanelHomeLocation> BetterPanelFavoriteFiles() {
    struct DestinationFile {
        std::wstring path;
        FILETIME modified{};
    };
    std::vector<DestinationFile> destinationFiles;
    std::wstring explorerList = BetterPanelFavoritesListPath();
    size_t separator = explorerList.find_last_of(L"\\/");
    if (separator == std::wstring::npos) return {};
    std::wstring directory = explorerList.substr(0, separator);

    WIN32_FIND_DATAW findData{};
    HANDLE find = FindFirstFileExW(
        (directory + L"\\*.automaticDestinations-ms").c_str(),
        FindExInfoBasic, &findData, FindExSearchNameMatch, nullptr,
        FIND_FIRST_EX_LARGE_FETCH);
    if (find == INVALID_HANDLE_VALUE) return {};
    do {
        if (BetterPanelWorkerStopping()) break;
        if (!(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
            destinationFiles.push_back(
                {directory + L"\\" + findData.cFileName,
                 findData.ftLastWriteTime});
        }
    } while (FindNextFileW(find, &findData));
    FindClose(find);
    std::sort(destinationFiles.begin(), destinationFiles.end(),
              [](auto const& left, auto const& right) {
                  return CompareFileTime(&left.modified, &right.modified) > 0;
              });

    std::vector<BetterPanelHomeLocation> favorites;
    std::unordered_set<std::wstring> seen;
    for (auto const& destination : destinationFiles) {
        if (BetterPanelWorkerStopping()) break;
        if (favorites.size() >= 50) break;
        winrt::com_ptr<IStorage> storage;
        if (FAILED(StgOpenStorage(
                destination.path.c_str(), nullptr,
                STGM_READ | STGM_SHARE_DENY_WRITE, nullptr, 0,
                storage.put())) || !storage) {
            continue;
        }
        winrt::com_ptr<IStream> stream;
        if (FAILED(storage->OpenStream(
                L"DestList", nullptr, STGM_READ | STGM_SHARE_EXCLUSIVE,
                0, stream.put())) || !stream) {
            continue;
        }
        STATSTG stat{};
        if (FAILED(stream->Stat(&stat, STATFLAG_NONAME)) ||
            stat.cbSize.QuadPart < 32 ||
            stat.cbSize.QuadPart > 16 * 1024 * 1024) {
            continue;
        }
        std::vector<uint8_t> bytes(
            static_cast<size_t>(stat.cbSize.QuadPart));
        ULONG bytesRead = 0;
        if (FAILED(stream->Read(bytes.data(),
                                static_cast<ULONG>(bytes.size()),
                                &bytesRead)) || bytesRead < 32) {
            continue;
        }
        bytes.resize(bytesRead);
        uint32_t version = BetterPanelReadUInt32(bytes, 0);
        uint32_t entryCount = BetterPanelReadUInt32(bytes, 4);
        if (version < 3 || entryCount > 10000) continue;

        size_t offset = 32;
        for (uint32_t index = 0;
             index < entryCount && offset + 130 <= bytes.size(); index++) {
            uint16_t pathLength = BetterPanelReadUInt16(bytes, offset + 128);
            size_t pathBytes = static_cast<size_t>(pathLength) * 2;
            if (offset + 130 + pathBytes > bytes.size()) break;
            uint32_t pinStatus = BetterPanelReadUInt32(bytes, offset + 108);
            if (pinStatus != UINT32_MAX && pathLength) {
                std::wstring path;
                path.reserve(pathLength);
                for (uint16_t character = 0; character < pathLength;
                     character++) {
                    path.push_back(static_cast<wchar_t>(
                        BetterPanelReadUInt16(
                            bytes, offset + 130 +
                                       static_cast<size_t>(character) * 2)));
                }
                if (PathIsUNCW(path.c_str())) {
                    offset += 130 + pathBytes + 4;
                    continue;
                }
                DWORD attributes = GetFileAttributesW(path.c_str());
                if (attributes != INVALID_FILE_ATTRIBUTES) {
                    std::wstring key = path;
                    std::transform(key.begin(), key.end(), key.begin(),
                                   towlower);
                    if (seen.insert(key).second) {
                        std::wstring name = BetterPanelFileName(path);
                        if (name.empty()) name = path;
                        bool folder =
                            (attributes & FILE_ATTRIBUTE_DIRECTORY) != 0;
                        favorites.push_back(
                            {std::move(name), path,
                             folder ? L"\uE8B7" : L"\uE8A5"});
                        if (favorites.size() >= 50) break;
                    }
                }
            }
            offset += 130 + pathBytes + 4;
        }
    }
    return favorites;
}

void BetterPanelNavigateFromHome(
    std::weak_ptr<BetterPanelState> weakState,
    std::wstring target) {
    auto state = weakState.lock();
    if (!state || target.empty()) return;
    BetterPanelExplorerWindowScope explorerWindowScope(state->explorerWindow);
    BetterPanelInvalidateExplorerQueryCaches();
    if (!BetterPanelNavigateCurrentTab(target)) {
        BetterPanelSetStatus(state->status,
                             L"Couldn't navigate the current Explorer tab");
        return;
    }
    if (auto homeCard = state->homeCard.get()) {
        homeCard.Visibility(Visibility::Collapsed);
    }
    state->homeWasVisible = false;

    auto dispatcher = state->dispatcher;
    BetterPanelStartWorker([weakState, dispatcher]() {
        if (BetterPanelWorkerWait(120)) return;
        dispatcher.TryEnqueue([weakState]() {
            if (auto state = weakState.lock(); state && !state->unloaded) {
                BetterPanelInvalidateExplorerQueryCaches();
                BetterPanelRefresh(state);
            }
        });
    });
}

muxc::Button BetterPanelMakeHomeLocationButton(
    BetterPanelHomeLocation const& location,
    std::weak_ptr<BetterPanelState> weakState) {
    muxc::Grid content;
    muxc::ColumnDefinition iconColumn;
    iconColumn.Width(GridLength{34, GridUnitType::Pixel});
    muxc::ColumnDefinition textColumn;
    textColumn.Width(GridLength{1, GridUnitType::Star});
    content.ColumnDefinitions().Append(iconColumn);
    content.ColumnDefinitions().Append(textColumn);

    muxc::Grid iconHost;
    iconHost.Width(24);
    iconHost.Height(24);
    iconHost.HorizontalAlignment(HorizontalAlignment::Center);
    iconHost.VerticalAlignment(VerticalAlignment::Center);

    muxc::FontIcon fallbackIcon;
    fallbackIcon.Glyph(location.glyph);
    fallbackIcon.FontSize(20);
    fallbackIcon.HorizontalAlignment(HorizontalAlignment::Center);
    fallbackIcon.VerticalAlignment(VerticalAlignment::Center);
    iconHost.Children().Append(fallbackIcon);

    muxc::Image shellIcon;
    shellIcon.Width(24);
    shellIcon.Height(24);
    shellIcon.Stretch(
        winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
    shellIcon.HorizontalAlignment(HorizontalAlignment::Center);
    shellIcon.VerticalAlignment(VerticalAlignment::Center);
    shellIcon.Visibility(Visibility::Collapsed);
    iconHost.Children().Append(shellIcon);
    content.Children().Append(iconHost);

    muxc::StackPanel labels;
    labels.Spacing(1);
    muxc::Grid::SetColumn(labels, 1);
    muxc::TextBlock name;
    name.Text(location.name);
    name.FontWeight(winrt::Microsoft::UI::Text::FontWeights::SemiBold());
    muxc::TextBlock path;
    path.Text(location.description.empty() ? location.path
                                           : location.description);
    path.FontSize(10);
    path.Opacity(0.65);
    path.TextTrimming(TextTrimming::CharacterEllipsis);
    labels.Children().Append(name);
    labels.Children().Append(path);
    content.Children().Append(labels);

    auto button = BetterPanelMakeButton(L"");
    button.Content(content);
    button.HorizontalContentAlignment(HorizontalAlignment::Stretch);
    button.Padding(Thickness{10, 7, 10, 7});
    button.Click([weakState, target = location.path](auto const&,
                                                     RoutedEventArgs const&) {
        BetterPanelNavigateFromHome(weakState, target);
    });
    BetterPanelLoadHomeLocationIcon(winrt::make_weak(shellIcon),
                                    winrt::make_weak(fallbackIcon),
                                    location.path);
    return button;
}

muxc::Button BetterPanelMakeDriveButton(std::wstring const& name,
                                         std::wstring const& path,
                                         uint64_t freeBytes,
                                         uint64_t totalBytes,
                                         std::weak_ptr<BetterPanelState> weakState) {
    muxc::Grid content;
    muxc::ColumnDefinition iconColumn;
    iconColumn.Width(GridLength{52, GridUnitType::Pixel});
    muxc::ColumnDefinition detailsColumn;
    detailsColumn.Width(GridLength{1, GridUnitType::Star});
    content.ColumnDefinitions().Append(iconColumn);
    content.ColumnDefinitions().Append(detailsColumn);

    muxc::Grid iconHost;
    iconHost.Width(44);
    iconHost.Height(44);
    iconHost.HorizontalAlignment(HorizontalAlignment::Center);
    iconHost.VerticalAlignment(VerticalAlignment::Center);

    muxc::FontIcon fallbackIcon;
    fallbackIcon.Glyph(L"\uEDA2");
    fallbackIcon.FontSize(30);
    fallbackIcon.HorizontalAlignment(HorizontalAlignment::Center);
    fallbackIcon.VerticalAlignment(VerticalAlignment::Center);
    iconHost.Children().Append(fallbackIcon);

    muxc::Image shellIcon;
    shellIcon.Width(40);
    shellIcon.Height(40);
    shellIcon.Stretch(
        winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
    shellIcon.HorizontalAlignment(HorizontalAlignment::Center);
    shellIcon.VerticalAlignment(VerticalAlignment::Center);
    shellIcon.Visibility(Visibility::Collapsed);
    iconHost.Children().Append(shellIcon);
    content.Children().Append(iconHost);

    muxc::StackPanel details;
    details.Spacing(1);
    muxc::Grid::SetColumn(details, 1);
    muxc::TextBlock title;
    title.Text(name);
    title.FontSize(13);
    title.FontWeight(winrt::Microsoft::UI::Text::FontWeights::SemiBold());
    title.TextTrimming(TextTrimming::CharacterEllipsis);
    details.Children().Append(title);

    muxc::ProgressBar capacity;
    capacity.Minimum(0);
    capacity.Maximum(100);
    double usedPercent = totalBytes
                             ? 100.0 * static_cast<double>(totalBytes - freeBytes) /
                                   static_cast<double>(totalBytes)
                             : 0.0;
    capacity.Value(std::clamp(usedPercent, 0.0, 100.0));
    capacity.Height(12);
    capacity.HorizontalAlignment(HorizontalAlignment::Stretch);
    // Blue is healthy, orange warns that the drive is filling up, and red
    // marks critically low free space.
    auto capacityColor = usedPercent >= 90.0
                             ? winrt::Windows::UI::ColorHelper::FromArgb(
                                   255, 232, 17, 35)
                         : usedPercent >= 75.0
                             ? winrt::Windows::UI::ColorHelper::FromArgb(
                                   255, 255, 140, 0)
                             : winrt::Windows::UI::ColorHelper::FromArgb(
                                   255, 0, 120, 212);
    capacity.Foreground(
        winrt::Microsoft::UI::Xaml::Media::SolidColorBrush(capacityColor));
    details.Children().Append(capacity);

    muxc::TextBlock capacityText;
    capacityText.Text(totalBytes
                          ? BetterPanelFormatByteSize(freeBytes) + L" free of " +
                                BetterPanelFormatByteSize(totalBytes)
                          : path);
    capacityText.FontSize(10.5);
    capacityText.Opacity(0.70);
    capacityText.TextTrimming(TextTrimming::CharacterEllipsis);
    details.Children().Append(capacityText);
    content.Children().Append(details);

    auto button = BetterPanelMakeButton(L"");
    button.Content(content);
    button.Background(nullptr);
    button.BorderThickness(Thickness{0});
    button.CornerRadius(CornerRadius{4});
    button.HorizontalContentAlignment(HorizontalAlignment::Stretch);
    button.Padding(Thickness{6, 6, 8, 6});
    button.MinHeight(64);
    button.Click([weakState, target = path](auto const&,
                                           RoutedEventArgs const&) {
        BetterPanelNavigateFromHome(weakState, target);
    });
    BetterPanelLoadHomeLocationIcon(winrt::make_weak(shellIcon),
                                    winrt::make_weak(fallbackIcon), path);
    return button;
}

BetterPanelHomeData BetterPanelGatherHomeData(bool showFavorites) {
    BetterPanelHomeData data;
    data.showFavorites = showFavorites;

    WCHAR driveBuffer[512]{};
    DWORD driveLength = GetLogicalDriveStringsW(ARRAYSIZE(driveBuffer),
                                                 driveBuffer);
    if (driveLength && driveLength < ARRAYSIZE(driveBuffer)) {
        for (PCWSTR drive = driveBuffer; *drive;
             drive += wcslen(drive) + 1) {
            if (BetterPanelWorkerStopping()) break;
            UINT type = GetDriveTypeW(drive);
            if (type == DRIVE_NO_ROOT_DIR || type == DRIVE_UNKNOWN) continue;

            std::wstring name = type == DRIVE_REMOTE
                                    ? L"Network Drive"
                                    : (type == DRIVE_CDROM ? L"Optical Drive"
                                                           : L"Local Disk");
            ULARGE_INTEGER available{}, total{}, free{};
            if (type == DRIVE_FIXED || type == DRIVE_REMOVABLE) {
                WCHAR volumeName[MAX_PATH]{};
                if (GetVolumeInformationW(
                        drive, volumeName, ARRAYSIZE(volumeName), nullptr,
                        nullptr, nullptr, nullptr, 0) && volumeName[0]) {
                    name = volumeName;
                }
                GetDiskFreeSpaceExW(drive, &available, &total, &free);
            }
            if (wcslen(drive) >= 2) {
                name += L" (";
                name.append(drive, 2);
                name += L")";
            }
            data.drives.push_back(
                {std::move(name), drive, free.QuadPart, total.QuadPart});
        }
    }

    if (!BetterPanelWorkerStopping()) {
        HRESULT initialized = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
        data.locations = showFavorites ? BetterPanelFavoriteFiles()
                                      : BetterPanelRecentFolders();
        if (SUCCEEDED(initialized)) CoUninitialize();
    }
    return data;
}

void BetterPanelPopulateHome(std::shared_ptr<BetterPanelState> const& state);
void BetterPanelFinishStartupLoading(
    std::shared_ptr<BetterPanelState> const& state);

void BetterPanelRenderHome(std::shared_ptr<BetterPanelState> const& state,
                           BetterPanelHomeData const& data) {
    if (!state || state->unloaded) return;
    auto content = state->homeContent.get();
    if (!content) return;
    content.Children().Clear();

    bool showFavorites = data.showFavorites;

    muxc::TextBlock homeTitle;
    homeTitle.Text(L"This PC");
    homeTitle.FontSize(18);
    homeTitle.FontWeight(
        winrt::Microsoft::UI::Text::FontWeights::SemiBold());
    homeTitle.Margin(Thickness{2, 0, 0, 0});
    content.Children().Append(homeTitle);

    muxc::TextBlock homeSubtitle;
    homeSubtitle.Text(showFavorites ? L"Drives and favorite files"
                                    : L"Drives and recent locations");
    homeSubtitle.FontSize(11);
    homeSubtitle.Opacity(0.66);
    homeSubtitle.Margin(Thickness{2, 0, 0, 8});
    content.Children().Append(homeSubtitle);

    if (!data.drives.empty()) {
        muxc::TextBlock drivesTitle;
        drivesTitle.Text(L"Devices and drives");
        drivesTitle.FontSize(14);
        drivesTitle.FontWeight(
            winrt::Microsoft::UI::Text::FontWeights::SemiBold());
        drivesTitle.Margin(Thickness{2, 0, 0, 2});
        content.Children().Append(drivesTitle);
        muxc::Grid drivesGrid;
        drivesGrid.RowSpacing(4);
        // The native Details pane is narrow; two equal columns truncate both
        // drive names and capacity figures. A single full-width column also
        // remains readable in the standalone window.
        muxc::ColumnDefinition driveColumn;
        driveColumn.Width(GridLength{1, GridUnitType::Star});
        drivesGrid.ColumnDefinitions().Append(driveColumn);
        uint32_t driveIndex = 0;
        for (auto const& drive : data.drives) {
            muxc::RowDefinition row;
            row.Height(GridLength{1, GridUnitType::Auto});
            drivesGrid.RowDefinitions().Append(row);
            auto driveButton = BetterPanelMakeDriveButton(
                drive.name, drive.path, drive.freeBytes, drive.totalBytes,
                std::weak_ptr<BetterPanelState>(state));
            muxc::Grid::SetRow(driveButton, driveIndex);
            drivesGrid.Children().Append(driveButton);
            ++driveIndex;
        }
        content.Children().Append(drivesGrid);
    }

    muxc::StackPanel listSwitch;
    listSwitch.Orientation(muxc::Orientation::Horizontal);
    listSwitch.Spacing(6);
    listSwitch.Margin(Thickness{2, 10, 0, 3});
    auto makeSwitchButton =
        [state, showFavorites](PCWSTR label, PCWSTR glyph,
                               bool favoritesView) {
            muxp::ToggleButton button;
            muxc::StackPanel buttonContent;
            buttonContent.Orientation(muxc::Orientation::Horizontal);
            buttonContent.Spacing(6);
            muxc::FontIcon icon;
            icon.Glyph(glyph);
            icon.FontSize(13);
            buttonContent.Children().Append(icon);
            muxc::TextBlock text;
            text.Text(label);
            text.FontSize(12);
            buttonContent.Children().Append(text);
            button.Content(buttonContent);
            button.MinWidth(92);
            button.Height(32);
            button.Padding(Thickness{10, 4, 10, 4});
            bool selected = showFavorites == favoritesView;
            button.IsChecked(selected);
            button.IsHitTestVisible(!selected);
            std::weak_ptr<BetterPanelState> weakState = state;
            button.Click([weakState, favoritesView](auto const&,
                                                    RoutedEventArgs const&) {
                Wh_SetIntValue(L"betterPanelHomeList",
                               favoritesView ? 1 : 0);
                if (auto state = weakState.lock();
                    state && !state->unloaded) {
                    state->homeContentLoaded = false;
                    auto dispatcher = state->dispatcher;
                    dispatcher.TryEnqueue([weakState]() {
                        if (auto state = weakState.lock();
                            state && !state->unloaded) {
                            BetterPanelPopulateHome(state);
                        }
                    });
                }
            });
            return button;
        };
    listSwitch.Children().Append(
        makeSwitchButton(L"Recent", L"\uE823", false));
    listSwitch.Children().Append(
        makeSwitchButton(L"Favorites", L"\uE734", true));
    content.Children().Append(listSwitch);

    if (!data.locations.empty()) {
        for (auto const& location : data.locations) {
            content.Children().Append(
                BetterPanelMakeHomeLocationButton(
                    location, std::weak_ptr<BetterPanelState>(state)));
        }
    } else {
        muxc::TextBlock emptyText;
        emptyText.Text(showFavorites ? L"No favorite files yet"
                                     : L"No recent folders yet");
        emptyText.FontSize(12);
        emptyText.Opacity(0.65);
        emptyText.Margin(Thickness{2, 6, 0, 0});
        content.Children().Append(emptyText);
    }
    state->homeContentLoading = false;
    state->homeContentLoaded = true;
    if (state->homeWasVisible) {
        BetterPanelFinishStartupLoading(state);
    }
}

void BetterPanelPopulateHome(std::shared_ptr<BetterPanelState> const& state) {
    if (!state || state->unloaded || state->homeContentLoaded ||
        state->homeContentLoading) {
        return;
    }
    auto content = state->homeContent.get();
    if (!content) return;

    state->homeContentLoading = true;
    uint64_t generation = ++state->homeContentGeneration;
    bool showFavorites = Wh_GetIntValue(L"betterPanelHomeList", 0) == 1;
    content.Children().Clear();
    muxc::StackPanel loading;
    loading.Orientation(muxc::Orientation::Horizontal);
    loading.Spacing(8);
    loading.Margin(Thickness{2, 8, 0, 0});
    muxc::ProgressRing loadingRing;
    loadingRing.Width(20);
    loadingRing.Height(20);
    loadingRing.IsActive(true);
    muxa::AutomationProperties::SetName(loadingRing,
                                        L"Loading This PC");
    loading.Children().Append(loadingRing);
    muxc::TextBlock loadingText;
    loadingText.Text(L"Loading This PC…");
    loadingText.FontSize(12);
    loadingText.Opacity(0.70);
    loading.Children().Append(loadingText);
    content.Children().Append(loading);

    auto weakState = std::weak_ptr<BetterPanelState>(state);
    auto dispatcher = state->dispatcher;
    BetterPanelStartWorker([weakState, dispatcher, showFavorites,
                            generation]() {
        auto data = BetterPanelGatherHomeData(showFavorites);
        if (BetterPanelWorkerStopping()) return;
        bool queued = dispatcher.TryEnqueue(
            [weakState, generation, data = std::move(data)]() {
                auto state = weakState.lock();
                if (!state || state->unloaded ||
                    state->homeContentGeneration != generation) {
                    return;
                }
                BetterPanelRenderHome(state, data);
            });
        if (!queued) {
            // No XAML work is performed here; this only allows a future
            // refresh if the dispatcher remains alive.
            if (auto state = weakState.lock()) {
                state->homeContentLoading = false;
            }
        }
    });
}

std::vector<std::wstring> BetterPanelSiblingAudioFiles(
    std::wstring const& path) {
    std::vector<std::wstring> files;
    std::wstring folder = BetterPanelArchiveParent(path);
    if (folder.empty()) return files;
    std::wstring pattern = folder + L"\\*";
    WIN32_FIND_DATAW data{};
    HANDLE find = FindFirstFileExW(pattern.c_str(), FindExInfoBasic, &data,
                                   FindExSearchNameMatch, nullptr,
                                   FIND_FIRST_EX_LARGE_FETCH);
    if (find == INVALID_HANDLE_VALUE) return files;
    do {
        if (!(data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
            std::wstring candidate = folder + L"\\" + data.cFileName;
            if (BetterPanelIsAudioFile(candidate)) files.push_back(candidate);
        }
    } while (FindNextFileW(find, &data));
    FindClose(find);
    std::sort(files.begin(), files.end(), [](auto const& left, auto const& right) {
        return _wcsicmp(left.c_str(), right.c_str()) < 0;
    });
    return files;
}

bool BetterPanelSelectPathInActiveView(std::wstring const& path,
                                       HWND explorerWindow) {
    BetterPanelExplorerWindowScope explorerWindowScope(explorerWindow);
    HWND tab = BetterPanelGetFocusedTabWindow();
    auto browser = BetterPanelGetShellBrowser(tab);
    if (!browser) return false;
    winrt::com_ptr<IShellView> shellView;
    if (FAILED(browser->QueryActiveShellView(shellView.put())) || !shellView)
        return false;
    winrt::com_ptr<IFolderView2> folderView;
    if (FAILED(shellView->QueryInterface(IID_PPV_ARGS(folderView.put()))) ||
        !folderView) return false;
    winrt::com_ptr<IShellFolder> folder;
    if (FAILED(folderView->GetFolder(IID_PPV_ARGS(folder.put()))) || !folder)
        return false;
    std::wstring name = BetterPanelFileName(path);
    ULONG eaten = 0;
    DWORD attributes = 0;
    PIDLIST_RELATIVE child = nullptr;
    if (FAILED(folder->ParseDisplayName(nullptr, nullptr, name.data(), &eaten,
                                        &child, &attributes)) || !child)
        return false;
    HRESULT result = shellView->SelectItem(
        child, SVSI_DESELECTOTHERS | SVSI_SELECT | SVSI_FOCUSED |
                   SVSI_ENSUREVISIBLE);
    CoTaskMemFree(child);
    return SUCCEEDED(result);
}

void BetterPanelPlayAdjacent(
    std::shared_ptr<BetterPanelState> const& state, int direction) {
    if (!state || state->selectedPath.empty()) return;
    std::wstring currentPath = state->selectedPath;
    uint64_t generation = ++state->adjacentAudioGeneration;
    bool shuffle = g_betterShuffleEnabled;
    auto dispatcher = state->dispatcher;
    std::weak_ptr<BetterPanelState> weakState = state;
    BetterPanelSetStatus(state->status, L"Finding audio files…");
    BetterPanelStartWorker([weakState, dispatcher, currentPath, generation,
                            direction, shuffle]() {
        auto files = BetterPanelSiblingAudioFiles(currentPath);
        if (BetterPanelWorkerStopping()) return;
        dispatcher.TryEnqueue([weakState, currentPath, generation, direction,
                               shuffle, files = std::move(files)]() mutable {
            auto state = weakState.lock();
            if (!state || state->unloaded ||
                state->adjacentAudioGeneration != generation ||
                _wcsicmp(state->selectedPath.c_str(),
                         currentPath.c_str()) != 0) return;
            if (files.empty()) {
                BetterPanelSetStatus(state->status,
                                     L"No other audio files found");
                return;
            }
            auto current = std::find_if(
                files.begin(), files.end(), [&](auto const& item) {
                    return _wcsicmp(item.c_str(), currentPath.c_str()) == 0;
                });
            size_t index = current == files.end()
                               ? 0
                               : static_cast<size_t>(current - files.begin());
            if (shuffle && files.size() > 1) {
                std::random_device random;
                std::mt19937 generator(random());
                std::uniform_int_distribution<size_t> pick(0,
                                                            files.size() - 2);
                size_t selected = pick(generator);
                if (selected >= index) ++selected;
                index = selected;
            } else if (direction < 0) {
                index = index == 0 ? files.size() - 1 : index - 1;
            } else {
                index = (index + 1) % files.size();
            }
            std::wstring next = files[index];
            if (!BetterPanelSelectPathInActiveView(
                    next, state->explorerWindow)) {
                BetterPanelSetStatus(state->status,
                                     L"Couldn't select the next audio file");
                return;
            }
            auto dispatcher = state->dispatcher;
            if (!dispatcher.TryEnqueue([weakState, next, generation]() {
                    auto state = weakState.lock();
                    if (!state || state->unloaded ||
                        state->adjacentAudioGeneration != generation) return;
                    BetterPanelRefresh(state);
                    if (_wcsicmp(state->selectedPath.c_str(), next.c_str()) ==
                        0) {
                        BetterPanelLoadAndPlay(next, state->status);
                    } else {
                        BetterPanelSetStatus(
                            state->status,
                            L"Audio selection changed before playback");
                    }
                })) {
                BetterPanelSetStatus(state->status,
                                     L"Couldn't start the next audio file");
            }
        });
    });
}

FrameworkElement BetterPanelFindOwningDetailsPane(
    FrameworkElement const& host) {
    FrameworkElement detailsRootGrid{nullptr};
    FrameworkElement detailsPaneControl{nullptr};
    for (DependencyObject current = host; current;
         current = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
             GetParent(current)) {
        if (auto element = current.try_as<FrameworkElement>()) {
            if (element.Name() == L"DetailsViewControlRootGrid") {
                detailsRootGrid = element;
            }
            try {
                auto className = winrt::get_class_name(element);
                if (std::wstring_view(className).ends_with(
                        L".DetailsPaneControl")) {
                    detailsPaneControl = element;
                }
            } catch (...) {
            }
        }
    }
    return detailsPaneControl ? detailsPaneControl : detailsRootGrid;
}

void BetterPanelSetExplorerDetailsPaneHidden(BetterPanelState* state,
                                              bool hidden) {
    if (!state) return;
    auto pane = state->explorerDetailsPane.get();
    if (!pane) return;
    try {
        if (hidden && !state->explorerDetailsPaneHidden) {
            state->explorerDetailsPaneVisibility = pane.Visibility();
            pane.Visibility(Visibility::Collapsed);
            state->explorerDetailsPaneHidden = true;
        } else if (!hidden && state->explorerDetailsPaneHidden) {
            pane.Visibility(state->explorerDetailsPaneVisibility);
            state->explorerDetailsPaneHidden = false;
        }
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"Explorer details-pane visibility error %08X: %s",
               ex.code(), ex.message().c_str());
    }
}

void BetterPanelAddInsightRow(
    muxc::StackPanel const& panel,
    std::wstring const& label,
    std::wstring const& value,
    winrt::weak_ref<muxc::TextBlock> weakStatus) {
    if (value.empty()) return;
    muxc::Grid row;
    row.ColumnSpacing(8);
    muxc::ColumnDefinition labelColumn;
    labelColumn.Width(GridLength{112, GridUnitType::Pixel});
    muxc::ColumnDefinition valueColumn;
    valueColumn.Width(GridLength{1, GridUnitType::Star});
    row.ColumnDefinitions().Append(labelColumn);
    row.ColumnDefinitions().Append(valueColumn);

    muxc::TextBlock labelText;
    labelText.Text(label);
    labelText.FontSize(11);
    labelText.Opacity(0.72);
    labelText.VerticalAlignment(VerticalAlignment::Center);
    row.Children().Append(labelText);

    auto valueButton = BetterPanelMakeButton(L"");
    muxc::TextBlock valueText;
    valueText.Text(value);
    valueText.TextWrapping(TextWrapping::Wrap);
    valueText.TextAlignment(TextAlignment::Right);
    valueButton.Content(valueText);
    valueButton.FontSize(11);
    valueButton.Padding(Thickness{6, 3, 6, 3});
    valueButton.HorizontalContentAlignment(HorizontalAlignment::Right);
    valueButton.HorizontalAlignment(HorizontalAlignment::Stretch);
    muxc::Grid::SetColumn(valueButton, 1);
    valueButton.Click(
        [value, weakStatus](winrt::Windows::Foundation::IInspectable const&,
                            RoutedEventArgs const&) {
            BetterPanelSetStatus(weakStatus,
                                 BetterPanelCopyText(value) ? L"Detail copied"
                                                            : L"Copy failed");
        });
    row.Children().Append(valueButton);
    panel.Children().Append(row);
}

std::wstring BetterPanelTrimMetadataValue(std::wstring value) {
    auto first = value.find_first_not_of(L" \t\r\n");
    if (first == std::wstring::npos) return L"";
    auto last = value.find_last_not_of(L" \t\r\n");
    return value.substr(first, last - first + 1);
}

std::vector<winrt::hstring> BetterPanelSplitMetadataValues(
    std::wstring const& text) {
    std::vector<winrt::hstring> result;
    size_t start = 0;
    while (start <= text.size()) {
        size_t end = text.find_first_of(L",;", start);
        auto value = BetterPanelTrimMetadataValue(
            text.substr(start, end == std::wstring::npos
                                   ? std::wstring::npos
                                   : end - start));
        if (!value.empty()) result.emplace_back(value);
        if (end == std::wstring::npos) break;
        start = end + 1;
    }
    return result;
}

std::wstring BetterPanelJoinMetadataValues(
    winrt::Windows::Foundation::Collections::IIterable<winrt::hstring> const&
        values) {
    std::wstring result;
    for (auto const& value : values) {
        if (value.empty()) continue;
        if (!result.empty()) result += L", ";
        result += value.c_str();
    }
    return result;
}

std::wstring BetterPanelPropertyString(
    winrt::Windows::Foundation::Collections::IMap<
        winrt::hstring, winrt::Windows::Foundation::IInspectable> const& values,
    wchar_t const* name) {
    try {
        if (!values.HasKey(name)) return L"";
        auto property = values.Lookup(name)
                            .try_as<winrt::Windows::Foundation::IPropertyValue>();
        if (!property) return L"";
        if (property.Type() ==
            winrt::Windows::Foundation::PropertyType::String) {
            return property.GetString().c_str();
        }
    } catch (...) {
    }
    return L"";
}

std::wstring BetterPanelPropertyStringArray(
    winrt::Windows::Foundation::Collections::IMap<
        winrt::hstring, winrt::Windows::Foundation::IInspectable> const& values,
    wchar_t const* name) {
    try {
        if (!values.HasKey(name)) return L"";
        auto property = values.Lookup(name)
                            .try_as<winrt::Windows::Foundation::IPropertyValue>();
        if (!property) return L"";
        if (property.Type() ==
            winrt::Windows::Foundation::PropertyType::StringArray) {
            winrt::com_array<winrt::hstring> items;
            property.GetStringArray(items);
            std::wstring result;
            for (auto const& item : items) {
                if (item.empty()) continue;
                if (!result.empty()) result += L", ";
                result += item.c_str();
            }
            return result;
        }
    } catch (...) {
    }
    return L"";
}

std::wstring BetterPanelMetadataRatingText(uint32_t rating) {
    if (rating == 0) return L"";
    if (rating < 25) return L"1";
    if (rating < 50) return L"2";
    if (rating < 75) return L"3";
    if (rating < 99) return L"4";
    return L"5";
}

uint32_t BetterPanelMetadataRatingValue(uint32_t rating) {
    static constexpr uint32_t values[] = {0, 1, 25, 50, 75, 99};
    return rating <= 5 ? values[rating] : 0;
}

std::vector<muxc::TextBox> BetterPanelMetadataEditors(
    std::shared_ptr<BetterPanelState> const& state) {
    std::vector<muxc::TextBox> editors;
    for (auto const& weakEditor :
         {state->metadataTitle, state->metadataArtist, state->metadataAlbum,
          state->metadataGenre, state->metadataYear, state->metadataRating,
          state->metadataTags, state->metadataComments}) {
        if (auto editor = weakEditor.get()) editors.push_back(editor);
    }
    return editors;
}

BetterPanelAudioMetadata BetterPanelCurrentMetadata(
    std::shared_ptr<BetterPanelState> const& state) {
    BetterPanelAudioMetadata data;
    if (auto field = state->metadataTitle.get()) data.title = field.Text();
    if (auto field = state->metadataArtist.get()) data.artist = field.Text();
    if (auto field = state->metadataAlbum.get()) data.album = field.Text();
    if (auto field = state->metadataGenre.get()) data.genre = field.Text();
    if (auto field = state->metadataYear.get()) data.year = field.Text();
    if (auto field = state->metadataRating.get()) data.rating = field.Text();
    if (auto field = state->metadataTags.get()) data.tags = field.Text();
    if (auto field = state->metadataComments.get()) data.comments = field.Text();
    return data;
}

std::wstring BetterPanelFormatMetadata(BetterPanelAudioMetadata const& data) {
    return L"Title: " + data.title + L"\r\nArtist: " + data.artist +
           L"\r\nAlbum: " + data.album + L"\r\nGenre: " + data.genre +
           L"\r\nYear: " + data.year + L"\r\nRating: " + data.rating +
           L"\r\nTags: " + data.tags + L"\r\nComments: " + data.comments;
}

void BetterPanelSetMetadataFields(
    std::shared_ptr<BetterPanelState> const& state,
    BetterPanelAudioMetadata const& data) {
    state->suppressMetadataChanged = true;
    if (auto field = state->metadataTitle.get()) field.Text(data.title);
    if (auto field = state->metadataArtist.get()) field.Text(data.artist);
    if (auto field = state->metadataAlbum.get()) field.Text(data.album);
    if (auto field = state->metadataGenre.get()) field.Text(data.genre);
    if (auto field = state->metadataYear.get()) field.Text(data.year);
    if (auto field = state->metadataRating.get()) field.Text(data.rating);
    if (auto field = state->metadataTags.get()) field.Text(data.tags);
    if (auto field = state->metadataComments.get()) field.Text(data.comments);
    state->suppressMetadataChanged = false;
}

void BetterPanelUpdateMetadataControls(
    std::shared_ptr<BetterPanelState> const& state) {
    for (auto const& editor : BetterPanelMetadataEditors(state)) {
        editor.IsReadOnly(!state->metadataEditing);
    }
    if (auto button = state->metadataEditButton.get()) {
        button.Visibility(!state->metadataEditing && !state->metadataLoading
                              ? Visibility::Visible
                              : Visibility::Collapsed);
    }
    if (auto button = state->metadataSaveButton.get()) {
        button.Visibility(state->metadataEditing ? Visibility::Visible
                                                 : Visibility::Collapsed);
        button.IsEnabled(state->metadataDirty && !state->metadataLoading);
    }
    if (auto button = state->metadataCancelButton.get()) {
        button.Visibility(state->metadataEditing ? Visibility::Visible
                                                 : Visibility::Collapsed);
    }
    if (auto button = state->metadataReloadButton.get()) {
        button.Visibility(!state->metadataEditing && !state->metadataLoading
                              ? Visibility::Visible
                              : Visibility::Collapsed);
    }
}

winrt::fire_and_forget BetterPanelLoadAudioMetadata(
    std::weak_ptr<BetterPanelState> weakState, std::wstring path) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    auto state = weakState.lock();
    if (!state || path.empty() || state->metadataEditing) co_return;
    state->metadataLoading = true;
    BetterPanelUpdateMetadataControls(state);
    if (auto info = state->metadataInfo.get()) info.Text(L"Reading metadata…");
    try {
        auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
        auto music = co_await file.Properties().GetMusicPropertiesAsync();
        auto keys = winrt::single_threaded_vector<winrt::hstring>();
        keys.Append(L"System.Keywords");
        keys.Append(L"System.Comment");
        auto extra = co_await file.Properties().RetrievePropertiesAsync(keys);

        BetterPanelAudioMetadata data;
        data.title = music.Title().c_str();
        data.artist = music.Artist().c_str();
        data.album = music.Album().c_str();
        data.genre = BetterPanelJoinMetadataValues(music.Genre());
        if (music.Year()) data.year = std::to_wstring(music.Year());
        data.rating = BetterPanelMetadataRatingText(music.Rating());
        data.tags = BetterPanelPropertyStringArray(extra, L"System.Keywords");
        data.comments = BetterPanelPropertyString(extra, L"System.Comment");

        state = weakState.lock();
        if (!state || state->unloaded || state->selectedPath != path) co_return;
        state->metadataLoading = false;
        state->metadataLoadedPath = path;
        state->metadataOriginal = data;
        state->metadataCopyText = BetterPanelFormatMetadata(data);
        state->metadataDirty = false;
        BetterPanelSetMetadataFields(state, data);
        BetterPanelUpdateMetadataControls(state);
        if (auto info = state->metadataInfo.get()) {
            info.Text(L"Edit support depends on the audio format and its Windows property handler.");
        }
    } catch (winrt::hresult_error const& ex) {
        state = weakState.lock();
        if (!state || state->selectedPath != path) co_return;
        state->metadataLoading = false;
        BetterPanelUpdateMetadataControls(state);
        if (auto info = state->metadataInfo.get()) {
            info.Text(L"Metadata is unavailable for this audio format.");
        }
        Wh_Log(L"Metadata load error %08X: %s", ex.code(), ex.message().c_str());
    }
}

void BetterPanelBeginMetadataEdit(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state || state->metadataLoading || state->metadataLoadedPath !=
                                               state->selectedPath) {
        return;
    }
    state->metadataEditing = true;
    state->metadataDirty = false;
    BetterPanelUpdateMetadataControls(state);
    if (auto field = state->metadataTitle.get()) field.Focus(FocusState::Programmatic);
    if (auto info = state->metadataInfo.get()) {
        info.Text(L"Rating accepts 0–5. Separate genres and tags with commas.");
    }
}

void BetterPanelCancelMetadataEdit(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state || !state->metadataEditing) return;
    state->metadataEditing = false;
    state->metadataDirty = false;
    state->metadataFocusedEditor = {};
    BetterPanelSetMetadataFields(state, state->metadataOriginal);
    BetterPanelUpdateMetadataControls(state);
    if (auto info = state->metadataInfo.get()) {
        info.Text(L"Changes discarded.");
    }
}

bool BetterPanelParseMetadataNumber(std::wstring text, uint32_t maximum,
                                    uint32_t* value) {
    text = BetterPanelTrimMetadataValue(std::move(text));
    if (text.empty()) {
        *value = 0;
        return true;
    }
    wchar_t* end = nullptr;
    unsigned long parsed = wcstoul(text.c_str(), &end, 10);
    if (!end || *end != L'\0' || parsed > maximum) return false;
    *value = static_cast<uint32_t>(parsed);
    return true;
}

winrt::fire_and_forget BetterPanelSaveAudioMetadata(
    std::weak_ptr<BetterPanelState> weakState) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    auto state = weakState.lock();
    if (!state || !state->metadataEditing || !state->metadataDirty) co_return;
    std::wstring path = state->selectedPath;
    auto data = BetterPanelCurrentMetadata(state);
    uint32_t year = 0;
    uint32_t rating = 0;
    if (!BetterPanelParseMetadataNumber(data.year, 9999, &year)) {
        BetterPanelSetStatus(state->status, L"Year must be a number from 0 to 9999");
        co_return;
    }
    if (!BetterPanelParseMetadataNumber(data.rating, 5, &rating)) {
        BetterPanelSetStatus(state->status, L"Rating must be a number from 0 to 5");
        co_return;
    }

    state->metadataLoading = true;
    BetterPanelUpdateMetadataControls(state);
    if (auto info = state->metadataInfo.get()) info.Text(L"Saving metadata…");
    BetterPanelStopStateMedia(state, path);
    try {
        auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
        auto properties = winrt::single_threaded_map<
            winrt::hstring, winrt::Windows::Foundation::IInspectable>();
        properties.Insert(L"System.Title", winrt::box_value(data.title));
        properties.Insert(L"System.Music.Artist", winrt::box_value(data.artist));
        properties.Insert(L"System.Music.AlbumTitle", winrt::box_value(data.album));
        auto genres = BetterPanelSplitMetadataValues(data.genre);
        properties.Insert(
            L"System.Music.Genre",
            winrt::Windows::Foundation::PropertyValue::CreateStringArray(genres));
        properties.Insert(L"System.Media.Year", winrt::box_value(year));
        properties.Insert(L"System.Rating",
                          winrt::box_value(BetterPanelMetadataRatingValue(rating)));
        auto tags = BetterPanelSplitMetadataValues(data.tags);
        properties.Insert(
            L"System.Keywords",
            winrt::Windows::Foundation::PropertyValue::CreateStringArray(tags));
        properties.Insert(L"System.Comment", winrt::box_value(data.comments));
        co_await file.Properties().SavePropertiesAsync(properties);

        state = weakState.lock();
        if (!state || state->unloaded || state->selectedPath != path) co_return;
        state->metadataLoading = false;
        state->metadataEditing = false;
        state->metadataDirty = false;
        state->metadataFocusedEditor = {};
        BetterPanelUpdateMetadataControls(state);
        if (auto info = state->metadataInfo.get()) info.Text(L"Metadata saved.");
        BetterPanelSetStatus(state->status, L"Audio metadata saved");
        SHChangeNotify(SHCNE_UPDATEITEM, SHCNF_PATHW, path.c_str(), nullptr);
        BetterPanelLoadAudioMetadata(weakState, path);
    } catch (winrt::hresult_error const& ex) {
        state = weakState.lock();
        if (!state || state->selectedPath != path) co_return;
        state->metadataLoading = false;
        BetterPanelUpdateMetadataControls(state);
        if (auto info = state->metadataInfo.get()) {
            info.Text(L"Windows could not write metadata to this file format.");
        }
        BetterPanelSetStatus(state->status, L"Metadata save failed");
        Wh_Log(L"Metadata save error %08X: %s", ex.code(), ex.message().c_str());
    }
}

muxc::TextBox BetterPanelAddMetadataField(
    muxc::StackPanel const& panel, wchar_t const* label,
    wchar_t const* placeholder, bool multiline,
    std::weak_ptr<BetterPanelState> weakState) {
    muxc::Grid row;
    row.ColumnSpacing(8);
    muxc::ColumnDefinition labelColumn;
    labelColumn.Width(GridLength{112, GridUnitType::Pixel});
    muxc::ColumnDefinition editorColumn;
    editorColumn.Width(GridLength{1, GridUnitType::Star});
    row.ColumnDefinitions().Append(labelColumn);
    row.ColumnDefinitions().Append(editorColumn);

    muxc::TextBlock labelText;
    labelText.Text(label);
    labelText.FontSize(11);
    labelText.Opacity(0.72);
    labelText.VerticalAlignment(VerticalAlignment::Center);
    row.Children().Append(labelText);

    muxc::TextBox editor;
    editor.PlaceholderText(placeholder);
    editor.FontSize(12);
    editor.Padding(Thickness{8, 4, 8, 4});
    editor.HorizontalAlignment(HorizontalAlignment::Stretch);
    editor.IsReadOnly(true);
    editor.IsSpellCheckEnabled(false);
    editor.IsTextPredictionEnabled(false);
    if (multiline) {
        editor.AcceptsReturn(true);
        editor.TextWrapping(TextWrapping::Wrap);
        editor.MinHeight(70);
    }
    muxc::Grid::SetColumn(editor, 1);
    editor.TextChanged(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    muxc::TextChangedEventArgs const&) {
            auto state = weakState.lock();
            if (!state || !state->metadataEditing ||
                state->suppressMetadataChanged) {
                return;
            }
            state->metadataDirty = true;
            BetterPanelUpdateMetadataControls(state);
        });
    editor.GotFocus(
        [weakState](winrt::Windows::Foundation::IInspectable const& sender,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            auto field = sender.try_as<muxc::TextBox>();
            if (state && state->metadataEditing && field) {
                state->metadataFocusedEditor = winrt::make_weak(field);
            }
        });
    editor.LostFocus(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            if (auto state = weakState.lock()) {
                state->metadataFocusedEditor = {};
            }
        });
    row.Children().Append(editor);
    panel.Children().Append(row);
    return editor;
}

winrt::fire_and_forget BetterPanelLoadExif(
    std::weak_ptr<BetterPanelState> weakState,
    std::wstring path) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    try {
        auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
        auto properties = co_await file.Properties().GetImagePropertiesAsync();
        auto state = weakState.lock();
        if (!state || state->selectedPath != path ||
            state->insightsLoadedPath != path) {
            co_return;
        }
        auto content = state->insightsContent.get();
        if (!content) co_return;
        muxc::TextBlock heading;
        heading.Text(L"Image EXIF");
        heading.FontWeight(
            winrt::Microsoft::UI::Text::FontWeights::SemiBold());
        heading.Margin(Thickness{0, 6, 0, 0});
        content.Children().Append(heading);
        auto weakStatus = state->detailsCopyHint;
        BetterPanelAddInsightRow(content, L"Dimensions",
            std::to_wstring(properties.Width()) + L" × " +
                std::to_wstring(properties.Height()), weakStatus);
        BetterPanelAddInsightRow(content, L"Camera maker",
                                 properties.CameraManufacturer().c_str(),
                                 weakStatus);
        BetterPanelAddInsightRow(content, L"Camera model",
                                 properties.CameraModel().c_str(), weakStatus);
        if (properties.DateTaken().time_since_epoch().count() != 0) {
            ULARGE_INTEGER value{};
            value.QuadPart = static_cast<ULONGLONG>(
                properties.DateTaken().time_since_epoch().count());
            FILETIME fileTime{value.LowPart, value.HighPart};
            BetterPanelAddInsightRow(content, L"Date taken",
                                     BetterPanelFormatFileTime(fileTime),
                                     weakStatus);
        }
        if (properties.Rating()) {
            BetterPanelAddInsightRow(content, L"Rating",
                                     std::to_wstring(properties.Rating()) +
                                         L" / 100",
                                     weakStatus);
        }
        if (auto latitude = properties.Latitude()) {
            BetterPanelAddInsightRow(content, L"Latitude",
                                     std::to_wstring(latitude.Value()),
                                     weakStatus);
        }
        if (auto longitude = properties.Longitude()) {
            BetterPanelAddInsightRow(content, L"Longitude",
                                     std::to_wstring(longitude.Value()),
                                     weakStatus);
        }
        BetterPanelPruneButtonLayoutSnapshots(state);
        BetterPanelApplyNativeButtonStyle(state, content);
    } catch (winrt::hresult_error const& ex) {
        Wh_Log(L"EXIF load error %08X: %s", ex.code(), ex.message().c_str());
    }
}

void BetterPanelLoadInsights(
    std::shared_ptr<BetterPanelState> const& state,
    std::wstring const& path) {
    auto content = state->insightsContent.get();
    if (!content || path.empty()) return;
    state->insightsLoading = true;
    state->insightsLoadedPath.clear();
    state->hashValue.clear();
    state->detailsCopyText.clear();
    uint64_t generation =
        state->insightsGeneration.fetch_add(1, std::memory_order_relaxed) + 1;
    content.Children().Clear();
    content.Visibility(Visibility::Collapsed);
    if (auto bar = state->insightsLoadingBar.get()) {
        bar.IsIndeterminate(true);
        bar.Visibility(Visibility::Visible);
    }
    if (auto hint = state->detailsCopyHint.get()) {
        hint.Text(L"Select a box to copy");
    }

    auto weakState = std::weak_ptr<BetterPanelState>(state);
    auto dispatcher = state->dispatcher;
    BetterPanelStartWorker([weakState, dispatcher, path, generation]() {
        SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_BELOW_NORMAL);
        auto data = BetterPanelReadInsightData(path);
        BetterPanelMultiSummary folderSummary;
        bool driveRoot = data.success && data.directory &&
                         PathIsRootW(path.c_str());
        uint64_t driveFree = 0;
        uint64_t driveTotal = 0;
        UINT driveType = DRIVE_UNKNOWN;
        std::wstring driveLabel;
        std::wstring driveFileSystem;
        DWORD driveSerial = 0;
        if (data.success && data.directory) {
            if (driveRoot) {
                driveType = GetDriveTypeW(path.c_str());
                ULARGE_INTEGER available{}, total{}, free{};
                if (GetDiskFreeSpaceExW(path.c_str(), &available, &total,
                                        &free)) {
                    driveFree = free.QuadPart;
                    driveTotal = total.QuadPart;
                    folderSummary.totalSize = driveTotal - driveFree;
                }
                WCHAR label[MAX_PATH]{};
                WCHAR fileSystem[MAX_PATH]{};
                GetVolumeInformationW(path.c_str(), label, ARRAYSIZE(label),
                                      &driveSerial, nullptr, nullptr,
                                      fileSystem, ARRAYSIZE(fileSystem));
                driveLabel = label;
                driveFileSystem = fileSystem;
            } else if (!BetterPanelGetCachedFolderSummary(path,
                                                           folderSummary)) {
                folderSummary = BetterPanelBuildFolderSummary(
                    path, weakState, generation, 500000,
                    GetTickCount64() + 15000);
                BetterPanelCacheFolderSummary(path, folderSummary);
            }
        }
        std::wstring hash;
        if (data.success && !data.directory) {
            hash = BetterPanelSha256(path, weakState, generation);
        }
        if (BetterPanelWorkerStopping()) return;
        dispatcher.TryEnqueue([weakState, path, data = std::move(data),
                               folderSummary = std::move(folderSummary),
                               hash = std::move(hash), generation, driveRoot,
                               driveFree, driveTotal, driveType,
                               driveLabel = std::move(driveLabel),
                               driveFileSystem = std::move(driveFileSystem),
                               driveSerial]() {
            auto state = weakState.lock();
            if (!state || state->unloaded || state->selectedPath != path ||
                state->insightsGeneration.load(std::memory_order_relaxed) !=
                    generation) {
                return;
            }
            auto content = state->insightsContent.get();
            if (!content) return;
            content.Children().Clear();
            content.Visibility(state->insightsCollapsed
                                   ? Visibility::Collapsed : Visibility::Visible);
            if (auto bar = state->insightsLoadingBar.get()) {
                bar.IsIndeterminate(false);
                bar.Visibility(Visibility::Collapsed);
            }
            state->insightsLoading = false;
            state->insightsLoadedPath = path;
            state->hashValue = hash;
            if (!data.success) {
                muxc::TextBlock error;
                error.Text(L"File details unavailable");
                content.Children().Append(error);
                return;
            }
            auto weakStatus = state->detailsCopyHint;
            std::wstring sizeText = data.directory
                                        ? BetterPanelFormatByteSize(
                                              folderSummary.totalSize)
                                        : BetterPanelFormatByteSize(data.size);
            if (data.directory && folderSummary.incomplete) {
                sizeText += L" (partial)";
            }
            std::wstring modifiedText =
                BetterPanelFormatFileTime(data.modified);
            state->detailsCopyText =
                L"Name: " + data.name + L"\r\nFull path: " + data.path +
                L"\r\nType: " +
                (driveRoot ? L"Drive" : (data.directory ? L"Folder" : L"File")) +
                L"\r\n" + (driveRoot ? L"Used space: " : L"File Size: ") +
                sizeText +
                L"\r\nModified: " + modifiedText;
            if (driveRoot) {
                std::wstring driveTypeText = L"Drive";
                switch (driveType) {
                    case DRIVE_FIXED: driveTypeText = L"Local drive"; break;
                    case DRIVE_REMOVABLE: driveTypeText = L"Removable drive"; break;
                    case DRIVE_REMOTE: driveTypeText = L"Network drive"; break;
                    case DRIVE_CDROM: driveTypeText = L"Optical drive"; break;
                    case DRIVE_RAMDISK: driveTypeText = L"RAM drive"; break;
                }
                WCHAR serialText[16]{};
                swprintf_s(serialText, L"%04X-%04X",
                           HIWORD(driveSerial), LOWORD(driveSerial));
                state->detailsCopyText +=
                    L"\r\nFree space: " + BetterPanelFormatByteSize(driveFree) +
                    L"\r\nCapacity: " + BetterPanelFormatByteSize(driveTotal) +
                    (driveLabel.empty() ? L"" : L"\r\nVolume label: " + driveLabel) +
                    (driveFileSystem.empty()
                         ? L""
                         : L"\r\nFile system: " + driveFileSystem) +
                    L"\r\nDrive type: " + driveTypeText +
                    (driveSerial ? L"\r\nSerial number: " +
                                       std::wstring(serialText)
                                 : L"");
            } else if (data.directory) {
                std::wstring types = BetterPanelFormatTypes(folderSummary.types);
                state->detailsCopyText +=
                    L"\r\nFiles: " + std::to_wstring(folderSummary.files) +
                    L"\r\nSubfolders: " +
                    std::to_wstring(folderSummary.folders) +
                    L"\r\nFile types: " + types;
            }
            if (!hash.empty()) {
                state->detailsCopyText += L"\r\nSHA-256: " + hash;
            }
            BetterPanelAddInsightRow(content, L"Name", data.name, weakStatus);
            BetterPanelAddInsightRow(content, L"Full path", data.path,
                                     weakStatus);
            BetterPanelAddInsightRow(content, L"Type",
                                     driveRoot ? L"Drive"
                                               : (data.directory ? L"Folder"
                                                                 : L"File"),
                                     weakStatus);
            BetterPanelAddInsightRow(
                content, driveRoot ? L"Used space" : L"Size",
                sizeText,
                weakStatus);
            if (driveRoot) {
                BetterPanelAddInsightRow(
                    content, L"Free space",
                    BetterPanelFormatByteSize(driveFree), weakStatus);
                BetterPanelAddInsightRow(
                    content, L"Capacity",
                    BetterPanelFormatByteSize(driveTotal), weakStatus);
                if (!driveLabel.empty()) {
                    BetterPanelAddInsightRow(content, L"Volume label",
                                             driveLabel, weakStatus);
                }
                if (!driveFileSystem.empty()) {
                    BetterPanelAddInsightRow(content, L"File system",
                                             driveFileSystem, weakStatus);
                }
                std::wstring driveTypeText = L"Drive";
                switch (driveType) {
                    case DRIVE_FIXED: driveTypeText = L"Local drive"; break;
                    case DRIVE_REMOVABLE: driveTypeText = L"Removable drive"; break;
                    case DRIVE_REMOTE: driveTypeText = L"Network drive"; break;
                    case DRIVE_CDROM: driveTypeText = L"Optical drive"; break;
                    case DRIVE_RAMDISK: driveTypeText = L"RAM drive"; break;
                }
                BetterPanelAddInsightRow(content, L"Drive type",
                                         driveTypeText, weakStatus);
                if (driveSerial) {
                    WCHAR serialText[16]{};
                    swprintf_s(serialText, L"%04X-%04X",
                               HIWORD(driveSerial), LOWORD(driveSerial));
                    BetterPanelAddInsightRow(content, L"Serial number",
                                             serialText, weakStatus);
                }
            }
            BetterPanelAddInsightRow(content, L"Modified",
                                     modifiedText,
                                     weakStatus);
            if (driveRoot) {
                auto driveContent = state->driveContent.get();
                if (!driveContent) return;
                driveContent.Children().Clear();

                WCHAR drives[512]{};
                DWORD driveChars = GetLogicalDriveStringsW(
                    ARRAYSIZE(drives), drives);
                std::vector<std::wstring> otherDrives;
                if (driveChars && driveChars < ARRAYSIZE(drives)) {
                    for (PCWSTR drive = drives; *drive;
                         drive += wcslen(drive) + 1) {
                        if (_wcsicmp(drive, path.c_str()) != 0) {
                            otherDrives.emplace_back(drive);
                        }
                    }
                }
                if (!otherDrives.empty()) {
                    muxc::Grid driveGrid;
                    driveGrid.ColumnSpacing(6);
                    driveGrid.RowSpacing(6);
                    for (int column = 0; column < 2; ++column) {
                        muxc::ColumnDefinition definition;
                        definition.Width(GridLength{1, GridUnitType::Star});
                        driveGrid.ColumnDefinitions().Append(definition);
                    }
                    uint32_t index = 0;
                    for (auto const& otherPath : otherDrives) {
                        if ((index & 1) == 0) {
                            muxc::RowDefinition row;
                            row.Height(GridLength{1, GridUnitType::Auto});
                            driveGrid.RowDefinitions().Append(row);
                        }
                        WCHAR label[MAX_PATH]{};
                        GetVolumeInformationW(otherPath.c_str(), label,
                                              ARRAYSIZE(label), nullptr,
                                              nullptr, nullptr, nullptr, 0);
                        std::wstring name = label[0] ? label : L"Local Disk";
                        name += L" (" + otherPath.substr(0, 2) + L")";
                        auto button = BetterPanelMakeIconButton(
                            name.c_str(), L"\uEDA2");
                        button.HorizontalAlignment(HorizontalAlignment::Stretch);
                        button.HorizontalContentAlignment(HorizontalAlignment::Left);
                        button.Click([weakState, target = otherPath](
                                         auto const&, RoutedEventArgs const&) {
                            BetterPanelNavigateFromHome(weakState, target);
                        });
                        muxc::Grid::SetRow(button, index / 2);
                        muxc::Grid::SetColumn(button, index % 2);
                        driveGrid.Children().Append(button);
                        ++index;
                    }
                    driveContent.Children().Append(driveGrid);
                }

                muxc::TextBlock actionsTitle;
                actionsTitle.Text(L"Drive tools");
                actionsTitle.FontWeight(
                    winrt::Microsoft::UI::Text::FontWeights::SemiBold());
                actionsTitle.Margin(Thickness{0, 4, 0, 0});
                driveContent.Children().Append(actionsTitle);

                muxc::StackPanel actions;
                actions.Orientation(muxc::Orientation::Horizontal);
                actions.Spacing(6);
                if (driveType == DRIVE_FIXED) {
                    WCHAR systemDirectory[MAX_PATH]{};
                    GetSystemDirectoryW(systemDirectory,
                                        ARRAYSIZE(systemDirectory));
                    std::wstring cleanupPath =
                        std::wstring(systemDirectory) + L"\\cleanmgr.exe";
                    if (GetFileAttributesW(cleanupPath.c_str()) !=
                        INVALID_FILE_ATTRIBUTES) {
                        auto cleanup = BetterPanelMakeIconButton(
                            L"Disk Cleanup", L"\uE74D");
                        cleanup.Click([weakState, drivePath = path](auto const&,
                                                                    RoutedEventArgs const&) {
                            auto state = weakState.lock();
                            if (!state) return;
                            std::wstring drive = drivePath.substr(0, 2);
                            std::wstring arguments = L"/d " + drive;
                            ShellExecuteW(state->explorerWindow, L"open",
                                          L"cleanmgr.exe", arguments.c_str(),
                                          nullptr, SW_SHOWNORMAL);
                        });
                        actions.Children().Append(cleanup);
                    }

                    auto optimize = BetterPanelMakeIconButton(
                        L"Optimize", L"\uE9D9");
                    optimize.Click([weakState](auto const&, RoutedEventArgs const&) {
                        auto state = weakState.lock();
                        if (!state) return;
                        ShellExecuteW(state->explorerWindow, L"open",
                                      L"dfrgui.exe", nullptr, nullptr,
                                      SW_SHOWNORMAL);
                    });
                    actions.Children().Append(optimize);
                }

                auto storage = BetterPanelMakeIconButton(
                    L"Storage", L"\uEDA2");
                storage.Click([weakState](auto const&, RoutedEventArgs const&) {
                    auto state = weakState.lock();
                    if (!state) return;
                    ShellExecuteW(state->explorerWindow, L"open",
                                  L"ms-settings:storagesense", nullptr,
                                  nullptr, SW_SHOWNORMAL);
                });
                actions.Children().Append(storage);
                driveContent.Children().Append(actions);
            }
            if (data.directory && !driveRoot) {
                BetterPanelAddInsightRow(content, L"Files",
                                         std::to_wstring(folderSummary.files),
                                         weakStatus);
                BetterPanelAddInsightRow(
                    content, L"Subfolders",
                    std::to_wstring(folderSummary.folders), weakStatus);
                BetterPanelAddInsightRow(
                    content, L"File types",
                    BetterPanelFormatTypes(folderSummary.types), weakStatus);
            }
            if (!hash.empty()) {
                BetterPanelAddInsightRow(content, L"SHA-256", hash, weakStatus);
            }
            if (BetterPanelIsImageFile(path)) {
                BetterPanelLoadExif(weakState, path);
            }
            BetterPanelPruneButtonLayoutSnapshots(state);
            if (auto panel = state->panel.get()) {
                BetterPanelApplyNativeButtonStyle(state, panel);
            }
        });
    });
}

void BetterPanelLoadMultiSummary(
    std::shared_ptr<BetterPanelState> const& state,
    std::vector<std::wstring> const& paths) {
    std::wstring key;
    for (auto const& path : paths) {
        key += path;
        key.push_back(L'\n');
    }
    if (key == state->multiSelectionKey) return;
    state->multiSelectionKey = key;
    uint64_t generation =
        state->insightsGeneration.fetch_add(1, std::memory_order_relaxed) + 1;
    state->multiSummaryLoading = true;
    state->detailsCopyText.clear();
    if (auto content = state->insightsContent.get()) {
        content.Children().Clear();
        BetterPanelAddInsightRow(content, L"Selected items",
                                 std::to_wstring(paths.size()),
                                 state->detailsCopyHint);
        BetterPanelAddInsightRow(content, L"Folder contents",
                                 L"Calculating...", state->detailsCopyHint);
    }
    if (auto text = state->multiSelectionText.get()) {
        text.Text(L"Analyzing " + std::to_wstring(paths.size()) +
                  L" selected items…");
    }
    auto weakState = std::weak_ptr<BetterPanelState>(state);
    auto dispatcher = state->dispatcher;
    BetterPanelStartWorker([weakState, dispatcher, paths, key, generation]() {
        SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_BELOW_NORMAL);
        auto summary =
            BetterPanelBuildMultiSummary(paths, weakState, generation);
        auto formatted = BetterPanelFormatMultiSummary(summary);
        if (BetterPanelWorkerStopping()) return;
        dispatcher.TryEnqueue([weakState, key, summary = std::move(summary),
                               formatted = std::move(formatted)]() {
            auto state = weakState.lock();
            if (!state || state->unloaded || state->multiSelectionKey != key)
                return;
            state->multiSummaryLoading = false;
            if (auto text = state->multiSelectionText.get()) {
                text.Text(L"");
            }
            if (auto content = state->insightsContent.get()) {
                content.Children().Clear();
                auto weakStatus = state->detailsCopyHint;
                std::wstring selected =
                    std::to_wstring(summary.selectedItems);
                std::wstring files = std::to_wstring(summary.files);
                std::wstring folders = std::to_wstring(summary.folders);
                std::wstring size = BetterPanelFormatByteSize(summary.totalSize);
                if (summary.incomplete) size += L" (partial)";
                std::wstring types = BetterPanelFormatTypes(summary.types);
                std::wstring modified = summary.hasDate
                    ? BetterPanelFormatFileTime(summary.oldest) +
                          (CompareFileTime(&summary.oldest, &summary.newest) != 0
                               ? L" – " + BetterPanelFormatFileTime(summary.newest)
                               : L"")
                    : L"Unavailable";
                BetterPanelAddInsightRow(content, L"Selected items", selected,
                                         weakStatus);
                BetterPanelAddInsightRow(content, L"Files", files, weakStatus);
                BetterPanelAddInsightRow(content, L"Folders", folders, weakStatus);
                if (summary.folders) {
                    BetterPanelAddInsightRow(
                        content, L"Files inside",
                        std::to_wstring(summary.containedFiles), weakStatus);
                    BetterPanelAddInsightRow(
                        content, L"Subfolders",
                        std::to_wstring(summary.subfolders), weakStatus);
                }
                BetterPanelAddInsightRow(content, L"Combined size", size,
                                         weakStatus);
                BetterPanelAddInsightRow(content, L"File types", types,
                                         weakStatus);
                BetterPanelAddInsightRow(content, L"Modified", modified,
                                         weakStatus);
                state->detailsCopyText =
                    L"Selected items: " + selected + L"\r\nFiles: " + files +
                    L"\r\nFolders: " + folders +
                    (summary.folders
                         ? L"\r\nFiles inside: " +
                               std::to_wstring(summary.containedFiles) +
                               L"\r\nSubfolders: " +
                               std::to_wstring(summary.subfolders)
                         : L"") +
                    L"\r\nCombined size: " +
                    size + L"\r\nFile types: " + types +
                    L"\r\nModified: " + modified;
                BetterPanelPruneButtonLayoutSnapshots(state);
                BetterPanelApplyNativeButtonStyle(state, content);
            }
        });
    });
}

winrt::fire_and_forget BetterPanelShowLargePreview(
    std::wstring path,
    winrt::weak_ref<FrameworkElement> weakAnchor,
    winrt::weak_ref<muxc::TextBlock> weakStatus) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    try {
        if (path.empty()) {
            BetterPanelSetStatus(weakStatus, L"Select one image first");
            co_return;
        }

        auto file = co_await ws::StorageFile::GetFileFromPathAsync(path);
        auto stream = co_await file.OpenAsync(ws::FileAccessMode::Read);
        winrt::Microsoft::UI::Xaml::Media::Imaging::BitmapImage bitmap;
        bitmap.AutoPlay(true);
        co_await bitmap.SetSourceAsync(stream);

        auto anchor = weakAnchor.get();
        if (!anchor || !anchor.XamlRoot()) {
            co_return;
        }

        auto rootSize = anchor.XamlRoot().Size();
        muxc::Image image;
        image.Source(bitmap);
        image.Stretch(winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
        image.Width(std::max(320.0f, std::min(1100.0f, rootSize.Width - 100)));
        image.Height(std::max(260.0f, std::min(760.0f, rootSize.Height - 180)));

        muxc::ContentDialog dialog;
        dialog.XamlRoot(anchor.XamlRoot());
        dialog.Title(winrt::box_value(BetterPanelFileName(path)));
        dialog.Content(image);
        dialog.CloseButtonText(L"Close");
        dialog.FullSizeDesired(true);
        if (bitmap.IsAnimatedBitmap() && !bitmap.IsPlaying()) {
            bitmap.Play();
        }
        BetterPanelSetStatus(weakStatus, L"");
        co_await dialog.ShowAsync();
    } catch (winrt::hresult_error const& ex) {
        BetterPanelSetStatus(weakStatus, L"Preview unavailable");
        Wh_Log(L"Large preview error %08X: %s", ex.code(),
               ex.message().c_str());
    }
}

void BetterPanelUpdateBulkRenameDialog(
    std::vector<std::wstring> const& paths,
    winrt::weak_ref<muxc::ComboBox> weakMode,
    winrt::weak_ref<muxc::TextBox> weakFirst,
    winrt::weak_ref<muxc::TextBox> weakSecond,
    winrt::weak_ref<muxc::TextBlock> weakPreview,
    winrt::weak_ref<muxc::ContentDialog> weakDialog) {
    auto modePicker = weakMode.get();
    auto firstBox = weakFirst.get();
    auto secondBox = weakSecond.get();
    auto preview = weakPreview.get();
    auto dialog = weakDialog.get();
    if (!modePicker || !firstBox || !secondBox || !preview || !dialog) return;
    int mode = std::max(0, modePicker.SelectedIndex());
    if (mode == 0) {
        firstBox.Header(winrt::box_value(L"Prefix"));
        secondBox.Visibility(Visibility::Collapsed);
    } else if (mode == 1) {
        firstBox.Header(winrt::box_value(L"Suffix"));
        secondBox.Visibility(Visibility::Collapsed);
    } else if (mode == 2) {
        firstBox.Header(winrt::box_value(L"Find"));
        secondBox.Header(winrt::box_value(L"Replace with"));
        secondBox.Visibility(Visibility::Visible);
    } else {
        firstBox.Header(winrt::box_value(L"Base name"));
        secondBox.Header(winrt::box_value(L"Starting number"));
        secondBox.Visibility(Visibility::Visible);
    }

    std::wstring first = firstBox.Text().c_str();
    std::wstring second = secondBox.Text().c_str();
    bool valid = true;
    auto entries = BetterPanelBuildBulkRenameEntries(
        paths, mode, first, second, valid);
    bool changed = false;
    std::wstring text;
    size_t shown = std::min<size_t>(entries.size(), 14);
    for (size_t index = 0; index < shown; ++index) {
        changed = changed ||
                  _wcsicmp(entries[index].oldName.c_str(),
                           entries[index].newName.c_str()) != 0;
        text += entries[index].oldName + L"  →  " +
                entries[index].newName + L"\n";
    }
    if (entries.size() > shown) {
        text += L"+ " + std::to_wstring(entries.size() - shown) +
                L" more\n";
    }
    if (!valid) text += L"\nOne or more resulting names aren't valid.";
    preview.Text(text);
    bool hasRequiredText = mode == 3 || !first.empty();
    dialog.IsPrimaryButtonEnabled(valid && changed && hasRequiredText);
}

winrt::fire_and_forget BetterPanelShowBulkRenameDialog(
    std::weak_ptr<BetterPanelState> weakState) {
    BetterPanelAsyncLifetime asyncLifetime;
    if (BetterPanelWorkerStopping()) co_return;
    auto state = weakState.lock();
    if (!state || state->unloaded) co_return;
    auto paths = BetterPanelGetActiveSelectionPaths(false);
    if (paths.size() < 2) {
        BetterPanelSetStatus(state->status, L"Select multiple items first");
        co_return;
    }
    auto anchor = state->panel.get();
    if (!anchor || !anchor.XamlRoot()) co_return;

    try {
        muxc::StackPanel content;
        content.Spacing(8);

        muxc::ComboBox modePicker;
        modePicker.Header(winrt::box_value(L"Rename style"));
        modePicker.HorizontalAlignment(HorizontalAlignment::Stretch);
        for (PCWSTR label : {L"Add prefix", L"Add suffix",
                             L"Find and replace", L"Numbering"}) {
            muxc::ComboBoxItem item;
            item.Content(winrt::box_value(label));
            modePicker.Items().Append(item);
        }
        modePicker.SelectedIndex(0);
        content.Children().Append(modePicker);

        muxc::TextBox firstBox;
        firstBox.HorizontalAlignment(HorizontalAlignment::Stretch);
        content.Children().Append(firstBox);
        muxc::TextBox secondBox;
        secondBox.HorizontalAlignment(HorizontalAlignment::Stretch);
        secondBox.Text(L"1");
        secondBox.Visibility(Visibility::Collapsed);
        content.Children().Append(secondBox);
        auto trackBulkRenameFocus = [weakState](muxc::TextBox const& box) {
            box.GotFocus(
                [weakState](winrt::Windows::Foundation::IInspectable const& sender,
                            RoutedEventArgs const&) {
                    auto state = weakState.lock();
                    auto editor = sender.try_as<muxc::TextBox>();
                    if (state && editor) {
                        state->transientFocusedEditor = winrt::make_weak(editor);
                    }
                });
            box.LostFocus(
                [weakState](winrt::Windows::Foundation::IInspectable const&,
                            RoutedEventArgs const&) {
                    if (auto state = weakState.lock()) {
                        state->transientFocusedEditor = {};
                    }
                });
        };
        trackBulkRenameFocus(firstBox);
        trackBulkRenameFocus(secondBox);

        muxc::TextBlock previewHeading;
        previewHeading.Text(L"Preview");
        previewHeading.FontWeight(
            winrt::Microsoft::UI::Text::FontWeights::SemiBold());
        content.Children().Append(previewHeading);
        muxc::TextBlock preview;
        preview.FontFamily(winrt::Microsoft::UI::Xaml::Media::FontFamily(
            L"Cascadia Mono, Consolas"));
        preview.FontSize(11);
        preview.TextWrapping(TextWrapping::Wrap);
        muxc::ScrollViewer previewScroll;
        previewScroll.MaxHeight(240);
        previewScroll.VerticalScrollBarVisibility(
            muxc::ScrollBarVisibility::Auto);
        previewScroll.Content(preview);
        content.Children().Append(previewScroll);

        muxc::ContentDialog dialog;
        dialog.XamlRoot(anchor.XamlRoot());
        dialog.Title(winrt::box_value(
            L"Rename " + std::to_wstring(paths.size()) + L" items"));
        dialog.Content(content);
        dialog.PrimaryButtonText(L"Rename");
        dialog.CloseButtonText(L"Cancel");
        dialog.DefaultButton(muxc::ContentDialogButton::Primary);

        auto weakMode = winrt::make_weak(modePicker);
        auto weakFirst = winrt::make_weak(firstBox);
        auto weakSecond = winrt::make_weak(secondBox);
        auto weakPreview = winrt::make_weak(preview);
        auto weakDialog = winrt::make_weak(dialog);
        auto update = [paths, weakMode, weakFirst, weakSecond, weakPreview,
                       weakDialog](auto const&, auto const&) {
            BetterPanelUpdateBulkRenameDialog(
                paths, weakMode, weakFirst, weakSecond, weakPreview,
                weakDialog);
        };
        modePicker.SelectionChanged(update);
        firstBox.TextChanged(update);
        secondBox.TextChanged(update);
        BetterPanelUpdateBulkRenameDialog(paths, weakMode, weakFirst,
                                          weakSecond, weakPreview, weakDialog);

        auto dialogResult = co_await dialog.ShowAsync();
        if (auto current = weakState.lock()) {
            current->transientFocusedEditor = {};
        }
        if (dialogResult != muxc::ContentDialogResult::Primary) co_return;
        bool valid = true;
        auto entries = BetterPanelBuildBulkRenameEntries(
            paths, std::max(0, modePicker.SelectedIndex()),
            std::wstring(firstBox.Text().c_str()),
            std::wstring(secondBox.Text().c_str()), valid);
        if (!valid) {
            BetterPanelSetStatus(state->status, L"The new names aren't valid");
            co_return;
        }
        if (state->timer) state->timer.Stop();
        HRESULT result = BetterPanelBulkRenameItems(entries,
                                                    state->explorerWindow);
        BetterPanelInvalidateExplorerQueryCaches();
        if (result == S_OK) {
            std::wstring refreshFolder;
            for (auto const& entry : entries) {
                if (_wcsicmp(entry.oldName.c_str(), entry.newName.c_str()) == 0) {
                    continue;
                }
                size_t slash = entry.path.find_last_of(L"\\/");
                if (slash == std::wstring::npos) continue;
                std::wstring folder = entry.path.substr(0, slash);
                std::wstring newPath = folder + L"\\" + entry.newName;
                SHChangeNotify(SHCNE_RENAMEITEM,
                               SHCNF_PATHW | SHCNF_FLUSH,
                               entry.path.c_str(), newPath.c_str());
                if (refreshFolder.empty()) refreshFolder = std::move(folder);
            }
            if (!refreshFolder.empty()) {
                BetterPanelRefreshFavoritesViews(state, refreshFolder);
            }
        }
        if (state->timer) state->timer.Start();
        BetterPanelSetStatus(
            state->status,
            result == S_OK ? L"Bulk rename completed"
                           : (result == S_FALSE ? L"Nothing was renamed"
                                                : L"Bulk rename failed"));
        BetterPanelRefresh(state);
    } catch (winrt::hresult_error const& ex) {
        if (auto current = weakState.lock()) {
            current->transientFocusedEditor = {};
            BetterPanelSetStatus(current->status, L"Bulk rename unavailable");
        }
        Wh_Log(L"Bulk rename dialog error %08X: %s", ex.code(),
               ex.message().c_str());
    }
}

muxc::Image BetterPanelFindPreviewImage(DependencyObject const& root) {
    if (!root) {
        return nullptr;
    }
    if (auto image = root.try_as<muxc::Image>()) {
        return image;
    }
    int count = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
        GetChildrenCount(root);
    for (int i = 0; i < count; i++) {
        auto child = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
            GetChild(root, i);
        if (auto image = BetterPanelFindPreviewImage(child)) {
            return image;
        }
    }
    return nullptr;
}

void BetterPanelSetInlinePreviewExpanded(
    std::shared_ptr<BetterPanelState> const& state,
    bool expanded) {
    auto preview = state->nativePreview.get();
    auto image = state->nativePreviewImage.get();
    if (!preview || !image || state->previewExpanded == expanded) {
        return;
    }

    if (expanded) {
        state->previewOriginalHeight = preview.Height();
        state->previewOriginalMinHeight = preview.MinHeight();
        double expandedHeight = std::clamp(preview.ActualHeight() * 1.65,
                                           340.0, 520.0);
        preview.Height(expandedHeight);
        preview.MinHeight(expandedHeight);
        image.Stretch(
            winrt::Microsoft::UI::Xaml::Media::Stretch::UniformToFill);
    } else {
        preview.Height(state->previewOriginalHeight);
        preview.MinHeight(state->previewOriginalMinHeight);
        image.Stretch(winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
    }
    state->previewExpanded = expanded;
}

muxc::StackPanel BetterPanelMakeRow() {
    muxc::StackPanel row;
    row.Orientation(muxc::Orientation::Horizontal);
    row.Spacing(6);
    return row;
}

void BetterPanelUpdateActionWrapping(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state) return;
    auto fit = [](muxc::StackPanel const& buttons,
                  FrameworkElement const& container,
                  double reservedWidth) {
        if (!buttons || !container || container.ActualWidth() < 1) return;
        double required = 0;
        size_t visibleCount = 0;
        for (auto const& child : buttons.Children()) {
            auto element = child.try_as<FrameworkElement>();
            if (!element || element.Visibility() != Visibility::Visible)
                continue;
            double width = element.ActualWidth();
            if (width < 1) width = element.DesiredSize().Width;
            auto margin = element.Margin();
            required += width + margin.Left + margin.Right;
            ++visibleCount;
        }
        if (visibleCount > 1) {
            required += buttons.Spacing() * (visibleCount - 1);
        }
        double available = std::max(0.0, container.ActualWidth() -
                                             reservedWidth);
        buttons.Orientation(required > available + 0.5
                                ? muxc::Orientation::Vertical
                                : muxc::Orientation::Horizontal);
        buttons.HorizontalAlignment(HorizontalAlignment::Left);
    };

    double primaryReserved = 0;
    if (auto deleteButton = state->singleDeleteButton.get();
        deleteButton && deleteButton.Visibility() == Visibility::Visible) {
        primaryReserved = deleteButton.ActualWidth() +
                          deleteButton.Margin().Left + 6;
    }
    fit(state->primaryActionButtons.get(),
        state->primaryActionContainer.get(), primaryReserved);

    double multiReserved = 0;
    if (auto container = state->multiActionRow.get()) {
        // The compact Delete button occupies the grid's right column.
        multiReserved = 44;
        fit(state->multiPrimaryActionButtons.get(), container, multiReserved);
    }
    fit(state->transferActionButtons.get(), state->transferRow.get(), 0);
}

bool BetterPanelContainsTitleText(DependencyObject const& root,
                                  std::wstring_view filename) {
    if (!root) {
        return false;
    }
    if (auto text = root.try_as<muxc::TextBlock>();
        text && text.Text() == filename) {
        return true;
    }
    int count = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
        GetChildrenCount(root);
    for (int i = 0; i < count; i++) {
        if (BetterPanelContainsTitleText(
                winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
                    GetChild(root, i),
                filename)) {
            return true;
        }
    }
    return false;
}

FrameworkElement BetterPanelFindNativeTitleContainer(
    muxc::StackPanel const& host,
    std::wstring_view filename,
    muxc::Grid const& preview) {
    if (!host) {
        return nullptr;
    }
    for (auto const& child : host.Children()) {
        auto element = child.try_as<FrameworkElement>();
        if (!element || element.Name() == L"BetterDetailPanelRoot" ||
            (preview && child == preview)) {
            continue;
        }
        if (BetterPanelContainsTitleText(child, filename)) {
            return element;
        }
    }
    return nullptr;
}

muxc::Button BetterPanelFindShareButton(DependencyObject const& root) {
    if (!root) {
        return nullptr;
    }
    if (auto button = root.try_as<muxc::Button>();
        button && button.Name() == L"shareButton") {
        return button;
    }
    int count = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
        GetChildrenCount(root);
    for (int i = 0; i < count; i++) {
        auto child = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
            GetChild(root, i);
        if (auto result = BetterPanelFindShareButton(child)) {
            return result;
        }
    }
    return nullptr;
}

FrameworkElement BetterPanelFindNativeDetailsSection(
    DependencyObject const& root) {
    if (!root) return nullptr;
    if (auto element = root.try_as<FrameworkElement>();
        element && element.Name() == L"BetterDetailPanelRoot") return nullptr;
    int count = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
        GetChildrenCount(root);
    for (int i = 0; i < count; ++i) {
        auto child = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
            GetChild(root, i);
        if (auto result = BetterPanelFindNativeDetailsSection(child)) {
            return result;
        }
    }
    if (auto element = root.try_as<FrameworkElement>()) {
        try {
            // The automation label is localized, while the native control's
            // Expander structure is stable. This search is scoped to the
            // DetailsViewThumbnail host by the caller.
            if (muxa::AutomationProperties::GetName(element) == L"Details" ||
                element.try_as<muxc::Expander>()) {
                return element;
            }
        } catch (...) {
        }
    }
    return nullptr;
}

void BetterPanelFindNativeInfoBannerCandidate(
    DependencyObject const& root,
    std::vector<DependencyObject> const& hostAncestors,
    FrameworkElement& bestCandidate,
    int& bestDistance) {
    if (!root) return;
    bool marker = false;
    if (auto text = root.try_as<muxc::TextBlock>()) {
        marker = std::wstring(text.Text()).find(
                     L"Select a single file to get more information") !=
                 std::wstring::npos;
    }
    if (auto icon = root.try_as<muxc::FontIcon>()) {
        marker = marker || icon.Glyph() == L"\uE946";
    }
    if (auto element = root.try_as<FrameworkElement>()) {
        if (element.Name() == L"BetterDetailPanelRoot") return;
        try {
            auto automationName =
                std::wstring(muxa::AutomationProperties::GetName(element));
            std::transform(automationName.begin(), automationName.end(),
                           automationName.begin(), towlower);
            marker = marker || automationName == L"information" ||
                     automationName == L"info";
        } catch (...) {
            // Some private Explorer elements reject automation-property
            // queries. They must not abort the recursive XAML-tree search.
        }
    }
    if (marker) {
        DependencyObject current = root;
        // Never fall back to the marker itself. During initial layout the
        // parent banner can still report a zero size; caching the TextBlock or
        // FontIcon at that point hides only the message and leaves the native
        // outline behind permanently. Return no candidate until the complete
        // sized container is available so a later refresh can find it.
        FrameworkElement candidate = nullptr;
        for (int level = 0; level < 8 && current; ++level) {
            // Explorer's empty-selection notice isn't always a Border. On
            // current builds the text and information icon are hosted by a
            // Grid-like FrameworkElement, so requiring Border leaves the
            // outlined container behind after its text is collapsed.
            if (auto element = current.try_as<FrameworkElement>();
                element && element.Visibility() == Visibility::Visible &&
                element.Name() != L"BetterDetailPanelRoot" &&
                element.ActualWidth() > 180 &&
                element.ActualHeight() >= 30 &&
                element.ActualHeight() <= 100) {
                candidate = element;
            }
            auto parent = winrt::Microsoft::UI::Xaml::Media::
                VisualTreeHelper::GetParent(current);
            if (auto parentElement = parent.try_as<FrameworkElement>()) {
                auto name = std::wstring(parentElement.Name());
                if (name == L"DetailsViewThumbnail" ||
                    name == L"BetterDetailPanelRoot") {
                    break;
                }
            }
            current = parent;
        }
        if (candidate) {
            DependencyObject currentCandidate = candidate;
            for (int candidateDepth = 0;
                 candidateDepth < 64 && currentCandidate;
                 ++candidateDepth) {
                for (size_t hostDepth = 0;
                     hostDepth < hostAncestors.size(); ++hostDepth) {
                    if (currentCandidate == hostAncestors[hostDepth]) {
                        int distance = candidateDepth +
                                       static_cast<int>(hostDepth);
                        if (distance < bestDistance) {
                            bestDistance = distance;
                            bestCandidate = candidate;
                        }
                        currentCandidate = nullptr;
                        break;
                    }
                }
                if (currentCandidate) {
                    currentCandidate =
                        winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
                            GetParent(currentCandidate);
                }
            }
        }
    }
    int count = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
        GetChildrenCount(root);
    for (int index = 0; index < count; ++index) {
        BetterPanelFindNativeInfoBannerCandidate(
            winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::GetChild(
                root, index),
            hostAncestors, bestCandidate, bestDistance);
    }
}

FrameworkElement BetterPanelFindNativeInfoBanner(
    DependencyObject const& root,
    FrameworkElement const& host) {
    if (!root || !host) return nullptr;
    std::vector<DependencyObject> hostAncestors;
    DependencyObject current = host;
    for (int level = 0; level < 64 && current; ++level) {
        hostAncestors.push_back(current);
        current = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
            GetParent(current);
    }
    FrameworkElement bestCandidate = nullptr;
    int bestDistance = INT_MAX;
    BetterPanelFindNativeInfoBannerCandidate(
        root, hostAncestors, bestCandidate, bestDistance);
    return bestCandidate;
}

std::wstring BetterPanelGetActiveFolderParsingName() {
    HWND tab = BetterPanelGetFocusedTabWindow();
    auto browser = BetterPanelGetShellBrowser(tab);
    if (!browser) return {};

    winrt::com_ptr<IShellView> shellView;
    if (FAILED(browser->QueryActiveShellView(shellView.put())) || !shellView) {
        return {};
    }
    winrt::com_ptr<IFolderView2> folderView;
    if (FAILED(shellView->QueryInterface(IID_PPV_ARGS(folderView.put()))) ||
        !folderView) {
        return {};
    }
    winrt::com_ptr<IShellItem> folderItem;
    if (FAILED(folderView->GetFolder(IID_PPV_ARGS(folderItem.put()))) ||
        !folderItem) {
        return {};
    }
    PWSTR rawName = nullptr;
    if (FAILED(folderItem->GetDisplayName(SIGDN_DESKTOPABSOLUTEPARSING,
                                          &rawName)) ||
        !rawName) {
        return {};
    }
    std::wstring name(rawName);
    CoTaskMemFree(rawName);
    return name;
}

std::wstring BetterPanelGetActiveFolderDisplayName() {
    HWND tab = BetterPanelGetFocusedTabWindow();
    auto browser = BetterPanelGetShellBrowser(tab);
    if (!browser) return {};
    winrt::com_ptr<IShellView> shellView;
    if (FAILED(browser->QueryActiveShellView(shellView.put())) || !shellView) {
        return {};
    }
    winrt::com_ptr<IFolderView2> folderView;
    if (FAILED(shellView->QueryInterface(IID_PPV_ARGS(folderView.put()))) ||
        !folderView) {
        return {};
    }
    winrt::com_ptr<IShellItem> folderItem;
    if (FAILED(folderView->GetFolder(IID_PPV_ARGS(folderItem.put()))) ||
        !folderItem) {
        return {};
    }
    PWSTR rawName = nullptr;
    if (FAILED(folderItem->GetDisplayName(SIGDN_NORMALDISPLAY, &rawName)) ||
        !rawName) {
        return {};
    }
    std::wstring name(rawName);
    CoTaskMemFree(rawName);
    return name;
}

bool BetterPanelIsActiveHome() {
    auto parsingName = BetterPanelGetActiveFolderParsingName();
    std::transform(parsingName.begin(), parsingName.end(), parsingName.begin(),
                   towlower);
    // Explorer Home (formerly Quick access) is a virtual shell namespace.
    if (parsingName.find(
            L"{679f85cb-0220-4080-b29b-5540cc05aab6}") !=
        std::wstring::npos) {
        return true;
    }
    auto displayName = BetterPanelGetActiveFolderDisplayName();
    return _wcsicmp(displayName.c_str(), L"Home") == 0;
}

bool BetterPanelPointIsInActiveShellView(POINT point, HWND* target = nullptr) {
    HWND tab = BetterPanelGetFocusedTabWindow();
    auto browser = BetterPanelGetShellBrowser(tab);
    if (!browser) return false;
    winrt::com_ptr<IShellView> shellView;
    if (FAILED(browser->QueryActiveShellView(shellView.put())) || !shellView) {
        return false;
    }
    HWND viewWindow = nullptr;
    if (FAILED(shellView->GetWindow(&viewWindow)) || !viewWindow) return false;
    HWND pointWindow = WindowFromPoint(point);
    if (!pointWindow ||
        (pointWindow != viewWindow && !IsChild(viewWindow, pointWindow))) {
        return false;
    }
    if (target) *target = pointWindow;
    return true;
}

std::wstring BetterPanelFolderAtPoint(POINT point, IShellBrowser* browser) {
    if (!browser) return {};
    std::wstring parent = BetterPanelExtractFolderPath(browser);
    if (parent.empty() || PathIsUNCW(parent.c_str())) return {};

    winrt::com_ptr<IUIAutomation> automation;
    if (FAILED(CoCreateInstance(CLSID_CUIAutomation, nullptr,
                                CLSCTX_INPROC_SERVER,
                                IID_PPV_ARGS(automation.put()))) ||
        !automation) {
        return {};
    }
    winrt::com_ptr<IUIAutomationElement> element;
    if (FAILED(automation->ElementFromPoint(point, element.put())) ||
        !element) {
        return {};
    }
    winrt::com_ptr<IUIAutomationTreeWalker> walker;
    if (FAILED(automation->get_ControlViewWalker(walker.put())) || !walker) {
        return {};
    }

    for (int level = 0; level < 10 && element; ++level) {
        CONTROLTYPEID type = 0;
        element->get_CurrentControlType(&type);
        if (type == UIA_ListItemControlTypeId ||
            type == UIA_DataItemControlTypeId) {
            BSTR rawName = nullptr;
            if (SUCCEEDED(element->get_CurrentName(&rawName)) && rawName &&
                *rawName) {
                std::wstring candidate = parent;
                if (!candidate.ends_with(L'\\')) candidate += L'\\';
                candidate += rawName;
                SysFreeString(rawName);
                DWORD attributes = GetFileAttributesW(candidate.c_str());
                if (attributes != INVALID_FILE_ATTRIBUTES &&
                    (attributes & FILE_ATTRIBUTE_DIRECTORY)) {
                    return candidate;
                }
            } else if (rawName) {
                SysFreeString(rawName);
            }
        }
        winrt::com_ptr<IUIAutomationElement> parentElement;
        if (FAILED(walker->GetParentElement(element.get(),
                                            parentElement.put()))) {
            break;
        }
        element = std::move(parentElement);
    }
    return {};
}

void BetterPanelHandleMiddleClick(MSG const* message) {
    if (!message || message->message != WM_MBUTTONUP) return;

    HWND tab = BetterPanelGetFocusedTabWindow();
    auto browser = BetterPanelGetShellBrowser(tab);
    if (!browser) return;
    if (!BetterPanelPointIsInActiveShellView(message->pt)) return;

    auto path = BetterPanelFolderAtPoint(message->pt, browser);
    if (path.empty()) return;

    SHELLEXECUTEINFOW executeInfo{sizeof(executeInfo)};
    executeInfo.fMask = SEE_MASK_ASYNCOK | SEE_MASK_FLAG_NO_UI;
    executeInfo.hwnd = GetAncestor(tab, GA_ROOT);
    executeInfo.lpVerb = L"opennewtab";
    executeInfo.lpFile = path.c_str();
    executeInfo.nShow = SW_SHOWNORMAL;
    ShellExecuteExW(&executeInfo);
}

void BetterPanelUnwatchNativeDetailsVisibility(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state || !state->nativeDetailsVisibilityToken) return;
    if (auto hooked = state->nativeDetailsVisibilityHook.get()) {
        try {
            hooked.UnregisterPropertyChangedCallback(
                UIElement::VisibilityProperty(),
                state->nativeDetailsVisibilityToken);
        } catch (...) {
        }
    }
    state->nativeDetailsVisibilityHook = {};
    state->nativeDetailsVisibilityToken = 0;
}

void BetterPanelWatchNativeDetailsVisibility(
    std::shared_ptr<BetterPanelState> const& state,
    FrameworkElement const& section) {
    if (!state || !section) return;
    if (state->nativeDetailsVisibilityHook.get() == section &&
        state->nativeDetailsVisibilityToken) {
        return;
    }

    BetterPanelUnwatchNativeDetailsVisibility(state);
    std::weak_ptr<BetterPanelState> weakState = state;
    auto weakSection = winrt::make_weak(section);
    state->nativeDetailsVisibilityToken =
        section.RegisterPropertyChangedCallback(
            UIElement::VisibilityProperty(),
            [weakState, weakSection](DependencyObject const&,
                                     DependencyProperty const&) {
                auto currentState = weakState.lock();
                auto currentSection = weakSection.get();
                if (!currentState || currentState->unloaded ||
                    !currentSection) {
                    return;
                }
                if (currentSection.Visibility() != Visibility::Collapsed) {
                    currentSection.Visibility(Visibility::Collapsed);
                }
            });
    state->nativeDetailsVisibilityHook = weakSection;
}

void BetterPanelHideNativeDetails(
    std::shared_ptr<BetterPanelState> const& state) {
    auto section = state->nativeDetailsSection.get();
    auto host = state->host.get();
    if (!host || !host.XamlRoot()) return;

    auto rootContent = host.XamlRoot().Content();
    if (!rootContent) return;

    bool attachedToRoot = false;
    for (DependencyObject current = section; current;
         current = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
             GetParent(current)) {
        if (current == rootContent) {
            attachedToRoot = true;
            break;
        }
    }

    // Explorer can replace the native Details section when the folder
    // template changes. The native section is a sibling of the thumbnail host,
    // not its child, so validate against the XAML root. Keep the cached element
    // while it remains attached and only rescan after replacement.
    auto currentSection = attachedToRoot
                              ? section
                              : BetterPanelFindNativeDetailsSection(rootContent);
    if (currentSection && currentSection != section) {
        section = currentSection;
        state->nativeDetailsSection = winrt::make_weak(section);
        state->nativeDetailsVisibility = section.Visibility();
    }
    if (section) {
        BetterPanelWatchNativeDetailsVisibility(state, section);
        section.Visibility(Visibility::Collapsed);
    }
}

void BetterPanelEnsureShareActions(
    std::shared_ptr<BetterPanelState> const& state) {
    if (state->shareActionRow.get()) {
        return;
    }
    ULONGLONG now = GetTickCount64();
    if (state->shareLastSearchTick != 0 &&
        now - state->shareLastSearchTick < 1500) {
        return;
    }
    state->shareLastSearchTick = now;
    auto host = state->host.get();
    if (!host || !host.XamlRoot()) {
        return;
    }
    auto share = BetterPanelFindShareButton(host.XamlRoot().Content());
    if (!share) {
        return;
    }
    auto parent = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
                      GetParent(share)
                      .try_as<muxc::Panel>();
    if (!parent) {
        return;
    }
    uint32_t shareIndex = 0;
    if (!parent.Children().IndexOf(share, shareIndex)) {
        return;
    }

    auto weakStatus = state->status;
    muxc::Grid row;
    row.Name(L"BetterDetailPanelShareActions");
    row.HorizontalAlignment(HorizontalAlignment::Stretch);
    row.Margin(share.Margin());
    muxc::ColumnDefinition primaryActionsColumn;
    primaryActionsColumn.Width(GridLength{1, GridUnitType::Star});
    muxc::ColumnDefinition deleteActionColumn;
    deleteActionColumn.Width(GridLength{1, GridUnitType::Auto});
    row.ColumnDefinitions().Append(primaryActionsColumn);
    row.ColumnDefinitions().Append(deleteActionColumn);
    muxc::Grid::SetRow(row, muxc::Grid::GetRow(share));
    muxc::Grid::SetColumn(row, muxc::Grid::GetColumn(share));
    muxc::Grid::SetRowSpan(row, muxc::Grid::GetRowSpan(share));
    muxc::Grid::SetColumnSpan(row, muxc::Grid::GetColumnSpan(share));

    state->nativeShareButton = winrt::make_weak(share);
    state->nativeShareParent = winrt::make_weak(parent);
    state->nativeShareIndex = shareIndex;
    state->nativeShareMargin = share.Margin();
    state->nativeShareVisibility = share.Visibility();

    // Use Explorer's own Share control as the visual and sizing reference for
    // the primary file actions and the compact overlay controls. Leave the
    // native button in Explorer's own visual tree; its sharing view model owns
    // popup state that can be refreshed after sleep or hibernation.
    share.UpdateLayout();
    double primaryActionWidth = share.ActualWidth();
    if (primaryActionWidth < 1) primaryActionWidth = 80;
    auto nativeActionStyle = share.Style();
    state->nativeButtonStyle = nativeActionStyle;
    auto applyNativeButtonVisual = [&](muxc::Button const& button) {
        button.Style(nativeActionStyle);
        button.Background(share.Background());
        button.BorderBrush(share.BorderBrush());
        button.BorderThickness(share.BorderThickness());
        auto cornerRadius = share.CornerRadius();
        if (cornerRadius.TopLeft <= 0 && cornerRadius.TopRight <= 0 &&
            cornerRadius.BottomRight <= 0 && cornerRadius.BottomLeft <= 0) {
            cornerRadius = CornerRadius{4};
        }
        button.CornerRadius(cornerRadius);
    };
    if (auto expand = state->previewExpandButton.get()) {
        applyNativeButtonVisual(expand);
        BetterPanelApplyNativeButtonStyle(state, expand);
    }
    if (auto expand = state->multiPreviewExpandButton.get()) {
        applyNativeButtonVisual(expand);
        BetterPanelApplyNativeButtonStyle(state, expand);
    }
    if (auto expand = state->gifExpandButton.get()) {
        applyNativeButtonVisual(expand);
        BetterPanelApplyNativeButtonStyle(state, expand);
    }

    auto primaryActions = BetterPanelMakeRow();
    primaryActions.HorizontalAlignment(HorizontalAlignment::Left);
    row.Children().Append(primaryActions);
    state->primaryActionContainer =
        winrt::make_weak(row.as<FrameworkElement>());
    state->primaryActionButtons = winrt::make_weak(primaryActions);
    auto weakState = std::weak_ptr<BetterPanelState>(state);
    row.SizeChanged(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    SizeChangedEventArgs const&) {
            if (auto state = weakState.lock()) {
                BetterPanelUpdateActionWrapping(state);
            }
        });

    auto actionIconBrush =
        winrt::Microsoft::UI::Xaml::Media::SolidColorBrush(
            winrt::Windows::UI::ColorHelper::FromArgb(255, 64, 200, 255));

    double shareHeight = share.ActualHeight();
    if (shareHeight < 1) shareHeight = 30;

    auto shareButton = BetterPanelMakeIconButton(L"Share", L"\uE72D");
    applyNativeButtonVisual(shareButton);
    shareButton.Width(primaryActionWidth);
    shareButton.Height(shareHeight);
    shareButton.Padding(Thickness{6, 4, 6, 4});
    state->shareButton = winrt::make_weak(shareButton);
    auto weakNativeShare = winrt::make_weak(share);
    shareButton.Click(
        [weakNativeShare, weakStatus](auto const&, RoutedEventArgs const&) {
            try {
                auto nativeShare = weakNativeShare.get();
                if (!nativeShare) {
                    BetterPanelSetStatus(weakStatus, L"Share is unavailable");
                    return;
                }
                auto peer = muxap::FrameworkElementAutomationPeer::
                    CreatePeerForElement(nativeShare);
                if (!peer) peer = muxap::ButtonAutomationPeer(nativeShare);
                auto provider = peer.GetPattern(muxap::PatternInterface::Invoke)
                                    .try_as<muxapr::IInvokeProvider>();
                if (!provider) {
                    BetterPanelSetStatus(weakStatus, L"Share is unavailable");
                    return;
                }
                provider.Invoke();
            } catch (...) {
                BetterPanelSetStatus(weakStatus, L"Share is unavailable");
            }
        });
    primaryActions.Children().Append(shareButton);
    share.Visibility(Visibility::Collapsed);

    auto openButton = BetterPanelMakeIconButton(L"Open", L"\uE8E5");
    applyNativeButtonVisual(openButton);
    openButton.Width(primaryActionWidth);
    openButton.Padding(Thickness{6, 4, 6, 4});
    if (auto content = openButton.Content().try_as<muxc::StackPanel>()) {
        content.Spacing(4);
        if (content.Children().Size() > 0) {
            content.Children().RemoveAt(0);
        }
        muxc::Grid openActionIconHost;
        openActionIconHost.Width(16);
        openActionIconHost.Height(16);

        muxc::FontIcon openActionFallbackIcon;
        openActionFallbackIcon.Glyph(L"\uE7C3");
        openActionFallbackIcon.FontSize(13);
        state->openActionFallbackIcon =
            winrt::make_weak(openActionFallbackIcon);
        openActionIconHost.Children().Append(openActionFallbackIcon);

        muxc::Image openActionIcon;
        openActionIcon.Width(16);
        openActionIcon.Height(16);
        openActionIcon.Stretch(
            winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
        state->openActionIcon = winrt::make_weak(openActionIcon);
        openActionIconHost.Children().Append(openActionIcon);
        content.Children().InsertAt(0, openActionIconHost);
    }
    if (!state->selectedPath.empty()) {
        BetterPanelLoadOpenActionIcon(
            std::weak_ptr<BetterPanelState>(state), state->selectedPath);
    }
    openButton.Height(shareHeight);
    state->openButton = winrt::make_weak(openButton);
    openButton.Click(
        [weakState, weakStatus](winrt::Windows::Foundation::IInspectable const&,
                               RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            auto path = state->selectedPath;
            auto result = path.empty() ? 0 : reinterpret_cast<INT_PTR>(
                ShellExecuteW(state->explorerWindow, L"open", path.c_str(),
                              nullptr, nullptr, SW_SHOWNORMAL));
            BetterPanelSetStatus(weakStatus,
                                 result > 32 ? L"" : L"Open failed");
        });
    primaryActions.Children().Append(openButton);

    auto openWithButton = BetterPanelMakeIconButton(L"Open with", L"\uE7AC");
    applyNativeButtonVisual(openWithButton);
    openWithButton.Width(primaryActionWidth + 12);
    openWithButton.Padding(Thickness{6, 4, 6, 4});
    if (auto content = openWithButton.Content().try_as<muxc::StackPanel>()) {
        content.Spacing(4);
        if (content.Children().Size() > 0) {
            content.Children().RemoveAt(0);
        }
        muxc::Grid openWithIcon;
        openWithIcon.Width(16);
        openWithIcon.Height(16);
        muxc::FontIcon openWithBase;
        openWithBase.Glyph(L"\uE7AC");
        openWithBase.FontSize(13);
        openWithBase.Foreground(share.Foreground());
        openWithIcon.Children().Append(openWithBase);
        muxc::Border openWithAccent;
        openWithAccent.Width(5);
        openWithAccent.Height(5);
        openWithAccent.CornerRadius(CornerRadius{2.5});
        openWithAccent.Background(actionIconBrush);
        openWithAccent.HorizontalAlignment(HorizontalAlignment::Left);
        openWithAccent.VerticalAlignment(VerticalAlignment::Bottom);
        openWithAccent.Margin(Thickness{0, 0, 0, 1});
        openWithIcon.Children().Append(openWithAccent);
        content.Children().InsertAt(0, openWithIcon);
        if (content.Children().Size() > 1) {
            if (auto text = content.Children().GetAt(1).try_as<muxc::TextBlock>()) {
                text.FontSize(11);
            }
        }
    }
    openWithButton.Height(shareHeight);
    state->openWithButton = winrt::make_weak(openWithButton);
    openWithButton.Click(
        [weakState, weakStatus](winrt::Windows::Foundation::IInspectable const&,
                               RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            auto path = state->selectedPath;
            if (path.empty()) {
                BetterPanelSetStatus(weakStatus, L"Select one file first");
                return;
            }
            OPENASINFO info{path.c_str(), nullptr, OAIF_EXEC};
            HRESULT hr = SHOpenWithDialog(state->explorerWindow, &info);
            BetterPanelSetStatus(weakStatus,
                                 SUCCEEDED(hr) ? L"" : L"Open With failed");
        });
    primaryActions.Children().Append(openWithButton);

    auto runAsButton = BetterPanelMakeIconButton(L"Run as…", L"\uE7EF");
    applyNativeButtonVisual(runAsButton);
    runAsButton.Padding(Thickness{6, 4, 6, 4});
    if (auto content = runAsButton.Content().try_as<muxc::StackPanel>()) {
        content.Spacing(4);
        if (content.Children().Size() > 0) content.Children().RemoveAt(0);
        muxc::Grid systemIconHost;
        systemIconHost.Width(16);
        systemIconHost.Height(16);
        muxc::FontIcon systemIconFallback;
        systemIconFallback.Glyph(L"\uE756");
        systemIconFallback.FontSize(13);
        systemIconHost.Children().Append(systemIconFallback);
        muxc::Image systemIcon;
        systemIcon.Width(16);
        systemIcon.Height(16);
        systemIcon.Stretch(
            winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
        systemIcon.Visibility(Visibility::Collapsed);
        systemIconHost.Children().Append(systemIcon);
        content.Children().InsertAt(0, systemIconHost);
        BetterPanelLoadHomeLocationIcon(
            winrt::make_weak(systemIcon),
            winrt::make_weak(systemIconFallback),
            BetterPanelSystemExecutable(L"cmd.exe"));
    }
    runAsButton.Height(shareHeight);
    runAsButton.Visibility(Visibility::Collapsed);
    state->runAsButton = winrt::make_weak(runAsButton);
    muxc::MenuFlyout runMenu;
    muxc::MenuFlyoutItem runAdmin;
    runAdmin.Text(L"Run as administrator");
    runAdmin.Click([weakState, weakStatus](auto const&, RoutedEventArgs const&) {
        auto state = weakState.lock();
        if (!state || state->selectedPath.empty()) return;
        HRESULT result = BetterPanelShellLaunch(
            state->explorerWindow, state->selectedPath, L"", true);
        BetterPanelSetStatus(weakStatus,
                             SUCCEEDED(result) ? L"" : L"Run as administrator failed");
    });
    runMenu.Items().Append(runAdmin);
    muxc::MenuFlyoutItem runTerminal;
    runTerminal.Text(L"Run with Terminal");
    runTerminal.Click([weakState, weakStatus](auto const&, RoutedEventArgs const&) {
        auto state = weakState.lock();
        if (!state || state->selectedPath.empty()) return;
        auto folder = BetterPanelContainingFolder(state->selectedPath);
        std::wstring arguments = L"-d " + BetterPanelQuoteCommandArgument(folder);
        HRESULT result = BetterPanelShellLaunch(
            state->explorerWindow, L"wt.exe", arguments, false);
        BetterPanelSetStatus(weakStatus,
                             SUCCEEDED(result) ? L"" : L"Terminal isn't available");
    });
    runMenu.Items().Append(runTerminal);
    muxc::MenuFlyoutItem runTerminalAdmin;
    runTerminalAdmin.Text(L"Run with Terminal as administrator");
    runTerminalAdmin.Click(
        [weakState, weakStatus](auto const&, RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state || state->selectedPath.empty()) return;
            auto folder = BetterPanelContainingFolder(state->selectedPath);
            std::wstring arguments =
                L"-d " + BetterPanelQuoteCommandArgument(folder);
            HRESULT result = BetterPanelShellLaunch(
                state->explorerWindow, L"wt.exe", arguments, true);
            BetterPanelSetStatus(
                weakStatus, SUCCEEDED(result)
                                ? L""
                                : L"Administrator Terminal wasn't started");
        });
    runMenu.Items().Append(runTerminalAdmin);
    runAsButton.Flyout(runMenu);
    primaryActions.Children().Append(runAsButton);

    auto singleDeleteButton = BetterPanelMakeButton(L"");
    muxc::FontIcon singleDeleteIcon;
    singleDeleteIcon.Glyph(L"\uE74D");
    singleDeleteIcon.FontSize(13);
    singleDeleteButton.Content(singleDeleteIcon);
    singleDeleteButton.Width(32);
    singleDeleteButton.Height(shareHeight);
    singleDeleteButton.MinHeight(shareHeight);
    singleDeleteButton.Padding(Thickness{0, 0, 0, 0});
    singleDeleteButton.Margin(Thickness{18, 0, 0, 0});
    singleDeleteButton.HorizontalAlignment(HorizontalAlignment::Right);
    singleDeleteButton.Visibility(Visibility::Collapsed);
    muxc::Grid::SetColumn(singleDeleteButton, 1);
    muxa::AutomationProperties::SetName(singleDeleteButton,
                                        L"Move selected item to Recycle Bin");
    muxc::ToolTipService::SetToolTip(
        singleDeleteButton, winrt::box_value(L"Move to Recycle Bin"));
    state->singleDeleteButton = winrt::make_weak(singleDeleteButton);
    std::weak_ptr<BetterPanelState> weakDeleteState = state;
    singleDeleteButton.Click(
        [weakDeleteState, weakStatus](
            winrt::Windows::Foundation::IInspectable const&,
            RoutedEventArgs const&) {
            auto state = weakDeleteState.lock();
            if (!state || state->selectedPath.empty() ||
                BetterPanelIsProtectedDeleteLocation(state->selectedPath)) {
                return;
            }
            std::vector<std::wstring> sources{state->selectedPath};
            if (state->timer) state->timer.Stop();
            bool queued = state->dispatcher.TryEnqueue(
                [weakDeleteState, weakStatus,
                 sources = std::move(sources)]() {
                    auto state = weakDeleteState.lock();
                    if (!state || state->unloaded) return;
                    HRESULT result = BetterPanelDeleteItems(
                        sources, state->explorerWindow);
                    if (!state->unloaded) {
                        BetterPanelSetStatus(
                            weakStatus,
                            SUCCEEDED(result) ? L"Moved to Recycle Bin"
                                              : L"Delete cancelled");
                        state->transferLastScanTick = 0;
                        if (state->timer) state->timer.Start();
                        BetterPanelRefresh(state);
                    }
                });
            if (!queued && state->timer) state->timer.Start();
        });
    row.Children().Append(singleDeleteButton);

    auto singleInstallButton =
        BetterPanelMakeIconButton(L"Install", L"\uE896");
    applyNativeButtonVisual(singleInstallButton);
    singleInstallButton.Height(shareHeight);
    singleInstallButton.Visibility(Visibility::Collapsed);
    state->singleInstallButton = winrt::make_weak(singleInstallButton);
    singleInstallButton.Click(
        [weakStatus](winrt::Windows::Foundation::IInspectable const&,
                     RoutedEventArgs const&) {
            auto paths = BetterPanelGetActiveSelectionPaths(false);
            if (!BetterPanelCanInstallSelection(paths)) {
                BetterPanelSetStatus(weakStatus,
                                     L"Install isn't available for this selection");
                return;
            }
            PCWSTR verb = BetterPanelIsRegistryFile(paths.front())
                              ? L"merge"
                              : L"install";
            HRESULT result = BetterPanelInvokeSelectedContextMenuVerb(verb);
            BetterPanelSetStatus(
                weakStatus,
                SUCCEEDED(result) ? L""
                                  : L"Windows couldn't start the installer");
        });
    primaryActions.Children().Append(singleInstallButton);

    auto nativeFileActionsButton =
        BetterPanelMakeIconButton(L"File actions", L"\uE712");
    applyNativeButtonVisual(nativeFileActionsButton);
    nativeFileActionsButton.Height(shareHeight);
    nativeFileActionsButton.Visibility(Visibility::Collapsed);
    state->nativeFileActionsButton = winrt::make_weak(nativeFileActionsButton);
    std::weak_ptr<BetterPanelState> weakActionsState = state;
    nativeFileActionsButton.Click(
        [weakActionsState, weakStatus](
            winrt::Windows::Foundation::IInspectable const&,
            RoutedEventArgs const&) {
            auto state = weakActionsState.lock();
            if (!state || state->selectedPath.empty()) return;
            HRESULT result = BetterPanelShowTypeSpecificNativeActions(
                state->selectedPath);
            if (result == HRESULT_FROM_WIN32(ERROR_NOT_FOUND)) {
                BetterPanelSetStatus(weakStatus,
                                     L"No native actions are available");
            } else if (FAILED(result)) {
                BetterPanelSetStatus(weakStatus,
                                     L"File actions are unavailable");
            } else {
                BetterPanelSetStatus(weakStatus, L"");
            }
        });
    primaryActions.Children().Append(nativeFileActionsButton);

    auto extractButton = BetterPanelMakeIconButton(L"Extract", L"\uE8B7");
    extractButton.Height(shareHeight);
    extractButton.Visibility(Visibility::Collapsed);
    state->extractButton = winrt::make_weak(extractButton);
    extractButton.Click(
        [weakState, weakStatus](winrt::Windows::Foundation::IInspectable const&,
                               RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            auto path = state->selectedPath;
            if (path.empty() || !BetterPanelIsArchiveFile(path)) {
                BetterPanelSetStatus(weakStatus,
                                     L"Select one supported archive first");
                return;
            }
            HRESULT result = BetterPanelShowSimpleExtractMenu(
                path, state->explorerWindow);
            if (result == HRESULT_FROM_WIN32(ERROR_NOT_FOUND)) {
                BetterPanelSetStatus(
                    weakStatus,
                    L"No extraction commands are registered for this file");
            } else if (FAILED(result)) {
                BetterPanelSetStatus(weakStatus,
                                     L"Extraction menu unavailable");
            } else {
                BetterPanelSetStatus(weakStatus, L"");
            }
        });
    primaryActions.Children().Append(extractButton);

    if (auto actionsHost = state->actionsHost.get()) {
        actionsHost.Children().InsertAt(0, row);
    } else {
        parent.Children().InsertAt(shareIndex, row);
    }
    state->shareActionRow = winrt::make_weak(row);
    if (auto panel = state->panel.get()) {
        BetterPanelPruneButtonLayoutSnapshots(state);
        BetterPanelApplyNativeButtonStyle(state, panel);
    }
}

void BetterPanelEndRename(std::shared_ptr<BetterPanelState> const& state,
                          bool audio,
                          bool commit) {
    auto edit = audio ? state->audioRenameBox.get()
                      : state->fileRenameBox.get();
    auto title = audio ? state->audioTitle.get() : state->fileTitle.get();
    auto pencil = audio ? state->audioRenameButton.get()
                        : state->fileRenameButton.get();
    if (!edit || !title || !pencil) {
        return;
    }

    if (commit) {
        std::wstring newName = edit.Text().c_str();
        if (newName.empty() || newName == L"." || newName == L".." ||
            newName.find_first_of(L"\\/:*?\"<>|") != std::wstring::npos) {
            BetterPanelSetStatus(state->status, L"That filename isn't valid");
            return;
        }

        std::wstring oldPath = state->selectedPath;
        size_t slash = oldPath.find_last_of(L"\\/");
        if (slash == std::wstring::npos) {
            BetterPanelSetStatus(state->status, L"Rename is unavailable");
            return;
        }
        std::wstring newPath = oldPath.substr(0, slash + 1) + newName;
        if (_wcsicmp(oldPath.c_str(), newPath.c_str()) != 0) {
            bool reloadVideo = BetterPanelIsVideoFile(oldPath);
            if (reloadVideo) {
                if (auto player = state->videoPlayer.get()) {
                    player.Source(nullptr);
                }
            }
            bool closeMedia = false;
            {
                std::lock_guard lock(g_betterMediaMutex);
                closeMedia = g_betterMediaPath == oldPath;
            }
            if (closeMedia) {
                BetterPanelCloseMedia();
            }
            if (!MoveFileExW(oldPath.c_str(), newPath.c_str(),
                             MOVEFILE_WRITE_THROUGH)) {
                WCHAR message[96]{};
                swprintf_s(message, L"Rename failed (error %lu)",
                           GetLastError());
                BetterPanelSetStatus(state->status, message);
                return;
            }
            SHChangeNotify(SHCNE_RENAMEITEM, SHCNF_PATHW, oldPath.c_str(),
                           newPath.c_str());
            state->pendingRenameOldPath = oldPath;
            state->pendingRenameNewPath = newPath;
            state->pendingRenameTick = GetTickCount64();
            state->selectedPath = newPath;
            if (reloadVideo) {
                BetterPanelLoadVideo(state, newPath);
            }
        }
        title.Text(newName);
        if (auto other = audio ? state->fileTitle.get()
                               : state->audioTitle.get()) {
            other.Text(newName);
        }
        BetterPanelSetStatus(state->status, L"");
    }

    edit.Visibility(Visibility::Collapsed);
    title.Visibility(Visibility::Visible);
    pencil.Visibility(Visibility::Visible);
}

void BetterPanelCloseRenameEditor(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state) return;
    if (auto edit = state->fileRenameBox.get()) {
        edit.Visibility(Visibility::Collapsed);
    }
    if (auto title = state->fileTitle.get()) {
        title.Visibility(Visibility::Visible);
    }
    if (auto edit = state->audioRenameBox.get()) {
        edit.Visibility(Visibility::Collapsed);
    }
    if (auto title = state->audioTitle.get()) {
        title.Visibility(Visibility::Visible);
    }
}

void BetterPanelBeginRename(std::shared_ptr<BetterPanelState> const& state,
                            bool audio) {
    if (!state || !g_settings.showRename) return;
    auto edit = audio ? state->audioRenameBox.get()
                      : state->fileRenameBox.get();
    auto title = audio ? state->audioTitle.get() : state->fileTitle.get();
    auto pencil = audio ? state->audioRenameButton.get()
                        : state->fileRenameButton.get();
    if (!edit || !title || !pencil || state->selectedPath.empty()) {
        return;
    }

    std::wstring filename = BetterPanelFileName(state->selectedPath);
    if (!audio) {
        double availableWidth = 320;
        if (auto panel = state->panel.get(); panel && panel.ActualWidth() > 80) {
            availableWidth = panel.ActualWidth() - 24;
        }
        double editWidth = std::clamp(title.ActualWidth() + 38, 160.0,
                                      std::max(160.0, availableWidth));
        edit.MaxWidth(std::max(160.0, availableWidth));
        edit.Width(editWidth);
    }
    edit.Text(filename);
    title.Visibility(Visibility::Collapsed);
    pencil.Visibility(Visibility::Collapsed);
    edit.Visibility(Visibility::Visible);
    edit.Focus(FocusState::Programmatic);
    size_t dot = filename.find_last_of(L'.');
    edit.Select(0, static_cast<int32_t>(
                       dot == std::wstring::npos ? filename.size() : dot));
}

void BetterPanelSetVisibilityIfChanged(FrameworkElement const& element,
                                       Visibility visibility) {
    if (element && element.Visibility() != visibility) {
        element.Visibility(visibility);
    }
}

void BetterPanelSetTextIfChanged(muxc::TextBlock const& textBlock,
                                 std::wstring const& text) {
    if (textBlock && textBlock.Text() != text) {
        textBlock.Text(text);
    }
}

void BetterPanelRefreshPlaybackState(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state || state->unloaded ||
        !BetterPanelIsAudioFile(state->selectedPath)) {
        return;
    }
    if (auto panel = state->panel.get(); panel && !panel.IsLoaded()) return;

    auto timeline = state->timeline.get();
    auto timeText = state->timeText.get();
    auto playButton = state->playButton.get();
    if (!timeline || !timeText || !playButton) return;

    int64_t position = 0;
    int64_t duration = 0;
    bool playing = false;
    try {
        std::lock_guard lock(g_betterMediaMutex);
        if (g_betterMediaPlayer &&
            g_betterMediaPath == state->selectedPath) {
            auto session = g_betterMediaPlayer.PlaybackSession();
            position = session.Position().count();
            duration = session.NaturalDuration().count();
            playing = session.PlaybackState() ==
                      wmp::MediaPlaybackState::Playing;
        }
    } catch (...) {
    }

    int64_t positionSecond = position / 10000000;
    int64_t durationSecond = duration / 10000000;
    if (positionSecond != state->displayedPositionSecond ||
        durationSecond != state->displayedDurationSecond) {
        state->updatingTimeline = true;
        timeline.Maximum(std::max(1.0, duration / 10000000.0));
        timeline.Value(std::clamp(position / 10000000.0, 0.0,
                                  timeline.Maximum()));
        state->updatingTimeline = false;
        timeText.Text(BetterPanelFormatTime(position) + L" / " +
                      (duration ? BetterPanelFormatTime(duration) : L"--:--"));
        state->displayedPositionSecond = positionSecond;
        state->displayedDurationSecond = durationSecond;
    }
    if (!state->displayedPlaybackInitialized ||
        playing != state->displayedPlaying) {
        if (auto icon = playButton.Content().try_as<muxc::FontIcon>()) {
            icon.Glyph(playing ? L"\uE769" : L"\uE768");
        }
        muxa::AutomationProperties::SetName(playButton,
                                            playing ? L"Pause" : L"Play");
        if (auto quickPlay = state->quickAudioPlayButton.get()) {
            if (auto icon = quickPlay.Content().try_as<muxc::FontIcon>()) {
                icon.Glyph(playing ? L"\uE769" : L"\uE768");
            }
            muxa::AutomationProperties::SetName(quickPlay,
                                                playing ? L"Pause" : L"Play");
        }
        state->displayedPlaying = playing;
        state->displayedPlaybackInitialized = true;
    }
}

void BetterPanelFinishStartupLoading(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state) return;
    auto loading = state->startupLoadingHost.get();
    if (!loading) return;
    if (auto panel = state->panel.get()) {
        panel.Visibility(Visibility::Visible);
    }
    if (auto host = state->host.get()) {
        uint32_t index = 0;
        if (host.Children().IndexOf(loading, index)) {
            host.Children().RemoveAt(index);
        }
    }
    state->startupLoadingHost = {};
}

void BetterPanelRefresh(std::shared_ptr<BetterPanelState> const& state) {
    if (!state || state->unloaded) return;
    if (auto host = state->host.get();
        host && !host.IsLoaded() && !state->detached) return;
    if (auto panel = state->panel.get();
        panel && !panel.IsLoaded() && !state->detached &&
        !state->startupLoadingHost.get()) return;
    BetterPanelExplorerWindowScope explorerWindowScope(state->explorerWindow);
    BetterPanelEnsureShareActions(state);
    BetterPanelHideNativeDetails(state);
    auto activeSelection = BetterPanelGetActiveSelectionPaths();
    bool isHome = activeSelection.empty() && BetterPanelIsActiveHome();
    Wh_Log(L"Refresh explorer=%p tab=%p selectionCount=%zu first=%s home=%d",
           state->explorerWindow, BetterPanelGetFocusedTabWindow(),
           activeSelection.size(),
           activeSelection.empty() ? L"" : activeSelection.front().c_str(),
           isHome ? 1 : 0);
    if (!state->detached && !isHome && state->homeWasVisible && activeSelection.empty() &&
        BetterPanelGetActiveFolderPath().empty() &&
        BetterPanelGetActiveFolderDisplayName().empty()) {
        // Keep the Home dashboard through brief shell-view refresh gaps.
        isHome = true;
    }
    ULONGLONG selectionTick = GetTickCount64();
    DWORD previousPathAttributes =
        state->selectedPath.empty()
            ? INVALID_FILE_ATTRIBUTES
            : GetFileAttributesW(state->selectedPath.c_str());
    bool previousPathIsFile =
        previousPathAttributes != INVALID_FILE_ATTRIBUTES &&
        !(previousPathAttributes & FILE_ATTRIBUTE_DIRECTORY);
    bool preserveSelectionDuringResize =
        !state->settledSelectionRefresh && !isHome &&
        activeSelection.empty() && previousPathIsFile &&
        (GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0;
    bool isMultiSelection = activeSelection.size() > 1;
    auto path = activeSelection.size() == 1
                    ? activeSelection.front()
                    : (activeSelection.empty()
                           ? (preserveSelectionDuringResize
                                  ? state->selectedPath
                                  : BetterPanelGetActiveFolderPath())
                           : state->selectedPath);
    if (isHome) path.clear();
    if (path.empty() && !isHome) path = state->selectedPath;
    if (!isHome && !path.empty()) {
        BetterPanelFinishStartupLoading(state);
    }
    if (!state->pendingRenameNewPath.empty()) {
        bool showingRenamedPath =
            _wcsicmp(path.c_str(), state->pendingRenameNewPath.c_str()) == 0;
        bool showingStalePath =
            _wcsicmp(path.c_str(), state->pendingRenameOldPath.c_str()) == 0;
        bool renameStillFresh = selectionTick >= state->pendingRenameTick &&
                                selectionTick - state->pendingRenameTick < 3000;
        bool renamedFileExists =
            GetFileAttributesW(state->pendingRenameNewPath.c_str()) !=
            INVALID_FILE_ATTRIBUTES;
        if (showingStalePath && renameStillFresh && renamedFileExists) {
            // Explorer can briefly keep returning the pre-rename selection.
            // Hold the successful name until its Shell view catches up.
            path = state->pendingRenameNewPath;
        } else if (showingRenamedPath || !renameStillFresh ||
                   !showingStalePath) {
            state->pendingRenameOldPath.clear();
            state->pendingRenameNewPath.clear();
            state->pendingRenameTick = 0;
        }
    }
    if (_wcsicmp(path.c_str(), state->selectedPath.c_str()) != 0) {
        BetterPanelCloseRenameEditor(state);
    }
    DWORD pathAttributes =
        path.empty()
            ? INVALID_FILE_ATTRIBUTES
            : (path == state->selectedPath
                   ? previousPathAttributes
                   : GetFileAttributesW(path.c_str()));
    bool isDirectory = pathAttributes != INVALID_FILE_ATTRIBUTES &&
                       (pathAttributes & FILE_ATTRIBUTE_DIRECTORY);
    bool isDriveRoot = isDirectory && PathIsRootW(path.c_str());
    bool isAudio = BetterPanelIsAudioFile(path);
    bool isVideo = BetterPanelIsVideoFile(path);
    bool isGif = BetterPanelIsGifFile(path);
    bool isArchive = BetterPanelIsArchiveFile(path);
    bool isText = BetterPanelIsTextFile(path);
    bool isPdf = BetterPanelIsPdfFile(path);
    if (isMultiSelection) {
        path = state->selectedPath;
        isAudio = BetterPanelIsAudioFile(path);
        isVideo = BetterPanelIsVideoFile(path);
        isGif = BetterPanelIsGifFile(path);
        isArchive = BetterPanelIsArchiveFile(path);
        isText = BetterPanelIsTextFile(path);
        isPdf = BetterPanelIsPdfFile(path);
    }

    if (auto multiActionRow = state->multiActionRow.get()) {
        BetterPanelSetVisibilityIfChanged(
            multiActionRow, isMultiSelection ? Visibility::Visible
                                             : Visibility::Collapsed);
    }
    if (isMultiSelection) {
        BetterPanelLoadMultiSummary(state, activeSelection);
        BetterPanelPopulateMultiPreview(state, activeSelection);
    } else {
        state->multiSelectionKey.clear();
        state->multiPreviewKey.clear();
        state->multiSummaryLoading = false;
        if (auto previewHost = state->multiPreviewHost.get()) {
            previewHost.Children().Clear();
        }
        if (auto multiSelectionText = state->multiSelectionText.get()) {
            BetterPanelSetTextIfChanged(multiSelectionText, L"");
        }
    }
    if (auto shareActionRow = state->shareActionRow.get()) {
        bool canDeleteSingleSelection =
            activeSelection.size() == 1 && !isMultiSelection && !isHome &&
            !isDriveRoot && BetterPanelCanDeleteSelectedPath(path);
        BetterPanelSetVisibilityIfChanged(
            shareActionRow,
            (isMultiSelection || isHome || isDriveRoot || path.empty() ||
             (isDirectory && !canDeleteSingleSelection))
                                ? Visibility::Collapsed
                                : Visibility::Visible);
        if (auto shareButton = state->shareButton.get()) {
            BetterPanelSetVisibilityIfChanged(
                shareButton, isDirectory ? Visibility::Collapsed
                                         : Visibility::Visible);
        }
        if (auto nativeShare = state->nativeShareButton.get()) {
            BetterPanelSetVisibilityIfChanged(nativeShare,
                                               Visibility::Collapsed);
        }
        if (auto deleteButton = state->singleDeleteButton.get()) {
            BetterPanelSetVisibilityIfChanged(
                deleteButton, canDeleteSingleSelection ? Visibility::Visible
                                                       : Visibility::Collapsed);
        }
    }
    if (auto actionsHost = state->actionsHost.get()) {
        BetterPanelSetVisibilityIfChanged(
            actionsHost,
            (isMultiSelection || isHome || isDriveRoot || path.empty())
                ? Visibility::Collapsed
                : Visibility::Visible);
    }

    auto nativeInfoBanner = state->nativeInfoBanner.get();
    if (auto host = state->host.get(); host && host.XamlRoot()) {
        // Explorer can also replace or re-show this notice between selections.
        auto currentBanner = BetterPanelFindNativeInfoBanner(
            host.XamlRoot().Content(), host);
        if (currentBanner && currentBanner != nativeInfoBanner) {
            nativeInfoBanner = currentBanner;
            state->nativeInfoBanner = winrt::make_weak(nativeInfoBanner);
            state->nativeInfoBannerVisibility = nativeInfoBanner.Visibility();
        }
    }
    if (nativeInfoBanner) {
        BetterPanelSetVisibilityIfChanged(nativeInfoBanner,
                                          Visibility::Collapsed);
    }

    bool needsMediaTimer = isAudio && !isMultiSelection;
    if (state->mediaTimer && needsMediaTimer != state->mediaTimerRunning) {
        if (needsMediaTimer) {
            state->mediaTimer.Start();
        } else {
            state->mediaTimer.Stop();
        }
        state->mediaTimerRunning = needsMediaTimer;
    }
    if (auto openButton = state->openButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            openButton, (path.empty() || isDirectory) ? Visibility::Collapsed
                                                      : Visibility::Visible);
    }
    if (auto openWithButton = state->openWithButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            openWithButton,
            (path.empty() || isDirectory) ? Visibility::Collapsed
                                          : Visibility::Visible);
    }
    if (auto runAsButton = state->runAsButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            runAsButton,
            (!path.empty() && !isDirectory && !isMultiSelection)
                ? Visibility::Visible
                : Visibility::Collapsed);
    }
    if (auto previewToggle = state->previewToggleButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            previewToggle, isDriveRoot ? Visibility::Collapsed
                                       : Visibility::Visible);
    }
    bool canInstallSelection =
        BetterPanelCanInstallSelection(activeSelection);
    if (auto installButton = state->singleInstallButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            installButton,
            g_settings.showInstallActions && !isMultiSelection &&
                    canInstallSelection
                ? Visibility::Visible
                : Visibility::Collapsed);
    }
    if (auto actionsButton = state->nativeFileActionsButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            actionsButton,
            g_settings.showFileActions && !isMultiSelection && !isDirectory &&
                    !BetterPanelIsImageFile(path) &&
                    BetterPanelHasTypeSpecificNativeActions(path)
                ? Visibility::Visible
                : Visibility::Collapsed);
    }
    if (auto installButton = state->multiInstallButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            installButton,
            g_settings.showInstallActions && isMultiSelection &&
                    canInstallSelection
                ? Visibility::Visible
                : Visibility::Collapsed);
    }
    if (!g_settings.showRename) {
        BetterPanelCloseRenameEditor(state);
    }
    if (auto renameButton = state->fileRenameButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            renameButton,
            !path.empty() && !isDirectory && !isMultiSelection
                ? Visibility::Visible
                : Visibility::Collapsed);
        renameButton.IsHitTestVisible(g_settings.showRename);
        muxa::AutomationProperties::SetName(
            renameButton, g_settings.showRename ? L"Rename selected file"
                                                : L"Selected file name");
        muxc::ToolTipService::SetToolTip(
            renameButton,
            winrt::box_value(g_settings.showRename ? L"Click to rename"
                                                   : L""));
    }
    if (auto renameButton = state->multiRenameButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            renameButton,
            g_settings.showRename && isMultiSelection ? Visibility::Visible
                                                       : Visibility::Collapsed);
    }
    if (!g_settings.showPreviewSearch) {
        state->textSearchActive = false;
        state->textSearchQuery.clear();
        state->textSearchMatches.clear();
        state->textSearchMatchIndex = 0;
        state->pdfSearchLoading = false;
        ++state->pdfSearchGeneration;
        state->pdfSearchPages.clear();
        state->pdfSearchIndex = 0;
        BetterPanelUpdateTextControls(state);
        BetterPanelUpdatePdfSearchControls(state);
    }
    if (auto searchRow = state->textSearchRow.get()) {
        BetterPanelSetVisibilityIfChanged(searchRow, Visibility::Visible);
    }
    if (auto searchBox = state->textSearchBox.get()) {
        BetterPanelSetVisibilityIfChanged(
            searchBox, g_settings.showPreviewSearch ? Visibility::Visible
                                                    : Visibility::Collapsed);
    }
    if (auto previous = state->textSearchPreviousButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            previous, g_settings.showPreviewSearch ? Visibility::Visible
                                                   : Visibility::Collapsed);
    }
    if (auto next = state->textSearchNextButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            next, g_settings.showPreviewSearch ? Visibility::Visible
                                               : Visibility::Collapsed);
    }
    if (auto result = state->textSearchResult.get()) {
        BetterPanelSetVisibilityIfChanged(
            result, g_settings.showPreviewSearch ? Visibility::Visible
                                                 : Visibility::Collapsed);
    }
    if (auto searchRow = state->pdfSearchRow.get()) {
        BetterPanelSetVisibilityIfChanged(
            searchRow, g_settings.showPreviewSearch ? Visibility::Visible
                                                    : Visibility::Collapsed);
    }

    HWND activeTab = BetterPanelGetFocusedTabWindow();
    bool refreshTransferContext =
        state->transferLastScanTick == 0 ||
        state->transferCachedActiveTab != activeTab ||
        state->transferCachedSourcePath != state->selectedPath ||
        selectionTick - state->transferLastScanTick >= 1500;
    if (refreshTransferContext) {
        auto transferContext = BetterPanelResolveTransferContext(
            state->selectedPath, state->transferSources);
        if (!transferContext.sources.empty()) {
            state->transferSources = std::move(transferContext.sources);
        }
        state->transferDestination = std::move(transferContext.destination);
        state->transferLastScanTick = selectionTick;
        state->transferCachedActiveTab = activeTab;
        state->transferCachedSourcePath = state->selectedPath;
    }
    bool hasTransferTarget = !isMultiSelection &&
                              !state->transferSources.empty() &&
                              !state->transferDestination.empty();
    bool hasArchiveSource = std::any_of(
        state->transferSources.begin(), state->transferSources.end(),
        [](auto const& source) { return BetterPanelIsArchiveFile(source); });
    if (auto transferRow = state->transferRow.get()) {
        BetterPanelSetVisibilityIfChanged(
            transferRow, hasTransferTarget ? Visibility::Visible
                                           : Visibility::Collapsed);
    }
    if (!hasTransferTarget) {
        if (auto status = state->status.get();
            status && (status.Text() == L"Move completed" ||
                       status.Text() == L"Extracting to the open folder")) {
            BetterPanelSetStatus(state->status, L"");
        }
    }
    if (auto transferExtractButton = state->transferExtractButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            transferExtractButton,
            hasTransferTarget && hasArchiveSource ? Visibility::Visible
                                                  : Visibility::Collapsed);
    }
    if (auto transferMoveButton = state->transferMoveButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            transferMoveButton, hasTransferTarget ? Visibility::Visible
                                                  : Visibility::Collapsed);
        BetterPanelSetIconButtonLabel(
            transferMoveButton,
            hasTransferTarget
                ? BetterPanelTransferMoveLabel(state->transferSources,
                                               state->transferDestination)
                : L"Move to");
    }
    std::wstring transferItemsKey;
    if (hasTransferTarget) {
        for (auto const& source : state->transferSources) {
            transferItemsKey += source;
            transferItemsKey.push_back(L'\n');
        }
    }
    if (transferItemsKey != state->transferItemsKey) {
        state->transferItemsKey = transferItemsKey;
        state->transferItemsExpanded = false;
        if (auto card = state->transferItemsCard.get()) {
            card.Visibility(Visibility::Collapsed);
        }
    }
    if (auto toggle = state->transferItemsToggle.get()) {
        BetterPanelSetVisibilityIfChanged(
            toggle, hasTransferTarget ? Visibility::Visible
                                      : Visibility::Collapsed);
        if (hasTransferTarget) {
            std::wstring label = state->transferSources.size() == 1
                ? L"Item being moved"
                : L"Items being moved (" +
                      std::to_wstring(state->transferSources.size()) + L")";
            label += state->transferItemsExpanded ? L"  \u25be" : L"  \u25b8";
            toggle.Content(winrt::box_value(label));
        }
    }
    if (auto text = state->transferItemsText.get()) {
        BetterPanelSetTextIfChanged(
            text, hasTransferTarget
                      ? BetterPanelTransferItemsText(state->transferSources)
                      : L"");
    }
    if (auto extractButton = state->extractButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            extractButton, isArchive && !isMultiSelection
                               ? Visibility::Visible
                               : Visibility::Collapsed);
    }
    if (auto favoriteButton = state->favoriteButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            favoriteButton,
            !isMultiSelection && !path.empty() && !isDirectory && !isDriveRoot
                ? Visibility::Visible
                : Visibility::Collapsed);
    }
    if (auto printButton = state->printButton.get()) {
        if (state->printHandlerPath != path) {
            state->printHandlerPath = path;
            state->printHandlerAvailable =
                !path.empty() && BetterPanelHasPrintHandler(path);
        }
        BetterPanelSetVisibilityIfChanged(
            printButton,
            !isMultiSelection && state->printHandlerAvailable
                ? Visibility::Visible
                : Visibility::Collapsed);
    }

    if (!isMultiSelection && !path.empty()) {
        auto nativeTitle = state->nativeTitleContainer.get();
        bool shouldSearchNativeTitle =
            state->nativeTitleSearchPath != path ||
            state->nativeTitleLastSearchTick == 0 ||
            selectionTick - state->nativeTitleLastSearchTick >= 1500;
        if (!nativeTitle && shouldSearchNativeTitle) {
            state->nativeTitleSearchPath = path;
            state->nativeTitleLastSearchTick = selectionTick;
            if (auto host = state->host.get()) {
                nativeTitle = BetterPanelFindNativeTitleContainer(
                    host, BetterPanelFileName(path),
                    state->nativePreview.get());
                if (nativeTitle) {
                    state->nativeTitleContainer = winrt::make_weak(nativeTitle);
                    state->nativeTitleVisibility = nativeTitle.Visibility();
                }
            }
        }
        if (nativeTitle) {
            nativeTitle.Visibility(Visibility::Collapsed);
        }
    } else if (isMultiSelection) {
        if (auto nativeTitle = state->nativeTitleContainer.get()) {
            nativeTitle.Visibility(state->nativeTitleVisibility);
        }
    }

    if ((isAudio || isVideo) && state->previewExpanded) {
        BetterPanelSetInlinePreviewExpanded(state, false);
    }

    if (auto audioCard = state->audioCard.get()) {
        BetterPanelSetVisibilityIfChanged(
            audioCard, isAudio && !isMultiSelection &&
                               !state->previewsCollapsed
                           ? Visibility::Visible
                           : Visibility::Collapsed);
    }
    if (auto videoCard = state->videoCard.get()) {
        BetterPanelSetVisibilityIfChanged(
            videoCard, isVideo && !isMultiSelection &&
                               !state->previewsCollapsed
                           ? Visibility::Visible
                           : Visibility::Collapsed);
    }
    if (auto gifCard = state->gifCard.get()) {
        BetterPanelSetVisibilityIfChanged(
            gifCard, isGif && !isMultiSelection && !state->previewsCollapsed
                         ? Visibility::Visible
                         : Visibility::Collapsed);
    }
    if (auto textCard = state->textCard.get()) {
        BetterPanelSetVisibilityIfChanged(
            textCard, isText && !isMultiSelection && !state->previewsCollapsed
                          ? Visibility::Visible
                          : Visibility::Collapsed);
    }
    if (auto pdfCard = state->pdfCard.get()) {
        BetterPanelSetVisibilityIfChanged(
            pdfCard, isPdf && !isMultiSelection && !state->previewsCollapsed
                         ? Visibility::Visible
                         : Visibility::Collapsed);
    }
    if (auto archiveCard = state->archivePreviewCard.get()) {
        BetterPanelSetVisibilityIfChanged(
            archiveCard, isArchive && !isMultiSelection &&
                                  !state->previewsCollapsed
                              ? Visibility::Visible
                              : Visibility::Collapsed);
    }
    if (auto fileTitleRow = state->fileTitleRow.get()) {
        BetterPanelSetVisibilityIfChanged(
            fileTitleRow, (isMultiSelection || isHome || path.empty() ||
                           isDirectory || isDriveRoot)
                              ? Visibility::Collapsed
                              : Visibility::Visible);
    }
    if (auto utilities = state->panelUtilities.get()) {
        BetterPanelSetVisibilityIfChanged(
            utilities, (isHome || path.empty()) ? Visibility::Collapsed
                                                : Visibility::Visible);
    }
    if (auto quickAudio = state->quickAudioControls.get()) {
        BetterPanelSetVisibilityIfChanged(
            quickAudio, isAudio && !isMultiSelection && state->previewsCollapsed
                            ? Visibility::Visible
                            : Visibility::Collapsed);
    }
    if (auto quickTitle = state->quickAudioTitle.get()) {
        BetterPanelSetTextIfChanged(
            quickTitle, isAudio ? BetterPanelFileName(path) : L"");
    }
    if (auto insightsCard = state->insightsCard.get()) {
        if (auto border = insightsCard.try_as<muxc::Border>()) {
            border.Padding(isDriveRoot ? Thickness{0, 4, 0, 4}
                                       : Thickness{10, 8, 10, 10});
        }
        BetterPanelSetVisibilityIfChanged(
            insightsCard, !isHome && (isMultiSelection || !path.empty())
                              ? Visibility::Visible
                              : Visibility::Collapsed);
    }
    if (isHome && !state->homeWasVisible) {
        state->homeContentLoaded = false;
    }
    if (auto homeCard = state->homeCard.get()) {
        BetterPanelSetVisibilityIfChanged(
            homeCard, isHome ? Visibility::Visible : Visibility::Collapsed);
    }
    if (auto driveCard = state->driveCard.get()) {
        // Keep drive shortcuts below the Home and pin controls.
        driveCard.Margin(Thickness{0, 0, 0, 0});
        BetterPanelSetVisibilityIfChanged(
            driveCard, isDriveRoot && !isMultiSelection
                           ? Visibility::Visible
                           : Visibility::Collapsed);
    }
    if (isHome) {
        if (auto content = state->homeContent.get();
            content && content.Children().Size() == 0) {
            state->homeContentLoaded = false;
        }
    }
    if (isHome) BetterPanelPopulateHome(state);
    state->homeWasVisible = isHome;
    if (auto metadataCard = state->metadataCard.get()) {
        BetterPanelSetVisibilityIfChanged(
            metadataCard, isAudio && !isMultiSelection ? Visibility::Visible
                                                       : Visibility::Collapsed);
    }
    if (auto copyUtility = state->detailsCopyHint.get()) {
        BetterPanelSetVisibilityIfChanged(
            copyUtility,
            (isMultiSelection || !path.empty()) && !state->insightsCollapsed
                ? Visibility::Visible
                : Visibility::Collapsed);
    }
    if (auto nativePreview = state->nativePreview.get()) {
        BetterPanelSetVisibilityIfChanged(
            nativePreview,
            (state->previewsCollapsed || isHome || isMultiSelection ||
             isDriveRoot)
                ? Visibility::Collapsed
                : ((isAudio || isVideo || isGif || isText || isPdf)
                       ? Visibility::Collapsed
                       : Visibility::Visible));
    }
    if (auto previewSurface = state->multiPreviewSurface.get()) {
        BetterPanelSetVisibilityIfChanged(
            previewSurface,
            isMultiSelection && !state->previewsCollapsed && !isHome
                ? Visibility::Visible
                : Visibility::Collapsed);
    }
    bool nativeEyeShown = !state->previewsCollapsed && !isHome &&
                          !isMultiSelection && !isDriveRoot &&
                          !(isAudio || isVideo || isGif || isText || isPdf) &&
                          !!state->nativePreview.get();
    bool multiEyeShown = isMultiSelection && !state->previewsCollapsed &&
                         !isHome && !!state->multiPreviewSurface.get();
    if (auto button = state->previewToggleButton.get()) {
        BetterPanelSetVisibilityIfChanged(
            button, nativeEyeShown || multiEyeShown
                        ? Visibility::Collapsed : Visibility::Visible);
    }
    if (auto utilities = state->panelUtilities.get()) {
        bool otherActionsVisible = false;
        for (auto button : {state->printButton.get()}) {
            otherActionsVisible |= button &&
                                   button.Visibility() == Visibility::Visible;
        }
        if (auto quickAudio = state->quickAudioControls.get()) {
            otherActionsVisible |= quickAudio.Visibility() == Visibility::Visible;
        }
        BetterPanelSetVisibilityIfChanged(
            utilities, !isHome && !path.empty() &&
                               (!nativeEyeShown && !multiEyeShown ||
                                otherActionsVisible)
                           ? Visibility::Visible : Visibility::Collapsed);
    }
    if (auto previewHost = state->multiPreviewHost.get()) {
        BetterPanelSetVisibilityIfChanged(
            previewHost, isMultiSelection && !state->previewsCollapsed
                             ? Visibility::Visible
                             : Visibility::Collapsed);
    }
    if (auto previewImage = state->nativePreviewImage.get()) {
        BetterPanelSetVisibilityIfChanged(
            previewImage,
            (isMultiSelection || isDriveRoot)
                ? Visibility::Collapsed
                : Visibility::Visible);
    }

    if (path != state->selectedPath) {
        BetterPanelSetStatus(state->status, L"");
        if (auto hint = state->detailsCopyHint.get()) {
            hint.Text(L"Select a box to copy");
        }
        std::wstring previousPath = state->selectedPath;
        if (!previousPath.empty()) {
            BetterPanelStopStateMedia(state, previousPath);
        }
        state->selectedPath = path;
        ++state->favoriteCheckGeneration;
        state->favoriteCheckPending = false;
        state->favoriteStatePath.clear();
        state->favoriteStateKnown = false;
        state->favoritePinned = false;
        BetterPanelApplyFavoriteVisual(state);
        if (!path.empty() && !isDirectory && !isMultiSelection &&
            !isDriveRoot) {
            BetterPanelQueueFavoriteCheck(state, path);
        }
        if (auto driveContent = state->driveContent.get()) {
            driveContent.Children().Clear();
        }
        state->displayedPositionSecond = -1;
        state->displayedDurationSecond = -1;
        state->displayedPlaybackInitialized = false;
        state->textLoading = false;
        state->textLoadedPath.clear();
        state->textOriginal.clear();
        state->textEditable = false;
        state->textDirty = false;
        state->textSearchActive = false;
        state->textSearchQuery.clear();
        state->textSearchMatches.clear();
        state->textSearchMatchIndex = 0;
        if (auto search = state->textSearchBox.get()) search.Text(L"");
        state->detectedSyntaxLanguage = BetterPanelSyntaxLanguage::PlainText;
        state->insightsLoading = false;
        state->insightsLoadedPath.clear();
        state->hashValue.clear();
        state->metadataLoading = false;
        state->metadataEditing = false;
        state->metadataDirty = false;
        state->metadataLoadedPath.clear();
        state->metadataCopyText.clear();
        state->metadataFocusedEditor = {};
        state->metadataOriginal = {};
        BetterPanelSetMetadataFields(state, {});
        BetterPanelUpdateMetadataControls(state);
        state->archivePreviewLoading = false;
        state->archivePreviewPath.clear();
        state->pdfLoading = false;
        state->pdfSearchLoading = false;
        ++state->pdfSearchGeneration;
        state->pdfSearchPages.clear();
        state->pdfSearchIndex = 0;
        state->pdfDocument = nullptr;
        state->pdfLoadedPath.clear();
        state->pdfPageIndex = 0;
        state->pdfZoom = 1.0;
        if (auto pdfImage = state->pdfImage.get()) {
            pdfImage.Source(nullptr);
        }
        if (auto pdfInfo = state->pdfInfo.get()) {
            pdfInfo.Text(isPdf ? L"Loading PDF…" : L"");
            pdfInfo.Visibility(isPdf ? Visibility::Visible
                                     : Visibility::Collapsed);
        }
        if (auto search = state->pdfSearchBox.get()) search.Text(L"");
        if (auto result = state->pdfSearchResult.get()) result.Text(L"");
        BetterPanelUpdatePdfControls(state);
        BetterPanelUpdatePdfSearchControls(state);
        state->animatedGif = nullptr;
        state->gifExpanded = false;
        if (auto gifCard = state->gifCard.get()) {
            gifCard.Height(state->gifNormalHeight);
        }
        if (auto gifImage = state->gifImage.get()) {
            gifImage.Source(nullptr);
        }
        if (auto icon = state->fileIcon.get()) {
            icon.Source(nullptr);
        }
        if (auto fallback = state->fileFallbackIcon.get()) {
            fallback.Glyph(isDirectory ? L"\uE8B7" : L"\uE7C3");
            fallback.Visibility(Visibility::Visible);
        }
        if (auto icon = state->openActionIcon.get()) {
            icon.Source(nullptr);
        }
        if (auto fallback = state->openActionFallbackIcon.get()) {
            fallback.Visibility(Visibility::Visible);
        }
        // Explorer supplies folder artwork itself. Clearing it here caused the
        // folder thumbnail to flash once and then disappear.
        if (auto previewImage = state->nativePreviewImage.get();
            previewImage && !isDirectory && !isDriveRoot) {
            previewImage.Source(nullptr);
        }
        if (auto title = state->audioTitle.get()) {
            title.Text(isAudio ? BetterPanelFileName(path) : L"");
        }
        if (auto title = state->fileTitle.get()) {
            title.Text(BetterPanelFileName(path));
        }
        if (auto player = state->videoPlayer.get()) {
            player.Source(nullptr);
        }
        if (auto artwork = state->artwork.get()) {
            artwork.Source(nullptr);
        }
        if (auto placeholder = state->artworkPlaceholder.get()) {
            placeholder.Visibility(Visibility::Visible);
        }
        if (isAudio) {
            BetterPanelLoadArtwork(state, path);
            BetterPanelLoadAudioMetadata(
                std::weak_ptr<BetterPanelState>(state), path);
        }
        if (!path.empty() && !isMultiSelection) {
            if (isDirectory) {
                if (!isDriveRoot) {
                    BetterPanelLoadFolderPreview(state, path);
                }
            } else {
                BetterPanelLoadFileIcon(state, path);
                BetterPanelLoadOpenActionIcon(state, path);
            }
            BetterPanelLoadInsights(state, path);
        }
        if (isVideo) {
            BetterPanelLoadVideo(state, path);
        }
        if (isGif) {
            BetterPanelLoadAnimatedGif(state, path);
        }
        if (isText) {
            BetterPanelLoadTextPreview(state, path);
        }
        if (isPdf) {
            BetterPanelLoadPdf(state, path);
        }
        if (isArchive) {
            BetterPanelLoadArchivePreview(state, path);
        }
    } else if (isGif && state->animatedGif) {
        if (auto gifImage = state->gifImage.get();
            gifImage && gifImage.Source() != state->animatedGif) {
            gifImage.Source(state->animatedGif);
        }
        if (state->animatedGif.IsAnimatedBitmap() &&
            !state->animatedGif.IsPlaying()) {
            state->animatedGif.Play();
        }
    }

    if (auto panel = state->panel.get()) {
        BetterPanelPruneButtonLayoutSnapshots(state);
        BetterPanelApplyNativeButtonStyle(state, panel);
    }
    BetterPanelUpdateActionWrapping(state);
    BetterPanelRefreshPlaybackState(state);
}

std::optional<std::wstring> BetterPanelDetachedSelectionSignature(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state || !state->detached) return std::nullopt;
    BetterPanelExplorerWindowScope explorerWindowScope(state->explorerWindow);
    BetterPanelInvalidateExplorerQueryCaches();
    auto paths = BetterPanelGetActiveSelectionPaths(false);
    std::wstring signature = L"selection:";
    for (auto const& path : paths) {
        signature += std::to_wstring(path.size()) + L":" + path;
    }
    auto folder = BetterPanelGetActiveFolderPath();
    signature += L"|folder:" + std::to_wstring(folder.size()) + L":" +
                 folder;
    if (paths.empty()) {
        signature += BetterPanelIsActiveHome() ? L"|home" : L"|not-home";
    }
    return signature;
}

void BetterPanelRefreshDetachedState(BetterPanelState* rawState) {
    if (!rawState || !rawState->detached || rawState->unloaded ||
        rawState->reattachRequested || rawState->changingDetachedState) {
        return;
    }
    std::shared_ptr<BetterPanelState> state;
    {
        std::lock_guard lock(g_betterPanelMutex);
        for (auto const& candidate : g_betterPanels) {
            if (candidate.get() == rawState) {
                state = candidate;
                break;
            }
        }
    }
    if (!state) return;
    try {
        auto signature = BetterPanelDetachedSelectionSignature(state);
        if (!signature) return;
        auto homeCard = state->homeCard.get();
        bool mixedHomeAndFile = homeCard &&
            homeCard.Visibility() == Visibility::Visible &&
            !state->selectedPath.empty();
        if (*signature == state->detachedSelectionSignature &&
            !mixedHomeAndFile) return;
        BetterPanelRefresh(state);
        // Keep retrying after an incomplete or failed refresh.
        state->detachedSelectionSignature = std::move(*signature);
    } catch (...) {
        Wh_Log(L"Detached selection refresh error %08X",
               winrt::to_hresult().value);
    }
}

void BetterPanelDetachNativePreviewHandler(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state || !state->nativePreviewRightTappedToken.value) return;
    try {
        if (auto preview = state->nativePreview.get()) {
            preview.RightTapped(state->nativePreviewRightTappedToken);
        }
    } catch (...) {
        Wh_Log(L"Native preview cleanup error %08X",
               winrt::to_hresult().value);
    }
    state->nativePreviewRightTappedToken = {};
}

void BetterPanelAttachNativePreviewHandler(
    std::shared_ptr<BetterPanelState> const& state,
    muxc::Grid const& preview) {
    BetterPanelDetachNativePreviewHandler(state);
    if (!state || !preview) return;
    auto weakState = std::weak_ptr<BetterPanelState>(state);
    auto weakStatus = state->status;
    state->nativePreviewRightTappedToken = preview.RightTapped(
        [weakState, weakStatus](
            winrt::Windows::Foundation::IInspectable const&,
            winrt::Microsoft::UI::Xaml::Input::RightTappedRoutedEventArgs const&
                args) {
            auto state = weakState.lock();
            if (!state || state->unloaded || !g_settings.showFileActions ||
                !BetterPanelIsImageFile(state->selectedPath)) return;
            args.Handled(true);
            auto anchor = state->nativePreview.get();
            if (anchor) BetterPanelShowImageActionsFlyout(
                state, anchor, args.GetPosition(anchor), weakStatus);
        });
}

void BetterPanelRemoveNativePreviewControls(
    std::shared_ptr<BetterPanelState> const& state) {
    if (!state) return;
    BetterPanelDetachNativePreviewHandler(state);
    auto remove = [](muxc::Button const& button) {
        if (!button) return;
        auto parent = winrt::Microsoft::UI::Xaml::Media::
            VisualTreeHelper::GetParent(button).try_as<muxc::Panel>();
        if (!parent) return;
        uint32_t index = 0;
        if (parent.Children().IndexOf(button, index)) {
            parent.Children().RemoveAt(index);
        }
    };
    try { remove(state->previewExpandButton.get()); } catch (...) {
        Wh_Log(L"Preview expand cleanup error %08X",
               winrt::to_hresult().value);
    }
    try { remove(state->nativePreviewToggleButton.get()); } catch (...) {
        Wh_Log(L"Preview eye cleanup error %08X",
               winrt::to_hresult().value);
    }
}

void BetterPanelInstallDetailPanel(FrameworkElement element,
    muxc::StackPanel const& startupLoadingHost) {
    if (element.Name() != L"DetailsViewThumbnail") {
        return;
    }

    auto host = element.try_as<muxc::StackPanel>();
    if (!host) {
        return;
    }
    auto nativeHostBackground = host.Background();
    // A null StackPanel background doesn't receive pointer events in its
    // otherwise empty areas. Transparent keeps the native appearance while
    // letting blank-pane clicks clear an active text selection.
    host.Background(winrt::Microsoft::UI::Xaml::Media::SolidColorBrush(
        winrt::Windows::UI::Colors::Transparent()));

    for (auto const& child : host.Children()) {
        if (auto frameworkElement = child.try_as<FrameworkElement>();
            frameworkElement &&
            frameworkElement.Name() == L"BetterDetailPanelRoot") {
            return;
        }
    }

    auto state = std::make_shared<BetterPanelState>();
    std::weak_ptr<BetterPanelState> weakState = state;
    state->dispatcher = host.DispatcherQueue();
    state->ownerThreadId = GetCurrentThreadId();
    state->backgroundHost = winrt::make_weak(host);
    state->nativeHostBackground = nativeHostBackground;
    state->explorerWindow = BetterPanelGetExplorerWindowForElement(host);
    state->explorerDetailsPane = winrt::make_weak(
        BetterPanelFindOwningDetailsPane(host));
    Wh_Log(L"Installed panel host=%p explorer=%p thread=%u",
           winrt::get_abi(host), state->explorerWindow, GetCurrentThreadId());
    state->host = winrt::make_weak(host);
    if (startupLoadingHost) {
        state->startupLoadingHost = winrt::make_weak(startupLoadingHost);
    }

    muxc::StackPanel panel;
    panel.Name(L"BetterDetailPanelRoot");
    panel.Margin(Thickness{16, 12, 16, 0});
    panel.Spacing(10);
    panel.Background(winrt::Microsoft::UI::Xaml::Media::SolidColorBrush(
        winrt::Windows::UI::Colors::Transparent()));
    if (startupLoadingHost) panel.Visibility(Visibility::Collapsed);
    state->panel = winrt::make_weak(panel.as<FrameworkElement>());


    muxc::Grid panelWindowControls;
    panelWindowControls.HorizontalAlignment(HorizontalAlignment::Stretch);
    panelWindowControls.Margin(Thickness{0, -5, 0, 0});
    muxc::ColumnDefinition homeColumn;
    homeColumn.Width(GridLength{1, GridUnitType::Auto});
    muxc::ColumnDefinition controlSpacer;
    controlSpacer.Width(GridLength{1, GridUnitType::Star});
    muxc::ColumnDefinition favoriteColumn;
    favoriteColumn.Width(GridLength{1, GridUnitType::Auto});
    muxc::ColumnDefinition pinColumn;
    pinColumn.Width(GridLength{1, GridUnitType::Auto});
    panelWindowControls.ColumnDefinitions().Append(homeColumn);
    panelWindowControls.ColumnDefinitions().Append(controlSpacer);
    panelWindowControls.ColumnDefinitions().Append(favoriteColumn);
    panelWindowControls.ColumnDefinitions().Append(pinColumn);

    auto panelHomeButton = BetterPanelMakeSystemResourceIconButton(
        L"Home", L"C:\\Windows\\System32\\shell32.dll", 317);
    panelHomeButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            if (auto state = weakState.lock()) {
                g_betterQueryExplorerWindow = state->explorerWindow;
            }
            BetterPanelNavigateFromHome(
                weakState,
                L"shell:::{F874310E-B6B7-47DC-BC84-B9E6B38F5903}");
        });
    state->homeButton = winrt::make_weak(panelHomeButton);
    muxc::Grid::SetColumn(panelHomeButton, 0);
    panelWindowControls.Children().Append(panelHomeButton);

    auto panelDetachButton = BetterPanelMakeSystemResourceIconButton(
        L"Unpin panel into its own window",
        L"C:\\Windows\\System32\\imageres.dll", 235);
    panelDetachButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            if (auto state = weakState.lock()) {
                BetterPanelToggleDetachedWindow(state.get());
            }
        });
    state->detachButton = winrt::make_weak(panelDetachButton);
    muxc::Grid::SetColumn(panelDetachButton, 3);
    panelWindowControls.Children().Append(panelDetachButton);
    BetterPanelUpdateDetachButton(state.get());
    muxc::StackPanel fileTitleRow;
    fileTitleRow.Name(L"BetterDetailPanelFileTitleRow");
    fileTitleRow.Orientation(muxc::Orientation::Horizontal);
    fileTitleRow.Spacing(6);
    fileTitleRow.Margin(Thickness{0, 4, 0, 2});
    fileTitleRow.HorizontalAlignment(HorizontalAlignment::Left);
    state->fileTitleRow =
        winrt::make_weak(fileTitleRow.as<FrameworkElement>());

    muxc::Grid fileIconHost;
    fileIconHost.Width(20);
    fileIconHost.Height(20);
    fileIconHost.VerticalAlignment(VerticalAlignment::Center);

    muxc::FontIcon fileFallbackIcon;
    fileFallbackIcon.Glyph(L"\uE7C3");
    fileFallbackIcon.FontSize(16);
    state->fileFallbackIcon = winrt::make_weak(fileFallbackIcon);
    fileIconHost.Children().Append(fileFallbackIcon);

    muxc::Image fileIcon;
    fileIcon.Width(20);
    fileIcon.Height(20);
    fileIcon.Stretch(winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
    fileIcon.VerticalAlignment(VerticalAlignment::Center);
    state->fileIcon = winrt::make_weak(fileIcon);
    fileIconHost.Children().Append(fileIcon);
    fileTitleRow.Children().Append(fileIconHost);

    muxc::TextBlock fileTitle;
    fileTitle.TextTrimming(TextTrimming::CharacterEllipsis);
    fileTitle.MaxWidth(host.ActualWidth() > 160 ? host.ActualWidth() - 90
                                                : 360);
    fileTitle.FontWeight(
        winrt::Microsoft::UI::Text::FontWeights::SemiBold());
    fileTitle.VerticalAlignment(VerticalAlignment::Center);
    state->fileTitle = winrt::make_weak(fileTitle);

    auto fileTitleButton = BetterPanelMakeButton(L"");
    fileTitleButton.Content(fileTitle);
    fileTitleButton.MinHeight(28);
    fileTitleButton.Padding(Thickness{4, 2, 4, 2});
    fileTitleButton.Margin(Thickness{-4, 0, 0, 0});
    fileTitleButton.HorizontalAlignment(HorizontalAlignment::Left);
    fileTitleButton.Background(
        winrt::Microsoft::UI::Xaml::Media::SolidColorBrush(
            winrt::Windows::UI::Colors::Transparent()));
    fileTitleButton.BorderThickness(Thickness{0});
    fileTitleButton.CornerRadius(CornerRadius{4});
    muxa::AutomationProperties::SetName(fileTitleButton,
                                        L"Rename selected file");
    muxc::ToolTipService::SetToolTip(fileTitleButton,
                                    winrt::box_value(L"Click to rename"));
    state->fileRenameButton = winrt::make_weak(fileTitleButton);
    fileTitleRow.Children().Append(fileTitleButton);

    muxc::TextBox fileRenameBox;
    fileRenameBox.Visibility(Visibility::Collapsed);
    fileRenameBox.VerticalAlignment(VerticalAlignment::Center);
    fileRenameBox.HorizontalAlignment(HorizontalAlignment::Left);
    fileRenameBox.Width(240);
    fileRenameBox.Height(34);
    fileRenameBox.MinHeight(34);
    fileRenameBox.MaxWidth(host.ActualWidth() > 160 ? host.ActualWidth() - 40
                                                    : 320);
    state->fileRenameBox = winrt::make_weak(fileRenameBox);
    fileTitleRow.Children().Append(fileRenameBox);
    std::weak_ptr<BetterPanelState> weakRenameState = state;
    fileTitleButton.Click(
        [weakRenameState](winrt::Windows::Foundation::IInspectable const&,
                          RoutedEventArgs const&) {
            if (auto state = weakRenameState.lock()) {
                BetterPanelBeginRename(state, false);
            }
        });
    fileRenameBox.KeyDown(
        [weakRenameState](
            winrt::Windows::Foundation::IInspectable const&,
            winrt::Microsoft::UI::Xaml::Input::KeyRoutedEventArgs const& args) {
            auto state = weakRenameState.lock();
            if (!state) return;
            if (args.Key() == winrt::Windows::System::VirtualKey::Enter) {
                args.Handled(true);
                BetterPanelEndRename(state, false, true);
            } else if (args.Key() ==
                       winrt::Windows::System::VirtualKey::Escape) {
                args.Handled(true);
                BetterPanelEndRename(state, false, false);
            }
        });

    muxc::TextBlock status;
    status.Name(L"BetterPanelTemporaryStatus");
    status.Text(L"");
    status.TextWrapping(TextWrapping::NoWrap);
    status.TextTrimming(TextTrimming::CharacterEllipsis);
    status.MaxLines(1);
    status.Height(18);
    status.FontSize(11);
    status.Opacity(0.70);
    status.Margin(Thickness{4, 0, 4, 0});
    status.HorizontalAlignment(HorizontalAlignment::Left);
    status.VerticalAlignment(VerticalAlignment::Center);
    status.Visibility(Visibility::Visible);
    state->status = winrt::make_weak(status);
    auto weakStatus = winrt::make_weak(status);

    muxc::StackPanel transferRow;
    transferRow.Name(L"BetterDetailPanelTransferActions");
    transferRow.Orientation(muxc::Orientation::Vertical);
    transferRow.Spacing(6);
    transferRow.Margin(Thickness{0, 6, 0, 4});
    transferRow.HorizontalAlignment(HorizontalAlignment::Stretch);
    transferRow.Visibility(Visibility::Collapsed);
    state->transferRow =
        winrt::make_weak(transferRow.as<FrameworkElement>());

    auto transferButtons = BetterPanelMakeRow();
    transferButtons.HorizontalAlignment(HorizontalAlignment::Left);
    state->transferActionButtons = winrt::make_weak(transferButtons);
    transferRow.SizeChanged(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    SizeChangedEventArgs const&) {
            if (auto state = weakState.lock()) {
                BetterPanelUpdateActionWrapping(state);
            }
        });

    auto transferExtractButton =
        BetterPanelMakeIconButton(L"Extract here", L"\uE8B7");
    state->transferExtractButton = winrt::make_weak(transferExtractButton);
    transferExtractButton.Click(
        [weakState, weakStatus](
            winrt::Windows::Foundation::IInspectable const&,
            RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            auto context = BetterPanelResolveTransferContext(
                state->selectedPath, state->transferSources);
            if (context.sources.empty() || context.destination.empty()) {
                BetterPanelSetStatus(weakStatus,
                                     L"Open a destination folder in another tab");
                return;
            }
            bool started = false;
            std::vector<HANDLE> extractionProcesses;
            BetterPanelSetTransferProgress(state, L"Starting extraction…", true);
            for (auto const& source : context.sources) {
                if (!BetterPanelIsArchiveFile(source)) continue;
                HANDLE process = nullptr;
                if (FAILED(BetterPanelStartExtraction(
                        source, context.destination, &process))) {
                    BetterPanelSetStatus(weakStatus,
                                         L"Could not start extraction");
                    BetterPanelSetTransferProgress(state, L"", false);
                    return;
                }
                if (process) extractionProcesses.push_back(process);
                started = true;
            }
            BetterPanelSetStatus(weakStatus,
                                 started ? L"Extracting to the open folder"
                                         : L"Select one or more archives");
            BetterPanelSetTransferProgress(
                state, started ? L"Extraction is running…" : L"", started);
            if (started) {
                auto dispatcher = state->dispatcher;
                BetterPanelStartWorker(
                    [weakState, weakStatus, dispatcher,
                     processes = std::move(extractionProcesses)]() mutable {
                        bool stopped = false;
                        for (HANDLE process : processes) {
                            if (!stopped) {
                                HANDLE stopEvent = g_betterPanelWorkerStopEvent;
                                HANDLE handles[] = {process, stopEvent};
                                DWORD result = stopEvent
                                    ? WaitForMultipleObjects(2, handles, FALSE,
                                                             INFINITE)
                                    : WaitForSingleObject(process, 30000);
                                stopped = result != WAIT_OBJECT_0;
                            }
                            CloseHandle(process);
                        }
                        // Extraction was launched independently. Closing our
                        // handles does not terminate the user's extraction.
                        if (stopped || BetterPanelWorkerStopping()) return;
                        dispatcher.TryEnqueue([weakState, weakStatus]() {
                            auto state = weakState.lock();
                            if (!state || state->unloaded) return;
                            BetterPanelSetTransferProgress(state, L"", false);
                            BetterPanelSetStatus(weakStatus,
                                                 L"Extraction completed");
                            state->transferLastScanTick = 0;
                            BetterPanelRefresh(state);
                        });
                    });
            }
        });
    transferButtons.Children().Append(transferExtractButton);

    auto transferMoveButton =
        BetterPanelMakeIconButton(L"Move to", L"\uE8DE");
    if (auto content = transferMoveButton.Content().try_as<muxc::StackPanel>();
        content && content.Children().Size() > 1) {
        if (auto text = content.Children().GetAt(1).try_as<muxc::TextBlock>()) {
            text.MaxWidth(280);
            text.TextWrapping(TextWrapping::NoWrap);
            text.TextTrimming(TextTrimming::CharacterEllipsis);
        }
    }
    state->transferMoveButton = winrt::make_weak(transferMoveButton);
    transferMoveButton.Click(
        [weakState, weakStatus](
            winrt::Windows::Foundation::IInspectable const&,
            RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            auto context = BetterPanelResolveTransferContext(
                state->selectedPath, state->transferSources);
            if (context.sources.empty() || context.destination.empty()) {
                BetterPanelSetStatus(weakStatus,
                                     L"Open a destination folder in another tab");
                return;
            }
            if (state->timer) state->timer.Stop();
            BetterPanelSetTransferProgress(
                state,
                L"Moving " + std::to_wstring(context.sources.size()) +
                    (context.sources.size() == 1 ? L" item…" : L" items…"),
                true);
            auto dispatcher = state->dispatcher;
            HWND owner = state->explorerWindow;
            BetterPanelStartWorker(
                [weakState, weakStatus, dispatcher, owner,
                 sources = std::move(context.sources),
                 destination = std::move(context.destination)]() mutable {
                    HRESULT initialized = CoInitializeEx(
                        nullptr, COINIT_APARTMENTTHREADED);
                    HRESULT result = BetterPanelMoveItemsToFolder(
                        sources, destination, owner);
                    if (SUCCEEDED(initialized)) CoUninitialize();
                    dispatcher.TryEnqueue([weakState, weakStatus, result]() {
                        auto state = weakState.lock();
                        if (!state || state->unloaded) return;
                        BetterPanelSetTransferProgress(state, L"", false);
                        BetterPanelSetStatus(
                            weakStatus, SUCCEEDED(result) ? L"Move completed"
                                                          : L"Move failed");
                        state->transferLastScanTick = 0;
                        if (state->timer) state->timer.Start();
                        BetterPanelRefresh(state);
                    });
                });
        });
    transferButtons.Children().Append(transferMoveButton);
    transferRow.Children().Append(transferButtons);

    muxc::StackPanel transferProgressRow;
    transferProgressRow.Spacing(3);
    transferProgressRow.Visibility(Visibility::Collapsed);
    state->transferProgressRow =
        winrt::make_weak(transferProgressRow.as<FrameworkElement>());
    muxc::TextBlock transferProgressText;
    transferProgressText.FontSize(11);
    transferProgressText.Opacity(0.78);
    state->transferProgressText = winrt::make_weak(transferProgressText);
    transferProgressRow.Children().Append(transferProgressText);
    muxc::ProgressBar transferProgressBar;
    transferProgressBar.Height(4);
    transferProgressBar.HorizontalAlignment(HorizontalAlignment::Stretch);
    state->transferProgressBar = winrt::make_weak(transferProgressBar);
    transferProgressRow.Children().Append(transferProgressBar);
    transferRow.Children().Append(transferProgressRow);

    auto transferItemsToggle = BetterPanelMakeButton(L"Items being moved  \u25b8");
    transferItemsToggle.HorizontalAlignment(HorizontalAlignment::Stretch);
    transferItemsToggle.HorizontalContentAlignment(HorizontalAlignment::Left);
    transferItemsToggle.Padding(Thickness{8, 4, 8, 4});
    transferItemsToggle.FontSize(11);
    state->transferItemsToggle = winrt::make_weak(transferItemsToggle);
    transferRow.Children().Append(transferItemsToggle);

    muxc::Border transferItemsCard;
    transferItemsCard.Padding(Thickness{10, 8, 10, 8});
    transferItemsCard.CornerRadius(CornerRadius{6});
    transferItemsCard.Background(
        winrt::Microsoft::UI::Xaml::Media::SolidColorBrush(
            winrt::Windows::UI::ColorHelper::FromArgb(18, 128, 128, 128)));
    transferItemsCard.HorizontalAlignment(HorizontalAlignment::Stretch);
    transferItemsCard.Visibility(Visibility::Collapsed);
    state->transferItemsCard =
        winrt::make_weak(transferItemsCard.as<FrameworkElement>());

    muxc::ScrollViewer transferItemsScroll;
    transferItemsScroll.MaxHeight(160);
    transferItemsScroll.VerticalScrollBarVisibility(
        muxc::ScrollBarVisibility::Auto);
    transferItemsScroll.HorizontalScrollBarVisibility(
        muxc::ScrollBarVisibility::Disabled);
    muxc::TextBlock transferItemsText;
    transferItemsText.FontSize(11);
    transferItemsText.TextWrapping(TextWrapping::Wrap);
    transferItemsText.IsTextSelectionEnabled(true);
    state->transferItemsText = winrt::make_weak(transferItemsText);
    transferItemsScroll.Content(transferItemsText);
    transferItemsCard.Child(transferItemsScroll);
    transferRow.Children().Append(transferItemsCard);

    transferItemsToggle.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            state->transferItemsExpanded = !state->transferItemsExpanded;
            if (auto card = state->transferItemsCard.get()) {
                card.Visibility(state->transferItemsExpanded
                                    ? Visibility::Visible
                                    : Visibility::Collapsed);
            }
            if (auto toggle = state->transferItemsToggle.get()) {
                std::wstring label = state->transferSources.size() == 1
                    ? L"Item being moved"
                    : L"Items being moved (" +
                          std::to_wstring(state->transferSources.size()) +
                          L")";
                label += state->transferItemsExpanded ? L"  \u25be"
                                                      : L"  \u25b8";
                toggle.Content(winrt::box_value(label));
            }
        });

    muxc::StackPanel multiActionRow;
    multiActionRow.Name(L"BetterDetailPanelMultiActions");
    multiActionRow.Orientation(muxc::Orientation::Vertical);
    multiActionRow.Spacing(6);
    multiActionRow.Margin(Thickness{0, 6, 0, 4});
    multiActionRow.HorizontalAlignment(HorizontalAlignment::Stretch);
    multiActionRow.Visibility(Visibility::Collapsed);
    state->multiActionRow =
        winrt::make_weak(multiActionRow.as<FrameworkElement>());

    muxc::TextBlock multiSelectionText;
    multiSelectionText.FontSize(11);
    multiSelectionText.Opacity(0.70);
    multiSelectionText.TextWrapping(TextWrapping::Wrap);
    multiSelectionText.VerticalAlignment(VerticalAlignment::Center);
    state->multiSelectionText = winrt::make_weak(multiSelectionText);
    multiActionRow.Children().Append(multiSelectionText);

    muxc::Grid multiButtons;
    multiButtons.HorizontalAlignment(HorizontalAlignment::Stretch);
    muxc::ColumnDefinition multiPrimaryColumn;
    multiPrimaryColumn.Width(GridLength{1, GridUnitType::Star});
    muxc::ColumnDefinition multiDeleteColumn;
    multiDeleteColumn.Width(GridLength{1, GridUnitType::Auto});
    multiButtons.ColumnDefinitions().Append(multiPrimaryColumn);
    multiButtons.ColumnDefinitions().Append(multiDeleteColumn);

    auto multiPrimaryButtons = BetterPanelMakeRow();
    multiPrimaryButtons.HorizontalAlignment(HorizontalAlignment::Left);
    state->multiPrimaryActionButtons = winrt::make_weak(multiPrimaryButtons);
    multiButtons.Children().Append(multiPrimaryButtons);
    multiActionRow.SizeChanged(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    SizeChangedEventArgs const&) {
            if (auto state = weakState.lock()) {
                BetterPanelUpdateActionWrapping(state);
            }
        });

    auto multiMoveButton =
        BetterPanelMakeIconButton(L"Move to...", L"\uE8DE");
    multiMoveButton.Click(
        [weakState, weakStatus](
            winrt::Windows::Foundation::IInspectable const&,
            RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            auto sources = BetterPanelGetActiveSelectionPaths(false);
            if (sources.size() < 2) return;
            std::wstring destination;
            HRESULT result = BetterPanelChooseExtractionFolder(
                state->explorerWindow, destination);
            if (FAILED(result) || destination.empty()) return;
            if (state->timer) state->timer.Stop();
            bool queued = state->dispatcher.TryEnqueue(
                [weakState, weakStatus, sources = std::move(sources),
                 destination = std::move(destination)]() {
                    auto state = weakState.lock();
                    if (!state || state->unloaded) return;
                    HRESULT result = BetterPanelMoveItemsToFolder(
                        sources, destination, state->explorerWindow);
                    if (!state->unloaded) {
                        BetterPanelSetStatus(
                            weakStatus, SUCCEEDED(result) ? L"Move completed"
                                                          : L"Move failed");
                        if (state->timer) state->timer.Start();
                    }
                });
            if (!queued && state->timer) state->timer.Start();
        });
    multiPrimaryButtons.Children().Append(multiMoveButton);

    auto multiRenameButton =
        BetterPanelMakeIconButton(L"Bulk rename", L"\uE8AC");
    state->multiRenameButton = winrt::make_weak(multiRenameButton);
    multiRenameButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            BetterPanelShowBulkRenameDialog(weakState);
        });
    multiPrimaryButtons.Children().Append(multiRenameButton);

    auto multiDeleteButton = BetterPanelMakeButton(L"");
    muxc::FontIcon multiDeleteIcon;
    multiDeleteIcon.Glyph(L"\uE74D");
    multiDeleteIcon.FontSize(13);
    multiDeleteButton.Content(multiDeleteIcon);
    multiDeleteButton.Width(32);
    multiDeleteButton.Height(32);
    multiDeleteButton.MinWidth(32);
    multiDeleteButton.MinHeight(32);
    multiDeleteButton.Padding(Thickness{0, 0, 0, 0});
    multiDeleteButton.HorizontalAlignment(HorizontalAlignment::Right);
    muxc::Grid::SetColumn(multiDeleteButton, 1);
    muxa::AutomationProperties::SetName(multiDeleteButton,
                                        L"Move selected items to Recycle Bin");
    muxc::ToolTipService::SetToolTip(
        multiDeleteButton, winrt::box_value(L"Move to Recycle Bin"));
    multiDeleteButton.Click(
        [weakState, weakStatus](
            winrt::Windows::Foundation::IInspectable const&,
            RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            auto sources = BetterPanelGetActiveSelectionPaths(false);
            if (sources.size() < 2) return;
            if (state->timer) state->timer.Stop();
            bool queued = state->dispatcher.TryEnqueue(
                [weakState, weakStatus, sources = std::move(sources)]() {
                    auto state = weakState.lock();
                    if (!state || state->unloaded) return;
                    HRESULT result = BetterPanelDeleteItems(
                        sources, state->explorerWindow);
                    if (!state->unloaded) {
                        BetterPanelSetStatus(
                            weakStatus, SUCCEEDED(result) ? L"Delete completed"
                                                          : L"Delete cancelled");
                        if (state->timer) state->timer.Start();
                    }
                });
            if (!queued && state->timer) state->timer.Start();
        });
    multiButtons.Children().Append(multiDeleteButton);

    auto multiInstallButton =
        BetterPanelMakeIconButton(L"Install", L"\uE896");
    multiInstallButton.Visibility(Visibility::Collapsed);
    state->multiInstallButton = winrt::make_weak(multiInstallButton);
    multiInstallButton.Click(
        [weakStatus](winrt::Windows::Foundation::IInspectable const&,
                     RoutedEventArgs const&) {
            auto paths = BetterPanelGetActiveSelectionPaths(false);
            if (!BetterPanelCanInstallSelection(paths)) {
                BetterPanelSetStatus(weakStatus,
                                     L"Install isn't available for this selection");
                return;
            }
            HRESULT result =
                BetterPanelInvokeSelectedContextMenuVerb(L"install");
            BetterPanelSetStatus(
                weakStatus,
                SUCCEEDED(result) ? L""
                                  : L"Windows couldn't start the installer");
        });
    multiPrimaryButtons.Children().Append(multiInstallButton);

    auto multiArchiveButton =
        BetterPanelMakeIconButton(L"Archive", L"\uE7B8");
    multiArchiveButton.Click(
        [weakState, weakStatus](
            winrt::Windows::Foundation::IInspectable const&,
            RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            auto sources = BetterPanelGetActiveSelectionPaths(false);
            if (sources.size() < 2) return;
            std::wstring creator = BetterPanelFindArchiveCreator();
            if (creator.empty()) {
                BetterPanelSetStatus(weakStatus,
                                     L"No archive creator is available");
                return;
            }
            std::wstring archivePath;
            HRESULT result = BetterPanelChooseArchivePath(
                state->explorerWindow, creator, archivePath);
            if (FAILED(result) || archivePath.empty()) return;
            result = BetterPanelStartArchive(sources, creator, archivePath);
            BetterPanelSetStatus(
                weakStatus, SUCCEEDED(result) ? L"Archive creation started"
                                              : L"Archive creation failed");
        });
    multiPrimaryButtons.Children().Append(multiArchiveButton);
    multiActionRow.Children().Append(multiButtons);

    muxc::StackPanel panelUtilities;
    panelUtilities.Spacing(5);
    state->panelUtilities =
        winrt::make_weak(panelUtilities.as<FrameworkElement>());

    muxc::Grid panelControls;
    muxc::ColumnDefinition utilityColumn;
    utilityColumn.Width(GridLength{1, GridUnitType::Auto});
    muxc::ColumnDefinition utilitySpacer;
    utilitySpacer.Width(GridLength{1, GridUnitType::Star});
    muxc::ColumnDefinition quickAudioColumn;
    quickAudioColumn.Width(GridLength{1, GridUnitType::Auto});
    panelControls.ColumnDefinitions().Append(utilityColumn);
    panelControls.ColumnDefinitions().Append(utilitySpacer);
    panelControls.ColumnDefinitions().Append(quickAudioColumn);

    auto utilityButtons = BetterPanelMakeRow();
    utilityButtons.HorizontalAlignment(HorizontalAlignment::Left);

    auto previewToggle = BetterPanelMakeButton(L"");
    muxc::FontIcon previewToggleIcon;
    previewToggleIcon.Glyph(L"\uE890");
    previewToggleIcon.FontSize(14);
    previewToggle.Content(previewToggleIcon);
    previewToggle.Width(32);
    previewToggle.Height(32);
    previewToggle.Padding(Thickness{0, 0, 0, 0});
    muxa::AutomationProperties::SetName(previewToggle, L"Hide preview");
    muxc::ToolTipService::SetToolTip(previewToggle,
                                    winrt::box_value(L"Show or hide preview"));
    state->previewToggleButton = winrt::make_weak(previewToggle);
    auto togglePreview =
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            state->previewsCollapsed = !state->previewsCollapsed;
            for (auto button : {state->previewToggleButton.get(),
                                state->nativePreviewToggleButton.get(),
                                state->multiPreviewToggleButton.get()}) {
                if (!button) continue;
                if (auto icon = button.Content().try_as<muxc::FontIcon>()) {
                    icon.Glyph(state->previewsCollapsed ? L"\uED1A"
                                                        : L"\uE890");
                }
                muxa::AutomationProperties::SetName(
                    button, state->previewsCollapsed ? L"Show preview"
                                                     : L"Hide preview");
            }
            BetterPanelRefresh(state);
        };
    previewToggle.Click(togglePreview);
    utilityButtons.Children().Append(previewToggle);

    panelControls.Children().Append(utilityButtons);

    auto rightUtilityActions = BetterPanelMakeRow();
    rightUtilityActions.HorizontalAlignment(HorizontalAlignment::Right);
    muxc::Grid::SetColumn(rightUtilityActions, 2);

    auto favoriteButton = BetterPanelMakeButton(L"");
    muxc::FontIcon favoriteIcon;
    favoriteIcon.Glyph(L"\uE734");
    favoriteIcon.FontSize(14);
    favoriteButton.Content(favoriteIcon);
    favoriteButton.Width(32);
    favoriteButton.Height(32);
    favoriteButton.MinWidth(32);
    favoriteButton.MinHeight(32);
    favoriteButton.Padding(Thickness{0, 0, 0, 0});
    favoriteButton.Visibility(Visibility::Collapsed);
    muxa::AutomationProperties::SetName(favoriteButton,
                                        L"Add to Favorites");
    muxc::ToolTipService::SetToolTip(
        favoriteButton, winrt::box_value(L"Add to Favorites"));
    state->favoriteButton = winrt::make_weak(favoriteButton);
    favoriteButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state || state->selectedPath.empty()) return;
            BetterPanelRunFavoriteAction(
                state, state->selectedPath,
                state->favoriteStateKnown && state->favoritePinned);
        });
    favoriteButton.Margin(Thickness{0, 0, 6, 0});
    muxc::Grid::SetColumn(favoriteButton, 2);
    panelWindowControls.Children().Append(favoriteButton);

    auto printButton = BetterPanelMakeButton(L"");
    muxc::FontIcon printIcon;
    printIcon.Glyph(L"\uE749");
    printIcon.FontSize(13);
    printButton.Content(printIcon);
    printButton.Width(32);
    printButton.Height(32);
    printButton.MinHeight(32);
    printButton.Padding(Thickness{0, 0, 0, 0});
    printButton.Visibility(Visibility::Collapsed);
    muxa::AutomationProperties::SetName(printButton, L"Print selected file");
    muxc::ToolTipService::SetToolTip(printButton,
                                    winrt::box_value(L"Print"));
    state->printButton = winrt::make_weak(printButton);
    auto weakPrintStatus = state->status;
    std::weak_ptr<BetterPanelState> weakPrintState = state;
    printButton.Click(
        [weakPrintState, weakPrintStatus](winrt::Windows::Foundation::IInspectable const&,
                                         RoutedEventArgs const&) {
            auto state = weakPrintState.lock();
            if (!state) return;
            auto path = state->selectedPath;
            if (path.empty()) {
                BetterPanelSetStatus(weakPrintStatus,
                                     L"Select one file first");
                return;
            }
            BetterPanelSetStatus(
                weakPrintStatus,
                BetterPanelPrintFile(path, state->explorerWindow)
                    ? L"Print opened"
                    : L"Printing is unavailable for this file type");
        });
    rightUtilityActions.Children().Append(printButton);

    auto quickAudioControls = BetterPanelMakeRow();
    quickAudioControls.Visibility(Visibility::Collapsed);
    state->quickAudioControls =
        winrt::make_weak(quickAudioControls.as<FrameworkElement>());

    muxc::TextBlock quickAudioTitle;
    quickAudioTitle.MaxWidth(180);
    quickAudioTitle.TextTrimming(TextTrimming::CharacterEllipsis);
    quickAudioTitle.FontWeight(
        winrt::Microsoft::UI::Text::FontWeights::SemiBold());
    quickAudioTitle.VerticalAlignment(VerticalAlignment::Center);
    state->quickAudioTitle = winrt::make_weak(quickAudioTitle);
    quickAudioControls.Children().Append(quickAudioTitle);

    auto quickPlay = BetterPanelMakeButton(L"");
    muxc::FontIcon quickPlayIcon;
    quickPlayIcon.Glyph(L"\uE768");
    quickPlayIcon.FontSize(13);
    quickPlay.Content(quickPlayIcon);
    muxa::AutomationProperties::SetName(quickPlay, L"Play");
    muxc::ToolTipService::SetToolTip(quickPlay, winrt::box_value(L"Play"));
    quickPlay.Width(38);
    quickPlay.Height(32);
    quickPlay.Padding(Thickness{4, 2, 4, 2});
    state->quickAudioPlayButton = winrt::make_weak(quickPlay);
    quickPlay.Click([weakState](auto const&, RoutedEventArgs const&) {
        if (auto state = weakState.lock()) {
            BetterPanelTogglePlayback(state->selectedPath, state->status);
        }
    });
    quickAudioControls.Children().Append(quickPlay);

    rightUtilityActions.Children().Append(quickAudioControls);
    panelControls.Children().Append(rightUtilityActions);

    panelUtilities.Children().Append(panelControls);

    for (auto const& child : host.Children()) {
        auto thumbnail = child.try_as<muxc::Grid>();
        if (!thumbnail) {
            continue;
        }
        state->nativePreview = winrt::make_weak(thumbnail);
        if (auto previewImage = BetterPanelFindPreviewImage(thumbnail)) {
            state->nativePreviewImage = winrt::make_weak(previewImage);
        }

        auto nativeEye = BetterPanelMakeButton(L"");
        muxc::FontIcon nativeEyeIcon;
        nativeEyeIcon.Glyph(L"\uE890");
        nativeEyeIcon.FontSize(14);
        nativeEye.Content(nativeEyeIcon);
        nativeEye.Width(32);
        nativeEye.Height(32);
        nativeEye.Padding(Thickness{0});
        nativeEye.HorizontalAlignment(HorizontalAlignment::Left);
        nativeEye.VerticalAlignment(VerticalAlignment::Top);
        nativeEye.Margin(Thickness{8, 8, 0, 0});
        muxc::Canvas::SetZIndex(nativeEye, 100);
        muxa::AutomationProperties::SetName(nativeEye, L"Hide preview");
        muxc::ToolTipService::SetToolTip(nativeEye,
                                        winrt::box_value(L"Show or hide preview"));
        nativeEye.Click(togglePreview);
        state->nativePreviewToggleButton = winrt::make_weak(nativeEye);
        thumbnail.Children().Append(nativeEye);

        auto expandButton = BetterPanelMakeButton(L"");
        muxc::FontIcon expandIcon;
        expandIcon.Glyph(L"\uE740");
        expandIcon.FontSize(16);
        expandButton.Content(expandIcon);
        expandButton.Width(36);
        expandButton.Height(36);
        expandButton.MinWidth(36);
        expandButton.MinHeight(36);
        expandButton.Padding(Thickness{0, 0, 0, 0});
        expandButton.HorizontalAlignment(HorizontalAlignment::Right);
        expandButton.VerticalAlignment(VerticalAlignment::Bottom);
        expandButton.Margin(Thickness{0, 0, 10, 10});
        muxc::Canvas::SetZIndex(expandButton, 100);
        state->previewExpandButton = winrt::make_weak(expandButton);
        std::weak_ptr<BetterPanelState> weakPreviewState = state;
        auto weakExpandIcon = winrt::make_weak(expandIcon);
        BetterPanelAttachNativePreviewHandler(state, thumbnail);
        expandButton.Click(
            [weakPreviewState, weakExpandIcon, weakStatus](
                winrt::Windows::Foundation::IInspectable const&,
                RoutedEventArgs const&) {
                if (auto state = weakPreviewState.lock()) {
                    bool expand = !state->previewExpanded;
                    BetterPanelSetInlinePreviewExpanded(state, expand);
                    if (auto icon = weakExpandIcon.get()) {
                        icon.Glyph(expand ? L"\uE73F" : L"\uE740");
                    }
                    BetterPanelSetStatus(weakStatus, L"");
                }
            });
        thumbnail.Children().Append(expandButton);

        muxc::Grid multiPreviewSurface;
        multiPreviewSurface.Name(L"BetterDetailPanelMultiPreviewSurface");
        double nativeHeight = thumbnail.ActualHeight();
        if (nativeHeight < 120) nativeHeight = 200;
        state->multiPreviewNormalHeight = nativeHeight;
        multiPreviewSurface.Height(nativeHeight);
        multiPreviewSurface.MinHeight(120);
        multiPreviewSurface.HorizontalAlignment(HorizontalAlignment::Stretch);
        multiPreviewSurface.Background(thumbnail.Background());
        multiPreviewSurface.Visibility(Visibility::Collapsed);
        state->multiPreviewSurface =
            winrt::make_weak(multiPreviewSurface.as<FrameworkElement>());

        muxc::Grid multiPreviewHost;
        multiPreviewHost.Name(L"BetterDetailPanelMultiPreview");
        multiPreviewHost.HorizontalAlignment(HorizontalAlignment::Center);
        multiPreviewHost.VerticalAlignment(VerticalAlignment::Center);
        multiPreviewHost.IsHitTestVisible(false);
        state->multiPreviewHost = winrt::make_weak(multiPreviewHost);
        multiPreviewSurface.Children().Append(multiPreviewHost);

        auto multiEye = BetterPanelMakeButton(L"");
        muxc::FontIcon multiEyeIcon;
        multiEyeIcon.Glyph(L"\uE890");
        multiEyeIcon.FontSize(14);
        multiEye.Content(multiEyeIcon);
        multiEye.Width(32);
        multiEye.Height(32);
        multiEye.Padding(Thickness{0});
        multiEye.HorizontalAlignment(HorizontalAlignment::Left);
        multiEye.VerticalAlignment(VerticalAlignment::Top);
        multiEye.Margin(Thickness{8, 8, 0, 0});
        muxc::Canvas::SetZIndex(multiEye, 100);
        muxa::AutomationProperties::SetName(multiEye, L"Hide preview");
        multiEye.Click(togglePreview);
        state->multiPreviewToggleButton = winrt::make_weak(multiEye);
        multiPreviewSurface.Children().Append(multiEye);

        auto multiExpandButton = BetterPanelMakeButton(L"");
        muxc::FontIcon multiExpandIcon;
        multiExpandIcon.Glyph(L"\uE740");
        multiExpandIcon.FontSize(16);
        multiExpandButton.Content(multiExpandIcon);
        multiExpandButton.Width(36);
        multiExpandButton.Height(36);
        multiExpandButton.MinWidth(36);
        multiExpandButton.MinHeight(36);
        multiExpandButton.Padding(Thickness{0});
        multiExpandButton.HorizontalAlignment(HorizontalAlignment::Right);
        multiExpandButton.VerticalAlignment(VerticalAlignment::Bottom);
        multiExpandButton.Margin(Thickness{0, 0, 10, 10});
        muxc::Canvas::SetZIndex(multiExpandButton, 100);
        muxa::AutomationProperties::SetName(multiExpandButton,
                                            L"Expand preview");
        state->multiPreviewExpandButton =
            winrt::make_weak(multiExpandButton);
        auto weakMultiExpandIcon = winrt::make_weak(multiExpandIcon);
        multiExpandButton.Click(
            [weakState, weakMultiExpandIcon](auto const&,
                                             RoutedEventArgs const&) {
                auto state = weakState.lock();
                auto surface = state ? state->multiPreviewSurface.get()
                                     : nullptr;
                if (!state || !surface) return;
                state->multiPreviewExpanded = !state->multiPreviewExpanded;
                surface.Height(state->multiPreviewExpanded
                                   ? std::clamp(
                                         state->multiPreviewNormalHeight * 1.65,
                                         340.0, 520.0)
                                   : state->multiPreviewNormalHeight);
                if (auto icon = weakMultiExpandIcon.get()) {
                    icon.Glyph(state->multiPreviewExpanded ? L"\uE73F"
                                                           : L"\uE740");
                }
            });
        multiPreviewSurface.Children().Append(multiExpandButton);

        uint32_t thumbnailIndex = 0;
        if (host.Children().IndexOf(thumbnail.as<UIElement>(),
                                    thumbnailIndex)) {
            host.Children().InsertAt(thumbnailIndex + 1,
                                     multiPreviewSurface);
        }
        break;
    }

    muxc::Grid gifCard;
    gifCard.Name(L"BetterDetailPanelGifCard");
    gifCard.Margin(Thickness{0, 4, 0, 0});
    gifCard.Height(state->gifNormalHeight);
    gifCard.HorizontalAlignment(HorizontalAlignment::Stretch);
    gifCard.Visibility(Visibility::Collapsed);
    state->gifCard = winrt::make_weak(gifCard.as<FrameworkElement>());

    muxc::Image gifImage;
    gifImage.Stretch(winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
    gifImage.HorizontalAlignment(HorizontalAlignment::Stretch);
    gifImage.VerticalAlignment(VerticalAlignment::Stretch);
    state->gifImage = winrt::make_weak(gifImage);
    gifCard.Children().Append(gifImage);

    auto gifExpandButton = BetterPanelMakeButton(L"");
    muxc::FontIcon gifExpandIcon;
    gifExpandIcon.Glyph(L"\uE740");
    gifExpandIcon.FontSize(16);
    gifExpandButton.Content(gifExpandIcon);
    gifExpandButton.Width(36);
    gifExpandButton.Height(36);
    gifExpandButton.MinWidth(36);
    gifExpandButton.MinHeight(36);
    gifExpandButton.Padding(Thickness{0, 0, 0, 0});
    gifExpandButton.HorizontalAlignment(HorizontalAlignment::Right);
    gifExpandButton.VerticalAlignment(VerticalAlignment::Bottom);
    gifExpandButton.Margin(Thickness{0, 0, 10, 10});
    muxc::Canvas::SetZIndex(gifExpandButton, 100);
    state->gifExpandButton = winrt::make_weak(gifExpandButton);
    auto weakGifExpandIcon = winrt::make_weak(gifExpandIcon);
    gifExpandButton.Click(
        [weakState, weakGifExpandIcon](
            winrt::Windows::Foundation::IInspectable const&,
            RoutedEventArgs const&) {
            auto state = weakState.lock();
            auto card = state ? state->gifCard.get() : nullptr;
            if (!state || !card) {
                return;
            }
            state->gifExpanded = !state->gifExpanded;
            card.Height(state->gifExpanded
                            ? std::clamp(state->gifNormalHeight * 1.65,
                                         360.0, 560.0)
                            : state->gifNormalHeight);
            if (auto icon = weakGifExpandIcon.get()) {
                icon.Glyph(state->gifExpanded ? L"\uE73F" : L"\uE740");
            }
        });
    gifCard.Children().Append(gifExpandButton);
    panel.Children().Append(gifCard);

    muxc::Border videoCard;
    videoCard.Name(L"BetterDetailPanelVideoCard");
    videoCard.Margin(Thickness{0, 4, 0, 0});
    videoCard.CornerRadius(CornerRadius{8});
    videoCard.HorizontalAlignment(HorizontalAlignment::Stretch);
    videoCard.Visibility(Visibility::Collapsed);
    state->videoCard = winrt::make_weak(videoCard.as<FrameworkElement>());

    muxc::MediaPlayerElement videoPlayer;
    videoPlayer.AreTransportControlsEnabled(false);
    videoPlayer.AutoPlay(false);
    videoPlayer.Stretch(
        winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
    // Keep the decoder's rendering surface stable. The Viewbox below scales
    // this surface through XAML composition without forcing the active decoder
    // to recreate it for every pixel of a Details-pane resize.
    // Scale only the picture. Keep the controls outside the Viewbox so they
    // remain a readable, fixed-height strip at every Details-pane width.
    constexpr double videoSurfaceWidth = 420.0;
    constexpr double videoSurfaceHeight = 236.0;
    videoPlayer.Width(videoSurfaceWidth);
    videoPlayer.Height(videoSurfaceHeight);
    videoPlayer.HorizontalAlignment(HorizontalAlignment::Center);
    state->videoPlayer = winrt::make_weak(videoPlayer);

    muxc::Viewbox videoViewport;
    videoViewport.Width(videoSurfaceWidth);
    videoViewport.Height(videoSurfaceHeight);
    videoViewport.HorizontalAlignment(HorizontalAlignment::Center);
    videoViewport.Stretch(
        winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
    videoViewport.Child(videoPlayer);
    state->videoViewport = winrt::make_weak(videoViewport);

    muxc::Grid videoStrip;
    videoStrip.Height(40);
    videoStrip.HorizontalAlignment(HorizontalAlignment::Stretch);
    for (int i = 0; i < 4; ++i) {
        muxc::ColumnDefinition column;
        column.Width(GridLength{1, i == 1 ? GridUnitType::Star
                                          : GridUnitType::Auto});
        videoStrip.ColumnDefinitions().Append(column);
    }
    auto videoPlay = BetterPanelMakeButton(L"");
    muxc::FontIcon videoPlayIcon;
    videoPlayIcon.Glyph(L"\uE768");
    videoPlayIcon.FontSize(15);
    videoPlay.Content(videoPlayIcon);
    videoPlay.Width(36);
    videoPlay.Height(34);
    muxa::AutomationProperties::SetName(videoPlay, L"Play or pause video");
    videoPlay.Click([weakState](auto const&, RoutedEventArgs const&) {
        if (auto state = weakState.lock()) {
            if (auto element = state->videoPlayer.get()) {
                try {
                    auto player = element.MediaPlayer();
                    if (!player) return;
                    if (player.PlaybackSession().PlaybackState() ==
                        wmp::MediaPlaybackState::Playing) player.Pause();
                    else player.Play();
                } catch (...) {}
            }
        }
    });
    muxc::Grid::SetColumn(videoPlay, 0);
    videoStrip.Children().Append(videoPlay);
    state->videoPlayButton = winrt::make_weak(videoPlay);

    muxc::Slider videoTimeline;
    videoTimeline.Minimum(0);
    videoTimeline.Maximum(1);
    videoTimeline.VerticalAlignment(VerticalAlignment::Center);
    muxa::AutomationProperties::SetName(videoTimeline, L"Video position");
    videoTimeline.ValueChanged(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    muxp::RangeBaseValueChangedEventArgs const& args) {
            auto state = weakState.lock();
            if (!state || state->updatingVideoTimeline) return;
            if (auto element = state->videoPlayer.get()) {
                try {
                    auto player = element.MediaPlayer();
                    if (player && player.PlaybackSession().CanSeek())
                        player.PlaybackSession().Position(
                            winrt::Windows::Foundation::TimeSpan{
                                static_cast<int64_t>(args.NewValue() * 10000000.0)});
                } catch (...) {}
            }
        });
    muxc::Grid::SetColumn(videoTimeline, 1);
    videoStrip.Children().Append(videoTimeline);
    state->videoTimeline = winrt::make_weak(videoTimeline);

    auto videoMute = BetterPanelMakeButton(L"");
    muxc::FontIcon videoMuteIcon;
    videoMuteIcon.Glyph(L"\uE767");
    videoMuteIcon.FontSize(15);
    videoMute.Content(videoMuteIcon);
    videoMute.Width(36);
    videoMute.Height(34);
    muxa::AutomationProperties::SetName(videoMute, L"Mute or unmute video");
    videoMute.Click([weakState](auto const&, RoutedEventArgs const&) {
        if (auto state = weakState.lock()) {
            if (auto element = state->videoPlayer.get()) {
                try {
                    auto player = element.MediaPlayer();
                    if (player) player.IsMuted(!player.IsMuted());
                } catch (...) {}
            }
        }
    });
    muxc::Grid::SetColumn(videoMute, 2);
    videoStrip.Children().Append(videoMute);
    state->videoMuteButton = winrt::make_weak(videoMute);

    auto videoFull = BetterPanelMakeButton(L"");
    muxc::FontIcon videoFullIcon;
    videoFullIcon.Glyph(L"\uE740");
    videoFullIcon.FontSize(15);
    videoFull.Content(videoFullIcon);
    videoFull.Width(36);
    videoFull.Height(34);
    muxa::AutomationProperties::SetName(videoFull, L"Full-screen video");
    videoFull.Click([weakState](auto const&, RoutedEventArgs const&) {
        if (auto state = weakState.lock()) {
            if (auto element = state->videoPlayer.get())
                element.IsFullWindow(!element.IsFullWindow());
        }
    });
    muxc::Grid::SetColumn(videoFull, 3);
    videoStrip.Children().Append(videoFull);

    DispatcherTimer videoControlsTimer;
    videoControlsTimer.Interval(winrt::Windows::Foundation::TimeSpan{5000000});
    state->videoControlsTimerTickToken =
        videoControlsTimer.Tick([weakState](auto const&, auto const&) {
        auto state = weakState.lock();
        if (!state) return;
        auto element = state->videoPlayer.get();
        if (!element) return;
        try {
            auto player = element.MediaPlayer();
            if (!player) return;
            auto session = player.PlaybackSession();
            if (auto button = state->videoPlayButton.get()) {
                if (auto icon = button.Content().try_as<muxc::FontIcon>())
                    icon.Glyph(session.PlaybackState() ==
                        wmp::MediaPlaybackState::Playing ? L"\uE769" : L"\uE768");
            }
            if (auto button = state->videoMuteButton.get()) {
                if (auto icon = button.Content().try_as<muxc::FontIcon>())
                    icon.Glyph(player.IsMuted() ? L"\uE74F" : L"\uE767");
            }
            if (auto slider = state->videoTimeline.get()) {
                state->updatingVideoTimeline = true;
                double duration = static_cast<double>(session.NaturalDuration().count()) /
                                  10000000.0;
                slider.Maximum(std::max(1.0, duration));
                slider.Value(std::clamp(
                    static_cast<double>(session.Position().count()) / 10000000.0,
                    0.0, slider.Maximum()));
                state->updatingVideoTimeline = false;
            }
        } catch (...) { state->updatingVideoTimeline = false; }
    });
    state->videoControlsTimer = videoControlsTimer;
    BetterPanelAttachHostSizeChangedHandler(state, host);
    muxc::StackPanel videoContent;
    videoContent.Children().Append(videoViewport);
    videoContent.Children().Append(videoStrip);
    videoCard.Child(videoContent);
    panel.Children().Append(videoCard);

    muxc::Border audioCard;
    audioCard.Name(L"BetterDetailPanelAudioCard");
    audioCard.Margin(Thickness{0, 4, 0, 0});
    audioCard.Padding(Thickness{14, 12, 14, 12});
    audioCard.CornerRadius(CornerRadius{8});
    audioCard.Visibility(Visibility::Collapsed);
    state->audioCard = winrt::make_weak(audioCard.as<FrameworkElement>());

    muxc::StackPanel audioContent;
    audioContent.Spacing(9);

    muxc::Grid artworkFrame;
    artworkFrame.Width(132);
    artworkFrame.Height(132);
    artworkFrame.HorizontalAlignment(HorizontalAlignment::Center);
    state->audioArtworkFrame =
        winrt::make_weak(artworkFrame.as<FrameworkElement>());

    muxc::TextBlock placeholder;
    placeholder.Text(L"♫");
    placeholder.FontSize(54);
    placeholder.Opacity(0.45);
    placeholder.HorizontalAlignment(HorizontalAlignment::Center);
    placeholder.VerticalAlignment(VerticalAlignment::Center);
    state->artworkPlaceholder = winrt::make_weak(placeholder);
    artworkFrame.Children().Append(placeholder);

    muxc::Image artwork;
    artwork.Width(132);
    artwork.Height(132);
    artwork.Stretch(winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
    state->artwork = winrt::make_weak(artwork);
    artworkFrame.Children().Append(artwork);
    audioContent.Children().Append(artworkFrame);

    muxc::TextBlock audioTitle;
    audioTitle.TextTrimming(TextTrimming::CharacterEllipsis);
    audioTitle.MaxWidth(host.ActualWidth() > 160 ? host.ActualWidth() - 90
                                                 : 300);
    audioTitle.FontWeight(
        winrt::Microsoft::UI::Text::FontWeights::SemiBold());
    audioTitle.VerticalAlignment(VerticalAlignment::Center);
    audioTitle.HorizontalAlignment(HorizontalAlignment::Center);
    state->audioTitle = winrt::make_weak(audioTitle);
    audioContent.Children().Append(audioTitle);

    auto transport = BetterPanelMakeRow();
    transport.HorizontalAlignment(HorizontalAlignment::Center);

    auto previousButton = BetterPanelMakeButton(L"");
    muxc::FontIcon previousIcon;
    previousIcon.Glyph(L"\uE892");
    previousIcon.FontSize(13);
    previousButton.Content(previousIcon);
    previousButton.Width(38);
    previousButton.Height(32);
    previousButton.Padding(Thickness{4, 2, 4, 2});
    muxa::AutomationProperties::SetName(previousButton, L"Previous audio file");
    muxc::ToolTipService::SetToolTip(previousButton,
                                    winrt::box_value(L"Previous audio file"));
    previousButton.Click([weakState](auto const&, RoutedEventArgs const&) {
        if (auto state = weakState.lock()) BetterPanelPlayAdjacent(state, -1);
    });
    transport.Children().Append(previousButton);

    auto speedButton = BetterPanelMakeButton(L"1×");
    speedButton.MinWidth(46);
    speedButton.Height(32);
    speedButton.Padding(Thickness{6, 2, 6, 2});
    muxa::AutomationProperties::SetName(speedButton, L"Playback speed");
    muxc::ToolTipService::SetToolTip(speedButton,
                                    winrt::box_value(L"Playback speed"));
    state->playbackSpeedButton = winrt::make_weak(speedButton);
    speedButton.Click([weakState](auto const&, RoutedEventArgs const&) {
        static constexpr double rates[] = {1.0, 1.25, 1.5, 2.0, 0.75};
        size_t index = 0;
        for (size_t i = 0; i < std::size(rates); ++i) {
            if (std::abs(rates[i] - g_betterPlaybackRate) < 0.01) {
                index = (i + 1) % std::size(rates);
                break;
            }
        }
        g_betterPlaybackRate = rates[index];
        {
            std::lock_guard lock(g_betterMediaMutex);
            if (g_betterMediaPlayer) {
                try {
                    g_betterMediaPlayer.PlaybackSession().PlaybackRate(
                        g_betterPlaybackRate);
                } catch (...) {}
            }
        }
        if (auto state = weakState.lock()) {
            if (auto button = state->playbackSpeedButton.get()) {
                std::wostringstream label;
                label << g_betterPlaybackRate << L"×";
                button.Content(winrt::box_value(label.str()));
            }
            BetterPanelSetStatus(state->status, L"Playback speed changed");
        }
    });
    transport.Children().Append(speedButton);

    auto repeatButton = BetterPanelMakeButton(L"");
    muxc::FontIcon repeatIcon;
    repeatIcon.Glyph(L"\uE8EE");
    repeatIcon.FontSize(13);
    repeatButton.Content(repeatIcon);
    repeatButton.Width(38);
    repeatButton.Height(32);
    repeatButton.Padding(Thickness{4, 2, 4, 2});
    repeatButton.Opacity(g_betterRepeatEnabled ? 1.0 : 0.55);
    muxa::AutomationProperties::SetName(repeatButton, L"Repeat");
    muxc::ToolTipService::SetToolTip(repeatButton, winrt::box_value(L"Repeat"));
    state->repeatButton = winrt::make_weak(repeatButton);
    repeatButton.Click([weakState](auto const&, RoutedEventArgs const&) {
        g_betterRepeatEnabled = !g_betterRepeatEnabled;
        {
            std::lock_guard lock(g_betterMediaMutex);
            if (g_betterMediaPlayer) {
                try {
                    g_betterMediaPlayer.IsLoopingEnabled(g_betterRepeatEnabled);
                } catch (...) {}
            }
        }
        if (auto state = weakState.lock()) {
            if (auto button = state->repeatButton.get())
                button.Opacity(g_betterRepeatEnabled ? 1.0 : 0.55);
            BetterPanelSetStatus(state->status,
                                 g_betterRepeatEnabled ? L"Repeat on"
                                                       : L"Repeat off");
        }
    });
    transport.Children().Append(repeatButton);

    auto shuffleButton = BetterPanelMakeButton(L"");
    muxc::FontIcon shuffleIcon;
    shuffleIcon.Glyph(L"\uE8B1");
    shuffleIcon.FontSize(13);
    shuffleButton.Content(shuffleIcon);
    shuffleButton.Width(38);
    shuffleButton.Height(32);
    shuffleButton.Padding(Thickness{4, 2, 4, 2});
    shuffleButton.Opacity(g_betterShuffleEnabled ? 1.0 : 0.55);
    muxa::AutomationProperties::SetName(shuffleButton, L"Shuffle");
    muxc::ToolTipService::SetToolTip(shuffleButton,
                                    winrt::box_value(L"Shuffle"));
    state->shuffleButton = winrt::make_weak(shuffleButton);
    shuffleButton.Click([weakState](auto const&, RoutedEventArgs const&) {
        g_betterShuffleEnabled = !g_betterShuffleEnabled;
        if (auto state = weakState.lock()) {
            if (auto button = state->shuffleButton.get())
                button.Opacity(g_betterShuffleEnabled ? 1.0 : 0.55);
            BetterPanelSetStatus(state->status,
                                 g_betterShuffleEnabled ? L"Shuffle on"
                                                        : L"Shuffle off");
        }
    });
    auto playButton = BetterPanelMakeButton(L"");
    muxc::FontIcon playIcon;
    playIcon.Glyph(L"\uE768");
    playIcon.FontSize(13);
    playButton.Content(playIcon);
    muxa::AutomationProperties::SetName(playButton, L"Play");
    muxc::ToolTipService::SetToolTip(playButton, winrt::box_value(L"Play"));
    playButton.Width(38);
    playButton.Height(32);
    playButton.Padding(Thickness{4, 2, 4, 2});
    state->playButton = winrt::make_weak(playButton);
    playButton.Click(
        [weakState, weakStatus](
            winrt::Windows::Foundation::IInspectable const&,
            RoutedEventArgs const&) {
            if (auto state = weakState.lock()) {
                BetterPanelTogglePlayback(state->selectedPath, weakStatus);
            }
        });
    transport.Children().Append(playButton);

    transport.Children().Append(shuffleButton);

    auto nextButton = BetterPanelMakeButton(L"");
    muxc::FontIcon nextIcon;
    nextIcon.Glyph(L"\uE893");
    nextIcon.FontSize(13);
    nextButton.Content(nextIcon);
    nextButton.Width(38);
    nextButton.Height(32);
    nextButton.Padding(Thickness{4, 2, 4, 2});
    muxa::AutomationProperties::SetName(nextButton, L"Next audio file");
    muxc::ToolTipService::SetToolTip(nextButton,
                                    winrt::box_value(L"Next audio file"));
    nextButton.Click([weakState](auto const&, RoutedEventArgs const&) {
        if (auto state = weakState.lock()) BetterPanelPlayAdjacent(state, 1);
    });
    transport.Children().Append(nextButton);
    audioContent.Children().Append(transport);

    muxc::Grid playbackBar;
    playbackBar.HorizontalAlignment(HorizontalAlignment::Stretch);
    muxc::ColumnDefinition seekColumn;
    seekColumn.Width(GridLength{1, GridUnitType::Star});
    muxc::ColumnDefinition volumeIconColumn;
    volumeIconColumn.Width(GridLength{1, GridUnitType::Auto});
    muxc::ColumnDefinition volumeSliderColumn;
    volumeSliderColumn.Width(GridLength{112, GridUnitType::Pixel});
    muxc::ColumnDefinition volumeTextColumn;
    volumeTextColumn.Width(GridLength{1, GridUnitType::Auto});
    playbackBar.ColumnDefinitions().Append(seekColumn);
    playbackBar.ColumnDefinitions().Append(volumeIconColumn);
    playbackBar.ColumnDefinitions().Append(volumeSliderColumn);
    playbackBar.ColumnDefinitions().Append(volumeTextColumn);

    muxc::Slider timeline;
    timeline.Minimum(0);
    timeline.Maximum(1);
    timeline.StepFrequency(1);
    timeline.Margin(Thickness{0, 0, 10, 0});
    timeline.VerticalAlignment(VerticalAlignment::Center);
    state->timeline = winrt::make_weak(timeline);
    timeline.ValueChanged(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    muxp::RangeBaseValueChangedEventArgs const& args) {
            auto state = weakState.lock();
            if (!state || state->updatingTimeline) {
                return;
            }
            std::lock_guard lock(g_betterMediaMutex);
            if (!g_betterMediaPlayer ||
                g_betterMediaPath != state->selectedPath) {
                return;
            }
            try {
                auto session = g_betterMediaPlayer.PlaybackSession();
                if (session.CanSeek()) {
                    session.Position(winrt::Windows::Foundation::TimeSpan{
                        static_cast<int64_t>(args.NewValue() * 10000000.0)});
                }
            } catch (...) {
            }
        });
    playbackBar.Children().Append(timeline);

    muxc::TextBlock timeText;
    timeText.Text(L"0:00 / --:--");
    timeText.FontSize(11);
    timeText.Opacity(0.70);
    timeText.TextAlignment(TextAlignment::Center);
    state->timeText = winrt::make_weak(timeText);

    auto muteButton = BetterPanelMakeButton(L"");
    muxc::FontIcon muteIcon;
    muteIcon.Glyph(g_betterMediaMuted ? L"\uE74F" : L"\uE767");
    muteIcon.FontSize(14);
    muteButton.Content(muteIcon);
    muteButton.Width(32);
    muteButton.Height(32);
    muteButton.Padding(Thickness{0, 0, 0, 0});
    muteButton.VerticalAlignment(VerticalAlignment::Center);
    muxa::AutomationProperties::SetName(
        muteButton, g_betterMediaMuted ? L"Unmute" : L"Mute");
    muxc::ToolTipService::SetToolTip(
        muteButton, winrt::box_value(g_betterMediaMuted ? L"Unmute" : L"Mute"));
    state->muteButton = winrt::make_weak(muteButton);
    muxc::Grid::SetColumn(muteButton, 1);
    muteButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            {
                std::lock_guard lock(g_betterMediaMutex);
                g_betterMediaMuted = !g_betterMediaMuted;
                if (g_betterMediaPlayer) {
                    try { g_betterMediaPlayer.IsMuted(g_betterMediaMuted); }
                    catch (...) {}
                }
            }
            if (auto button = state->muteButton.get()) {
                if (auto icon = button.Content().try_as<muxc::FontIcon>()) {
                    icon.Glyph(g_betterMediaMuted ? L"\uE74F" : L"\uE767");
                }
                muxa::AutomationProperties::SetName(
                    button, g_betterMediaMuted ? L"Unmute" : L"Mute");
                muxc::ToolTipService::SetToolTip(
                    button, winrt::box_value(
                                g_betterMediaMuted ? L"Unmute" : L"Mute"));
            }
        });
    playbackBar.Children().Append(muteButton);

    muxc::Slider volumeSlider;
    volumeSlider.Minimum(0);
    volumeSlider.Maximum(100);
    volumeSlider.StepFrequency(1);
    volumeSlider.Value(g_betterMediaVolume * 100.0);
    volumeSlider.Margin(Thickness{6, 0, 6, 0});
    volumeSlider.VerticalAlignment(VerticalAlignment::Center);
    muxc::Grid::SetColumn(volumeSlider, 2);
    muxa::AutomationProperties::SetName(volumeSlider, L"Volume");
    state->volumeSlider = winrt::make_weak(volumeSlider);

    muxc::TextBlock volumeText;
    volumeText.Text(std::to_wstring(
                        static_cast<int>(g_betterMediaVolume * 100.0)) + L"%");
    volumeText.MinWidth(32);
    volumeText.FontSize(11);
    volumeText.Opacity(0.70);
    volumeText.TextAlignment(TextAlignment::Right);
    volumeText.VerticalAlignment(VerticalAlignment::Center);
    muxc::Grid::SetColumn(volumeText, 3);
    state->volumeText = winrt::make_weak(volumeText);

    volumeSlider.ValueChanged(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    muxp::RangeBaseValueChangedEventArgs const& args) {
            auto state = weakState.lock();
            if (!state || state->updatingVolume) return;
            double volume = std::clamp(args.NewValue() / 100.0, 0.0, 1.0);
            {
                std::lock_guard lock(g_betterMediaMutex);
                g_betterMediaVolume = volume;
                if (g_betterMediaPlayer) {
                    try { g_betterMediaPlayer.Volume(volume); }
                    catch (...) {}
                }
            }
            if (auto text = state->volumeText.get()) {
                text.Text(std::to_wstring(
                              static_cast<int>(std::lround(volume * 100.0))) +
                          L"%");
            }
        });
    playbackBar.Children().Append(volumeSlider);
    playbackBar.Children().Append(volumeText);
    audioContent.Children().Append(playbackBar);
    audioContent.Children().Append(timeText);

    audioCard.Child(audioContent);
    panel.Children().Append(audioCard);

    muxc::Border archivePreviewCard;
    archivePreviewCard.Name(L"BetterDetailPanelArchivePreviewCard");
    archivePreviewCard.Margin(Thickness{0, 4, 0, 0});
    archivePreviewCard.Padding(Thickness{12, 10, 12, 12});
    archivePreviewCard.CornerRadius(CornerRadius{8});
    archivePreviewCard.Visibility(Visibility::Collapsed);
    archivePreviewCard.HorizontalAlignment(HorizontalAlignment::Stretch);
    state->archivePreviewCard =
        winrt::make_weak(archivePreviewCard.as<FrameworkElement>());

    muxc::StackPanel archivePreviewContent;
    archivePreviewContent.Spacing(8);
    muxc::TextBlock archivePreviewHeading;
    archivePreviewHeading.Text(L"Archive contents");
    archivePreviewHeading.FontWeight(
        winrt::Microsoft::UI::Text::FontWeights::SemiBold());
    archivePreviewContent.Children().Append(archivePreviewHeading);

    muxc::ScrollViewer archivePreviewScroll;
    archivePreviewScroll.MaxHeight(240);
    archivePreviewScroll.HorizontalScrollBarVisibility(
        muxc::ScrollBarVisibility::Auto);
    archivePreviewScroll.VerticalScrollBarVisibility(
        muxc::ScrollBarVisibility::Auto);
    muxc::TextBlock archivePreviewText;
    archivePreviewText.Text(L"Reading archive contents…");
    archivePreviewText.FontFamily(
        winrt::Microsoft::UI::Xaml::Media::FontFamily(L"Consolas"));
    archivePreviewText.FontSize(11);
    archivePreviewText.IsTextSelectionEnabled(true);
    archivePreviewText.TextWrapping(TextWrapping::NoWrap);
    state->archivePreviewText = winrt::make_weak(archivePreviewText);
    archivePreviewScroll.Content(archivePreviewText);
    archivePreviewContent.Children().Append(archivePreviewScroll);
    archivePreviewCard.Child(archivePreviewContent);
    panel.Children().Append(archivePreviewCard);

    muxc::Border textCard;
    textCard.Name(L"BetterDetailPanelTextCard");
    textCard.Margin(Thickness{0, 4, 0, 0});
    textCard.Padding(Thickness{12, 10, 12, 12});
    textCard.CornerRadius(CornerRadius{8});
    textCard.Visibility(Visibility::Collapsed);
    textCard.HorizontalAlignment(HorizontalAlignment::Stretch);
    state->textCard = winrt::make_weak(textCard.as<FrameworkElement>());

    muxc::StackPanel textContent;
    textContent.Spacing(8);

    muxc::Grid textHeadingRow;
    muxc::ColumnDefinition textHeadingColumn;
    textHeadingColumn.Width(GridLength{1, GridUnitType::Star});
    muxc::ColumnDefinition textLanguageColumn;
    textLanguageColumn.Width(GridLength{1, GridUnitType::Auto});
    textHeadingRow.ColumnDefinitions().Append(textHeadingColumn);
    textHeadingRow.ColumnDefinitions().Append(textLanguageColumn);

    muxc::TextBlock textHeading;
    textHeading.Text(L"Text preview");
    textHeading.FontWeight(
        winrt::Microsoft::UI::Text::FontWeights::SemiBold());
    textHeading.VerticalAlignment(VerticalAlignment::Center);
    textHeadingRow.Children().Append(textHeading);

    muxc::ComboBox syntaxLanguagePicker;
    syntaxLanguagePicker.Width(150);
    syntaxLanguagePicker.Height(32);
    syntaxLanguagePicker.MinHeight(32);
    syntaxLanguagePicker.HorizontalAlignment(HorizontalAlignment::Right);
    syntaxLanguagePicker.VerticalAlignment(VerticalAlignment::Center);
    muxc::Grid::SetColumn(syntaxLanguagePicker, 1);
    muxa::AutomationProperties::SetName(syntaxLanguagePicker,
                                        L"Syntax language");
    for (auto const& option : kBetterPanelSyntaxOptions) {
        muxc::ComboBoxItem item;
        item.Content(winrt::box_value(option.label));
        syntaxLanguagePicker.Items().Append(item);
    }
    syntaxLanguagePicker.SelectedIndex(0);
    state->syntaxLanguagePicker = winrt::make_weak(syntaxLanguagePicker);
    syntaxLanguagePicker.SelectionChanged(
        [weakState](winrt::Windows::Foundation::IInspectable const& sender,
                    muxc::SelectionChangedEventArgs const&) {
            auto picker = sender.try_as<muxc::ComboBox>();
            auto state = weakState.lock();
            if (!picker || !state) return;
            int index = picker.SelectedIndex();
            if (index < 0 ||
                index >= static_cast<int>(kBetterPanelSyntaxOptions.size()))
                return;
            state->syntaxLanguage =
                kBetterPanelSyntaxOptions[static_cast<size_t>(index)].language;
            if (auto editor = state->textEditor.get()) {
                auto text = BetterPanelEditorText(editor);
                BetterPanelRenderSyntaxPreview(state, text);
                BetterPanelFormatTextEditor(state, text);
                BetterPanelUpdateTextControls(state);
            }
        });
    textContent.Children().Append(textHeadingRow);

    muxc::TextBlock textInfo;
    textInfo.FontSize(11);
    textInfo.Opacity(0.70);
    textInfo.TextWrapping(TextWrapping::Wrap);
    state->textInfo = winrt::make_weak(textInfo);
    textContent.Children().Append(textInfo);

    muxc::Grid textSearchRow;
    textSearchRow.ColumnSpacing(5);
    state->textSearchRow =
        winrt::make_weak(textSearchRow.as<FrameworkElement>());
    muxc::ColumnDefinition textSearchFieldColumn;
    textSearchFieldColumn.Width(GridLength{1, GridUnitType::Star});
    textSearchRow.ColumnDefinitions().Append(textSearchFieldColumn);
    for (int index = 0; index < 4; ++index) {
        muxc::ColumnDefinition column;
        column.Width(GridLength{1, GridUnitType::Auto});
        textSearchRow.ColumnDefinitions().Append(column);
    }

    muxc::TextBox textSearchBox;
    textSearchBox.PlaceholderText(L"Search preview");
    textSearchBox.Height(32);
    textSearchBox.MinHeight(32);
    textSearchBox.HorizontalAlignment(HorizontalAlignment::Stretch);
    state->textSearchBox = winrt::make_weak(textSearchBox);
    textSearchBox.GotFocus(
        [weakState](winrt::Windows::Foundation::IInspectable const& sender,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            auto editor = sender.try_as<muxc::TextBox>();
            if (state && editor) {
                state->transientFocusedEditor = winrt::make_weak(editor);
            }
        });
    textSearchBox.LostFocus(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            if (auto state = weakState.lock()) {
                state->transientFocusedEditor = {};
            }
        });
    textSearchBox.TextChanged(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    muxc::TextChangedEventArgs const&) {
            if (auto state = weakState.lock()) {
                state->textSearchActive = false;
                state->textSearchQuery.clear();
                state->textSearchMatches.clear();
                state->textSearchMatchIndex = 0;
                if (auto result = state->textSearchResult.get()) {
                    result.Text(L"");
                }
                if (auto button = state->textSearchPreviousButton.get()) {
                    button.IsEnabled(false);
                }
                if (auto button = state->textSearchNextButton.get()) {
                    button.IsEnabled(false);
                }
                BetterPanelUpdateTextControls(state);
            }
        });
    textSearchBox.KeyDown(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    winrt::Microsoft::UI::Xaml::Input::KeyRoutedEventArgs const&
                        args) {
            if (args.Key() != winrt::Windows::System::VirtualKey::Enter) return;
            args.Handled(true);
            if (auto state = weakState.lock()) {
                BetterPanelUpdateTextSearch(
                    state, (GetKeyState(VK_SHIFT) & 0x8000) ? -1 : 1, false);
            }
        });
    textSearchRow.Children().Append(textSearchBox);

    muxc::Grid::SetColumn(syntaxLanguagePicker, 1);
    textSearchRow.Children().Append(syntaxLanguagePicker);

    auto textSearchPrevious = BetterPanelMakeButton(L"");
    muxc::FontIcon textSearchPreviousIcon;
    textSearchPreviousIcon.Glyph(L"\uE70E");
    textSearchPrevious.Content(textSearchPreviousIcon);
    textSearchPrevious.Width(32);
    textSearchPrevious.Height(32);
    textSearchPrevious.Padding(Thickness{0});
    textSearchPrevious.IsEnabled(false);
    muxc::Grid::SetColumn(textSearchPrevious, 2);
    muxa::AutomationProperties::SetName(textSearchPrevious,
                                        L"Previous search result");
    state->textSearchPreviousButton = winrt::make_weak(textSearchPrevious);
    textSearchPrevious.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            if (auto state = weakState.lock()) {
                BetterPanelUpdateTextSearch(state, -1, false);
            }
        });
    textSearchRow.Children().Append(textSearchPrevious);

    auto textSearchNext = BetterPanelMakeButton(L"");
    muxc::FontIcon textSearchNextIcon;
    textSearchNextIcon.Glyph(L"\uE70D");
    textSearchNext.Content(textSearchNextIcon);
    textSearchNext.Width(32);
    textSearchNext.Height(32);
    textSearchNext.Padding(Thickness{0});
    textSearchNext.IsEnabled(false);
    muxc::Grid::SetColumn(textSearchNext, 3);
    muxa::AutomationProperties::SetName(textSearchNext,
                                        L"Next search result");
    state->textSearchNextButton = winrt::make_weak(textSearchNext);
    textSearchNext.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            if (auto state = weakState.lock()) {
                BetterPanelUpdateTextSearch(state, 1, false);
            }
        });
    textSearchRow.Children().Append(textSearchNext);

    muxc::TextBlock textSearchResult;
    textSearchResult.MinWidth(54);
    textSearchResult.FontSize(11);
    textSearchResult.Opacity(0.72);
    textSearchResult.VerticalAlignment(VerticalAlignment::Center);
    textSearchResult.TextAlignment(TextAlignment::Right);
    muxc::Grid::SetColumn(textSearchResult, 4);
    state->textSearchResult = winrt::make_weak(textSearchResult);
    textSearchRow.Children().Append(textSearchResult);
    textContent.Children().Append(textSearchRow);

    muxc::RichEditBox textEditor;
    textEditor.AcceptsReturn(true);
    textEditor.IsReadOnly(true);
    textEditor.IsSpellCheckEnabled(false);
    textEditor.IsTextPredictionEnabled(false);
    textEditor.TextWrapping(TextWrapping::NoWrap);
    textEditor.MinHeight(220);
    textEditor.MaxHeight(430);
    textEditor.HorizontalAlignment(HorizontalAlignment::Stretch);
    textEditor.FontFamily(
        winrt::Microsoft::UI::Xaml::Media::FontFamily(L"Consolas"));
    textEditor.SelectionHighlightColorWhenNotFocused(
        winrt::Microsoft::UI::Xaml::Media::SolidColorBrush(
            winrt::Windows::UI::Colors::Transparent()));
    constexpr std::array<int, 7> textPreviewSizes{10, 11, 12, 14, 16, 18, 20};
    int savedTextPreviewSize = Wh_GetIntValue(L"betterPanelTextPreviewSize", 12);
    if (std::find(textPreviewSizes.begin(), textPreviewSizes.end(),
                  savedTextPreviewSize) == textPreviewSizes.end()) {
        savedTextPreviewSize = 12;
    }
    textEditor.FontSize(savedTextPreviewSize);
    muxc::ScrollViewer::SetHorizontalScrollBarVisibility(
        textEditor, muxc::ScrollBarVisibility::Auto);
    muxc::ScrollViewer::SetVerticalScrollBarVisibility(
        textEditor, muxc::ScrollBarVisibility::Auto);
    state->textEditor = winrt::make_weak(textEditor);
    textEditor.TextChanged(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            auto editor = state ? state->textEditor.get() : nullptr;
            if (!state || !editor || !state->textEditing ||
                state->suppressTextChanged) {
                return;
            }
            auto text = BetterPanelEditorText(editor);
            // RichEditBox raises TextChanged for character-format updates too.
            // Ignore those notifications or syntax coloring recursively
            // recolors the document until Explorer's UI thread stalls.
            if (text == state->textLastFormattedContent) return;
            state->textLastFormattedContent = text;
            state->textDirty = text != state->textOriginal;
            BetterPanelRenderSyntaxPreview(state, text);
            BetterPanelFormatTextEditor(state, text);
            BetterPanelUpdateTextControls(state);
            if (state->textSearchActive) {
                BetterPanelUpdateTextSearch(state, 0, true);
            }
        });
    textEditor.LostFocus(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            auto editor = state ? state->textEditor.get() : nullptr;
            if (!state || !editor) return;
            BetterPanelCollapseEditorSelection(editor);
        });
    muxc::Border syntaxPreviewSurface;
    syntaxPreviewSurface.MinHeight(220);
    syntaxPreviewSurface.MaxHeight(430);
    syntaxPreviewSurface.Padding(Thickness{10, 7, 10, 7});
    syntaxPreviewSurface.CornerRadius(CornerRadius{4});
    syntaxPreviewSurface.Background(
        winrt::Microsoft::UI::Xaml::Media::SolidColorBrush(
            winrt::Windows::UI::ColorHelper::FromArgb(24, 128, 128, 128)));
    syntaxPreviewSurface.BorderBrush(
        winrt::Microsoft::UI::Xaml::Media::SolidColorBrush(
            winrt::Windows::UI::ColorHelper::FromArgb(40, 128, 128, 128)));
    syntaxPreviewSurface.BorderThickness(Thickness{1});
    state->syntaxPreviewSurface =
        winrt::make_weak(syntaxPreviewSurface.as<FrameworkElement>());

    muxc::ScrollViewer syntaxPreviewScroll;
    syntaxPreviewScroll.HorizontalScrollBarVisibility(
        muxc::ScrollBarVisibility::Auto);
    syntaxPreviewScroll.VerticalScrollBarVisibility(
        muxc::ScrollBarVisibility::Auto);
    muxc::TextBlock syntaxPreview;
    syntaxPreview.FontFamily(
        winrt::Microsoft::UI::Xaml::Media::FontFamily(L"Consolas"));
    syntaxPreview.FontSize(savedTextPreviewSize);
    syntaxPreview.TextWrapping(TextWrapping::NoWrap);
    syntaxPreview.IsTextSelectionEnabled(true);
    state->syntaxPreview = winrt::make_weak(syntaxPreview);
    syntaxPreviewScroll.Content(syntaxPreview);
    syntaxPreviewSurface.Child(syntaxPreviewScroll);
    textContent.Children().Append(syntaxPreviewSurface);

    textEditor.Visibility(Visibility::Collapsed);
    textContent.Children().Append(textEditor);
    state->hostPointerPressedToken = host.PointerPressed(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    winrt::Microsoft::UI::Xaml::Input::
                        PointerRoutedEventArgs const& args) {
            auto state = weakState.lock();
            auto editor = state ? state->textEditor.get() : nullptr;
            if (!state || !editor || !state->textEditing) return;
            auto position = args.GetCurrentPoint(editor).Position();
            bool insideEditor = position.X >= 0 && position.Y >= 0 &&
                                position.X < editor.ActualWidth() &&
                                position.Y < editor.ActualHeight();
            if (!insideEditor) {
                BetterPanelCollapseEditorSelection(editor);
            }
        });

    muxc::Grid textActions;
    textActions.HorizontalAlignment(HorizontalAlignment::Stretch);
    muxc::ColumnDefinition textButtonsColumn;
    textButtonsColumn.Width(GridLength{1, GridUnitType::Star});
    muxc::ColumnDefinition textSizeColumn;
    textSizeColumn.Width(GridLength{1, GridUnitType::Auto});
    textActions.ColumnDefinitions().Append(textButtonsColumn);
    textActions.ColumnDefinitions().Append(textSizeColumn);

    auto textActionButtons = BetterPanelMakeRow();
    textActionButtons.HorizontalAlignment(HorizontalAlignment::Left);
    textActions.Children().Append(textActionButtons);

    auto textEditButton =
        BetterPanelMakeIconButton(L"Edit", L"\uE70F");
    textEditButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            if (auto state = weakState.lock()) {
                BetterPanelBeginTextEdit(state);
            }
        });
    state->textEditButton = winrt::make_weak(textEditButton);
    textActionButtons.Children().Append(textEditButton);

    auto textSaveButton =
        BetterPanelMakeIconButton(L"Save", L"\uE74E");
    textSaveButton.Visibility(Visibility::Collapsed);
    textSaveButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            if (auto state = weakState.lock()) {
                BetterPanelSaveTextEdit(state);
            }
        });
    state->textSaveButton = winrt::make_weak(textSaveButton);
    textActionButtons.Children().Append(textSaveButton);

    auto textCancelButton = BetterPanelMakeButton(L"Cancel");
    textCancelButton.Visibility(Visibility::Collapsed);
    textCancelButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            if (auto state = weakState.lock()) {
                BetterPanelCancelTextEdit(state);
            }
        });
    state->textCancelButton = winrt::make_weak(textCancelButton);
    textActionButtons.Children().Append(textCancelButton);

    muxc::TextBlock textActionStatus;
    textActionStatus.Name(L"BetterPanelTextActionStatus");
    textActionStatus.FontSize(11);
    textActionStatus.Opacity(0.70);
    textActionStatus.VerticalAlignment(VerticalAlignment::Center);
    textActionStatus.TextWrapping(TextWrapping::NoWrap);
    textActionStatus.TextTrimming(TextTrimming::CharacterEllipsis);
    textActionStatus.MaxWidth(360);
    textActionStatus.Margin(Thickness{4, 0, 0, 0});
    textActionStatus.Visibility(Visibility::Collapsed);
    state->textActionStatus = winrt::make_weak(textActionStatus);

    auto textReloadButton =
        BetterPanelMakeIconButton(L"Reload", L"\uE72C");
    textReloadButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (state && !state->textEditing &&
                BetterPanelIsTextFile(state->selectedPath)) {
                BetterPanelLoadTextPreview(state, state->selectedPath);
                BetterPanelSetStatus(state->textActionStatus,
                                     L"Reloading text preview");
            }
        });
    state->textReloadButton = winrt::make_weak(textReloadButton);
    textActionButtons.Children().Append(textReloadButton);
    textActionButtons.Children().Append(textActionStatus);

    muxc::ComboBox textSizePicker;
    textSizePicker.Width(82);
    textSizePicker.Height(32);
    textSizePicker.MinHeight(32);
    textSizePicker.HorizontalAlignment(HorizontalAlignment::Right);
    textSizePicker.VerticalAlignment(VerticalAlignment::Center);
    muxc::Grid::SetColumn(textSizePicker, 1);
    muxa::AutomationProperties::SetName(textSizePicker,
                                        L"Text preview size");
    int selectedTextSizeIndex = 2;
    for (size_t index = 0; index < textPreviewSizes.size(); ++index) {
        muxc::ComboBoxItem item;
        item.Content(winrt::box_value(
            std::to_wstring(textPreviewSizes[index]) + L" px"));
        textSizePicker.Items().Append(item);
        if (textPreviewSizes[index] == savedTextPreviewSize) {
            selectedTextSizeIndex = static_cast<int>(index);
        }
    }
    textSizePicker.SelectedIndex(selectedTextSizeIndex);
    textSizePicker.SelectionChanged(
        [weakState](winrt::Windows::Foundation::IInspectable const& sender,
                    muxc::SelectionChangedEventArgs const&) {
            static constexpr std::array<int, 7> sizes{10, 11, 12, 14,
                                                       16, 18, 20};
            auto picker = sender.try_as<muxc::ComboBox>();
            auto state = weakState.lock();
            if (!picker || !state) return;
            int index = picker.SelectedIndex();
            if (index < 0 || index >= static_cast<int>(sizes.size())) return;
            int size = sizes[index];
            if (auto editor = state->textEditor.get()) {
                editor.FontSize(size);
            }
            if (auto preview = state->syntaxPreview.get()) {
                preview.FontSize(size);
            }
            Wh_SetIntValue(L"betterPanelTextPreviewSize", size);
        });
    textActions.Children().Append(textSizePicker);

    textContent.Children().Append(textActions);
    textCard.Child(textContent);
    panel.Children().Append(textCard);

    muxc::Border pdfCard;
    pdfCard.Name(L"BetterDetailPanelPdfCard");
    pdfCard.Margin(Thickness{0, 4, 0, 0});
    pdfCard.Padding(Thickness{10, 10, 10, 12});
    pdfCard.CornerRadius(CornerRadius{8});
    pdfCard.Visibility(Visibility::Collapsed);
    pdfCard.HorizontalAlignment(HorizontalAlignment::Stretch);
    state->pdfCard = winrt::make_weak(pdfCard.as<FrameworkElement>());

    muxc::StackPanel pdfContent;
    pdfContent.Spacing(8);

    muxc::TextBlock pdfHeading;
    pdfHeading.Text(L"PDF preview");
    pdfHeading.FontWeight(
        winrt::Microsoft::UI::Text::FontWeights::SemiBold());
    pdfContent.Children().Append(pdfHeading);

    muxc::TextBlock pdfInfo;
    pdfInfo.Text(L"Loading PDF…");
    pdfInfo.FontSize(11);
    pdfInfo.Opacity(0.72);
    pdfInfo.TextWrapping(TextWrapping::Wrap);
    state->pdfInfo = winrt::make_weak(pdfInfo);
    pdfContent.Children().Append(pdfInfo);

    muxc::Grid pdfSearchRow;
    pdfSearchRow.ColumnSpacing(4);
    state->pdfSearchRow =
        winrt::make_weak(pdfSearchRow.as<FrameworkElement>());
    muxc::ColumnDefinition pdfSearchFieldColumn;
    pdfSearchFieldColumn.Width(GridLength{1, GridUnitType::Star});
    pdfSearchRow.ColumnDefinitions().Append(pdfSearchFieldColumn);
    for (int i = 0; i < 3; ++i) {
        muxc::ColumnDefinition buttonColumn;
        buttonColumn.Width(GridLength{1, GridUnitType::Auto});
        pdfSearchRow.ColumnDefinitions().Append(buttonColumn);
    }
    muxc::ColumnDefinition pdfSearchResultColumn;
    pdfSearchResultColumn.Width(GridLength{64, GridUnitType::Pixel});
    pdfSearchRow.ColumnDefinitions().Append(pdfSearchResultColumn);

    muxc::TextBox pdfSearchBox;
    pdfSearchBox.PlaceholderText(L"Search PDF");
    pdfSearchBox.Height(32);
    pdfSearchBox.MinHeight(32);
    state->pdfSearchBox = winrt::make_weak(pdfSearchBox);
    pdfSearchBox.GotFocus(
        [weakState](winrt::Windows::Foundation::IInspectable const& sender,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            auto editor = sender.try_as<muxc::TextBox>();
            if (state && editor) {
                state->transientFocusedEditor = winrt::make_weak(editor);
            }
        });
    pdfSearchBox.LostFocus(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            if (auto state = weakState.lock()) {
                state->transientFocusedEditor = {};
            }
        });
    pdfSearchRow.Children().Append(pdfSearchBox);

    auto pdfSearchButton = BetterPanelMakeIconButton(L"Search PDF", L"\uE721");
    pdfSearchButton.IsEnabled(false);
    state->pdfSearchButton = winrt::make_weak(pdfSearchButton);
    muxc::Grid::SetColumn(pdfSearchButton, 1);
    pdfSearchRow.Children().Append(pdfSearchButton);

    auto pdfSearchPrevious =
        BetterPanelMakeIconButton(L"Previous match", L"\uE70E");
    pdfSearchPrevious.IsEnabled(false);
    state->pdfSearchPreviousButton = winrt::make_weak(pdfSearchPrevious);
    muxc::Grid::SetColumn(pdfSearchPrevious, 2);
    pdfSearchRow.Children().Append(pdfSearchPrevious);

    auto pdfSearchNext = BetterPanelMakeIconButton(L"Next match", L"\uE70D");
    pdfSearchNext.IsEnabled(false);
    state->pdfSearchNextButton = winrt::make_weak(pdfSearchNext);
    muxc::Grid::SetColumn(pdfSearchNext, 3);
    pdfSearchRow.Children().Append(pdfSearchNext);

    muxc::TextBlock pdfSearchResult;
    pdfSearchResult.FontSize(11);
    pdfSearchResult.Opacity(0.72);
    pdfSearchResult.TextAlignment(TextAlignment::Right);
    pdfSearchResult.VerticalAlignment(VerticalAlignment::Center);
    state->pdfSearchResult = winrt::make_weak(pdfSearchResult);
    muxc::Grid::SetColumn(pdfSearchResult, 4);
    pdfSearchRow.Children().Append(pdfSearchResult);

    auto runPdfSearch = [weakState]() {
        auto state = weakState.lock();
        auto search = state ? state->pdfSearchBox.get() : nullptr;
        if (!state || !search || !state->pdfDocument) return;
        BetterPanelSearchPdf(weakState, state->selectedPath,
                             std::wstring(search.Text().c_str()));
    };
    pdfSearchButton.Click(
        [runPdfSearch](winrt::Windows::Foundation::IInspectable const&,
                       RoutedEventArgs const&) { runPdfSearch(); });
    pdfSearchBox.KeyDown(
        [runPdfSearch](winrt::Windows::Foundation::IInspectable const&,
                       winrt::Microsoft::UI::Xaml::Input::KeyRoutedEventArgs const& args) {
            if (args.Key() == winrt::Windows::System::VirtualKey::Enter) {
                args.Handled(true);
                runPdfSearch();
            }
        });
    pdfSearchPrevious.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (state) BetterPanelShowPdfSearchMatch(state, weakState, -1);
        });
    pdfSearchNext.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (state) BetterPanelShowPdfSearchMatch(state, weakState, 1);
        });
    pdfContent.Children().Append(pdfSearchRow);

    muxc::Border pdfPageSurface;
    pdfPageSurface.Height(460);
    pdfPageSurface.HorizontalAlignment(HorizontalAlignment::Stretch);
    pdfPageSurface.CornerRadius(CornerRadius{4});
    state->pdfPageSurface =
        winrt::make_weak(pdfPageSurface.as<FrameworkElement>());

    muxc::ScrollViewer pdfScroller;
    pdfScroller.HorizontalScrollBarVisibility(muxc::ScrollBarVisibility::Auto);
    pdfScroller.VerticalScrollBarVisibility(muxc::ScrollBarVisibility::Auto);
    pdfScroller.HorizontalScrollMode(muxc::ScrollMode::Enabled);
    pdfScroller.VerticalScrollMode(muxc::ScrollMode::Enabled);

    muxc::Image pdfImage;
    pdfImage.Stretch(winrt::Microsoft::UI::Xaml::Media::Stretch::Uniform);
    pdfImage.HorizontalAlignment(HorizontalAlignment::Center);
    pdfImage.VerticalAlignment(VerticalAlignment::Top);
    state->pdfImage = winrt::make_weak(pdfImage);
    pdfScroller.Content(pdfImage);
    pdfPageSurface.Child(pdfScroller);
    pdfContent.Children().Append(pdfPageSurface);

    auto pdfNavigation = BetterPanelMakeRow();
    pdfNavigation.HorizontalAlignment(HorizontalAlignment::Center);

    auto pdfPrevious = BetterPanelMakeIconButton(L"Previous", L"\uE76B");
    pdfPrevious.IsEnabled(false);
    state->pdfPreviousButton = winrt::make_weak(pdfPrevious);
    pdfPrevious.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state || state->pdfLoading || !state->pdfDocument ||
                state->pdfPageIndex == 0) {
                return;
            }
            --state->pdfPageIndex;
            BetterPanelUpdatePdfControls(state);
            BetterPanelRenderPdfPage(weakState, state->selectedPath,
                                     state->pdfPageIndex, state->pdfZoom);
        });
    pdfNavigation.Children().Append(pdfPrevious);

    muxc::TextBlock pdfPageText;
    pdfPageText.Text(L"Page -- of --");
    pdfPageText.MinWidth(96);
    pdfPageText.TextAlignment(TextAlignment::Center);
    pdfPageText.VerticalAlignment(VerticalAlignment::Center);
    state->pdfPageText = winrt::make_weak(pdfPageText);
    pdfNavigation.Children().Append(pdfPageText);

    auto pdfNext = BetterPanelMakeIconButton(L"Next", L"\uE76C");
    pdfNext.IsEnabled(false);
    state->pdfNextButton = winrt::make_weak(pdfNext);
    pdfNext.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state || state->pdfLoading || !state->pdfDocument ||
                state->pdfPageIndex + 1 >= state->pdfDocument.PageCount()) {
                return;
            }
            ++state->pdfPageIndex;
            BetterPanelUpdatePdfControls(state);
            BetterPanelRenderPdfPage(weakState, state->selectedPath,
                                     state->pdfPageIndex, state->pdfZoom);
        });
    pdfNavigation.Children().Append(pdfNext);
    pdfContent.Children().Append(pdfNavigation);

    auto pdfZoomRow = BetterPanelMakeRow();
    pdfZoomRow.HorizontalAlignment(HorizontalAlignment::Center);

    auto pdfZoomOut = BetterPanelMakeIconButton(L"Zoom out", L"\uE71F");
    pdfZoomOut.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state || state->pdfLoading || !state->pdfDocument) return;
            state->pdfZoom = std::max(0.5, state->pdfZoom - 0.25);
            BetterPanelUpdatePdfControls(state);
            BetterPanelRenderPdfPage(weakState, state->selectedPath,
                                     state->pdfPageIndex, state->pdfZoom);
        });
    pdfZoomRow.Children().Append(pdfZoomOut);

    muxc::TextBlock pdfZoomText;
    pdfZoomText.Text(L"100%");
    pdfZoomText.MinWidth(52);
    pdfZoomText.TextAlignment(TextAlignment::Center);
    pdfZoomText.VerticalAlignment(VerticalAlignment::Center);
    state->pdfZoomText = winrt::make_weak(pdfZoomText);
    pdfZoomRow.Children().Append(pdfZoomText);

    auto pdfZoomIn = BetterPanelMakeIconButton(L"Zoom in", L"\uE8A3");
    pdfZoomIn.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state || state->pdfLoading || !state->pdfDocument) return;
            state->pdfZoom = std::min(2.5, state->pdfZoom + 0.25);
            BetterPanelUpdatePdfControls(state);
            BetterPanelRenderPdfPage(weakState, state->selectedPath,
                                     state->pdfPageIndex, state->pdfZoom);
        });
    pdfZoomRow.Children().Append(pdfZoomIn);
    pdfContent.Children().Append(pdfZoomRow);

    pdfCard.Child(pdfContent);
    panel.Children().Append(pdfCard);

    // Keep the preview toggle in one predictable location: directly below
    // whichever native or custom preview is currently visible.
    panel.Children().Append(panelUtilities);
    panel.Children().Append(panelWindowControls);

    panel.Children().Append(fileTitleRow);

    muxc::StackPanel actionsHost;
    actionsHost.Name(L"BetterDetailPanelInlineActionsHost");
    actionsHost.HorizontalAlignment(HorizontalAlignment::Stretch);
    state->actionsHost = winrt::make_weak(actionsHost);
    panel.Children().Append(actionsHost);
    actionsHost.Children().Append(status);

    // Multiple-selection actions belong with the other top-level file actions,
    // not below the entire Details card.
    panel.Children().Append(multiActionRow);

    // Keep destination actions in the natural viewport immediately below the
    // normal action buttons instead of after Details and Metadata.
    panel.Children().Append(transferRow);

    muxc::Border homeCard;
    homeCard.Name(L"BetterDetailPanelHomeCard");
    homeCard.Padding(Thickness{10, 8, 10, 10});
    homeCard.CornerRadius(CornerRadius{8});
    homeCard.Visibility(Visibility::Collapsed);
    homeCard.HorizontalAlignment(HorizontalAlignment::Stretch);
    state->homeCard = winrt::make_weak(homeCard.as<FrameworkElement>());

    muxc::StackPanel homeContent;
    homeContent.Spacing(5);
    state->homeContent = winrt::make_weak(homeContent);
    homeCard.Child(homeContent);
    panel.Children().Append(homeCard);

    muxc::Border driveCard;
    driveCard.Name(L"BetterDetailPanelDriveCard");
    // The preview button is hidden for drive roots. A negative top margin here
    // overlaps Explorer's drive heading and clips the top of its text.
    driveCard.Margin(Thickness{0, 0, 0, 0});
    driveCard.Padding(Thickness{0, 0, 0, 6});
    driveCard.Visibility(Visibility::Collapsed);
    driveCard.HorizontalAlignment(HorizontalAlignment::Stretch);
    state->driveCard = winrt::make_weak(driveCard.as<FrameworkElement>());
    muxc::StackPanel driveContent;
    driveContent.Spacing(6);
    state->driveContent = winrt::make_weak(driveContent);
    driveCard.Child(driveContent);
    panel.Children().Append(driveCard);

    muxc::Border insightsCard;
    insightsCard.Name(L"BetterDetailPanelInsightsCard");
    insightsCard.Padding(Thickness{10, 8, 10, 10});
    insightsCard.CornerRadius(CornerRadius{8});
    insightsCard.Visibility(Visibility::Collapsed);
    insightsCard.HorizontalAlignment(HorizontalAlignment::Stretch);
    state->insightsCard =
        winrt::make_weak(insightsCard.as<FrameworkElement>());

    muxc::StackPanel insightsShell;
    insightsShell.Spacing(6);

    muxc::Grid insightsHeader;
    muxc::ColumnDefinition insightsTitleColumn;
    insightsTitleColumn.Width(GridLength{1, GridUnitType::Star});
    muxc::ColumnDefinition insightsCopyColumn;
    insightsCopyColumn.Width(GridLength{1, GridUnitType::Auto});
    insightsHeader.ColumnDefinitions().Append(insightsTitleColumn);
    insightsHeader.ColumnDefinitions().Append(insightsCopyColumn);

    auto insightsToggle = BetterPanelMakeButton(L"Details  ▾");
    insightsToggle.FontWeight(
        winrt::Microsoft::UI::Text::FontWeights::SemiBold());
    insightsToggle.HorizontalContentAlignment(HorizontalAlignment::Left);
    insightsToggle.HorizontalAlignment(HorizontalAlignment::Stretch);
    insightsToggle.Padding(Thickness{6, 4, 6, 4});
    state->insightsToggleButton = winrt::make_weak(insightsToggle);
    insightsHeader.Children().Append(insightsToggle);

    auto copyDetailsButton = BetterPanelMakeButton(L"");
    muxc::FontIcon copyDetailsIcon;
    copyDetailsIcon.Glyph(L"\uE8C8");
    copyDetailsIcon.FontSize(13);
    copyDetailsButton.Content(copyDetailsIcon);
    copyDetailsButton.Width(32);
    copyDetailsButton.Height(32);
    copyDetailsButton.MinWidth(32);
    copyDetailsButton.MinHeight(32);
    copyDetailsButton.Padding(Thickness{0, 0, 0, 0});
    copyDetailsButton.Margin(Thickness{6, 0, 0, 0});
    copyDetailsButton.HorizontalAlignment(HorizontalAlignment::Right);
    copyDetailsButton.VerticalAlignment(VerticalAlignment::Center);
    muxc::Grid::SetColumn(copyDetailsButton, 1);
    muxa::AutomationProperties::SetName(copyDetailsButton,
                                        L"Copy all details");
    muxc::ToolTipService::SetToolTip(copyDetailsButton,
                                    winrt::box_value(L"Copy all details"));
    copyDetailsButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            if (state->detailsCopyText.empty()) {
                BetterPanelSetStatus(state->detailsCopyHint,
                                     L"Details are still loading");
                return;
            }
            BetterPanelSetStatus(
                state->detailsCopyHint,
                BetterPanelCopyText(state->detailsCopyText)
                    ? L"All details copied"
                    : L"Copy failed");
        });
    insightsHeader.Children().Append(copyDetailsButton);
    insightsShell.Children().Append(insightsHeader);

    muxc::ProgressBar insightsLoadingBar;
    insightsLoadingBar.Height(2);
    insightsLoadingBar.Margin(Thickness{0, -6, 0, 0});
    insightsLoadingBar.HorizontalAlignment(HorizontalAlignment::Stretch);
    insightsLoadingBar.IsIndeterminate(false);
    insightsLoadingBar.Visibility(Visibility::Collapsed);
    muxa::AutomationProperties::SetName(insightsLoadingBar,
                                        L"Reading file details");
    state->insightsLoadingBar = winrt::make_weak(insightsLoadingBar);
    insightsShell.Children().Append(insightsLoadingBar);

    muxc::StackPanel insightsContent;
    insightsContent.Spacing(4);
    state->insightsContent = winrt::make_weak(insightsContent);
    insightsShell.Children().Append(insightsContent);

    muxc::TextBlock copyDetailsHint;
    copyDetailsHint.Name(L"BetterPanelDetailsCopyHint");
    copyDetailsHint.Text(L"Select a box to copy");
    copyDetailsHint.FontSize(11);
    copyDetailsHint.Opacity(0.72);
    copyDetailsHint.HorizontalAlignment(HorizontalAlignment::Right);
    copyDetailsHint.Margin(Thickness{0, 0, 2, 0});
    state->detailsCopyHint = winrt::make_weak(copyDetailsHint);
    insightsShell.Children().Append(copyDetailsHint);
    insightsToggle.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            state->insightsCollapsed = !state->insightsCollapsed;
            if (auto content = state->insightsContent.get()) {
                content.Visibility(state->insightsCollapsed
                                       ? Visibility::Collapsed
                                       : Visibility::Visible);
            }
            if (auto hint = state->detailsCopyHint.get()) {
                hint.Visibility(state->insightsCollapsed
                                    ? Visibility::Collapsed
                                    : Visibility::Visible);
            }
            if (auto button = state->insightsToggleButton.get()) {
                button.Content(winrt::box_value(state->insightsCollapsed
                                                    ? L"Details  ▸"
                                                    : L"Details  ▾"));
            }
        });

    auto propertiesButton = BetterPanelMakeIconButton(L"Properties", L"\uE90F");
    propertiesButton.Margin(Thickness{0, 8, 0, 0});
    propertiesButton.HorizontalAlignment(HorizontalAlignment::Left);
    propertiesButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state || state->selectedPath.empty()) return;
            SHELLEXECUTEINFOW info{sizeof(info)};
            info.fMask = SEE_MASK_INVOKEIDLIST;
            info.hwnd = state->explorerWindow;
            info.lpVerb = L"properties";
            info.lpFile = state->selectedPath.c_str();
            info.nShow = SW_SHOWNORMAL;
            BetterPanelSetStatus(state->status,
                                 ShellExecuteExW(&info)
                                     ? L"Properties opened"
                                     : L"Properties unavailable");
        });
    insightsShell.Children().Append(propertiesButton);
    insightsCard.Child(insightsShell);
    panel.Children().Append(insightsCard);

    muxc::Border metadataCard;
    metadataCard.Name(L"BetterDetailPanelMetadataCard");
    metadataCard.Padding(Thickness{10, 8, 10, 10});
    metadataCard.CornerRadius(CornerRadius{8});
    metadataCard.Visibility(Visibility::Collapsed);
    metadataCard.HorizontalAlignment(HorizontalAlignment::Stretch);
    state->metadataCard =
        winrt::make_weak(metadataCard.as<FrameworkElement>());

    muxc::StackPanel metadataShell;
    metadataShell.Spacing(6);

    muxc::Grid metadataHeader;
    muxc::ColumnDefinition metadataTitleColumn;
    metadataTitleColumn.Width(GridLength{1, GridUnitType::Star});
    muxc::ColumnDefinition metadataCopyColumn;
    metadataCopyColumn.Width(GridLength{1, GridUnitType::Auto});
    metadataHeader.ColumnDefinitions().Append(metadataTitleColumn);
    metadataHeader.ColumnDefinitions().Append(metadataCopyColumn);

    auto metadataToggle = BetterPanelMakeButton(L"Metadata  ▾");
    metadataToggle.FontWeight(
        winrt::Microsoft::UI::Text::FontWeights::SemiBold());
    metadataToggle.HorizontalContentAlignment(HorizontalAlignment::Left);
    metadataToggle.HorizontalAlignment(HorizontalAlignment::Stretch);
    metadataToggle.Padding(Thickness{6, 4, 6, 4});
    state->metadataToggleButton = winrt::make_weak(metadataToggle);
    metadataHeader.Children().Append(metadataToggle);

    auto copyMetadataButton = BetterPanelMakeButton(L"");
    muxc::FontIcon copyMetadataIcon;
    copyMetadataIcon.Glyph(L"\uE8C8");
    copyMetadataIcon.FontSize(13);
    copyMetadataButton.Content(copyMetadataIcon);
    copyMetadataButton.Width(32);
    copyMetadataButton.Height(32);
    copyMetadataButton.Padding(Thickness{0, 0, 0, 0});
    copyMetadataButton.Margin(Thickness{6, 0, 0, 0});
    muxc::Grid::SetColumn(copyMetadataButton, 1);
    muxa::AutomationProperties::SetName(copyMetadataButton,
                                        L"Copy all metadata");
    muxc::ToolTipService::SetToolTip(copyMetadataButton,
                                    winrt::box_value(L"Copy all metadata"));
    copyMetadataButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            std::wstring text = state->metadataEditing
                                    ? BetterPanelFormatMetadata(
                                          BetterPanelCurrentMetadata(state))
                                    : state->metadataCopyText;
            BetterPanelSetStatus(
                state->status,
                !text.empty() && BetterPanelCopyText(text)
                    ? L"All metadata copied"
                    : L"Metadata is still loading");
        });
    metadataHeader.Children().Append(copyMetadataButton);
    metadataShell.Children().Append(metadataHeader);

    muxc::StackPanel metadataContent;
    metadataContent.Spacing(5);
    state->metadataContent = winrt::make_weak(metadataContent);

    auto metadataTitle = BetterPanelAddMetadataField(
        metadataContent, L"Title", L"Song title", false, weakState);
    state->metadataTitle = winrt::make_weak(metadataTitle);
    auto metadataArtist = BetterPanelAddMetadataField(
        metadataContent, L"Artist", L"Artist", false, weakState);
    state->metadataArtist = winrt::make_weak(metadataArtist);
    auto metadataAlbum = BetterPanelAddMetadataField(
        metadataContent, L"Album", L"Album", false, weakState);
    state->metadataAlbum = winrt::make_weak(metadataAlbum);
    auto metadataGenre = BetterPanelAddMetadataField(
        metadataContent, L"Genre", L"Genre, separated by commas", false,
        weakState);
    state->metadataGenre = winrt::make_weak(metadataGenre);
    auto metadataYear = BetterPanelAddMetadataField(
        metadataContent, L"Year", L"Year", false, weakState);
    state->metadataYear = winrt::make_weak(metadataYear);
    auto metadataRating = BetterPanelAddMetadataField(
        metadataContent, L"Rating", L"0–5", false, weakState);
    state->metadataRating = winrt::make_weak(metadataRating);
    auto metadataTags = BetterPanelAddMetadataField(
        metadataContent, L"Tags", L"Tags, separated by commas", false,
        weakState);
    state->metadataTags = winrt::make_weak(metadataTags);
    auto metadataComments = BetterPanelAddMetadataField(
        metadataContent, L"Comments", L"Comments", true, weakState);
    state->metadataComments = winrt::make_weak(metadataComments);

    muxc::TextBlock metadataInfo;
    metadataInfo.Text(L"Reading metadata…");
    metadataInfo.FontSize(11);
    metadataInfo.Opacity(0.72);
    metadataInfo.TextWrapping(TextWrapping::Wrap);
    metadataInfo.Margin(Thickness{0, 2, 0, 2});
    state->metadataInfo = winrt::make_weak(metadataInfo);
    metadataContent.Children().Append(metadataInfo);

    auto metadataActions = BetterPanelMakeRow();
    metadataActions.HorizontalAlignment(HorizontalAlignment::Left);

    auto metadataEditButton =
        BetterPanelMakeIconButton(L"Edit", L"\uE70F");
    metadataEditButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            if (auto state = weakState.lock()) {
                BetterPanelBeginMetadataEdit(state);
            }
        });
    state->metadataEditButton = winrt::make_weak(metadataEditButton);
    metadataActions.Children().Append(metadataEditButton);

    auto metadataSaveButton =
        BetterPanelMakeIconButton(L"Save", L"\uE74E");
    metadataSaveButton.Visibility(Visibility::Collapsed);
    metadataSaveButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            BetterPanelSaveAudioMetadata(weakState);
        });
    state->metadataSaveButton = winrt::make_weak(metadataSaveButton);
    metadataActions.Children().Append(metadataSaveButton);

    auto metadataCancelButton = BetterPanelMakeButton(L"Cancel");
    metadataCancelButton.Visibility(Visibility::Collapsed);
    metadataCancelButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            if (auto state = weakState.lock()) {
                BetterPanelCancelMetadataEdit(state);
            }
        });
    state->metadataCancelButton = winrt::make_weak(metadataCancelButton);
    metadataActions.Children().Append(metadataCancelButton);

    auto metadataReloadButton =
        BetterPanelMakeIconButton(L"Reload", L"\uE72C");
    metadataReloadButton.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state || state->metadataEditing ||
                !BetterPanelIsAudioFile(state->selectedPath)) {
                return;
            }
            BetterPanelLoadAudioMetadata(weakState, state->selectedPath);
        });
    state->metadataReloadButton = winrt::make_weak(metadataReloadButton);
    metadataActions.Children().Append(metadataReloadButton);
    metadataContent.Children().Append(metadataActions);
    metadataShell.Children().Append(metadataContent);

    metadataToggle.Click(
        [weakState](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state) return;
            state->metadataCollapsed = !state->metadataCollapsed;
            if (auto content = state->metadataContent.get()) {
                content.Visibility(state->metadataCollapsed
                                       ? Visibility::Collapsed
                                       : Visibility::Visible);
            }
            if (auto button = state->metadataToggleButton.get()) {
                button.Content(winrt::box_value(state->metadataCollapsed
                                                    ? L"Metadata  ▸"
                                                    : L"Metadata  ▾"));
            }
        });

    metadataCard.Child(metadataShell);
    panel.Children().Append(metadataCard);

    host.Children().Append(panel);

    DispatcherTimer timer;
    // Event-driven updates handle normal clicks, keyboard selection, tab
    // changes, and navigation. This slow timer is only a recovery path for
    // changes initiated without an Explorer input message.
    // Explorer can expose its tab before the first Shell view and native
    // banner have finished loading. Retry quickly only during that startup
    // window, then return to the slow recovery cadence.
    timer.Interval(winrt::Windows::Foundation::TimeSpan{5000000});
    state->timerTickToken = timer.Tick([weakState](
                   winrt::Windows::Foundation::IInspectable const&,
                   winrt::Windows::Foundation::IInspectable const&) {
        if (auto state = weakState.lock()) {
            try {
                if (state->detached && state->reattachRequested) {
                    if (!state->nativePaneOpenForReattach) return;
                    if (auto host = state->host.get();
                        host && host.IsLoaded()) {
                        BetterPanelCloseDetachedWindow(state.get(), true);
                    } else {
                        BetterPanelScheduleCurrentThreadDiscovery();
                    }
                    return;
                }
                if (!state->detached) {
                    BetterPanelRefresh(state);
                }
                if (!state->detached && state->startupLoadingHost.get()) {
                    if (state->initialRefreshRetries < 10) {
                        ++state->initialRefreshRetries;
                    }
                    bool ready = !state->selectedPath.empty() ||
                                 (state->homeWasVisible &&
                                  state->homeContentLoaded);
                    bool waitingForHome = state->homeWasVisible &&
                                          state->homeContentLoading &&
                                          !state->homeContentLoaded;
                    if (ready || (state->initialRefreshRetries >= 10 &&
                                  !waitingForHome)) {
                        // Never leave the startup ring up indefinitely if
                        // Explorer doesn't expose a usable folder yet.
                        BetterPanelFinishStartupLoading(state);
                        state->timer.Interval(
                            winrt::Windows::Foundation::TimeSpan{40000000});
                    }
                }
            } catch (...) {
                Wh_Log(L"Detached selection refresh error %08X",
                       winrt::to_hresult().value);
            }
        }
    });
    state->timer = timer;

    DispatcherTimer mediaTimer;
    mediaTimer.Interval(winrt::Windows::Foundation::TimeSpan{5000000});
    state->mediaTimerTickToken = mediaTimer.Tick([weakState](
                        winrt::Windows::Foundation::IInspectable const&,
                        winrt::Windows::Foundation::IInspectable const&) {
        if (auto state = weakState.lock()) {
            BetterPanelRefreshPlaybackState(state);
        }
    });
    state->mediaTimer = mediaTimer;
    BetterPanelRefresh(state);
    timer.Start();

    auto weakInstalledHost = winrt::make_weak(host);
    state->hostUnloadedToken = host.Unloaded(
        [weakState, weakInstalledHost](winrt::Windows::Foundation::IInspectable const&,
                    RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state || state->unloaded) {
                return;
            }
            if (state->host.get() != weakInstalledHost.get()) return;
            // Explorer replaces this host when the selection type changes.
            // The standalone window owns its XAML tree until the user pins it
            // back; unloading the old host must not destroy that window.
            if (state->detached) {
                BetterPanelDetachHostUnloadedHandler(state);
                BetterPanelDetachNativePreviewHandler(state);
                state->host = {};
                state->explorerDetailsPane = {};
                state->explorerDetailsPaneHidden = false;
                state->detachedSelectionSignature.clear();
                return;
            }
            state->unloaded = true;
            BetterPanelCloseDetachedWindow(state.get(), false);
            BetterPanelDetachHostUnloadedHandler(state);
            state->insightsGeneration.fetch_add(1, std::memory_order_relaxed);
            BetterPanelStopStateTimers(state);
            BetterPanelRemoveAnimationHandlers(state);
            BetterPanelStopStateMedia(state);
            BetterPanelRemoveNativePreviewControls(state);
            BetterPanelUnwatchNativeDetailsVisibility(state);

            std::lock_guard lock(g_betterPanelMutex);
            std::erase_if(g_betterPanels,
                          [&](auto const& item) { return item == state; });
            g_betterPanelThreadHasPanel = std::ranges::any_of(
                g_betterPanels, [](auto const& item) {
                    return item && item->dispatcher &&
                           item->dispatcher.HasThreadAccess();
                });
        });

    std::lock_guard lock(g_betterPanelMutex);
    g_betterPanels.push_back(std::move(state));
    g_betterPanelThreadHasPanel = true;
    Wh_Log(L"Better Detail Panel 0.5 added");
}

bool BetterPanelRebindDetachedHost(muxc::StackPanel const& host) {
    HWND owner = BetterPanelGetExplorerWindowForElement(host);
    std::shared_ptr<BetterPanelState> state;
    {
        std::lock_guard lock(g_betterPanelMutex);
        for (auto const& candidate : g_betterPanels) {
            if (candidate && candidate->detached && !candidate->unloaded &&
                candidate->dispatcher && candidate->dispatcher.HasThreadAccess() &&
                candidate->explorerWindow == owner) {
                state = candidate;
                break;
            }
        }
    }
    if (!state) return false;
    if (state->host.get() == host) return true;

    BetterPanelDetachHostUnloadedHandler(state);
    state->host = winrt::make_weak(host);
    BetterPanelAttachHostSizeChangedHandler(state, host);
    state->explorerDetailsPane =
        winrt::make_weak(BetterPanelFindOwningDetailsPane(host));
    state->explorerDetailsPaneHidden = false;

    // The native thumbnail is replaced along with Explorer's host. Keep the
    // existing custom panel and its media state, but use the current native
    // thumbnail so the pop-out never displays a preview of an old selection.
    if (auto content = state->detachedContent) {
        for (auto const& child : host.Children()) {
            auto preview = child.try_as<muxc::Grid>();
            if (!preview) continue;
            BetterPanelDetachNativePreviewHandler(state);
            if (auto old = state->nativePreview.get()) {
                uint32_t oldIndex = 0;
                if (content.Children().IndexOf(old, oldIndex)) {
                    content.Children().RemoveAt(oldIndex);
                }
                if (auto expand = state->previewExpandButton.get()) {
                    uint32_t buttonIndex = 0;
                    if (old.Children().IndexOf(expand, buttonIndex)) {
                        old.Children().RemoveAt(buttonIndex);
                        preview.Children().Append(expand);
                    }
                }
                if (auto eye = state->nativePreviewToggleButton.get()) {
                    uint32_t buttonIndex = 0;
                    if (old.Children().IndexOf(eye, buttonIndex)) {
                        old.Children().RemoveAt(buttonIndex);
                        preview.Children().Append(eye);
                    }
                }
            }
            state->nativePreview = winrt::make_weak(preview);
            BetterPanelAttachNativePreviewHandler(state, preview);
            state->nativePreviewImage = winrt::make_weak(
                BetterPanelFindPreviewImage(preview));
            uint32_t index = 0;
            if (host.Children().IndexOf(preview, index)) {
                state->detachedNativePreviewIndex = index;
                host.Children().RemoveAt(index);
                content.Children().InsertAt(0, preview);
            }
            break;
        }
    }
    auto weakState = std::weak_ptr<BetterPanelState>(state);
    auto weakHost = winrt::make_weak(host);
    state->hostUnloadedToken = host.Unloaded(
        [weakState, weakHost](auto const&, RoutedEventArgs const&) {
            auto state = weakState.lock();
            if (!state || state->unloaded || state->host.get() != weakHost.get())
                return;
            BetterPanelDetachHostUnloadedHandler(state);
            state->host = {};
            state->explorerDetailsPane = {};
            state->explorerDetailsPaneHidden = false;
            state->detachedSelectionSignature.clear();
        });
    state->detachedSelectionSignature.clear();
    BetterPanelInvalidateExplorerQueryCaches();
    if (state->reattachRequested && state->nativePaneOpenForReattach) {
        BetterPanelCloseDetachedWindow(state.get(), true);
    } else if (!state->reattachRequested) {
        BetterPanelSetExplorerDetailsPaneHidden(state.get(), true);
        BetterPanelRefresh(state);
        BetterPanelRequestNativePaneVisibility(state.get(), false);
    }
    return true;
}

std::atomic<bool> g_betterPanelDiscoveryUnloading;
[[clang::no_destroy]] std::mutex g_betterPanelInstallDispatchersMutex;
[[clang::no_destroy]] std::unordered_map<DWORD, mud::DispatcherQueue>
    g_betterPanelInstallDispatchers;
[[clang::no_destroy]] std::unordered_set<void*> g_betterPanelPendingHosts;

void TryInstallBetterDetailPanel(FrameworkElement element) {
    if (g_betterPanelDiscoveryUnloading) return;
    if (element.Name() != L"DetailsViewThumbnail") return;

    auto host = element.try_as<muxc::StackPanel>();
    if (!host) return;
    if (BetterPanelRebindDetachedHost(host)) return;
    uint32_t staleLoadingIndex = UINT32_MAX;
    for (auto const& child : host.Children()) {
        if (auto frameworkElement = child.try_as<FrameworkElement>();
            frameworkElement) {
            if (frameworkElement.Name() == L"BetterDetailPanelRoot") return;
            if (frameworkElement.Name() == L"BetterDetailPanelLoading") {
                uint32_t index = 0;
                if (host.Children().IndexOf(child, index)) {
                    staleLoadingIndex = index;
                }
            }
        }
    }
    void* hostIdentity = winrt::get_abi(host);
    if (staleLoadingIndex != UINT32_MAX) {
        bool pending;
        {
            std::lock_guard lock(g_betterPanelInstallDispatchersMutex);
            pending = g_betterPanelPendingHosts.contains(hostIdentity);
        }
        if (pending) return;
        host.Children().RemoveAt(staleLoadingIndex);
    }

    muxc::StackPanel loadingHost;
    loadingHost.Name(L"BetterDetailPanelLoading");
    loadingHost.HorizontalAlignment(HorizontalAlignment::Stretch);
    loadingHost.Margin(Thickness{16, 28, 16, 18});

    muxc::ProgressRing loadingRing;
    loadingRing.Width(28);
    loadingRing.Height(28);
    loadingRing.IsActive(true);
    loadingRing.HorizontalAlignment(HorizontalAlignment::Center);
    muxa::AutomationProperties::SetName(loadingRing,
                                        L"Loading Better Panel");
    loadingHost.Children().Append(loadingRing);
    // Show the ring before Explorer's native thumbnail and title while the
    // asynchronous Home content is still being prepared.
    host.Children().InsertAt(0, loadingHost);

    auto weakHost = winrt::make_weak(host);
    auto weakLoadingHost = winrt::make_weak(loadingHost);
    auto install = [weakHost, weakLoadingHost, hostIdentity]() {
        struct PendingGuard {
            void* hostIdentity;
            ~PendingGuard() {
                std::lock_guard lock(g_betterPanelInstallDispatchersMutex);
                g_betterPanelPendingHosts.erase(hostIdentity);
            }
        } guard{hostIdentity};
        auto host = weakHost.get();
        if (!host) return;
        auto loading = weakLoadingHost.get();
        auto previousBackground = host.Background();
        auto removeLoading = [&] {
            if (!loading) return;
            uint32_t index = 0;
            if (host.Children().IndexOf(loading, index)) {
                host.Children().RemoveAt(index);
            }
        };
        try {
            if (g_betterPanelDiscoveryUnloading) {
                removeLoading();
                return;
            }
            BetterPanelInstallDetailPanel(host, loading);
        } catch (...) {
            Wh_Log(L"Initial pane install error %08X",
                   winrt::to_hresult().value);
            try { removeLoading(); } catch (...) {}
            try { host.Background(previousBackground); } catch (...) {}
        }
    };
    auto dispatcher = host.DispatcherQueue();
    {
        std::lock_guard lock(g_betterPanelInstallDispatchersMutex);
        g_betterPanelInstallDispatchers.insert_or_assign(
            GetCurrentThreadId(), dispatcher);
        g_betterPanelPendingHosts.insert(hostIdentity);
    }
    if (!dispatcher.TryEnqueue(install)) {
        install();
    }
}

// Diagnostics-free discovery. Explorer Command Bar demonstrated that a typed
// WinUI element supplied by FileExplorerExtensions.dll can safely anchor a
// public VisualTreeHelper walk. Keeping only a weak anchor avoids owning any of
// Explorer's XAML elements and leaves the XAML Diagnostics connection unused.
thread_local winrt::weak_ref<UIElement> g_betterPanelDiscoveryAnchor;
thread_local bool g_betterPanelDiscoveryQueued = false;
thread_local bool g_betterPanelResumeRecoveryQueued = false;

bool BetterPanelFindAndInstallDetailsHost(DependencyObject const& root,
                                          int depth = 0) {
    if (!root || depth > 64 || g_betterPanelDiscoveryUnloading) return false;

    bool found = false;
    if (auto element = root.try_as<FrameworkElement>(); element) {
        if (element.Name() == L"DetailsViewThumbnail") {
            TryInstallBetterDetailPanel(element);
            found = true;
        }
    }

    int count = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
        GetChildrenCount(root);
    for (int i = 0; i < count; ++i) {
        auto child = winrt::Microsoft::UI::Xaml::Media::VisualTreeHelper::
            GetChild(root, i);
        if (BetterPanelFindAndInstallDetailsHost(child, depth + 1)) {
            found = true;
        }
    }
    return found;
}

void BetterPanelScanFromElement(UIElement const& element) try {
    if (!element || g_betterPanelDiscoveryUnloading) {
        return;
    }
    auto xamlRoot = element.XamlRoot();
    auto content = xamlRoot ? xamlRoot.Content() : nullptr;
    if (content) BetterPanelFindAndInstallDetailsHost(content);
} catch (...) {
    Wh_Log(L"Details discovery error %08X", winrt::to_hresult().value);
}

void BetterPanelRememberDiscoveryAnchor(UIElement const& element) {
    if (element) g_betterPanelDiscoveryAnchor = winrt::make_weak(element);
}

void BetterPanelScanCurrentThread() try {
    if (g_betterPanelDiscoveryUnloading) {
        return;
    }
    bool hasAnchor = false;
    if (auto anchor = g_betterPanelDiscoveryAnchor.get()) {
        hasAnchor = true;
        BetterPanelScanFromElement(anchor);
    }
    auto focused = mux::Input::FocusManager::GetFocusedElement();
    if (auto element = focused ? focused.try_as<UIElement>() : nullptr) {
        hasAnchor = true;
        BetterPanelRememberDiscoveryAnchor(element);
        BetterPanelScanFromElement(element);
    }
    if (!hasAnchor) {
        Wh_Log(L"Existing-window discovery has no WinUI anchor on thread %u",
               GetCurrentThreadId());
    }
} catch (...) {
    Wh_Log(L"Current-thread discovery error %08X",
           winrt::to_hresult().value);
}

void BetterPanelScheduleCurrentThreadDiscovery() try {
    if (g_betterPanelDiscoveryUnloading || g_betterPanelDiscoveryQueued) {
        return;
    }
    auto dispatcher =
        winrt::Microsoft::UI::Dispatching::DispatcherQueue::GetForCurrentThread();
    if (!dispatcher) {
        BetterPanelScanCurrentThread();
        return;
    }
    g_betterPanelDiscoveryQueued = true;
    if (!dispatcher.TryEnqueue([] {
            g_betterPanelDiscoveryQueued = false;
            BetterPanelScanCurrentThread();
        })) {
        g_betterPanelDiscoveryQueued = false;
    }
} catch (...) {
    g_betterPanelDiscoveryQueued = false;
    Wh_Log(L"Queue discovery error %08X", winrt::to_hresult().value);
}

void RemoveBetterDetailPanelsForCurrentThread() {
    std::vector<std::shared_ptr<BetterPanelState>> states;
    {
        std::lock_guard lock(g_betterPanelMutex);
        std::erase_if(g_betterPanels, [&](auto const& state) {
            if (!state || !state->dispatcher ||
                !state->dispatcher.HasThreadAccess()) {
                return false;
            }
            states.push_back(state);
            return true;
        });
        g_betterPanelThreadHasPanel = std::ranges::any_of(
            g_betterPanels, [](auto const& state) {
                return state && state->dispatcher &&
                       state->dispatcher.HasThreadAccess();
            });
    }

    for (auto const& state : states) {
        if (!state) {
            continue;
        }

        state->unloaded = true;
        BetterPanelCloseDetachedWindow(state.get(), false);
        BetterPanelDetachHostUnloadedHandler(state);
        BetterPanelStopStateTimers(state);
        BetterPanelRemoveAnimationHandlers(state);
        BetterPanelStopStateMedia(state);
        if (state->previewExpanded) {
            BetterPanelSetInlinePreviewExpanded(state, false);
        }
        BetterPanelRemoveNativePreviewControls(state);
        if (auto nativeTitle = state->nativeTitleContainer.get()) {
            nativeTitle.Visibility(state->nativeTitleVisibility);
        }
        if (auto surface = state->multiPreviewSurface.get()) {
            auto surfaceParent = winrt::Microsoft::UI::Xaml::Media::
                VisualTreeHelper::GetParent(surface).try_as<muxc::Panel>();
            if (surfaceParent) {
                uint32_t surfaceIndex = 0;
                if (surfaceParent.Children().IndexOf(surface.as<UIElement>(),
                                                     surfaceIndex)) {
                    surfaceParent.Children().RemoveAt(surfaceIndex);
                }
            }
        }
        if (auto nativePreview = state->nativePreview.get()) {
            nativePreview.Visibility(Visibility::Visible);
        }
        if (auto loading = state->startupLoadingHost.get()) {
            auto parent = winrt::Microsoft::UI::Xaml::Media::
                VisualTreeHelper::GetParent(loading).try_as<muxc::Panel>();
            if (parent) {
                uint32_t index = 0;
                if (parent.Children().IndexOf(loading, index)) {
                    parent.Children().RemoveAt(index);
                }
            }
        }
        auto host = state->host.get();
        if (auto backgroundHost = state->backgroundHost.get()) {
            backgroundHost.Background(state->nativeHostBackground);
        }
        auto panel = state->panel.get();
        if (host && panel) {
            uint32_t index = 0;
            if (host.Children().IndexOf(panel.as<UIElement>(), index)) {
                host.Children().RemoveAt(index);
            }
        }
        auto share = state->nativeShareButton.get();
        auto shareRow = state->shareActionRow.get();
        if (shareRow) {
            auto currentParent = winrt::Microsoft::UI::Xaml::Media::
                VisualTreeHelper::GetParent(shareRow).try_as<muxc::Panel>();
            if (currentParent) {
                uint32_t rowInCurrentParent = 0;
                if (currentParent.Children().IndexOf(shareRow,
                                                     rowInCurrentParent)) {
                    currentParent.Children().RemoveAt(rowInCurrentParent);
                }
            }
        }
        if (share) {
            share.Margin(state->nativeShareMargin);
            share.Visibility(state->nativeShareVisibility);
        }
        BetterPanelUnwatchNativeDetailsVisibility(state);
        if (auto nativeDetails = state->nativeDetailsSection.get()) {
            nativeDetails.Visibility(state->nativeDetailsVisibility);
        }
        if (auto nativeInfoBanner = state->nativeInfoBanner.get()) {
            nativeInfoBanner.Visibility(state->nativeInfoBannerVisibility);
        }
    }
}

void BetterPanelHandlePowerMessage(MSG const* message) {
    if (!message || message->message != WM_POWERBROADCAST ||
        (message->wParam != PBT_APMRESUMEAUTOMATIC &&
         message->wParam != PBT_APMRESUMESUSPEND) ||
        g_betterPanelResumeRecoveryQueued) {
        return;
    }

    // Explorer rebuilds the native Details sharing section after resume. Tear
    // down our pane before Explorer processes that refresh, then reinstall it
    // after the native popup/view-model work has settled.
    g_betterPanelResumeRecoveryQueued = true;
    RemoveBetterDetailPanelsForCurrentThread();
    BetterPanelInvalidateExplorerQueryCaches();
    auto dispatcher =
        winrt::Microsoft::UI::Dispatching::DispatcherQueue::GetForCurrentThread();
    if (!dispatcher) {
        g_betterPanelResumeRecoveryQueued = false;
        return;
    }
    auto weakDispatcher = winrt::make_weak(dispatcher);
    BetterPanelStartWorker([weakDispatcher]() {
        if (BetterPanelWorkerWait(1200)) return;
        if (auto dispatcher = weakDispatcher.get()) {
            dispatcher.TryEnqueue([] {
                g_betterPanelResumeRecoveryQueued = false;
                BetterPanelScheduleCurrentThreadDiscovery();
            });
        }
    });
}

constexpr UINT_PTR kBetterPanelExplorerSubclassId = 0x42504E4C;

LRESULT CALLBACK BetterPanelExplorerSubclassProc(
    HWND window, UINT message, WPARAM wParam, LPARAM lParam,
    UINT_PTR subclassId, DWORD_PTR) {
    LRESULT result = DefSubclassProc(window, message, wParam, lParam);
    if (message == WM_POWERBROADCAST &&
        (wParam == PBT_APMRESUMEAUTOMATIC ||
         wParam == PBT_APMRESUMESUSPEND)) {
        MSG powerMessage{window, message, wParam, lParam};
        BetterPanelHandlePowerMessage(&powerMessage);
    } else if (((message == WM_ACTIVATE && LOWORD(wParam) != WA_INACTIVE) ||
                message == WM_SETFOCUS) &&
               !g_betterPanelThreadHasPanel &&
               !g_betterPanelDiscoveryUnloading) {
        // Windhawk is foreground while a mod is enabled. Retry after Explorer
        // regains focus, when FocusManager can provide a live WinUI element.
        BetterPanelScheduleCurrentThreadDiscovery();
    } else if (message == WM_NCDESTROY) {
        RemoveWindowSubclass(window, BetterPanelExplorerSubclassProc,
                             subclassId);
    }
    return result;
}

void UninitializeForCurrentThread(HWND window = nullptr) {
    if (g_betterPanelMessageHook) {
        if (!UnhookWindowsHookEx(g_betterPanelMessageHook)) {
            Wh_Log(L"Message hook cleanup failed: %u", GetLastError());
        }
        {
            std::lock_guard lock(g_betterPanelMessageHooksMutex);
            auto it = g_betterPanelMessageHooks.find(GetCurrentThreadId());
            if (it != g_betterPanelMessageHooks.end() &&
                it->second == g_betterPanelMessageHook) {
                g_betterPanelMessageHooks.erase(it);
            }
        }
        g_betterPanelMessageHook = nullptr;
    }
    if (window) {
        RemoveWindowSubclass(window, BetterPanelExplorerSubclassProc,
                             kBetterPanelExplorerSubclassId);
    }
    RemoveBetterDetailPanelsForCurrentThread();
    g_betterPanelDiscoveryAnchor = {};
    g_betterPanelDiscoveryQueued = false;
    g_initializedForThread = false;
}
void InitializeForCurrentThread(HWND window = nullptr) {
    WCHAR className[64]{};
    if (window && GetClassNameW(window, className, ARRAYSIZE(className)) &&
        _wcsicmp(className, L"CabinetWClass") == 0) {
        if (!SetWindowSubclass(window, BetterPanelExplorerSubclassProc,
                               kBetterPanelExplorerSubclassId, 0)) {
            Wh_Log(L"Could not subclass Explorer window %p: %u", window,
                   GetLastError());
        }
    }
    if (g_initializedForThread) {
        return;
    }

    g_betterPanelMessageHook = SetWindowsHookExW(
        WH_GETMESSAGE, BetterPanelGetMessageHook, nullptr,
        GetCurrentThreadId());
    if (!g_betterPanelMessageHook) {
        Wh_Log(L"Could not install Explorer message hook: %u", GetLastError());
    } else {
        std::lock_guard lock(g_betterPanelMessageHooksMutex);
        g_betterPanelMessageHooks[GetCurrentThreadId()] =
            g_betterPanelMessageHook;
    }
    g_initializedForThread = true;
}

enum class TargetWindowType {
    None,
    FileExplorer,
    XamlExplorerHost,
};

TargetWindowType GetTargetWindowType(HWND hWnd) {
    WCHAR className[64];
    if (!GetClassName(hWnd, className, ARRAYSIZE(className))) {
        return TargetWindowType::None;
    }

    if (_wcsicmp(className, L"CabinetWClass") == 0) {
        return TargetWindowType::FileExplorer;
    }

    // Used by the desktop context menu.
    if (_wcsicmp(className, L"XamlExplorerHostIslandWindow_WASDK") == 0) {
        return TargetWindowType::XamlExplorerHost;
    }

    return TargetWindowType::None;
}

void OnWindowCreated(HWND hWnd, PCSTR funcName) {
    TargetWindowType windowType = GetTargetWindowType(hWnd);
    if (windowType != TargetWindowType::None) {
        Wh_Log(L"Initializing - Created window %08X via %S",
               (DWORD)(ULONG_PTR)hWnd, funcName);
        InitializeForCurrentThread(hWnd);
        BetterPanelScheduleCurrentThreadDiscovery();
    }
}

void BetterPanelApplyButtonSettingsForCurrentThread() {
    std::vector<std::shared_ptr<BetterPanelState>> states;
    {
        std::lock_guard lock(g_betterPanelMutex);
        for (auto const& state : g_betterPanels) {
            if (state && state->dispatcher &&
                state->dispatcher.HasThreadAccess() && !state->unloaded) {
                states.push_back(state);
            }
        }
    }

    for (auto const& state : states) {
        try {
            if (auto panel = state->panel.get()) {
                BetterPanelPruneButtonLayoutSnapshots(state);
                BetterPanelApplyNativeButtonStyle(state, panel);
            }
            if (auto expand = state->previewExpandButton.get()) {
                BetterPanelApplyNativeButtonStyle(state, expand);
            }
            if (auto expand = state->multiPreviewExpandButton.get()) {
                BetterPanelApplyNativeButtonStyle(state, expand);
            }
            BetterPanelUpdateDetachButton(state.get());
            BetterPanelRefresh(state);
        } catch (winrt::hresult_error const& ex) {
            Wh_Log(L"Live button settings error %08X: %s", ex.code(),
                   ex.message().c_str());
        } catch (...) {
            Wh_Log(L"Live button settings error %08X",
                   winrt::to_hresult().value);
        }
    }
}

using CreateWindowExW_t = decltype(&CreateWindowExW);
CreateWindowExW_t CreateWindowExW_Original;
HWND WINAPI CreateWindowExW_Hook(DWORD dwExStyle,
                                 LPCWSTR lpClassName,
                                 LPCWSTR lpWindowName,
                                 DWORD dwStyle,
                                 int X,
                                 int Y,
                                 int nWidth,
                                 int nHeight,
                                 HWND hWndParent,
                                 HMENU hMenu,
                                 HINSTANCE hInstance,
                                 PVOID lpParam) {
    HWND hWnd = CreateWindowExW_Original(dwExStyle, lpClassName, lpWindowName,
                                         dwStyle, X, Y, nWidth, nHeight,
                                         hWndParent, hMenu, hInstance, lpParam);
    if (!hWnd) {
        return hWnd;
    }

    OnWindowCreated(hWnd, __FUNCTION__);

    return hWnd;
}

// Diagnostics-free details-pane discovery, adapted from the symbol-hook
// approach reviewed for Windhawk's Explorer Command Bar mod (PR #4895).
using BetterPanelDetailsPaneControl_OnLoaded_t =
    void(WINAPI*)(void* pThis, void* sender, void* args);
BetterPanelDetailsPaneControl_OnLoaded_t
    BetterPanelDetailsPaneControl_OnLoaded_Original;

void WINAPI BetterPanelDetailsPaneControl_OnLoaded_Hook(
    void* pThis, void* sender, void* args) {
    UIElement discoveryAnchor{nullptr};
    if (!g_betterPanelDiscoveryUnloading && sender) {
        // Explorer passes this lifecycle callback's sender as a raw ABI
        // IInspectable pointer on current builds, even though the public PDB
        // describes a projected const-reference. Copying from ABI both uses
        // the correct pointer level and keeps the element alive across the
        // original handler.
        wf::IInspectable inspectable{nullptr};
        winrt::copy_from_abi(inspectable, sender);
        if (inspectable) {
            discoveryAnchor = inspectable.try_as<UIElement>();
        }
    }

    BetterPanelDetailsPaneControl_OnLoaded_Original(pThis, sender, args);
    if (g_betterPanelDiscoveryUnloading) return;

    if (discoveryAnchor) {
        BetterPanelRememberDiscoveryAnchor(discoveryAnchor);
        // The sender is the exact DetailsPaneControl that loaded. Search only
        // its subtree so another tab's cached details host can't be selected.
        BetterPanelFindAndInstallDetailsHost(discoveryAnchor);
    }
    BetterPanelScheduleCurrentThreadDiscovery();
}

// Explorer raises this from the details-pane view model whenever its native
// selection source changes. Hooking the real event avoids depending on Win32
// mouse messages, which WinUI doesn't consistently route through GetMessage.
using BetterPanelDetailsPaneControlVM_SelectionUpdated_t =
    void(WINAPI*)(void* pThis, void* selectionSource, void* args);
BetterPanelDetailsPaneControlVM_SelectionUpdated_t
    BetterPanelDetailsPaneControlVM_SelectionUpdated_Original;

void BetterPanelPrimeMultiSelectionPreviewForCurrentThread() {
    BetterPanelInvalidateExplorerQueryCaches();
    std::vector<std::shared_ptr<BetterPanelState>> states;
    {
        std::lock_guard lock(g_betterPanelMutex);
        for (auto const& state : g_betterPanels) {
            if (state && !state->unloaded && state->dispatcher &&
                state->dispatcher.HasThreadAccess()) {
                states.push_back(state);
            }
        }
    }

    for (auto const& state : states) {
        try {
            BetterPanelExplorerWindowScope explorerWindowScope(
                state->explorerWindow);
            auto paths = BetterPanelGetActiveSelectionPaths();
            bool multiple = paths.size() > 1;
            // Never leave a previous video visible while Explorer is still
            // settling the newly selected item.
            if (auto videoCard = state->videoCard.get()) {
                videoCard.Visibility(Visibility::Collapsed);
            }
            if (auto nativePreview = state->nativePreview.get()) {
                if (multiple) {
                    double height = nativePreview.ActualHeight();
                    if (height >= 120) {
                        state->multiPreviewNormalHeight = height;
                        if (auto surface = state->multiPreviewSurface.get();
                            surface && !state->multiPreviewExpanded) {
                            surface.Height(height);
                        }
                    }
                    nativePreview.Visibility(Visibility::Collapsed);
                }
            }
            if (auto nativeImage = state->nativePreviewImage.get()) {
                if (multiple) {
                    nativeImage.Visibility(Visibility::Collapsed);
                }
            }
            if (auto surface = state->multiPreviewSurface.get()) {
                surface.Visibility(multiple && !state->previewsCollapsed
                                       ? Visibility::Visible
                                       : Visibility::Collapsed);
            }
            if (auto previewHost = state->multiPreviewHost.get()) {
                if (multiple) {
                    // Build the fallback stack during Explorer's selection
                    // callback, before XAML gets a chance to render its blue
                    // generic multiple-items artwork for a single frame.
                    BetterPanelPopulateMultiPreview(state, paths);
                    previewHost.Visibility(state->previewsCollapsed
                                               ? Visibility::Collapsed
                                               : Visibility::Visible);
                } else {
                    state->multiPreviewKey.clear();
                    previewHost.Children().Clear();
                    previewHost.Visibility(Visibility::Collapsed);
                }
            }

            if (!state->selectionSettleTimer) {
                DispatcherTimer settleTimer;
                settleTimer.Interval(
                    winrt::Windows::Foundation::TimeSpan{800000});
                std::weak_ptr<BetterPanelState> weakState = state;
                state->selectionSettleTimerTickToken = settleTimer.Tick(
                    [weakState](
                        winrt::Windows::Foundation::IInspectable const&,
                        winrt::Windows::Foundation::IInspectable const&) {
                        auto state = weakState.lock();
                        if (!state) return;
                        state->selectionSettleTimer.Stop();
                        BetterPanelInvalidateExplorerQueryCaches();
                        state->settledSelectionRefresh = true;
                        BetterPanelRefresh(state);
                        state->settledSelectionRefresh = false;
                    });
                state->selectionSettleTimer = settleTimer;
            }
            state->selectionSettleTimer.Stop();
            state->selectionSettleTimer.Start();
        } catch (...) {
            Wh_Log(L"Immediate multi-selection preview error %08X",
                   winrt::to_hresult().value);
        }
    }
}

void WINAPI BetterPanelDetailsPaneControlVM_SelectionUpdated_Hook(
    void* pThis, void* selectionSource, void* args) {
    BetterPanelDetailsPaneControlVM_SelectionUpdated_Original(
        pThis, selectionSource, args);
    if (g_betterPanelDiscoveryUnloading) return;

    if (!g_betterPanelThreadHasPanel) {
        BetterPanelScheduleCurrentThreadDiscovery();
    }

    BetterPanelPrimeMultiSelectionPreviewForCurrentThread();

    // Defer one dispatcher turn so IFolderView2 exposes the same selection the
    // native details pane has just accepted.
    BetterPanelQueueCurrentThreadRefresh();
}

using BetterPanelCommandBarManager_CommandBar_t =
    void(WINAPI*)(void* pThis, void* commandBar);
BetterPanelCommandBarManager_CommandBar_t
    BetterPanelCommandBarManager_CommandBar_Original;

void WINAPI BetterPanelCommandBarManager_CommandBar_Hook(void* pThis,
                                                          void* commandBar) {
    BetterPanelCommandBarManager_CommandBar_Original(pThis, commandBar);
    if (g_betterPanelDiscoveryUnloading || !commandBar) return;
    try {
        auto const& bar = *reinterpret_cast<muxc::CommandBar const*>(commandBar);
        if (!bar) return;
        BetterPanelRememberDiscoveryAnchor(bar);
        BetterPanelScheduleCurrentThreadDiscovery();
    } catch (...) {
        Wh_Log(L"Command-bar discovery error %08X",
               winrt::to_hresult().value);
    }
}

using BetterPanelCommandBarControl_OnApplyTemplate_t =
    void(WINAPI*)(void* pThis);
BetterPanelCommandBarControl_OnApplyTemplate_t
    BetterPanelCommandBarControl_OnApplyTemplate_Original;
BetterPanelCommandBarControl_OnApplyTemplate_t
    BetterPanelCommandBarControl_Wave1_OnApplyTemplate_Original;

void WINAPI BetterPanelCommandBarControl_OnApplyTemplate_Hook(void* pThis) {
    BetterPanelCommandBarControl_OnApplyTemplate_Original(pThis);
    BetterPanelScheduleCurrentThreadDiscovery();
}

void WINAPI BetterPanelCommandBarControl_Wave1_OnApplyTemplate_Hook(
    void* pThis) {
    BetterPanelCommandBarControl_Wave1_OnApplyTemplate_Original(pThis);
    BetterPanelScheduleCurrentThreadDiscovery();
}

using BetterPanelCommandBarControl_GotFocusHandler_t =
    void(WINAPI*)(void* pThis, void* sender, void* args);
BetterPanelCommandBarControl_GotFocusHandler_t
    BetterPanelCommandBarControl_GotFocusHandler_Original;
BetterPanelCommandBarControl_GotFocusHandler_t
    BetterPanelCommandBarControl_Wave1_GotFocusHandler_Original;

void BetterPanelHandleCommandBarFocus(void* sender) {
    if (g_betterPanelDiscoveryUnloading || !sender) {
        return;
    }
    try {
        auto const& inspectable =
            *reinterpret_cast<wf::IInspectable const*>(sender);
        if (auto element =
                inspectable ? inspectable.try_as<UIElement>() : nullptr) {
            BetterPanelRememberDiscoveryAnchor(element);
            BetterPanelScheduleCurrentThreadDiscovery();
        }
    } catch (...) {
        Wh_Log(L"Focus discovery error %08X", winrt::to_hresult().value);
    }
}

void WINAPI BetterPanelCommandBarControl_GotFocusHandler_Hook(
    void* pThis, void* sender, void* args) {
    BetterPanelCommandBarControl_GotFocusHandler_Original(pThis, sender, args);
    BetterPanelHandleCommandBarFocus(sender);
}

void WINAPI BetterPanelCommandBarControl_Wave1_GotFocusHandler_Hook(
    void* pThis, void* sender, void* args) {
    BetterPanelCommandBarControl_Wave1_GotFocusHandler_Original(pThis, sender,
                                                                args);
    BetterPanelHandleCommandBarFocus(sender);
}

std::atomic<bool> g_betterPanelExplorerSymbolsHooked;

bool BetterPanelHookExplorerSymbols(HMODULE module) {
    // FileExplorerExtensions.dll
    WindhawkUtils::SYMBOL_HOOK hooks[] = {
        {
            {
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::DetailsPaneControl::OnLoaded(struct winrt::Windows::Foundation::IInspectable const &,struct winrt::Microsoft::UI::Xaml::RoutedEventArgs const &))",
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::DetailsPaneControl::OnLoaded(struct winrt::Windows::Foundation::IInspectable const & __ptr64,struct winrt::Microsoft::UI::Xaml::RoutedEventArgs const & __ptr64) __ptr64)",
            },
            &BetterPanelDetailsPaneControl_OnLoaded_Original,
            BetterPanelDetailsPaneControl_OnLoaded_Hook,
            true,
        },
        {
            {
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::DetailsPaneControlVM::SelectionUpdated(struct winrt::WindowsUdk::UI::Shell::FileExplorerSelectionSource,struct winrt::Windows::Foundation::IInspectable))",
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::DetailsPaneControlVM::SelectionUpdated(struct winrt::WindowsUdk::UI::Shell::FileExplorerSelectionSource,struct winrt::Windows::Foundation::IInspectable) __ptr64)",
            },
            &BetterPanelDetailsPaneControlVM_SelectionUpdated_Original,
            BetterPanelDetailsPaneControlVM_SelectionUpdated_Hook,
            true,
        },
        {
            {
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::CommandBarManager::CommandBar(struct winrt::Microsoft::UI::Xaml::Controls::CommandBar const &))",
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::CommandBarManager::CommandBar(struct winrt::Microsoft::UI::Xaml::Controls::CommandBar const & __ptr64) __ptr64)",
            },
            &BetterPanelCommandBarManager_CommandBar_Original,
            BetterPanelCommandBarManager_CommandBar_Hook,
            true,
        },
        {
            {
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::CommandBarControl::OnApplyTemplate(void))",
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::CommandBarControl::OnApplyTemplate(void) __ptr64)",
            },
            &BetterPanelCommandBarControl_OnApplyTemplate_Original,
            BetterPanelCommandBarControl_OnApplyTemplate_Hook,
            true,
        },
        {
            {
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::CommandBarControl_Wave1::OnApplyTemplate(void))",
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::CommandBarControl_Wave1::OnApplyTemplate(void) __ptr64)",
            },
            &BetterPanelCommandBarControl_Wave1_OnApplyTemplate_Original,
            BetterPanelCommandBarControl_Wave1_OnApplyTemplate_Hook,
            true,
        },
        {
            {
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::CommandBarControl::CommandBarControlGotFocusHandler(struct winrt::Windows::Foundation::IInspectable const &,struct winrt::Microsoft::UI::Xaml::RoutedEventArgs const &))",
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::CommandBarControl::CommandBarControlGotFocusHandler(struct winrt::Windows::Foundation::IInspectable const & __ptr64,struct winrt::Microsoft::UI::Xaml::RoutedEventArgs const & __ptr64) __ptr64)",
            },
            &BetterPanelCommandBarControl_GotFocusHandler_Original,
            BetterPanelCommandBarControl_GotFocusHandler_Hook,
            true,
        },
        {
            {
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::CommandBarControl_Wave1::CommandBarControlGotFocusHandler(struct winrt::Windows::Foundation::IInspectable const &,struct winrt::Microsoft::UI::Xaml::RoutedEventArgs const &))",
                LR"(public: void __cdecl winrt::FileExplorerExtensions::implementation::CommandBarControl_Wave1::CommandBarControlGotFocusHandler(struct winrt::Windows::Foundation::IInspectable const & __ptr64,struct winrt::Microsoft::UI::Xaml::RoutedEventArgs const & __ptr64) __ptr64)",
            },
            &BetterPanelCommandBarControl_Wave1_GotFocusHandler_Original,
            BetterPanelCommandBarControl_Wave1_GotFocusHandler_Hook,
            true,
        },
    };

    if (!HookSymbols(module, hooks, ARRAYSIZE(hooks))) return false;
    return BetterPanelDetailsPaneControl_OnLoaded_Original ||
           BetterPanelDetailsPaneControlVM_SelectionUpdated_Original ||
           BetterPanelCommandBarManager_CommandBar_Original ||
           BetterPanelCommandBarControl_OnApplyTemplate_Original ||
           BetterPanelCommandBarControl_Wave1_OnApplyTemplate_Original;
}

bool BetterPanelHookExplorerSymbolsIfLoaded(bool applyHooks) {
    if (g_betterPanelExplorerSymbolsHooked) return true;
    HMODULE module = GetModuleHandleW(L"FileExplorerExtensions.dll");
    if (!module) return true;
    if (g_betterPanelExplorerSymbolsHooked.exchange(true)) return true;
    if (!BetterPanelHookExplorerSymbols(module)) {
        g_betterPanelExplorerSymbolsHooked = false;
        Wh_Log(L"FileExplorerExtensions discovery symbols unavailable");
        return false;
    }
    if (applyHooks) Wh_ApplyHookOperations();
    return true;
}

using LoadLibraryExW_t = decltype(&LoadLibraryExW);
LoadLibraryExW_t LoadLibraryExW_Original;
HMODULE WINAPI LoadLibraryExW_Hook(LPCWSTR lpLibFileName,
                                   HANDLE hFile,
                                   DWORD dwFlags) {
    HMODULE module = LoadLibraryExW_Original(lpLibFileName, hFile, dwFlags);

    if (module && !g_betterPanelDiscoveryUnloading && lpLibFileName) {
        PCWSTR fileName = lpLibFileName;
        for (PCWSTR p = lpLibFileName; *p; ++p) {
            if (*p == L'\\' || *p == L'/') fileName = p + 1;
        }
        if (_wcsicmp(fileName, L"FileExplorerExtensions.dll") == 0 ||
            _wcsicmp(fileName, L"FileExplorerExtensions") == 0) {
            BetterPanelHookExplorerSymbolsIfLoaded(/*applyHooks=*/true);
        }
    }

    return module;
}

using RunFromWindowThreadProc_t = void(WINAPI*)(PVOID parameter);

bool RunFromWindowThread(HWND hWnd,
                         RunFromWindowThreadProc_t proc,
                         PVOID procParam) {
    static const UINT runFromWindowThreadRegisteredMsg =
        RegisterWindowMessage(L"Windhawk_RunFromWindowThread_" WH_MOD_ID);

    struct RUN_FROM_WINDOW_THREAD_PARAM {
        RunFromWindowThreadProc_t proc;
        PVOID procParam;
        std::atomic_bool invoked{false};
    };

    DWORD dwThreadId = GetWindowThreadProcessId(hWnd, nullptr);
    if (dwThreadId == 0) {
        return false;
    }

    if (dwThreadId == GetCurrentThreadId()) {
        proc(procParam);
        return true;
    }

    HHOOK hook = SetWindowsHookEx(
        WH_CALLWNDPROC,
        [](int nCode, WPARAM wParam, LPARAM lParam) -> LRESULT {
            if (nCode == HC_ACTION) {
                const CWPSTRUCT* cwp = (const CWPSTRUCT*)lParam;
                if (cwp->message == runFromWindowThreadRegisteredMsg) {
                    RUN_FROM_WINDOW_THREAD_PARAM* param =
                        (RUN_FROM_WINDOW_THREAD_PARAM*)cwp->lParam;
                    param->proc(param->procParam);
                    param->invoked.store(true, std::memory_order_release);
                }
            }

            return CallNextHookEx(nullptr, nCode, wParam, lParam);
        },
        nullptr, dwThreadId);
    if (!hook) {
        return false;
    }

    RUN_FROM_WINDOW_THREAD_PARAM param;
    param.proc = proc;
    param.procParam = procParam;
    SendMessage(hWnd, runFromWindowThreadRegisteredMsg, 0, (LPARAM)&param);

    UnhookWindowsHookEx(hook);

    return param.invoked.load(std::memory_order_acquire);
}

// A WH_CALLWNDPROC callback runs inside SendMessage, possibly while XAML is
// already dispatching another message. Queue UI teardown for the next normal
// dispatcher turn instead of mutating Explorer's visual tree in that callback.
bool RunFromWindowThreadDeferred(HWND hWnd,
                                 RunFromWindowThreadProc_t proc,
                                 PVOID procParam) {
    DWORD threadId = GetWindowThreadProcessId(hWnd, nullptr);
    if (!threadId) return false;
    if (threadId == GetCurrentThreadId()) {
        proc(procParam);
        return true;
    }

    struct DeferredCall {
        HANDLE completed = CreateEventW(nullptr, TRUE, FALSE, nullptr);
        std::atomic_bool succeeded{false};
        RunFromWindowThreadProc_t proc;
        PVOID parameter;
        ~DeferredCall() {
            if (completed) CloseHandle(completed);
        }
    };
    auto call = std::make_shared<DeferredCall>();
    if (!call->completed) return false;
    call->proc = proc;
    call->parameter = procParam;

    bool queued = RunFromWindowThread(
        hWnd,
        [](PVOID parameter) {
            auto& call = *static_cast<std::shared_ptr<DeferredCall>*>(parameter);
            try {
                auto dispatcher = winrt::Microsoft::UI::Dispatching::
                    DispatcherQueue::GetForCurrentThread();
                if (dispatcher && dispatcher.TryEnqueue([call] {
                        try {
                            call->proc(call->parameter);
                            call->succeeded.store(true,
                                                  std::memory_order_release);
                        } catch (...) {
                            Wh_Log(L"Deferred Explorer cleanup error %08X",
                                   winrt::to_hresult().value);
                        }
                        SetEvent(call->completed);
                    })) {
                    return;
                }
            } catch (...) {
                Wh_Log(L"Queue Explorer cleanup error %08X",
                       winrt::to_hresult().value);
            }
            Wh_Log(L"Could not queue Explorer UI cleanup");
            SetEvent(call->completed);
        },
        &call);
    if (!queued) return false;

    HANDLE uiThread = OpenThread(SYNCHRONIZE, FALSE, threadId);
    HANDLE waits[] = {call->completed, uiThread};
    DWORD waitCount = uiThread ? 2 : 1;
    DWORD result;
    do {
        result = WaitForMultipleObjects(waitCount, waits, FALSE, 5000);
        if (result == WAIT_TIMEOUT) {
            Wh_Log(L"Still waiting for Explorer UI thread %u cleanup",
                   threadId);
        }
    } while (result == WAIT_TIMEOUT);
    if (uiThread) CloseHandle(uiThread);
    return result == WAIT_OBJECT_0 &&
           call->succeeded.load(std::memory_order_acquire);
}

std::vector<HWND> GetTargetWnds() {
    struct ENUM_WINDOWS_PARAM {
        std::vector<HWND>* hWnds;
    };

    std::vector<HWND> hWnds;
    ENUM_WINDOWS_PARAM param = {&hWnds};
    EnumWindows(
        [](HWND hWnd, LPARAM lParam) -> BOOL {
            ENUM_WINDOWS_PARAM& param = *(ENUM_WINDOWS_PARAM*)lParam;

            DWORD dwProcessId = 0;
            if (!GetWindowThreadProcessId(hWnd, &dwProcessId) ||
                dwProcessId != GetCurrentProcessId()) {
                return TRUE;
            }

            if (GetTargetWindowType(hWnd) != TargetWindowType::None) {
                param.hWnds->push_back(hWnd);
            }

            return TRUE;
        },
        (LPARAM)&param);

    return hWnds;
}

void LoadSettings() {
    auto buttonLayoutMode =
        WindhawkUtils::StringSetting::make(L"buttonLayout.mode");
    g_settings.buttonLayoutMode = BetterPanelButtonLayoutMode::Compact;
    if (wcscmp(buttonLayoutMode, L"comfort") == 0) {
        g_settings.buttonLayoutMode = BetterPanelButtonLayoutMode::Comfort;
    } else if (wcscmp(buttonLayoutMode, L"custom") == 0) {
        g_settings.buttonLayoutMode = BetterPanelButtonLayoutMode::Custom;
    }
    g_settings.buttonHorizontalMargin = std::clamp(
        Wh_GetIntSetting(L"buttonLayout.horizontalMargin"), -20, 40);
    g_settings.buttonVerticalMargin = std::clamp(
        Wh_GetIntSetting(L"buttonLayout.verticalMargin"), -20, 40);
    g_settings.buttonHorizontalPadding = std::clamp(
        Wh_GetIntSetting(L"buttonLayout.horizontalPadding"), 0, 40);
    g_settings.buttonVerticalPadding = std::clamp(
        Wh_GetIntSetting(L"buttonLayout.verticalPadding"), 0, 30);
    g_settings.buttonMinimumWidth = std::clamp(
        Wh_GetIntSetting(L"buttonLayout.minimumWidth"), 0, 240);
    g_settings.buttonMinimumHeight = std::clamp(
        Wh_GetIntSetting(L"buttonLayout.minimumHeight"), 24, 80);
    g_settings.iconButtonSize = std::clamp(
        Wh_GetIntSetting(L"buttonLayout.iconButtonSize"), 15, 64);

    auto hoverAnimation =
        WindhawkUtils::StringSetting::make(L"hoverAnimation.style");
    g_settings.hoverAnimation = BetterPanelHoverAnimation::WindowsDefault;
    if (wcscmp(hoverAnimation, L"none") == 0) {
        g_settings.hoverAnimation = BetterPanelHoverAnimation::None;
    } else if (wcscmp(hoverAnimation, L"scale") == 0) {
        g_settings.hoverAnimation = BetterPanelHoverAnimation::Scale;
    } else if (wcscmp(hoverAnimation, L"lift") == 0) {
        g_settings.hoverAnimation = BetterPanelHoverAnimation::Lift;
    } else if (wcscmp(hoverAnimation, L"tilt") == 0) {
        g_settings.hoverAnimation = BetterPanelHoverAnimation::Tilt;
    } else if (wcscmp(hoverAnimation, L"spring") == 0) {
        g_settings.hoverAnimation = BetterPanelHoverAnimation::Spring;
    }

    auto clickAnimation =
        WindhawkUtils::StringSetting::make(L"clickAnimation.style");
    g_settings.clickAnimation = BetterPanelClickAnimation::WindowsDefault;
    if (wcscmp(clickAnimation, L"none") == 0) {
        g_settings.clickAnimation = BetterPanelClickAnimation::None;
    } else if (wcscmp(clickAnimation, L"press") == 0) {
        g_settings.clickAnimation = BetterPanelClickAnimation::Press;
    } else if (wcscmp(clickAnimation, L"pulse") == 0) {
        g_settings.clickAnimation = BetterPanelClickAnimation::Pulse;
    } else if (wcscmp(clickAnimation, L"bounce") == 0) {
        g_settings.clickAnimation = BetterPanelClickAnimation::Bounce;
    } else if (wcscmp(clickAnimation, L"flash") == 0) {
        g_settings.clickAnimation = BetterPanelClickAnimation::Flash;
    } else if (wcscmp(clickAnimation, L"shake") == 0) {
        g_settings.clickAnimation = BetterPanelClickAnimation::Shake;
    } else if (wcscmp(clickAnimation, L"spring") == 0) {
        g_settings.clickAnimation = BetterPanelClickAnimation::Spring;
    } else if (wcscmp(clickAnimation, L"spin") == 0) {
        g_settings.clickAnimation = BetterPanelClickAnimation::Spin;
    } else if (wcscmp(clickAnimation, L"squash") == 0) {
        g_settings.clickAnimation = BetterPanelClickAnimation::Squash;
    } else if (wcscmp(clickAnimation, L"wobble") == 0) {
        g_settings.clickAnimation = BetterPanelClickAnimation::Wobble;
    }

    g_settings.showRename =
        Wh_GetIntSetting(L"featureVisibility.rename") != 0;
    g_settings.showPreviewSearch =
        Wh_GetIntSetting(L"featureVisibility.previewSearch") != 0;
    g_settings.showInstallActions =
        Wh_GetIntSetting(L"featureVisibility.installActions") != 0;
    g_settings.showFileActions =
        Wh_GetIntSetting(L"featureVisibility.fileActions") != 0;
    g_settings.experimentalPopout =
        Wh_GetIntSetting(L"featureVisibility.experimentalPopout") != 0;
}

BOOL Wh_ModInit() {
    Wh_Log(L">");

    g_betterPanelDiscoveryUnloading = false;
    g_betterPanelWorkersStopping.store(false, std::memory_order_release);
    g_betterPanelWorkerStopEvent =
        CreateEventW(nullptr, TRUE, FALSE, nullptr);
    if (!g_betterPanelWorkerStopEvent) {
        Wh_Log(L"Failed to create worker stop event: %u", GetLastError());
        return FALSE;
    }

    LoadSettings();

    WindhawkUtils::SetFunctionHook(CreateWindowExW, CreateWindowExW_Hook,
                                   &CreateWindowExW_Original);

    HMODULE kernelBaseModule = GetModuleHandle(L"kernelbase.dll");
    auto pKernelBaseLoadLibraryExW = (decltype(&LoadLibraryExW))GetProcAddress(
        kernelBaseModule, "LoadLibraryExW");
    WindhawkUtils::SetFunctionHook(pKernelBaseLoadLibraryExW,
                                   LoadLibraryExW_Hook,
                                   &LoadLibraryExW_Original);

    // Hook Explorer's own WinUI lifecycle without taking the process-wide
    // XAML Diagnostics connection.
    BetterPanelHookExplorerSymbolsIfLoaded(/*applyHooks=*/false);

    return TRUE;
}

bool BetterPanelCleanPanelOwnerThread(
    DWORD threadId, mud::DispatcherQueue const& dispatcher) {
    if (!threadId || !dispatcher) return false;
    if (threadId == GetCurrentThreadId()) {
        UninitializeForCurrentThread();
        return true;
    }
    struct Completion {
        HANDLE event = CreateEventW(nullptr, TRUE, FALSE, nullptr);
        std::atomic_bool succeeded{false};
        ~Completion() { if (event) CloseHandle(event); }
    };
    auto completion = std::make_shared<Completion>();
    if (!completion->event) return false;
    try {
        if (!dispatcher.TryEnqueue(mud::DispatcherQueuePriority::Normal,
            [completion] {
                try {
                    UninitializeForCurrentThread();
                    completion->succeeded.store(true,
                                                std::memory_order_release);
                } catch (...) {
                    Wh_Log(L"Panel owner-thread cleanup error %08X",
                           winrt::to_hresult().value);
                }
                SetEvent(completion->event);
            })) return false;
    } catch (...) {
        Wh_Log(L"Queue panel owner cleanup error %08X",
               winrt::to_hresult().value);
        return false;
    }
    HANDLE uiThread = OpenThread(SYNCHRONIZE, FALSE, threadId);
    HANDLE waits[] = {completion->event, uiThread};
    DWORD result;
    do {
        result = WaitForMultipleObjects(uiThread ? 2 : 1, waits, FALSE, 5000);
        if (result == WAIT_TIMEOUT) {
            Wh_Log(L"Still waiting for panel owner thread %u", threadId);
        }
    } while (result == WAIT_TIMEOUT);
    if (uiThread) CloseHandle(uiThread);
    return result == WAIT_OBJECT_0 &&
           completion->succeeded.load(std::memory_order_acquire);
}

void Wh_ModAfterInit() {
    Wh_Log(L">");

    BetterPanelHookExplorerSymbolsIfLoaded(/*applyHooks=*/true);

    auto hTargetWnds = GetTargetWnds();
    for (auto hTargetWnd : hTargetWnds) {
        Wh_Log(L"Initializing for %08X", (DWORD)(ULONG_PTR)hTargetWnd);
        RunFromWindowThread(
            hTargetWnd,
            [](PVOID param) {
                InitializeForCurrentThread(static_cast<HWND>(param));
                BetterPanelScheduleCurrentThreadDiscovery();

            },
            (PVOID)hTargetWnd);
    }

}

void Wh_ModUninit() {
    Wh_Log(L">");

    ULONGLONG unloadStart = GetTickCount64();
    g_betterPanelDiscoveryUnloading = true;
    bool workersJoined = BetterPanelStopAndJoinWorkers();
    Wh_Log(L"Worker shutdown completed in %llu ms",
           GetTickCount64() - unloadStart);
    ULONGLONG asyncWaitStart = GetTickCount64();
    while (g_betterPanelActiveAsyncOperations.load(
               std::memory_order_acquire) != 0 &&
           GetTickCount64() - asyncWaitStart < 1500) {
        Sleep(10);
    }
    bool retainModuleForSafety = !workersJoined ||
        g_betterPanelActiveAsyncOperations.load(
            std::memory_order_acquire) != 0;
    if (g_betterPanelActiveAsyncOperations.load(
            std::memory_order_acquire) != 0) {
        Wh_Log(L"%u async operation(s) still active at unload",
               g_betterPanelActiveAsyncOperations.load(
                   std::memory_order_acquire));
    }

    BetterPanelCloseMedia();

    // The WinUI details host can run on an island thread different from its
    // CabinetWClass window. Clean each panel on its own DispatcherQueue first;
    // a top-level HWND is not a reliable proxy for XAML thread ownership.
    std::unordered_map<DWORD, mud::DispatcherQueue> panelDispatchers;
    {
        std::lock_guard lock(g_betterPanelMutex);
        for (auto const& state : g_betterPanels) {
            if (state && state->ownerThreadId && state->dispatcher &&
                !panelDispatchers.contains(state->ownerThreadId)) {
                panelDispatchers.emplace(state->ownerThreadId,
                                         state->dispatcher);
            }
        }
    }
    {
        std::lock_guard lock(g_betterPanelInstallDispatchersMutex);
        for (auto const& [threadId, dispatcher] :
             g_betterPanelInstallDispatchers) {
            if (!panelDispatchers.contains(threadId)) {
                panelDispatchers.emplace(threadId, dispatcher);
            }
        }
    }
    for (auto const& [threadId, dispatcher] : panelDispatchers) {
        if (!BetterPanelCleanPanelOwnerThread(threadId, dispatcher)) {
            Wh_Log(L"Could not clean panel owner thread %u", threadId);
            retainModuleForSafety = true;
        }
    }
    {
        std::lock_guard lock(g_betterPanelInstallDispatchersMutex);
        if (!g_betterPanelPendingHosts.empty()) {
            Wh_Log(L"%zu pane install(s) still pending at unload",
                   g_betterPanelPendingHosts.size());
            retainModuleForSafety = true;
        }
        g_betterPanelInstallDispatchers.clear();
        g_betterPanelPendingHosts.clear();
    }

    auto hTargetWnds = GetTargetWnds();
    {
        std::lock_guard lock(g_betterPanelMutex);
        for (auto const& state : g_betterPanels) {
            HWND window = state ? state->explorerWindow : nullptr;
            if (window && IsWindow(window) &&
                std::find(hTargetWnds.begin(), hTargetWnds.end(), window) ==
                    hTargetWnds.end()) {
                hTargetWnds.push_back(window);
            }
        }
    }
    std::unordered_map<DWORD, std::vector<HWND>> windowsByThread;
    for (HWND window : hTargetWnds) {
        DWORD threadId = GetWindowThreadProcessId(window, nullptr);
        if (threadId) windowsByThread[threadId].push_back(window);
    }
    for (auto& [threadId, windows] : windowsByThread) {
        bool cleaned = false;
        for (HWND window : windows) {
            if (!IsWindow(window)) continue;
            Wh_Log(L"Uninitializing thread %u via %08X", threadId,
                   (DWORD)(ULONG_PTR)window);
            cleaned = RunFromWindowThreadDeferred(
                window,
                [](PVOID param) {
                    auto& windows = *static_cast<std::vector<HWND>*>(param);
                    for (HWND candidate : windows) {
                        if (IsWindow(candidate) &&
                            GetWindowThreadProcessId(candidate, nullptr) ==
                                GetCurrentThreadId()) {
                            RemoveWindowSubclass(
                                candidate, BetterPanelExplorerSubclassProc,
                                kBetterPanelExplorerSubclassId);
                        }
                    }
                    UninitializeForCurrentThread();
                },
                &windows);
            if (cleaned) break;
        }
        if (!cleaned) {
            Wh_Log(L"Could not reach Explorer thread %u for cleanup", threadId);
            retainModuleForSafety = true;
        }
    }
    // A panel's Explorer window can disappear before unload. Remove any
    // remaining per-thread hooks even when no target HWND can be reached.
    BetterPanelUnhookRemainingMessageHooks();
    Wh_Log(L"Explorer thread cleanup completed in %llu ms",
           GetTickCount64() - unloadStart);

    // The class's WndProc lives in this DLL. A later hot reload must never
    // create a window against a class still pointing into the old image.
    if (!BetterPanelUnregisterDetachedWindowClass()) {
        retainModuleForSafety = true;
    }

    {
        std::lock_guard lock(g_betterPanelMutex);
        if (g_betterPanels.empty()) {
            std::vector<std::shared_ptr<BetterPanelState>>().swap(
                g_betterPanels);
        } else {
            // Never release thread-affine XAML objects on Windhawk's unload
            // thread. Exact owner windows were included above; a survivor
            // means its UI thread exited concurrently and the no_destroy
            // container intentionally retains it during process teardown.
            Wh_Log(L"Retaining %zu orphaned panel state(s)",
                   g_betterPanels.size());
            retainModuleForSafety = true;
        }
    }
    std::wstring().swap(g_betterMediaPath);

    if (workersJoined && g_betterPanelWorkerStopEvent) {
        CloseHandle(g_betterPanelWorkerStopEvent);
        g_betterPanelWorkerStopEvent = nullptr;
    }

    if (retainModuleForSafety) {
        // Windhawk releases its reference immediately after Wh_ModUninit.
        // Keep one process-local reference only if a callback or UI object
        // survived cleanup; Explorer must not execute an unmapped delegate.
        HMODULE self = nullptr;
        if (GetModuleHandleExW(
                GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS,
                reinterpret_cast<LPCWSTR>(&Wh_ModUninit), &self)) {
            Wh_Log(L"Retained mod image until Explorer exits for safe disable");
        } else {
            Wh_Log(L"Could not retain mod image after incomplete cleanup: %u",
                   GetLastError());
        }
    }

}

void Wh_ModSettingsChanged() {
    Wh_Log(L">");

    LoadSettings();

    auto hTargetWnds = GetTargetWnds();
    for (auto hTargetWnd : hTargetWnds) {
        Wh_Log(L"Applying settings for %08X", (DWORD)(ULONG_PTR)hTargetWnd);
        RunFromWindowThread(
            hTargetWnd,
            [](PVOID) {
                BetterPanelApplyButtonSettingsForCurrentThread();
            },
            nullptr);
    }

}
