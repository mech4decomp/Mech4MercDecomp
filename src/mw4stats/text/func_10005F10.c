/*
 * FUN_10005f10 (42 B) - __thiscall. Zeroes this[0..0x10], sets this[0x14]=0x400,
 * then calls FUN_10001660 with the arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * then calls FUN_10001660 (reset) with the arg. Returns this.
 */

extern void __cdecl FUN_10001660(void);

__declspec(naked) void __cdecl FUN_10005f10(void)
{
    __asm {
        xor     eax, eax
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x10], eax
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        mov     dword ptr [esi + 0x14], 0x400
        call    FUN_10001660
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
