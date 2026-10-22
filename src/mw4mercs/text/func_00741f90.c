/*
 * FUN_00741f90 (extent 0x741f90-0x74203a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_00741f90(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    edx
        mov    edx, dword ptr [ebp + 0x14]
        push    edx
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov    esi, eax
        test    esi, esi
        jge    L_1fcd
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a989c
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_1fcd
        int 3    
L_1fcd:
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0x14
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
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x14]
        push    edi
        push    ebx
        push    edx
        push    eax
        call    dword ptr [ecx + 0x20]
        mov    esi, eax
        test    esi, esi
        jge    L_2031
        cmp    esi, 0x8877042e
        je    L_2031
        cmp    esi, 0x8877001e
        je    L_2031
        mov    eax, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a98c0
        call    FUN_006fabf0
        add    esp, 0x18
        test    eax, eax
        je    L_2031
        int 3    
L_2031:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x10
    }
}
