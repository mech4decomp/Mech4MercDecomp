/*
 * FUN_005b5f40 (67 B) — __thiscall, RET 0 (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005b5f40(void)
{
    

extern int DAT_0080da9c;
extern int DAT_00770168;
extern int DAT_0077dff8;
__asm {
fld     dword ptr [ecx + 0x540]
        fcomp dword ptr [DAT_0080da9c]
        fnstsw ax
        test    ah, 0x1
        jz      L_5f65
        fld dword ptr [DAT_0080da9c]
        fadd dword ptr [DAT_00770168]
        fstp    dword ptr [ecx + 0x540]
L_5f65:
        fld     dword ptr [ecx + 0x540]
        fcomp dword ptr [DAT_0077dff8]
        fnstsw ax
        test    ah, 0x41
        jnz     L_5f82
        mov     dword ptr [ecx + 0x540], 0x44480000
L_5f82:
        ret
    }


}
