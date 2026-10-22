/*
 * FUN_00760dd0 (42 B) — __cdecl helper. Calls FUN_00760e90(param1); if it
 * returns non-zero, computes the length of the string at param1 via
 * REPNE SCASB and stores it into *param2, returning 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00760e90(void *p);

__declspec(naked) int __cdecl FUN_00760dd0(void *param1, int *param2)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 8]
        push    edi
        call    FUN_00760e90
        add     esp, 4
        test    ax, ax
        jnz     cont
        pop     edi
        ret
cont:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        mov     eax, dword ptr [esp + 0xc]
        pop     edi
        not     ecx
        mov     dword ptr [eax], ecx
        mov     ax, 1
        ret
    }
}
