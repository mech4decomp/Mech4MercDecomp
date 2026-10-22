/*
 * FUN_005ecb60 (36 B) — __thiscall (ECX = this).
 *
 * Calls vtable method at +0x6C, clears bit 0x40 of field 0x10,
 * calls vtable method at +0xC4, then calls FUN_005ef900.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005ef900(void);

__declspec(naked) void __fastcall FUN_005ecb60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x6C]
        mov     eax, dword ptr [esi + 0x10]
        mov     edx, dword ptr [esi]
        and     eax, 0xFFFFFFBF
        mov     ecx, esi
        mov     dword ptr [esi + 0x10], eax
        call    dword ptr [edx + 0xC4]
        mov     ecx, esi
        call    FUN_005ef900
        pop     esi
        ret
    }
}
