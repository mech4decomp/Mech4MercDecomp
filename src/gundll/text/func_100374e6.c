/*
 * FUN_100374E6 (51 B) - __cdecl.  Init-guard wrapper: if
 * (g_100754a4==1 || (g_100754a4==0 && g_100754a8==1)) calls FUN_10038ee7();
 * then calls FUN_10038f20(arg1), then fn-ptr g_1005188c(0xff).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_100754a4;
extern int g_100754a8;
extern void __stdcall FUN_10038ee7(void);
extern void __cdecl FUN_10038f20(int);
extern void *g_1005188c;   /* fn-ptr in .data */

__declspec(naked) void FUN_100374E6(void)
{
    __asm {
        mov     eax, dword ptr [g_100754a4]
        cmp     eax, 1
        je      L_call
        test    eax, eax
        jne     L_skip
        cmp     dword ptr [g_100754a8], 1
        jne     L_skip
L_call:
        call    FUN_10038ee7
L_skip:
        push    dword ptr [esp + 4]
        call    FUN_10038f20
        push    0xff
        call    dword ptr [g_1005188c]
        pop     ecx
        pop     ecx
        ret
    }
}
