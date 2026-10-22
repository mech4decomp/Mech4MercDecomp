/*
 * FUN_0070a820 (76 B) — Cleanup/shutdown helper.
 *
 * Calls two init/teardown helpers, then clears a pair of globals,
 * frees a heap object if present, and destroys a window if present.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0070f0a0(void);
extern void __cdecl FUN_0070b430(void);
extern void __cdecl FUN_00740db0(void *param);

extern unsigned int g_85a22c;   /* DAT_0085a22c */
extern unsigned int g_85a210;   /* DAT_0085a210 */
extern unsigned int g_85a214;   /* DAT_0085a214 */
extern unsigned int g_858bf8;   /* DAT_00858bf8 (HWND) */
extern unsigned int g_858ab0;   /* DAT_00858ab0 */
extern void *g_iat_76b5a8;      /* IAT: DestroyWindow */

__declspec(naked) void FUN_0070a820(void)
{
    __asm {
        push    esi
        call    FUN_0070f0a0
        call    FUN_0070b430
        mov     eax, dword ptr [g_85a22c]
        xor     esi, esi
        cmp     eax, esi
        mov     dword ptr [g_85a210], esi
        mov     dword ptr [g_85a214], esi
        jz      L_a84e
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a22c], esi
L_a84e:
        mov     eax, dword ptr [g_858bf8]
        cmp     eax, esi
        mov     dword ptr [g_858ab0], esi
        jz      L_a86a
        push    eax
        call    dword ptr [g_iat_76b5a8]
        mov     dword ptr [g_858bf8], esi
L_a86a:
        pop     esi
        ret
    }
}
