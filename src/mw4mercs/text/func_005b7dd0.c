/*
 * FUN_005b7dd0 (42 B) — __fastcall (ECX = this).
 *
 * If [this+0x16c] != 0, set it to 0; if [this+0x168] != 0, tail-call
 * FUN_005b8150 with ECX = DAT_007f2114.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005b8150(void);

__declspec(naked) void __fastcall FUN_005b7dd0(void)
{
    

extern int DAT_007f2114;
__asm {
mov     eax, dword ptr [ecx + 0x16c]
        test    eax, eax
        jz      L_ret
        mov     al, byte ptr [ecx + 0x168]
        test    al, al
        mov     dword ptr [ecx + 0x16c], 0
        jz      L_ret
        mov ecx, dword ptr [DAT_007f2114]
        jmp     FUN_005b8150
    L_ret:
        ret
    }


}
