/*
 * FUN_006B0610 (34 B) — Vtable slot 10 of vtable 0x798c44.
 *
 * Compares two objects by float field at +0x0c, then by int field at +0x10.
 * Returns 1 if equal, 0 otherwise.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: other object pointer).
 *
 * Disassembly:
 *   D9 41 0C       fld     dword ptr [ecx + 0x0c]
 *   8B 54 24 04    mov     edx, [esp+4]
 *   D8 5A 0C       fcomp   dword ptr [edx + 0x0c]
 *   DF E0          fnstsw  ax
 *   F6 C4 40       test    ah, 0x40
 *   75 05          jne     +5
 *   32 C0          xor     al, al
 *   C2 04 00       ret     4
 *   8B 41 10       mov     eax, [ecx+0x10]
 *   3B 42 10       cmp     eax, [edx+0x10]
 *   0F 94 C0       sete    al
 *   C2 04 00       ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_006b0610(void)
{
    __asm {
        fld     dword ptr [ecx + 0x0c]
        mov     edx, dword ptr [esp + 4]
        fcomp   dword ptr [edx + 0x0c]
        fnstsw  ax
        test    ah, 0x40
        jne     l_compare_int
        xor     al, al
        ret     4
    l_compare_int:
        mov     eax, dword ptr [ecx + 0x10]
        cmp     eax, dword ptr [edx + 0x10]
        sete    al
        ret     4
    }
}
