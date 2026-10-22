/*
 * FUN_007083e0 (98 B) — Cleanup helper. Calls a stored callback,
 * resets a system parameter if a flag is set, destroys an icon, and
 * closes a handle.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_iat_76b4d0;      /* IAT: SystemParametersInfoA */
extern void *g_iat_76b4cc;      /* IAT: DestroyIcon */
extern void *g_iat_76b0ec;      /* IAT: CloseHandle */

extern void *g_858bac;          /* DAT_00858bac (callback) */
extern unsigned char g_858c0d;  /* DAT_00858c0d (byte flag) */
extern unsigned int g_858c0c;   /* DAT_00858c0c */
extern void *g_858be4;          /* DAT_00858be4 (HICON) */
extern void *g_858b98;          /* DAT_00858b98 (HANDLE) */

__declspec(naked) void FUN_007083e0(void)
{
    __asm {
        mov     eax, dword ptr [g_858bac]
        test    eax, eax
        jz      L_7083f0
        push    0x80000000
        call    eax
L_7083f0:
        mov     al, byte ptr [g_858c0d]
        test    al, al
        jz      L_708417
        mov     eax, dword ptr [g_858c0c]
        push    0x2
        push    0x0
        and     eax, 0xFF
        push    eax
        push    0x11
        call    dword ptr [g_iat_76b4d0]
        mov     byte ptr [g_858c0d], 0x0
L_708417:
        mov     eax, dword ptr [g_858be4]
        test    eax, eax
        jz      L_708427
        push    eax
        call    dword ptr [g_iat_76b4cc]
L_708427:
        mov     eax, dword ptr [g_858b98]
        test    eax, eax
        jz      L_708441
        push    eax
        call    dword ptr [g_iat_76b0ec]
        mov     dword ptr [g_858b98], 0x0
L_708441:
        ret
    }
}
