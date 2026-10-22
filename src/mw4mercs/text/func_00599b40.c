/*
 * FUN_00599B40 (104 B) — __cdecl factory function, RET 0, no params.
 *
 * Allocates memory, constructs an object with many parameters,
 * stores result in global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int);
extern void *__stdcall FUN_00501a20(void);

__declspec(naked) void __cdecl FUN_00599b40(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007f25c8;
extern int DAT_007f1fe0;
__asm {
push    0xA4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_fail
        mov ecx, dword ptr [DAT_007dc8cc]
        mov edx, dword ptr [DAT_007f25c8]
        push    0x502C60
        push    0x5028B0
        push    0x675550
        push    0x502240
        push    0x6754A0
        push    ecx
        push    0x6754C0
        push    0x599BE0
        push    0
        push    0
        push    edx
        push    0x78338C
        push    0x4BD
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f1fe0], eax
        ret

    L_fail:
        mov dword ptr [DAT_007f1fe0], 0x0
        ret
    }


}
