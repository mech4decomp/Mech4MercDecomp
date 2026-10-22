/*
 * FUN_005d2885 (extent 0x5d2885-0x5d291a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005d2900(void);
extern void __cdecl FUN_005d2920(void);
extern void __cdecl FUN_005dc320(void);
extern void __cdecl FUN_0068c640(void);

__declspec(naked) void FUN_005d2885(void)
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
        nop    
        sub    esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov    ebx, ecx
        call    FUN_005dc320
        mov    esi, dword ptr [ebx + 0x35c]
        test    esi, esi
        je    L_28f9
        push    0x2c
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_28f1
        mov    ecx, esi
        call    FUN_005d2920
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_005d2900
        mov    edx, dword ptr [eax]
        sub    esp, 0xc
        mov    ecx, esp
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ecx + 4], edx
        mov    dword ptr [ecx + 8], eax
        mov    ecx, edi
        call    FUN_0068c640
        mov    dword ptr [ebx + 0x3d4], eax
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xc
        ret    
L_28f1:
        xor    eax, eax
        mov    dword ptr [ebx + 0x3d4], eax
L_28f9:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xc
        ret    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [ecx + 0x2c]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    4
    }
}
