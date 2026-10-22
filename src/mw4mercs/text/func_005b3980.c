/*
 * FUN_005b3980 (77 B) — Allocate 0x24 bytes; if non-null, run a
 * state-engine constructor (FUN_004dd270) and store the pointer at
 * 0x007f20fc; else store 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(unsigned int size);
extern void FUN_004dd270(void);

__declspec(naked) void FUN_005b3980(void)
{
    

extern int DAT_007f25bc;
extern int DAT_007f20fc;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      fail
        mov eax, dword ptr [DAT_007f25bc]
        push    0x5052a0
        push    0x5b3a00
        push    0x786360
        push    0x7
        push    eax
        push    0x78640c
        push    0x493
        mov     ecx, esi
        call    FUN_004dd270
        mov dword ptr [DAT_007f20fc], esi
        pop     esi
        ret
fail:
        mov dword ptr [DAT_007f20fc], 0x0
        pop     esi
        ret
    }


}
