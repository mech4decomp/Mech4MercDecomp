/*
 * FUN_10045E3E (63 B) - __cdecl.  If arg3==0 return 0.  Else call
 * FUN_10045eeb(g_10076a84, 1, arg1, arg3, arg2, arg3, g_10076864);
 * if result==0 return 0x7fffffff, else return result-2.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10076864;
extern int g_10076a84;
extern void __cdecl FUN_10045eeb(void);

__declspec(naked) void FUN_10045E3E(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [ebp + 0x10], 0
        jne     L_work
        xor     eax, eax
        pop     ebp
        ret
L_work:
        push    dword ptr [g_10076864]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 8]
        push    1
        push    dword ptr [g_10076a84]
        call    FUN_10045eeb
        add     esp, 0x1c
        test    eax, eax
        jne     L_ret
        mov     eax, 0x7fffffff
        pop     ebp
        ret
L_ret:
        add     eax, -2
        pop     ebp
        ret
    }
}
