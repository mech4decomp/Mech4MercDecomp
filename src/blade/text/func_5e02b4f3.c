/*
 * FUN_5e02b4f3 (217 B) - CRT startup/init dispatcher keyed on param_2.
 *
 * param_2 == 1: init path (GetVersion, GetCommandLineA, various init
 *   helpers). param_2 == 0: teardown path. param_2 == 3: FUN_5e02be39(0).
 * Returns 0 on the init-failure path, else 1.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (*g_5e03501c)(void);   /* IAT: GetVersion */
extern int (*g_5e035018)(void);   /* IAT: GetCommandLineA */
extern int g_5e77a888;            /* DAT_5e77a888 */
extern unsigned char g_5e77a889;  /* DAT_5e77a889 (byte within 888) */
extern int g_5e77a890;            /* DAT_5e77a890 */
extern int g_5e77a894;            /* DAT_5e77a894 */
extern int g_5e77a88c;            /* DAT_5e77a88c */
extern int g_5e77af54;            /* DAT_5e77af54 */
extern int g_5e77a874;            /* DAT_5e77a874 */
extern int g_5e77a870;            /* DAT_5e77a870 */
extern int g_5e77a8c0;            /* DAT_5e77a8c0 */
extern int __cdecl FUN_5e02c52d(int);
extern int __cdecl FUN_5e02bd4d(void);
extern void __cdecl FUN_5e02c569(void);
extern int __cdecl FUN_5e02c3fb(void);
extern void __cdecl FUN_5e02bee5(void);
extern void __cdecl FUN_5e02c1ae(void);
extern void __cdecl FUN_5e02c0f5(void);
extern void __cdecl FUN_5e02bc0f(void);
extern void __cdecl FUN_5e02bc5e(void);
extern void __cdecl FUN_5e02c0a1(void);
extern void __cdecl FUN_5e02bda1(void);
extern void __cdecl FUN_5e02be39(int);

__declspec(naked) void __stdcall FUN_5e02b4f3(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        cmp     eax, 1
        jnz     L_8588
        call    dword ptr [g_5e03501c]
        push    1
        mov     dword ptr [g_5e77a888], eax
        call    FUN_5e02c52d
        test    eax, eax
        pop     ecx
        jz      L_8553
        mov     eax, dword ptr [g_5e77a888]
        xor     ecx, ecx
        mov     cl, byte ptr [g_5e77a889]
        and     eax, 0xff
        shr     dword ptr [g_5e77a888], 0x10
        mov     dword ptr [g_5e77a890], eax
        mov     dword ptr [g_5e77a894], ecx
        shl     eax, 8
        add     eax, ecx
        mov     dword ptr [g_5e77a88c], eax
        call    FUN_5e02bd4d
        test    eax, eax
        jnz     L_8557
        call    FUN_5e02c569
    L_8553:
        xor     eax, eax
        jmp     L_85c9
    L_8557:
        call    dword ptr [g_5e035018]
        mov     dword ptr [g_5e77af54], eax
        call    FUN_5e02c3fb
        mov     dword ptr [g_5e77a874], eax
        call    FUN_5e02bee5
        call    FUN_5e02c1ae
        call    FUN_5e02c0f5
        call    FUN_5e02bc0f
        inc     dword ptr [g_5e77a870]
        jmp     L_85c6
    L_8588:
        xor     ecx, ecx
        cmp     eax, ecx
        jnz     L_85ba
        cmp     dword ptr [g_5e77a870], ecx
        jle     L_8553
        dec     dword ptr [g_5e77a870]
        cmp     dword ptr [g_5e77a8c0], ecx
        jnz     L_85a9
        call    FUN_5e02bc5e
    L_85a9:
        call    FUN_5e02c0a1
        call    FUN_5e02bda1
        call    FUN_5e02c569
        jmp     L_85c6
    L_85ba:
        cmp     eax, 3
        jnz     L_85c6
        push    ecx
        call    FUN_5e02be39
        pop     ecx
    L_85c6:
        push    1
        pop     eax
    L_85c9:
        ret     0xc
    }
}
