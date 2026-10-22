/*
 * FUN_00767BB0 (17 B) — counts the number of nodes in a linked list
 * (head at [ecx+4], next pointer at [node]); returns the count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00767BB0(void)
{
    __asm {
        mov     ecx, dword ptr [ecx+4]
        xor     eax, eax
        test    ecx, ecx
        je      L_bc0
    L_bb9:
        mov     ecx, dword ptr [ecx]
        inc     eax
        test    ecx, ecx
        jne     L_bb9
    L_bc0:
        ret
    }
}
