/*
 * FUN_10038ee7 (57 B) - __stdcall. If global init flags indicate
 * (DAT_100754a4==1, or DAT_100754a4==0 && DAT_100754a8==1), calls
 * FUN_10038f20(0xfc), then the function pointer DAT_10075600 if set,
 * then FUN_10038f20(0xff).
 *
 * CFLAGS: /O1
 */

extern int g_100754a4;
extern int g_100754a8;
extern void (*g_10075600)(void);
extern void __cdecl FUN_10038f20(int);

__declspec(naked) void __stdcall FUN_10038ee7(void)
{
    __asm {
        mov     eax, dword ptr [g_100754a4]
        cmp     eax, 0x1
        jz      L_body
        test    eax, eax
        jnz     L_done
        cmp     dword ptr [g_100754a8], 0x1
        jnz     L_done
    L_body:
        push    0xfc
        call    FUN_10038f20
        mov     eax, dword ptr [g_10075600]
        pop     ecx
        test    eax, eax
        jz      L_after
        call    eax
    L_after:
        push    0xff
        call    FUN_10038f20
        pop     ecx
    L_done:
        ret
    }
}
