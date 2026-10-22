/*
 * FUN_005afa80 (77 B) — global Dropship::ExecutionStateEngine factory.
 * Allocates 0x24 bytes; on success initializes via FUN_004dd270 and stores
 * the result in global 0x007f20e8, else clears the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(unsigned int size);
extern void __stdcall FUN_004dd270(void);

__declspec(naked) void __stdcall FUN_005afa80(void)
{
    

extern int DAT_007f20fc;
extern int DAT_007f20e8;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      Lfac1
        mov eax, dword ptr [DAT_007f20fc]
        push    0x5052A0
        push    0x5AFB00
        push    0x785D30
        push    0x2
        push    eax
        push    0x785D74
        push    0x4C4
        mov     ecx, esi
        call    FUN_004dd270
        mov dword ptr [DAT_007f20e8], esi
        pop     esi
        ret
Lfac1:
        mov dword ptr [DAT_007f20e8], 0x0
        pop     esi
        ret
    }


}
