/*
 * FUN_00581490 (74 B) — __cdecl singleton constructor.
 *
 * Allocates 0x24 bytes via FUN_004084D0. If successful, calls
 * FUN_004DD270(this, 0x4AE, 0x7815B0, global_0x7F25BC, 0, 0, 0x581510, 0x5052A0)
 * and stores the pointer at 0x7F1F78. On failure, stores NULL at 0x7F1F78.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __stdcall FUN_004dd270(void);

__declspec(naked) void __cdecl FUN_00581490(void)
{
    

extern int DAT_007f25bc;
extern int DAT_007f1f78;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      L_fail

        ; Success path
        mov eax, dword ptr [DAT_007f25bc]
        push    0x5052A0
        push    0x581510
        push    0
        push    0
        push    eax
        push    0x7815B0
        push    0x4AE
        mov     ecx, esi
        call    FUN_004dd270
        mov dword ptr [DAT_007f1f78], esi
        pop     esi
        ret

    L_fail:
        mov dword ptr [DAT_007f1f78], 0x0
        pop     esi
        ret
    }


}
