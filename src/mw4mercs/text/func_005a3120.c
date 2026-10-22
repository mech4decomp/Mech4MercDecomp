/*
 * FUN_005a3120 (30 B) — Returns a float value.
 *
 * If dword at this+0x1C is 0, returns float at 0x0076d598.
 * Otherwise calls FUN_00707e70(0) and returns (double at this+0x14) - result.
 *
 * __fastcall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __stdcall FUN_00707e70(int param);

__declspec(naked) void __fastcall FUN_005a3120(void)
{
    

extern int DAT_0076d598;
__asm {
push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x1C]
        test    eax, eax
        jnz     L_call
        fld dword ptr [DAT_0076d598]
        pop     esi
        ret
L_call:
        push    0
        call    FUN_00707e70
        fsubr   qword ptr [esi + 0x14]
        pop     esi
        ret
    }


}
