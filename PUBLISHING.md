# Publishing checklist

## GitHub repository

1. Create a public repository named `better-panel-for-windows-11` under the
   `NikkiD97` GitHub account.
2. Use `main` as the default branch.
3. Upload the complete contents of this folder, including the `.gitignore` file.
4. Confirm that the repository contains source and documentation but no DLLs,
   local installer scripts, registry exports, logs, or personal filesystem paths.
5. Add repository topics such as `windhawk`, `windows-11`, `file-explorer`, and
   `winui`.
6. Publish the beta branch only after compiling and testing the exact committed
   source.
7. Create a GitHub prerelease tagged `v2.0.0-beta.1` from the beta branch.

## Windhawk catalog submission

The official Windhawk collection expects a single source file named
`mods/better-panel-for-windows-11.wh.cpp` in a pull request to
[`ramensoftware/windhawk-mods`](https://github.com/ramensoftware/windhawk-mods).
The source metadata already uses the GitHub profile configured for this project.

Before submitting:

- Compile the exact source committed to GitHub.
- Re-test core preview, playback, rename, archive, and multi-selection actions.
- Keep Windows 11 24H2 labeled untested until it is run on an actual 24H2 system.
- Test both by itself and alongside Windows 11 File Explorer Styler.
- Review the official repository's current contribution requirements.
