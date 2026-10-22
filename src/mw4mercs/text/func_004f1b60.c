/*
 * FUN_004f1b60 (55 B) - Adept::EntityComponentWeb factory. Allocates a
 * 0x14-byte object via FUN_004084d0; on success constructs it via
 * FUN_004151c0 (__thiscall, "Adept::EntityComponentWeb", id 0x1ec) and stores
 * the result in DAT_007dc850; on failure stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern int g_007dc84c;
extern int g_007dc850;

__declspec(naked) void FUN_004f1b60(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L1b8c
        mov     ecx, dword ptr [g_007dc84c]
        push    ecx
        push    0x774f84
        push    0x1ec
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc850], eax
        ret
L1b8c:
        mov     dword ptr [g_007dc850], 0x0
        ret
    }
}
