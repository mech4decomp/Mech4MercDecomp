/*
 * FUN_0058d31b (extent 0x58d31b-0x58d399) - gen via tools/gen_bigfunc.py.
 * This slice is a nop alignment pad + a 16-entry jump table (belonging to a
 * prior function at ~0x58CBC2) + 4 nops + a real FPU lerp function.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_0058d31b(void)
{
    __asm {
        /* __emit: alignment pad 90 (nop) */
        __emit 0x90
        /* __emit: in-function jump-table DATA (16 dword entries, relocated
           addresses of a prior function). Inline asm has no `dd`; emit the
           literal patched address bytes (one byte per __emit). */
        __emit 0xC2
        __emit 0xCB
        __emit 0x58
        __emit 0x00
        __emit 0xC2
        __emit 0xCB
        __emit 0x58
        __emit 0x00
        __emit 0xC2
        __emit 0xCB
        __emit 0x58
        __emit 0x00
        __emit 0xC2
        __emit 0xCB
        __emit 0x58
        __emit 0x00
        __emit 0xC4
        __emit 0xCB
        __emit 0x58
        __emit 0x00
        __emit 0xC2
        __emit 0xCB
        __emit 0x58
        __emit 0x00
        __emit 0xC4
        __emit 0xCB
        __emit 0x58
        __emit 0x00
        __emit 0xC2
        __emit 0xCB
        __emit 0x58
        __emit 0x00
        __emit 0x04
        __emit 0xCC
        __emit 0x58
        __emit 0x00
        __emit 0x04
        __emit 0xCC
        __emit 0x58
        __emit 0x00
        __emit 0x04
        __emit 0xCC
        __emit 0x58
        __emit 0x00
        __emit 0x04
        __emit 0xCC
        __emit 0x58
        __emit 0x00
        __emit 0xDF
        __emit 0xCB
        __emit 0x58
        __emit 0x00
        __emit 0x04
        __emit 0xCC
        __emit 0x58
        __emit 0x00
        __emit 0xDF
        __emit 0xCB
        __emit 0x58
        __emit 0x00
        __emit 0x04
        __emit 0xCC
        __emit 0x58
        __emit 0x00
        nop
        nop
        nop
        nop
        mov    edx, dword ptr [esp + 4]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 8]
        fld    dword ptr [ecx]
        fsub    dword ptr [edx]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [edx]
        fstp    dword ptr [eax]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [edx + 4]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [edx + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [edx + 8]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [edx + 8]
        fstp    dword ptr [eax + 8]
        ret    0xc
    }
}
