/*
 * FUN_1003af6f (32 B) - __cdecl. Calls FUN_1004177f(param_1, param_2);
 * if result == -1 sets *param_3 = -1, else increments *param_3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1004177f(void);   /* rel32 call */

__declspec(naked) void FUN_1003af6f(void)
{
    __asm {
        push    dword ptr [esp + 8]
        push    dword ptr [esp + 8]
        call    FUN_1004177f
        pop     ecx
        cmp     ax, 0xffff
        mov     eax, dword ptr [esp + 0x10]
        pop     ecx
        jnz     L_af8c
        or      dword ptr [eax], 0xffffffff
        ret
L_af8c:
        inc     dword ptr [eax]
        ret
    }
}
