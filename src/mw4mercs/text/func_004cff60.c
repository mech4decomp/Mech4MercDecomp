/*
 * FUN_004CFF60 (62 B) — Calls FUN_00415260 then calls vtable+0x2c on result.
 *
 * __cdecl, RET 0xc (3 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_00415260(int param);

__declspec(naked) int __stdcall FUN_004cff60(int param_1, int param_2, int param_3)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x14]
        _emit 0x8B
        _emit 0x0D
        _emit 0x08
        _emit 0x8C
        _emit 0x7B
        _emit 0x00
        push    esi
        push    eax
        call    FUN_00415260
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        mov     esi, eax
        lea     eax, [esp + 4]
        push    eax
        mov     dword ptr [esp + 8], ecx
        mov     dword ptr [esp + 0xc], edx
        mov     dword ptr [esp + 0x10], esi
        call    dword ptr [esi + 0x2c]
        add     esp, 4
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     0xc
    }
}
