/*
 * FUN_004d5aa0 (62 B) — MLR network/server subsystem. Allocates a 0x20-byte
 * object; on success constructs it via 0x4d5c10 and stores the result in
 * 0x7dc140, else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern int g_007dc140;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004d5aa0(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4d5ad3
        mov     ecx, dword ptr [g_007b8c10]
        push    0x772c50
        push    0x1
        push    ecx
        push    0x772c64
        push    0x1c1
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc140], eax
        ret
L_4d5ad3:
        mov     dword ptr [g_007dc140], 0x0
        ret
    }
}
