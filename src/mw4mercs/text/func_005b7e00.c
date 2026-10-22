/*
 * FUN_005b7e00 (29 B) — __fastcall (ECX = this).
 *
 * If [this+0x168] == 0, set it to 1 and tail-call FUN_005b8150
 * with ECX = DAT_007f2114.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005b8150(void);

__declspec(naked) void __fastcall FUN_005b7e00(void)
{
    

extern int DAT_007f2114;
__asm {
mov     al, byte ptr [ecx + 0x168]
        test    al, al
        jnz     L_ret
        mov     byte ptr [ecx + 0x168], 1
        mov ecx, dword ptr [DAT_007f2114]
        jmp     FUN_005b8150
    L_ret:
        ret
    }


}
