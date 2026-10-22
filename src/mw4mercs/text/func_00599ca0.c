/*
 * FUN_00599CA0 (101 B) — __cdecl factory function, RET 0, no params.
 *
 * Allocates memory, constructs an object with many parameters,
 * stores result in global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int);
extern void *__stdcall FUN_00501a20(void);

__declspec(naked) void __cdecl FUN_00599ca0(void)
{
    

extern int DAT_007dc8c4;
extern int DAT_007f25a0;
extern int DAT_007f1fe4;
__asm {
push    0xA4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_fail
        mov ecx, dword ptr [DAT_007dc8c4]
        mov edx, dword ptr [DAT_007f25a0]
        push    0x502C60
        push    0x5028B0
        push    0x675850
        push    0
        push    0x675620
        push    ecx
        push    0x507AA0
        push    0x599D40
        push    0
        push    0
        push    edx
        push    0x78344C
        push    0x4BC
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f1fe4], eax
        ret

    L_fail:
        mov dword ptr [DAT_007f1fe4], 0x0
        ret
    }


}
