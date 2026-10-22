/*
 * FUN_00741f40 (extent 0x741f40-0x741fd4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_00741f40(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x18]
        push    edi
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    ebx
        push    edx
        push    eax
        call    dword ptr [ecx + 0x38]
        mov    esi, eax
        test    esi, esi
        jge    L_1f83
        mov    eax, dword ptr [edi]
        push    eax
        push    ebx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a9858
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_1f83
        int 3    
L_1f83:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x14
        nop    
        nop    
        nop    
        nop    
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
    }
}
