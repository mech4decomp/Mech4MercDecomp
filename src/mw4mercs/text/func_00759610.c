/*
 * FUN_00759610 (167 B) — __thiscall (ECX = this), RET 8 (two float
 * params). Translates a linked list of float-vector nodes by a delta,
 * using a per-frame scalar chosen by FUN_00704a80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00704a80(int a, int b, int c, int d);

/* float constants */
extern float g_76c5b0;   /* 0x0076C5B0 */
extern float g_76d070;   /* 0x0076D070 */

__declspec(naked) void func_00759610(void)
{
    __asm {
        push    esi
        push    0
        push    0
        push    0
        push    2
        mov     esi, ecx
        call    FUN_00704a80
        test    eax, eax
        jz      l_else
        fld     dword ptr [g_76c5b0]
        jmp     l_common

    l_else:
        fld     dword ptr [g_76d070]

    l_common:
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      l_exit
        mov     ecx, dword ptr [esi + 0x1c]
        fild    dword ptr [ecx + 0x8]

    l_loop:
        fld     dword ptr [eax]
        fsub    st(0), st(2)
        fadd    dword ptr [esp + 0x8]
        fstp    dword ptr [eax]
        fld     st(0)
        fadd    dword ptr [eax + 0x4]
        fsub    st(0), st(2)
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x20]
        fsub    st(0), st(2)
        fadd    dword ptr [esp + 0x8]
        fstp    dword ptr [eax + 0x20]
        fld     st(0)
        fadd    dword ptr [eax + 0x24]
        fsub    st(0), st(2)
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [eax + 0x40]
        fsub    st(0), st(2)
        fadd    dword ptr [esp + 0x8]
        fstp    dword ptr [eax + 0x40]
        fld     st(0)
        fadd    dword ptr [eax + 0x44]
        fsub    st(0), st(2)
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [eax + 0x44]
        fld     dword ptr [eax + 0x60]
        fsub    st(0), st(2)
        fadd    dword ptr [esp + 0x8]
        fstp    dword ptr [eax + 0x60]
        fld     st(0)
        fadd    dword ptr [eax + 0x64]
        fsub    st(0), st(2)
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [eax + 0x64]
        mov     eax, dword ptr [eax + 0x80]
        test    eax, eax
        jnz     l_loop
        fstp    st(0)

    l_exit:
        fstp    st(0)
        pop     esi
        ret     8
    }
}
