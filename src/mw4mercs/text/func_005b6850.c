/*
 * FUN_005b6850 (116 B) — global FlareWeapon object constructor/init.
 * Allocates 0xa8 bytes, initializes a global object via FUN_00501a20,
 * stores vtable pointer and global handle.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(unsigned int size);
extern void __stdcall FUN_00501a20(void);

__declspec(naked) void __stdcall FUN_005b6850(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f2560;
extern int DAT_007f2108;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_68b8
        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f2560]
        push    0x502c60
        push    0x5028b0
        push    0x6775b0
        push    0x0
        push    0x677590
        push    eax
        push    0x674b00
        push    0x5b6900
        push    0x0
        push    0x0
        push    ecx
        push    0x7866d8
        push    0x48f
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5ef970
        mov dword ptr [DAT_007f2108], esi
        pop     esi
        ret
L_68b8:
        mov dword ptr [DAT_007f2108], 0x0
        pop     esi
        ret
    }


}
