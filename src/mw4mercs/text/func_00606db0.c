/*
 * FUN_00606db0 (101 B) — allocates a 0xa4-byte object and constructs a
 * "MechWarrior4::MWMap" via FUN_00501a20, storing the result in
 * g_007f27c4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc8cc;
extern int g_007dc700;
extern int g_007f27c4;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_00606db0(void)
{
    __asm {
        push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L1
        mov     ecx, dword ptr [g_007dc8cc]
        mov     edx, dword ptr [g_007dc700]
        push    0x502c60
        push    0x5028b0
        push    0x506e70
        push    0x0
        push    0x506410
        push    ecx
        push    0x506160
        push    0x606e50
        push    0x0
        push    0x0
        push    edx
        push    0x78bad4
        push    0x4ad
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [g_007f27c4], eax
        ret
L1:
        mov     dword ptr [g_007f27c4], 0x0
        ret
    }
}
