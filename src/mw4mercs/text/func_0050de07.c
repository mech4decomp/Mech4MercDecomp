/*
 * FUN_0050de07 (extent 0x50de07-0x50def5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0050d8d0(void);

__declspec(naked) void FUN_0050de07(void)
{
    __asm {
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
        push    edi
        mov    edi, dword ptr [eax + 4]
        test    edi, edi
        jle    L_de3f
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        push    esi
        mov    esi, dword ptr [eax]
L_de29:
        mov    eax, dword ptr [esi]
        push    ebx
        push    ebp
        push    eax
        call    FUN_0050d8d0
        add    esp, 0xc
        add    esi, 4
        dec    edi
        jne    L_de29
        pop    esi
        pop    ebp
        pop    ebx
L_de3f:
        pop    edi
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, dword ptr [edi]
        mov    eax, dword ptr [esi]
        push    0x1c
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    esi, eax
        mov    eax, dword ptr [edi + 0xc]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [edi + 8]
        xor    ecx, ecx
        inc    word ptr [eax + 2]
        push    ecx
        lea    eax, [esp + 0x10]
        push    eax
        mov    dword ptr [esi + 0xc], ecx
        mov    byte ptr [esi + 0x18], cl
        mov    dword ptr [esi + 0x14], ecx
        mov    ecx, dword ptr [edi + 4]
        push    0x777e6c
        mov    dword ptr [esi], 0x1c
        mov    dword ptr [esi + 4], 2
        mov    dword ptr [esi + 8], 2
        mov    dword ptr [esi + 0x10], edx
        mov    word ptr [esi + 0x1a], 1
        call    FUN_00411bf0
        test    al, al
        je    L_def2
        mov    ecx, dword ptr [esp + 0xc]
        mov    edi, dword ptr [g_0076b2ac]
        push    0x777e60
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_ded8
        pop    edi
        mov    dword ptr [esi + 0x14], 1
        pop    esi
        ret    
L_ded8:
        mov    edx, dword ptr [esp + 0xc]
        push    0x777e58
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_def2
        mov    dword ptr [esi + 0x14], 2
L_def2:
        pop    edi
        pop    esi
        ret    
    }
}
