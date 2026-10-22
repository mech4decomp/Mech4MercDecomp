/*
 * FUN_100066f0 (61 B) - __stdcall, RET 0x10.
 * Marks a node (param_2) as in-use (sets bit 31 of +0xc), optionally calls
 * a callback (param_3) with the node's data (param_4), clears +0x8, and
 * decrements the owner's count (param_1+0x24).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100066f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_6729
        mov     ecx, dword ptr [esp + 0x10]
        or      eax, 0x80000000
        test    ecx, ecx
        mov     dword ptr [esi + 0xc], eax
        jz      L_671b
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_671b
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        call    ecx
    L_671b:
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [esi + 0x8], 0x0
        dec     dword ptr [eax + 0x24]
    L_6729:
        pop     esi
        ret     0x10
    }
}
