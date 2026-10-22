# Module notes

- **`blade.dll`** — DirectDraw proxy DLL with a custom software rasterizer and
  a large facade state machine. 733 function sources.
- **`GunDll.dll`** — COM lobby/account client with registry/string helpers, a
  hash-list object, base64, and WinINet HTTP. 3,175 function sources; its
  in-scope VA list is `reference/in_scope/gundll.txt`.
- **`MW4Stats.dll`** — stats recording, XML upload, and Gun authentication.
  1,085 function sources.
- **`ZlogLib.dll`** — logging API (`GetngLogAPI`) with lifecycle, emission,
  MD5, and memory helpers. 31 function sources.
- **`Language.dll`** — localizable string-table loader. 100 function sources.
- **`MissionLang_MERCS.dll`** — mission/string-table loader. 67 function
  sources.
- **`ScriptStrings_MERCS.dll`** — resource-only, no code.

More detail:
[`docs/MODULE_NOTES.md`](https://github.com/mech4decomp/Mech4MercDecomp/blob/main/docs/MODULE_NOTES.md).
