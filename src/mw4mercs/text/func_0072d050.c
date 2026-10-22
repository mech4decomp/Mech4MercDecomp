/*
 * FUN_0072d050 (154 B) — Keyboard layout detection.
 *
 * Reads DAT_008825c8 (language id); if it is 0x3b6 or 0x3a8, queries the
 * keyboard layout via GetKeyboardLayout(0), and if the low 10 bits == 4
 * (Japanese?), calls an IAT function and sets DAT_00881854. Then calls
 * another IAT function with DAT_00858bf8, and if non-null, calls two more
 * IAT functions and conditionally sets DAT_008825dc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_008825c8;   /* DAT_008825c8 */
extern char g_00881854;   /* DAT_00881854 */
extern char g_008825dc;   /* DAT_008825dc */
extern int  g_00858bf8;   /* DAT_00858bf8 */

/* IAT function pointers */
extern void *g_0076b588;  /* GetKeyboardLayout */
extern void *g_008aad38;
extern void *g_008aad68;
extern void *g_008aad50;
extern void *g_008aad64;

__declspec(naked) void FUN_0072d050(void)
{
    __asm {
        mov     eax, dword ptr [g_008825c8]
        sub     esp, 0x8
        cmp     eax, 0x3b6
        push    esi
        jz      L067
        cmp     eax, 0x3a8
        jnz     L0E5
L067:
        push    0x0
        call    dword ptr [g_0076b588]
        mov     ecx, eax
        and     ecx, 0x3ff
        cmp     ecx, 0x4
        jnz     L08E
        push    eax
        call    dword ptr [g_008aad38]
        test    eax, eax
        mov     byte ptr [g_00881854], 0x1
        jnz     L095
L08E:
        mov     byte ptr [g_00881854], 0x0
L095:
        mov     edx, dword ptr [g_00858bf8]
        push    edx
        call    dword ptr [g_008aad68]
        mov     esi, eax
        test    esi, esi
        jz      L0DE
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        push    esi
        call    dword ptr [g_008aad50]
        mov     edx, dword ptr [g_00858bf8]
        push    esi
        push    edx
        call    dword ptr [g_008aad64]
        mov     al, byte ptr [g_00881854]
        test    al, al
        jz      L0DE
        test    byte ptr [esp + 0x4], 0x1
        mov     byte ptr [g_008825dc], 0x1
        jnz     L0E5
L0DE:
        mov     byte ptr [g_008825dc], 0x0
L0E5:
        pop     esi
        add     esp, 0x8
        ret
    }
}
