/*
 * FUN_005bac00 (101 B) — global Narc singleton constructor.
 *
 * Allocates 0xA4 bytes via FUN_004084d0; if non-null, calls
 * FUN_00501a20 (__thiscall-style initializer) with a large arg list and
 * records the result in DAT_007f2148. Otherwise DAT_007f2148 = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void FUN_00501a20(void);

__declspec(naked) void __stdcall FUN_005bac00(void)
{
    

extern int DAT_007f214c;
extern int DAT_007f2150;
extern int DAT_007f2148;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_alloc_fail
        mov ecx, dword ptr [DAT_007f214c]
        mov edx, dword ptr [DAT_007f2150]
        push    0x502c60
        push    0x5028b0
        push    0x679e70
        push    0x0
        push    0x679e50
        push    ecx
        push    0x507aa0
        push    0x5baca0
        push    0x0
        push    0x0
        push    edx
        push    0x786ec8
        push    0x482
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f2148], eax
        ret
L_alloc_fail:
        mov dword ptr [DAT_007f2148], 0x0
        ret
    }


}
