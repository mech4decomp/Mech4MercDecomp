/*
 * FUN_0068cb76 (extent 0x68cb76-0x68cc4b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_0041e130(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006faca0(void);

__declspec(naked) void FUN_0068cb76(void)
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
        nop    
        sub    esp, 0x38
        push    edi
        mov    edi, dword ptr [esp + 0x40]
        test    edi, edi
        je    L_cc28
        push    esi
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0xc]
        push    ecx
        push    edi
        call    FUN_006faca0
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [eax]
        push    1
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x4c], edx
        lea    esi, [eax + 4]
        call    FUN_0041de80
        mov    edx, dword ptr [esp + 0x10]
        push    4
        lea    eax, [esp + 0x48]
        push    eax
        lea    ecx, [esp + 0x18]
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [esp + 0x44]
        xor    edi, edi
        test    eax, eax
        jle    L_cc14
L_cbd6:
        fld    dword ptr [esp + 0x4c]
        push    0x18
        fadd    dword ptr [esi + 0xc]
        push    esi
        lea    ecx, [esp + 0x18]
        fstp    dword ptr [esi + 0xc]
        fld    dword ptr [esp + 0x54]
        fadd    dword ptr [esi + 8]
        fstp    dword ptr [esi + 8]
        fld    dword ptr [esp + 0x50]
        fadd    dword ptr [esi]
        fstp    dword ptr [esi]
        fld    dword ptr [esp + 0x50]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [esi + 4]
        call    FUN_0041e130
        mov    eax, dword ptr [esp + 0x44]
        add    esi, 0x18
        inc    edi
        cmp    edi, eax
        jl    L_cbd6
L_cc14:
        mov    eax, dword ptr [esp + 8]
        push    eax
        call    FUN_006f4230
        lea    ecx, [esp + 0x10]
        call    FUN_0041dec0
        pop    esi
L_cc28:
        pop    edi
        add    esp, 0x38
        ret    
        nop    
        nop    
        nop    
        push    ecx
        mov    dl, byte ptr [esp + 3]
        mov    eax, ecx
        xor    ecx, ecx
        mov    dword ptr [eax], ecx
        mov    byte ptr [eax + 8], dl
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [eax]
        mov    dword ptr [eax + 4], ecx
        pop    ecx
        ret    
    }
}
