/*
 * FUN_005f39ab (extent 0x5f39ab-0x5f3b08) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b4384;
extern void __cdecl FUN_004faed0(void);
extern void __cdecl FUN_005f4d10(void);
extern void __cdecl FUN_005f6b70(void);
extern void __cdecl FUN_005fa070(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_005f39ab(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 6
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x10
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        mov    esi, ecx
        mov    al, byte ptr [esi + 0x4bd]
        test    al, al
        push    edi
        je    L_39ec
        mov    ecx, dword ptr [esi + 0x3b0]
        test    ecx, ecx
        je    L_39ec
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [ecx]
        push    ebx
        push    edx
        call    dword ptr [eax + 0x40]
L_39ec:
        mov    ecx, esi
        call    FUN_005f6b70
        mov    eax, dword ptr [ebp + 8]
        push    ebx
        push    eax
        mov    ecx, esi
        call    FUN_005fa070
        mov    ecx, dword ptr [esi + 0xe0]
        mov    edi, dword ptr [ecx + 0x14]
        mov    ecx, esi
        call    FUN_005f4d10
        fld    qword ptr [ebp + 8]
        fsub    qword ptr [esi + 0xe4]
        lea    eax, [edi - 2]
        cmp    eax, 0xc
        fstp    dword ptr [ebp - 4]
        ja    L_3afc
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x5f3b18]
        jmp    dword ptr [edx*4 + 0x5f3b08]
        mov    edi, dword ptr [esi + 0x2f4]
        mov    eax, dword ptr [edi + 0x14]
        cmp    eax, 2
        jl    L_3a49
        cmp    eax, 5
        jle    L_3a56
L_3a49:
        mov    eax, dword ptr [edi]
        push    0
        push    0
        push    2
        mov    ecx, edi
        call    dword ptr [eax + 8]
L_3a56:
        mov    eax, dword ptr [esi + 0x2bc]
        test    eax, eax
        jle    L_3a6d
        mov    eax, dword ptr [ebp - 4]
        mov    edx, dword ptr [edi]
        push    0
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0xc]
L_3a6d:
        mov    ecx, dword ptr [ebp + 8]
        push    ebx
        push    ecx
        mov    ecx, esi
        call    FUN_004faed0
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
        mov    eax, dword ptr [esi + 0xd8]
        fld    dword ptr [eax + 0x90]
        mov    edx, dword ptr [g_007b4384]
        add    eax, 0x80
        fchs    
        fld    dword ptr [eax + 0x14]
        mov    dword ptr [ebp + 0xc], edx
        fchs    
        fstp    dword ptr [ebp - 0xc]
        fld    dword ptr [eax + 0x18]
        pop    edi
        fchs    
        fstp    dword ptr [ebp - 8]
        fmul    dword ptr [ebp + 0xc]
        fadd    dword ptr [esi + 0x180]
        fstp    dword ptr [esi + 0x180]
        fld    dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp + 0xc]
        fadd    dword ptr [esi + 0x184]
        fstp    dword ptr [esi + 0x184]
        fld    dword ptr [ebp - 8]
        fmul    dword ptr [ebp + 0xc]
        fadd    dword ptr [esi + 0x188]
        fstp    dword ptr [esi + 0x188]
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
        push    0x78a780
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_3afc
        int 3    
L_3afc:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x005F3B08 (0 relocated pointers)
    }
}
