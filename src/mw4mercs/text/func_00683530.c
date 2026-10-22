/*
 * FUN_00683530 (40 B) — linear search over a pointer range.
 *
 * piVar1 = *param_1; while (piVar1 != param_1[1]) {
 *   if (*(int*)(*piVar1 + 0x34) == param_2) return *piVar1;
 *   piVar1++;
 * } return 0;
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_00683530(int *param_1, int param_2)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        cmp     eax, ecx
        push    esi
        jz      L_ret0
L_loop:
        mov     edx, dword ptr [esp + 0xC]
        mov     esi, dword ptr [eax]
        cmp     dword ptr [esi + 0x34], edx
        jz      L_found
        add     eax, 0x4
        cmp     eax, ecx
        __emit 0x75   /* __emit: MSVC6 miscomputes backward jnz rel-offset (off-by-4) */
        __emit 0xF2
L_ret0:
        xor     eax, eax
        pop     esi
        ret
L_found:
        mov     eax, dword ptr [eax]
        pop     esi
        ret
    }
}
