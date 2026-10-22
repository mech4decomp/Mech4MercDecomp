/*
 * FUN_005a7130 (176 B) — Initializes two objects: a weapon object
 * and a timer object.
 *
 * Allocates 0xa4 bytes, initializes via FUN_00501a20, stores
 * result in global 0x007f2074. Then allocates 0x20 bytes,
 * initializes via FUN_005008e0, sets vtable, and calls
 * FUN_00500ec0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int);
extern int __fastcall FUN_00501a20(int, const char *, int, int, int, ...);
extern int __fastcall FUN_005008e0(int, const char *, int, int);
extern int __fastcall FUN_00500ec0(void *);

__declspec(naked) void __fastcall FUN_005a7130(void)
{
    

extern int DAT_007dc8c4;
extern int DAT_007f25a0;
extern int DAT_007f2074;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      alloc1_fail
        mov ecx, dword ptr [DAT_007dc8c4]
        mov edx, dword ptr [DAT_007f25a0]
        push    0x502c60
        push    0x5028b0
        push    0x677830
        push    0
        push    0x677810
        push    ecx
        push    0x507aa0
        push    0x5a7210
        push    0
        push    0
        push    edx
        push    0x784be8
        push    0x4ab
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f2074], eax
        jmp     alloc2
alloc1_fail:
        mov dword ptr [DAT_007f2074], 0x0
alloc2:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      alloc2_fail
        push    0x78
        push    2
        push    0x784bdc
        push    0x14
        mov     ecx, esi
        call    FUN_005008e0
        mov eax, dword ptr [DAT_007f2074]
        push    esi
        lea     ecx, [eax + 0x74]
        mov     dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop     esi
        ret
alloc2_fail:
        mov eax, dword ptr [DAT_007f2074]
        xor     esi, esi
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
