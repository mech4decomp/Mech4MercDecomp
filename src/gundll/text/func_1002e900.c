/*
 * FUN_1002e900 (58 B) - __fastcall (this in ECX). Calls FUN_1002e750
 * to obtain a count stored at this+0x24; if it is 0, retries once.
 * Then dispatches: count==1 -> FUN_1002e940(this,1), else
 * FUN_1002e3a0(this,0xc1121c00).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e750(void);
extern void __cdecl FUN_1002e3a0(void);
extern void __cdecl FUN_1002e940(void);

__declspec(naked) void __fastcall FUN_1002e900(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1002e750
        mov     ecx, eax
        sub     ecx, 0x0
        mov     dword ptr [esi + 0x24], eax
        jz      L_915
        dec     ecx
        jmp     L_922
    L_915:
        mov     ecx, esi
        call    FUN_1002e750
        mov     dword ptr [esi + 0x24], eax
        cmp     eax, 0x1
    L_922:
        mov     ecx, esi
        jz      L_932
        push    0xc1121c00
        call    FUN_1002e3a0
        pop     esi
        ret
    L_932:
        push    eax
        call    FUN_1002e940
        pop     esi
        ret
    }
}
