/*
 * FUN_0073A380 (135 B) — __cdecl RET (no args). Locked (IAT 0x76b110/
 * 0x76b100) lazy-init of a singleton: if g_00856b8c is set, calls
 * FUN_007575C0; else allocates a 0xec object via FUN_004084C0 and
 * initializes it via FUN_00756D00, storing into g_00856b8c. Sets
 * g_00857f30 flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b110;   /* IAT */
extern void *g_0076b100;   /* IAT */

extern int g_00856b8c;
extern char g_00857f30;
extern int g_008aadc8;

extern void __cdecl FUN_007575C0(void);
extern void __cdecl FUN_004084C0(void);
extern void __cdecl FUN_00756D00(void);

__declspec(naked) void FUN_0073A380(void)
{
    __asm {
        push    0x858ac8
        call    dword ptr [g_0076b110]
        mov     ecx, dword ptr [g_00856b8c]
        test    ecx, ecx
        mov     byte ptr [g_00857f30], 1
        je      L73a3b4
        call    FUN_007575C0
        push    0x858ac8
        mov     byte ptr [g_00857f30], 0
        call    dword ptr [g_0076b100]
        ret
    L73a3b4:
        mov     eax, dword ptr [g_008aadc8]
        push    eax
        push    0xec
        call    FUN_004084C0
        add     esp, 8
        test    eax, eax
        je      L73a3ea
        mov     ecx, eax
        call    FUN_00756D00
        push    0x858ac8
        mov     dword ptr [g_00856b8c], eax
        mov     byte ptr [g_00857f30], 0
        call    dword ptr [g_0076b100]
        ret
    L73a3ea:
        push    0x858ac8
        mov     dword ptr [g_00856b8c], 0
        mov     byte ptr [g_00857f30], 0
        call    dword ptr [g_0076b100]
        ret
    }
}
