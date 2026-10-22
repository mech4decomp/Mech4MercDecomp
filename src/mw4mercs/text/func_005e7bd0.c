/*
 * FUN_005E7BD0 (58 B) — __thiscall, RET 8 (2 params).
 * Reads a sub-object pointer at [this+0x2f4]; if its [0x14] field is
 * non-zero, calls a virtual method (offset 0xc) with a float arg computed
 * from param1 minus [this+0xe4]. Then forwards both params to FUN_005FA070.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005fa070(void);

__declspec(naked) void __cdecl FUN_005e7bd0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x2f4]
        mov     eax, dword ptr [ecx + 0x14]
        test    eax, eax
        jz      L_5e7bf5
        fld     qword ptr [esp + 0x8]
        mov     eax, dword ptr [ecx]
        fsub    qword ptr [esi + 0xe4]
        push    0x0
        push    ecx
        fstp    dword ptr [esp]
        call    dword ptr [eax + 0xc]
L_5e7bf5:
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005fa070
        pop     esi
        ret     0x8
    }
}
