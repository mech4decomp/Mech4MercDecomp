/*
 * FUN_00594C90 (82 B) — __cdecl singleton constructor.
 *
 * Calls FUN_006F4710("0x782E64", 0, DAT_007DD238) and stores result
 * at 0x7F1FC8. Then allocates 0x20 bytes via FUN_004084D0.
 * If successful, calls FUN_004D5C10(this, 0x4C0, 0x782E48,
 * DAT_007DC140, 0, 0) and stores result at 0x7F1FB4.
 * On failure, stores NULL at 0x7F1FB4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_006f4710(const char *name, int flags, int parent);
extern void *__cdecl FUN_004084d0(int size);
extern void __stdcall FUN_004d5c10(void);

__declspec(naked) void __cdecl FUN_00594c90(void)
{
    

extern int DAT_007dd238;
extern int DAT_007f1fc8;
extern int DAT_007dc140;
extern int DAT_007f1fb4;
__asm {
        mov eax, dword ptr [DAT_007dd238]
        push    eax
        push    0
        push    0x782E64
        call    FUN_006f4710
        push    0x20
        mov dword ptr [DAT_007f1fc8], eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_fail

        mov ecx, dword ptr [DAT_007dc140]
        push    0
        push    0
        push    ecx
        push    0x782E48
        push    0x4C0
        mov     ecx, eax
        call    FUN_004d5c10
        mov dword ptr [DAT_007f1fb4], eax
        ret

    L_fail:
        mov dword ptr [DAT_007f1fb4], 0x0
        ret
    }


}
