/*
 * MW4Stats.dll - FUN_10005450 (0x10005450, 63 B, __thiscall)
 * _snwprintf into this+0x18 (0x40 chars) with format 0x10024078, then
 * FUN_100016b0(this, this+0x18, len<<1). RET 0x8.
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10005450 (63 B, __thiscall, ECX = this, RET 8, 2 stack args) --
 * Format a value into this+0x18 via _snwprintf (IAT 0x10021100) with
 * format 0x10024078, then append the resulting wide string (len*2 bytes)
 * via FUN_100016b0. The value is this+0x04, defaulting to 0xf when 0.
 */
extern void __cdecl FUN_100016b0(void);
extern void (__cdecl *g_10021100)(void); /* IAT: _snwprintf */

__declspec(naked) void FUN_10005450(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 4]
        test    eax, eax
        jnz     L1
        mov     eax, 0xf
L1:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        push    eax
        push    0x10024078
        lea     esi, [edi + 0x18]
        push    0x40
        push    esi
        call    dword ptr [g_10021100]
        add     esp, 0x18
        shl     eax, 1
        push    eax
        push    esi
        mov     ecx, edi
        call    FUN_100016b0
        pop     edi
        pop     esi
        ret     0x8
    }
}
