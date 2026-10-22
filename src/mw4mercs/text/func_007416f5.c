/*
 * FUN_007416f5 (extent 0x7416f5-0x741750) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_007416f5(void)
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
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x14]
        push    edi
        push    edx
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x48]
        mov    esi, eax
        test    esi, esi
        jge    L_1747
        cmp    esi, 0x8877001e
        je    L_1747
        mov    eax, dword ptr [edi]
        push    eax
        push    ebx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a93c8
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_1747
        int 3    
L_1747:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x10
    }
}
