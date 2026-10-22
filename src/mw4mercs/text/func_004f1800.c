/*
 * FUN_004f1800 (55 B) - Adept::ComponentWeb factory. Allocates a 0x14-byte
 * object via FUN_004084d0; on success constructs it via FUN_004151c0
 * (__thiscall, "Adept::ComponentWeb", id 0x1ee) and stores the result in
 * DAT_007dc84c; on failure stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern int g_007b8c10;
extern int g_007dc84c;

__declspec(naked) void FUN_004f1800(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L182c
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x774f04
        push    0x1ee
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc84c], eax
        ret
L182c:
        mov     dword ptr [g_007dc84c], 0x0
        ret
    }
}
