/*
 * FUN_004cfb20 (90 B) — MLR network subsystem: object constructor
 * (__thiscall). Sets vtable 0x77237c, registers globals, allocates a
 * 0x200-byte buffer via FUN_004084d0, sets up sub-vtable 0x76b768.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007db0a0;
extern int g_00858a44;
extern int g_00858a48;
extern void FUN_004084d0(void);

__declspec(naked) void FUN_004cfb20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        xor     eax, eax
        mov     dword ptr [esi + 0x10], eax
        push    0x200
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi], 0x77237c
        mov     dword ptr [g_007db0a0], esi
        mov     dword ptr [g_00858a44], 0x4cfcb0
        mov     dword ptr [g_00858a48], 0x4cfe40
        mov     dword ptr [esi + 0xc], 0x80
        call    FUN_004084d0
        mov     dword ptr [eax], 0x76b768
        mov     dword ptr [esi + 0x4], eax
        add     esp, 0x4
        mov     dword ptr [eax + 0x4], 0x772370
        mov     dword ptr [esi + 0x8], 0x1
        mov     eax, esi
        pop     esi
        ret
    }
}
