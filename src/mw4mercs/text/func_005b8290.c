/*
 * FUN_005b8290 (77 B) — Allocates 0x24 bytes via FUN_004084d0; if non-null,
 * calls FUN_004dd270(...) to construct an "Objective::ExecutionStateEngine"
 * and stores the result in global 0x007f2118; else stores 0.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084d0(void);
extern void FUN_004dd270(void);

__declspec(naked) void FUN_005b8290(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007f2118;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_d1
        mov eax, dword ptr [DAT_007dc8cc]
        push    0x5052A0
        push    0x5B8310
        push    0x7868C0
        push    1
        push    eax
        push    0x7869D4
        push    0x48D
        mov     ecx, esi
        call    FUN_004dd270
        mov dword ptr [DAT_007f2118], esi
        pop     esi
        ret
L_d1:
        mov dword ptr [DAT_007f2118], 0x0
        pop     esi
        ret
    }


}
