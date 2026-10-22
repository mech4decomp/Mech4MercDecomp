/*
 * FUN_0064596B (76 B) — __thiscall (RET 0x8). Clamps/advances a timer
 * value at [this+0x54] against g_76d970, decrements [this+0x50] by 0x14
 * (floor 0) and adds g_78d0c0 each iteration until a condition, then
 * stores the result into [this+0x2c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_76d970;
extern double g_78d0c0;

__declspec(naked) void FUN_0064596B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        fld     qword ptr [ecx + 0x54]
        fcomp   qword ptr [g_76d970]
        fld     qword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x40
        je      L_645987
        fst     qword ptr [ecx + 0x54]
L_645987:
        fcom    qword ptr [ecx + 0x54]
        fnstsw  ax
        test    ah, 1
        jne     L_6459b1
        xor     edx, edx
L_645993:
        add     dword ptr [ecx + 0x50], -0x14
        jns     L_64599c
        mov     dword ptr [ecx + 0x50], edx
L_64599c:
        fld     qword ptr [ecx + 0x54]
        fadd    qword ptr [g_78d0c0]
        fst     qword ptr [ecx + 0x54]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_645993
L_6459b1:
        fstp    qword ptr [ecx + 0x2c]
        ret     8
    }
}
