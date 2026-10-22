/*
 * FUN_005af5f0 (116 B) — global BombWeaponSubsystem factory.
 * Allocates 0xA8 bytes; on success initializes via FUN_00501a20 and stores
 * the result in global 0x007f20e4, else clears the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(unsigned int size);
extern void __stdcall FUN_00501a20(void);

__declspec(naked) void __stdcall FUN_005af5f0(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f2548;
extern int DAT_007f20e4;
__asm {
push    esi
        push    0xA8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L658
        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f2548]
        push    0x502C60
        push    0x5028B0
        push    0x675A60
        push    0x0
        push    0x675A40
        push    eax
        push    0x674B00
        push    0x5AF6A0
        push    0x0
        push    0x0
        push    ecx
        push    0x785C30
        push    0x497
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xA4], 0x5EF970
        mov dword ptr [DAT_007f20e4], esi
        pop     esi
        ret
L658:
        mov dword ptr [DAT_007f20e4], 0x0
        pop     esi
        ret
    }


}
