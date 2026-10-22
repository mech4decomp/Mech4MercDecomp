/* FUN_00678280 - HUD spatial-hash grid: FPU coord transform (__fastcall, ECX=this) */
extern float g_76d064; /* 0x0076d064 */

__declspec(naked) void func_00678280(void)
{
    __asm {
        fld dword ptr [ecx+0x4]
        mov byte ptr [ecx], 0x0
        fcomp dword ptr [ecx+0x8]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (MSVC6 inserts 9B WAIT) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit 0xC4
        __emit 0x01
        jnz L1
        mov eax, dword ptr [ecx+0x14]
        mov dword ptr [ecx+0xc], eax
        ret
L1:
        fld dword ptr [ecx+0x4]
        fdiv dword ptr [ecx+0x8]
        fld dword ptr [g_76d064]
        fsub st(0), st(1)
        fmul dword ptr [ecx+0x10]
        fxch
        fmul dword ptr [ecx+0x14]
        faddp st(1), st(0)
        fstp dword ptr [ecx+0xc]
        ret
    }
}
