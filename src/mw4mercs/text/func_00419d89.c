/*
 * FUN_00419d89 (extent 0x419d89-0x419e9d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041b210(void);
extern void __cdecl FUN_0041bb80(void);
extern void __cdecl FUN_0041c540(void);

__declspec(naked) void FUN_00419d89(void)
{
    __asm {
        nop    
        nop    
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
        je    L_9dcc
        push    esi
        add    edi, 0xc
        push    edi
        add    ebx, 0xc
        push    ebx
        call    FUN_0041b210
        add    esp, 0xc
        test    al, al
        je    L_9dcc
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        ret    
L_9dcc:
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        fld    dword ptr [ecx]
        mov    edx, dword ptr [esp + 0x10]
        fsub    dword ptr [eax]
        push    edx
        add    ecx, 0xc
        push    ecx
        fmul    dword ptr [esp + 0x18]
        add    eax, 0xc
        push    eax
        fadd    dword ptr [eax - 0xc]
        fstp    dword ptr [esi]
        fld    dword ptr [ecx - 8]
        fsub    dword ptr [eax - 8]
        fmul    dword ptr [esp + 0x1c]
        fadd    dword ptr [eax - 8]
        fstp    dword ptr [esi + 4]
        fld    dword ptr [ecx - 4]
        lea    ecx, [esi + 0xc]
        fsub    dword ptr [eax - 4]
        fmul    dword ptr [esp + 0x1c]
        fadd    dword ptr [eax - 4]
        fstp    dword ptr [esi + 8]
        call    FUN_0041bb80
        mov    eax, esi
        pop    esi
        ret    0xc
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
        /* __emit: ref uses near-jmp E9 0B 00 00 00; MSVC6 collapses to EB 0B */
        __emit 0xE9
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
L_9e60:
        mov    ecx, 0x7b8c98
        /* __emit: ref uses near-jmp E9 06 00 00 00; MSVC6 collapses to EB 06 */
        __emit 0xE9
        __emit 0x06
        __emit 0x00
        __emit 0x00
        __emit 0x00
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
L_9e70:
        mov    eax, ecx
        xor    ecx, ecx
        mov    edx, 0x3f800000
        mov    dword ptr [eax], edx
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 0x10], ecx
        mov    dword ptr [eax + 0x14], edx
        mov    dword ptr [eax + 0x18], ecx
        mov    dword ptr [eax + 0x1c], ecx
        mov    dword ptr [eax + 0x20], ecx
        mov    dword ptr [eax + 0x24], ecx
        mov    dword ptr [eax + 0x28], edx
        mov    dword ptr [eax + 0x2c], ecx
        ret    
    }
}
