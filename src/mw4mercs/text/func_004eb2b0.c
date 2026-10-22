/*
 * FUN_004eb2b0 (55 B) — __cdecl: allocates a 0x14-byte object and
 * constructs an "Adept::AudioComponentWeb" component via FUN_004151c0,
 * storing the result in global DAT_007dc7c0 (0 on allocation failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_004084d0(int);
extern void FUN_004151c0(void);
extern int g_007dc854;
extern int g_007dc7c0;
extern char g_00774658;

__declspec(naked) void FUN_004eb2b0(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_ret0
        mov     ecx, dword ptr [g_007dc854]
        push    ecx
        push    offset g_00774658
        push    0x22d
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc7c0], eax
        ret
L_ret0:
        mov     dword ptr [g_007dc7c0], 0
        ret
    }
}
