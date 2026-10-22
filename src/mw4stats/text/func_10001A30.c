/*
 * MW4Stats.dll - FUN_10001a30 (0x10001A30, 45 B, __thiscall)
 * snwprintf into this+0x18 then copy (this in ECX).
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10001a30 (45 B, __thiscall, ECX = this, RET 4) -- Format an int into
 * this+0x18 with L"%i" via _snwprintf (IAT 0x10021100), then append the
 * resulting wide string (len*2 bytes) via FUN_100016b0.
 * CFLAGS: /G6 /O2  (needs /G6 Pentium-Pro scheduling to defer `mov esi,ecx`
 * after the arg pushes in the prologue; plain /O2 emits 56 8B F1 57 50)
 */
extern void *g_10021100; /* IAT: _snwprintf */
extern void __cdecl FUN_100016b0(void);

__declspec(naked) void FUN_10001a30(void)
{
    __asm {
        mov eax, dword ptr [esp+0x4]
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0x10024070
        lea edi, [esi+0x18]
        push 0x40
        push edi
        call dword ptr [g_10021100]
        add esp, 0x10
        shl eax, 0x1
        push eax
        push edi
        mov ecx, esi
        call FUN_100016b0
        pop edi
        pop esi
        ret 0x4
    }
}
