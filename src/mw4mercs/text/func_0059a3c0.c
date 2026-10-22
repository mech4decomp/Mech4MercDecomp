/*
 * FUN_0059A3C0 (77 B) — __cdecl singleton constructor.
 *
 * Allocates 0x24 bytes via FUN_004084D0. If successful, calls
 * FUN_004DD270(this, 0x4CF, 0x78362C, global_0x7F255C, 2, 0x783600,
 * 0x59A410, 0x5052A0) and stores the pointer at 0x7F1FEC.
 * On failure, stores NULL at 0x7F1FEC.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __stdcall FUN_004dd270(void);

__declspec(naked) void __cdecl FUN_0059a3c0(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f1fec;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      L_fail

        ; Success path
        mov eax, dword ptr [DAT_007f255c]
        push    0x5052A0
        push    0x59A410
        push    0x783600
        push    2
        push    eax
        push    0x78362C
        push    0x4CF
        mov     ecx, esi
        call    FUN_004dd270
        mov dword ptr [DAT_007f1fec], esi
        pop     esi
        ret

    L_fail:
        mov dword ptr [DAT_007f1fec], 0x0
        pop     esi
        ret
    }


}
