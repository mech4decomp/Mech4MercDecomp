/*
 * FUN_005aa6e0 (101 B) — Global FlameMover subsystem init.
 * Allocates 0xA4 bytes; on success calls FUN_00501a20 (thiscall, ECX=EAX)
 * with a large argument list and stores the result in global 0x007F20A4.
 * On allocation failure stores 0.
 *
 * __cdecl, no args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern int FUN_00501a20(void);

__declspec(naked) void __cdecl FUN_005aa6e0(void)
{
    

extern int DAT_007dc8c4;
extern int DAT_007f25a0;
extern int DAT_007f20a4;
__asm {
push    0xA4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_alloc_fail
        mov ecx, dword ptr [DAT_007dc8c4]
        mov edx, dword ptr [DAT_007f25a0]
        push    0x502C60
        push    0x5028B0
        push    0x675850
        push    0
        push    0x675620
        push    ecx
        push    0x507AA0
        push    0x5AA780
        push    0
        push    0
        push    edx
        push    0x7854D8
        push    0x4A1
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f20a4], eax
        ret
L_alloc_fail:
        mov dword ptr [DAT_007f20a4], 0x0
        ret
    }


}
