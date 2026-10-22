/*
 * FUN_004b99c0 (115 B) — MLR subsystem init/ctor helper. RET (void).
 *
 * CFLAGS: /O1
 */

extern int g_007da9e8;
extern int g_007daa3c;
extern int g_007dab18;
extern int g_007daa40;
extern void FUN_006f4710(void);
extern void FUN_004084d0(void);
extern void FUN_004151c0(void);
extern void FUN_0070f090(void);

__declspec(naked) void FUN_004b99c0(void)
{
    __asm {
        mov     eax, dword ptr [g_007da9e8]
        push    esi
        push    eax
        push    0x0
        push    0x770ef4
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007daa3c], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_4b9a0f
        mov     ecx, dword ptr [g_007dab18]
        push    ecx
        push    0x770ed4
        push    0x8b
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], 0x4b9b90
        mov     dword ptr [g_007daa40], esi
        jmp     L_4b9a19
L_4b9a0f:
        mov     dword ptr [g_007daa40], 0x0
L_4b9a19:
        push    0x0
        push    0x0
        push    0x4b9a50
        push    0x4b9a40
        push    0x770eac
        call    FUN_0070f090
        pop     esi
        ret
    }
}
