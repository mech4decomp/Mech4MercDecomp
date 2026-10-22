/*
 * FUN_10001010 (217 B) — DllMain-style dispatcher (reason in [esp+8]).
 *
 * __stdcall, RET 0xC (3 params: hinst, reason, reserved).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int (__stdcall *g_GetVersion)(void);        /* IAT 0x10005004 */
extern char *(__stdcall *g_GetCommandLineA)(void);          /* IAT 0x10005000 */

extern unsigned int g_10008a50;   /* 0x10008a50 */
extern unsigned int g_10008a58;   /* 0x10008a58 */
extern unsigned int g_10008a5c;   /* 0x10008a5c */
extern unsigned int g_10008a54;   /* 0x10008a54 */
extern unsigned int g_10009118;   /* 0x10009118 */
extern unsigned int g_10008a3c;   /* 0x10008a3c */
extern unsigned int g_10008a38;   /* 0x10008a38 */
extern unsigned int g_10008a88;   /* 0x10008a88 */

extern void __stdcall FUN_10001c20(int);
extern void __stdcall FUN_10001c7d(void);
extern void __stdcall FUN_100012d7(void);
extern void __stdcall FUN_10001979(void);
extern void __stdcall FUN_10001463(void);
extern void __stdcall FUN_1000172c(void);
extern void __stdcall FUN_10001673(void);
extern void __stdcall FUN_100011b9(void);
extern void __stdcall FUN_100011f7(void);
extern void __stdcall FUN_1000161f(void);
extern void __stdcall FUN_1000132b(void);
extern void __stdcall FUN_100013c3(void *);

__declspec(naked) void __stdcall FUN_10001010(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        cmp     eax, 1
        jnz     L_a5
        call    dword ptr [g_GetVersion]
        push    1
        mov     dword ptr [g_10008a50], eax
        call    FUN_10001c20
        test    eax, eax
        pop     ecx
        jz      L_70
        mov     eax, dword ptr [g_10008a50]
        xor     ecx, ecx
        mov     cl, byte ptr [g_10008a50 + 1]
        and     eax, 0xff
        shr     dword ptr [g_10008a50], 0x10
        mov     dword ptr [g_10008a58], eax
        mov     dword ptr [g_10008a5c], ecx
        shl     eax, 8
        add     eax, ecx
        mov     dword ptr [g_10008a54], eax
        call    FUN_100012d7
        test    eax, eax
        jnz     L_74
        call    FUN_10001c7d
L_70:
        xor     eax, eax
        jmp     L_e6
L_74:
        call    dword ptr [g_GetCommandLineA]
        mov     dword ptr [g_10009118], eax
        call    FUN_10001979
        mov     dword ptr [g_10008a3c], eax
        call    FUN_10001463
        call    FUN_1000172c
        call    FUN_10001673
        call    FUN_100011b9
        inc     dword ptr [g_10008a38]
        jmp     L_e3
L_a5:
        xor     ecx, ecx
        cmp     eax, ecx
        jnz     L_d7
        cmp     dword ptr [g_10008a38], ecx
        jle     L_70
        dec     dword ptr [g_10008a38]
        cmp     dword ptr [g_10008a88], ecx
        jnz     L_c6
        call    FUN_100011f7
L_c6:
        call    FUN_1000161f
        call    FUN_1000132b
        call    FUN_10001c7d
        jmp     L_e3
L_d7:
        cmp     eax, 3
        jnz     L_e3
        push    ecx
        call    FUN_100013c3
        pop     ecx
L_e3:
        push    1
        pop     eax
L_e6:
        ret     0xC
    }
}
