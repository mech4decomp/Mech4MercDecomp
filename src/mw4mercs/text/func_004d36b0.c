/*
 * FUN_004d36b0 (62 B) -- MLR network/server subsystem init helper.
 * Allocates a 0x20-byte object via FUN_004084d0; on success constructs an
 * "Adept::Application" via FUN_004d5c10 and stores the result in a global;
 * otherwise stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004084d0(int size);
extern int __cdecl FUN_004d5c10(int a, const char *b, int c, int d, const char *e);

extern int g_007db084;   /* DAT_007db084 */
extern int g_007dc114;   /* DAT_007dc114 */
extern char g_772698[];  /* 0x772698 */
extern char g_772854[];  /* 0x772854 */

__declspec(naked) void __stdcall FUN_004d36b0(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L36E3
        mov     ecx, dword ptr [g_007db084]
        push    offset g_772698
        push    0x3
        push    ecx
        push    offset g_772854
        push    0x1e9
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc114], eax
        ret
L36E3:
        mov     dword ptr [g_007dc114], 0x0
        ret
    }
}
