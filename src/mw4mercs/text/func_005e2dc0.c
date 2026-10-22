/*
 * FUN_005e2dc0 (116 B) — SRMWeaponSubsystem global constructor.
 *
 * Allocates 0xa8 bytes; on success calls FUN_00501a20 (this=ESI) with a
 * large argument list, sets vtable at +0xa4, stores into global 0x7f2544.
 * On alloc failure stores 0 into global 0x7f2544.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __fastcall FUN_00501a20(void *this);

__declspec(naked) void FUN_005e2dc0(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f2548;
extern int DAT_007f2544;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      fail
        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f2548]
        push    0x502c60
        push    0x5028b0
        push    0x675a60
        push    0x0
        push    0x675a40
        push    eax
        push    0x674b00
        push    0x5e2e70
        push    0x0
        push    0x0
        push    ecx
        push    0x788cec
        push    0x474
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5ef970
        mov dword ptr [DAT_007f2544], esi
        pop     esi
        ret
fail:
        mov dword ptr [DAT_007f2544], 0x0
        pop     esi
        ret
    }


}
