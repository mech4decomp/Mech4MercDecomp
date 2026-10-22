/*
 * FUN_00767430 (extent 0x767430-0x76754f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008bd600;
extern int    g_008bd604;
extern int    g_008bd608;
extern void __cdecl FUN_0041c540(void);

__declspec(naked) void FUN_00767430(void)
{
    __asm {
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [ecx + 0x10]
        mov    dword ptr [eax + 0x10], edx
        mov    edx, dword ptr [ecx + 0x14]
        mov    dword ptr [eax + 0x14], edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    esi
        push    edi
        push    ebx
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        je    L_749c
        push    esi
        add    edi, 0xc
        push    edi
        add    ebx, 0xc
        push    ebx
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        je    L_749c
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        ret    
L_749c:
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [esp + 0xc]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 8]
        fmul    dword ptr [ecx]
        fadd    dword ptr [edx]
        fstp    dword ptr [eax]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [ecx + 4]
        fadd    dword ptr [edx + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [ecx + 8]
        fadd    dword ptr [edx + 8]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [ecx + 0xc]
        fadd    dword ptr [edx + 0xc]
        fstp    dword ptr [eax + 0xc]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [ecx + 0x10]
        fadd    dword ptr [edx + 0x10]
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [ecx + 0x14]
        fadd    dword ptr [edx + 0x14]
        fstp    dword ptr [eax + 0x14]
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        __emit 0xE9  /* __emit: reference uses jmp rel32 (E9 0B 00 00 00) to L_7530; MSVC6 collapses to jmp short (EB) */
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
L_7530:
        mov    dword ptr [g_008bd604], 0
        mov    dword ptr [g_008bd600], 0
        mov    dword ptr [g_008bd608], 0
        ret    
    }
}
