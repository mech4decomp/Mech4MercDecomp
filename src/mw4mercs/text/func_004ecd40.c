/*
 * FUN_004ecd40 (55 B) — __cdecl. Allocates 0x14 bytes; on success constructs
 * an "Adept::GUITextManager" object via FUN_004151c0 and stores it in a
 * global; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern int g_007dc7e8;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004ecd40(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_6c
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x774864
        push    0x215
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc7e8], eax
        ret
    L_6c:
        mov     dword ptr [g_007dc7e8], 0
        ret
    }
}
