/*
 * FUN_004ec940 (59 B) — __cdecl. Allocates 0x20 bytes; on success constructs
 * an "Adept::GUIStatBar" object via FUN_004d5c10 and stores it in a global;
 * else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc7f8;
extern int g_007dc7e4;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004ec940(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_970
        mov     ecx, dword ptr [g_007dc7f8]
        push    0
        push    0
        push    ecx
        push    0x7747b4
        push    0x216
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc7e4], eax
        ret
    L_970:
        mov     dword ptr [g_007dc7e4], 0
        ret
    }
}
