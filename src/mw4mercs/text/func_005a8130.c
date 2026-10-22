/*
 * FUN_005a8130 (241 B) — Initialization function for DeathEntity system.
 *
 * Allocates 0xA4 bytes, constructs a DeathEntity object, initializes
 * a sorted chain, and sets up a vtable pointer.
 *
 * __stdcall, no parameters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(int size);
extern int __stdcall FUN_00501a20(void);
extern void *__stdcall FUN_004084c0(int size, int param);
extern int __stdcall FUN_00415d70(void);
extern void *__stdcall FUN_00416110(void);
extern void __stdcall FUN_00416990(int a, int b);

__declspec(naked) void __stdcall FUN_005a8130(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007dc690;
extern int DAT_007f2080;
extern int DAT_007f208c;
extern int DAT_007b8810;
extern int DAT_007b8c14;
extern int DAT_007f2088;
extern int DAT_007f2084;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      label_alloc_fail

        mov ecx, dword ptr [DAT_007dc8cc]
        mov edx, dword ptr [DAT_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x502240
        push    0x677a30
        push    ecx
        push    0x501b70
        push    0x5a8280
        push    0x0
        push    0x0
        push    edx
        push    0x784ea4
        push    0x4a8
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f2080], eax
        jmp     label_after_alloc

label_alloc_fail:
        mov dword ptr [DAT_007f2080], 0x0

label_after_alloc:
        mov eax, dword ptr [DAT_007f208c]
        mov     ecx, eax
        inc     eax
        test    ecx, ecx
        push    esi
        mov dword ptr [DAT_007f208c], eax
        jnz     label_skip_chain

        mov edx, dword ptr [DAT_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 0x8
        test    esi, esi
        jz      label_chain_fail

        mov eax, dword ptr [DAT_007b8c14]
        push    eax
        push    0x76ce98
        push    0x64
        push    0x64
        push    0x14
        mov     ecx, esi
        call    FUN_00415d70
        mov dword ptr [DAT_007f2088], esi
        jmp     label_skip_chain

label_chain_fail:
        mov dword ptr [DAT_007f2088], 0x0

label_skip_chain:
        mov ecx, dword ptr [DAT_007f2088]
        call    FUN_00416110
        mov     esi, eax
        test    esi, esi
        jz      label_vtable_fail

        push    0x0
        push    0x0
        mov     ecx, esi
        call    FUN_00416990
        mov     dword ptr [esi], 0x784e78
        mov dword ptr [DAT_007f2084], esi
        pop     esi
        ret

label_vtable_fail:
        mov dword ptr [DAT_007f2084], 0x0
        pop     esi
        ret
    }


}
