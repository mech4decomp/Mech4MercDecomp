/*
 * FUN_004f1c40 (55 B) - Adept::RendererComponentWeb factory. Allocates a
 * 0x14-byte object via FUN_004084d0; on success constructs it via
 * FUN_004151c0 (__thiscall, "Adept::RendererComponentWeb", id 0x1ed) and
 * stores the result in DAT_007dc854; on failure stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern int g_007dc850;
extern int g_007dc854;

__declspec(naked) void FUN_004f1c40(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L1c6c
        mov     ecx, dword ptr [g_007dc850]
        push    ecx
        push    0x774fb4
        push    0x1ed
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc854], eax
        ret
L1c6c:
        mov     dword ptr [g_007dc854], 0x0
        ret
    }
}
