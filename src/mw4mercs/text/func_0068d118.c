/*
 * FUN_0068d118 (extent 0x68d118-0x68d210) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_0041e130(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006faca0(void);

__declspec(naked) void FUN_0068d118(void)
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
        sub    esp, 0x30
        mov    eax, dword ptr [esp + 0x34]
        push    esi
        push    edi
        push    1
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_0041de80
        mov    edi, dword ptr [esi + 4]
        mov    esi, dword ptr [esi]
        mov    ecx, edi
        sub    ecx, esi
        mov    eax, 0x2aaaaaab
        imul    ecx
        mov    eax, dword ptr [esp + 8]
        sar    edx, 2
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        mov    dword ptr [esp + 0x3c], edx
        push    4
        lea    edx, [esp + 0x40]
        push    edx
        lea    ecx, [esp + 0x10]
        call    dword ptr [eax + 0x24]
        cmp    esi, edi
        je    L_d17e
L_d16b:
        push    0x18
        push    esi
        lea    ecx, [esp + 0x10]
        call    FUN_0041e130
        add    esi, 0x18
        cmp    esi, edi
        jne    L_d16b
L_d17e:
        lea    ecx, [esp + 8]
        call    FUN_0041dec0
        pop    edi
        pop    esi
        add    esp, 0x30
        ret    4
        nop    
        mov    eax, dword ptr [esp + 8]
        sub    esp, 0xc
        test    eax, eax
        je    L_d1f4
        push    esi
        push    edi
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    edx, [esp + 0xc]
        push    edx
        push    eax
        call    FUN_006faca0
        mov    eax, dword ptr [esp + 8]
        mov    esi, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esi]
        mov    edi, eax
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0xc], eax
        push    4
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [esp + 0x1c]
        sub    eax, 4
        mov    dword ptr [esp + 0x1c], eax
        je    L_d1e4
        mov    edx, dword ptr [esi]
        push    eax
        add    edi, 4
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
L_d1e4:
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        call    FUN_006f4230
        pop    edi
        pop    esi
        add    esp, 0xc
        ret    
L_d1f4:
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [ecx]
        push    4
        lea    eax, [esp + 0xc]
        push    eax
        mov    dword ptr [esp + 0x10], 0
        call    dword ptr [edx + 0x24]
        add    esp, 0xc
        ret    
    }
}
