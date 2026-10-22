/*
 * FUN_004ee520 (59 B) — cdecl. Allocates 0x20 bytes; on success
 * constructs an object (FUN_004d5c10) and stores it in 0x7dc804,
 * else stores NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern int g_007dc83c;
extern int g_00774bb4;
extern void __cdecl FUN_004d5c10(void);
extern int g_007dc804;

__declspec(naked) void FUN_004ee520(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_004ee550
        mov     ecx, dword ptr [g_007dc83c]
        push    0x0
        push    0x0
        push    ecx
        push    offset g_00774bb4
        push    0x227
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc804], eax
        ret
L_004ee550:
        mov     dword ptr [g_007dc804], 0
        ret
    }
}
