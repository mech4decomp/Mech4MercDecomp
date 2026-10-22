/* FUN_006782c0 - HUD spatial-hash grid: FPU coord transform (__fastcall, ECX=this) */

__declspec(naked) void func_006782c0(void)
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
        mov eax, dword ptr [ecx+0x24]
        mov edx, dword ptr [ecx+0x28]
        mov dword ptr [ecx+0xc], eax
        mov eax, dword ptr [ecx+0x2c]
        mov dword ptr [ecx+0x10], edx
        mov dword ptr [ecx+0x14], eax
        ret
L1:
        fld dword ptr [ecx+0x4]
        fdiv dword ptr [ecx+0x8]
        fld dword ptr [ecx+0x24]
        fsub dword ptr [ecx+0x18]
        fmul st(0), st(1)
        fadd dword ptr [ecx+0x18]
        fstp dword ptr [ecx+0xc]
        fld dword ptr [ecx+0x28]
        fsub dword ptr [ecx+0x1c]
        fmul st(0), st(1)
        fadd dword ptr [ecx+0x1c]
        fstp dword ptr [ecx+0x10]
        fld dword ptr [ecx+0x2c]
        fsub dword ptr [ecx+0x20]
        fmul st(0), st(1)
        fadd dword ptr [ecx+0x20]
        fstp dword ptr [ecx+0x14]
        fstp st(0)
        ret
    }
}
