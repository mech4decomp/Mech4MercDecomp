/* FUN_00641880 - 0x00641880, size 4080 B (block 0x64187A, first fn)
 * __thiscall, RET 8. Damage-increment helper: clamps a value at [ecx+0x314]
 * (cap 0xf), integrates [ecx+0x318] (double) with step 0x77ed38 while it
 * stays below the incoming arg, and stores the result to [ecx+0x2c].
 *
 * NOTE: this data block also contains a second, much larger function at
 * 0x006418F0 (RET) that builds/positions HUD elements via FUN_00561df0/
 * 00561a30/005619f0 and FUN_00641000/00641050/00641010/00640fa0; that one
 * is a separate unit (not transcribed here).
 */
#include <windows.h>

/* extern data symbols (absolute addresses) */
extern double g_76d970;   /* 0x0076d970 */
extern double g_77ed38;   /* 0x0077ed38 */

__declspec(naked) void func_00641880(void)
{
    __asm {
        fld qword ptr [ecx + 0x318]
        fcomp qword ptr [g_76d970]
        fld qword ptr [esp + 4]
        fnstsw ax
        test ah, 0x40
        je L_189d
        fst qword ptr [ecx + 0x318]
L_189d:
        fcom qword ptr [ecx + 0x318]
        fnstsw ax
        test ah, 1
        jne L_18e9
        mov edx, 0x14
L_18af:
        mov eax, dword ptr [ecx + 0x314]
        add eax, edx
        cmp eax, 0xff
        mov dword ptr [ecx + 0x314], eax
        jb L_18ce
        mov dword ptr [ecx + 0x314], 0xf
L_18ce:
        fld qword ptr [ecx + 0x318]
        fadd qword ptr [g_77ed38]
        fst qword ptr [ecx + 0x318]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L_18af
L_18e9:
        fstp qword ptr [ecx + 0x2c]
        ret 8
    }
}
