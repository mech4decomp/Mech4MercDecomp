/*
 * FUN_005e3240 (193 B) — MissileWeapon global constructor.
 *
 * Allocates 0xa8 bytes; on success calls FUN_00501a20 (this=ESI) with a
 * large argument list, sets vtable at +0xa4, stores into global 0x7f2548.
 * On alloc failure stores 0 into global 0x7f2548. Then allocates 0x20
 * bytes for a "BurnTime" object, calls FUN_005008e0, sets vtable
 * 0x775948, and calls FUN_00500ec0 (this = global+0x74).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __fastcall FUN_00501a20(void *this);
extern void __fastcall FUN_005008e0(void *this);
extern void __fastcall FUN_00500ec0(void *this);

__declspec(naked) void FUN_005e3240(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f2560;
extern int DAT_007f2548;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      fail1
        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f2560]
        push    0x502c60
        push    0x5028b0
        push    0x675a60
        push    0x0
        push    0x675a40
        push    eax
        push    0x674b00
        push    0x5e3340
        push    0x0
        push    0x0
        push    ecx
        push    0x788ddc
        push    0x473
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5ef970
        mov dword ptr [DAT_007f2548], esi
        jmp     label_b2
fail1:
        mov dword ptr [DAT_007f2548], 0x0
label_b2:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      fail2
        push    0x98
        push    0x2
        push    0x7849e8
        push    0x20
        mov     ecx, esi
        call    FUN_005008e0
        mov edx, dword ptr [DAT_007f2548]
        push    esi
        lea     ecx, [edx + 0x74]
        mov     dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop     esi
        ret
fail2:
        mov edx, dword ptr [DAT_007f2548]
        xor     esi, esi
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
