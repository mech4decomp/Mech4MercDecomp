/*
 * FUN_004D9910 (34 B) — Virtual dispatch helper (__fastcall? RET 0).
 *
 * Calls vtable+4 on param_1, then uses result to index into a global
 * table at DAT_007B8C0C, and calls vtable+0x20 on that entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004d9910(void)
{
    __asm {
        mov     ecx, [esp + 4]
        mov     eax, [ecx]
        call    dword ptr [eax + 4]
        _emit   0x8B
        _emit   0x15
        _emit   0x0C
        _emit   0x8C
        _emit   0x7B
        _emit   0x00
        mov     ecx, [eax + 0x10]
        mov     ecx, [edx + ecx * 4]
        mov     edx, [esp + 8]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x20]
        add     esp, 8
        ret
    }
}
