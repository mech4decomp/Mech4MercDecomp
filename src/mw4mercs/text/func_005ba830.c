/*
 * FUN_005ba830 (116 B) — global NarcWeapon singleton constructor.
 *
 * Allocates 0xA8 bytes via FUN_004084d0; if non-null, calls
 * FUN_00501a20 (a __thiscall-style initializer) with a large arg list,
 * stores a vtable pointer at +0xA4, and records the singleton in
 * DAT_007f2144. Otherwise DAT_007f2144 = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void FUN_00501a20(void);

__declspec(naked) void __stdcall FUN_005ba830(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f2560;
extern int DAT_007f2144;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_alloc_fail
        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f2560]
        push    0x502c60
        push    0x5028b0
        push    0x6775b0
        push    0x0
        push    0x677590
        push    eax
        push    0x674b00
        push    0x5ba8e0
        push    0x0
        push    0x0
        push    ecx
        push    0x786de0
        push    0x483
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5ef970
        mov dword ptr [DAT_007f2144], esi
        pop     esi
        ret
L_alloc_fail:
        mov dword ptr [DAT_007f2144], 0x0
        pop     esi
        ret
    }


}
