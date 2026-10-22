/*
 * FUN_007355c7 (extent 0x7355c7-0x73563c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_007503b0(void);

__declspec(naked) void FUN_007355c7(void)
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
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp + 0x14]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x1c]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    ecx
        mov    ecx, dword ptr [ebp + 0x10]
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    edi
        call    dword ptr [eax + 0x14]
        mov    esi, eax
        test    esi, esi
        jge    L_5633
        cmp    esi, 0x887601c2
        je    L_5633
        mov    eax, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp + 0x14]
        mov    edx, dword ptr [ebp + 0x10]
        push    ebx
        push    eax
        mov    eax, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    eax
        push    edi
        call    FUN_007503b0
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a6514
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_5633
        int 3    
L_5633:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x18
    }
}
