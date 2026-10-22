/*
 * FUN_00598C70 (22 B) — Two-dword copy thunk.
 *
 * Copies dword from param1[0] to this[0], dword from param2[0] to this[4].
 * __fastcall (ECX = this), ret 8.
 *
 * Disassembly:
 *   8B C1          mov     eax, ecx
 *   8B 4C 24 04    mov     ecx, [esp+4]
 *   8B 11          mov     edx, [ecx]
 *   8B 4C 24 08    mov     ecx, [esp+8]
 *   89 10          mov     [eax], edx
 *   8B 11          mov     edx, [ecx]
 *   89 50 04       mov     [eax+4], edx
 *   C2 08 00       ret     8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall func_00598c70(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, [esp+4]
        mov     edx, [ecx]
        mov     ecx, [esp+8]
        mov     [eax], edx
        mov     edx, [ecx]
        mov     [eax+4], edx
        ret     8
    }
}
