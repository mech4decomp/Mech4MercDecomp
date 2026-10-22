/*
 * FUN_0075b930 (extent 0x75b930-0x75b9b6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_0075b930(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    edi
        call    dword ptr [eax + 0x2c]
        mov    esi, eax
        test    esi, esi
        jge    L_b965
        push    ebx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af814
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_b965
        int 3    
L_b965:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    8
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0xc]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edi
        call    dword ptr [eax + 0xc]
        mov    esi, eax
        test    esi, esi
        jge    L_b9ad
        mov    edx, dword ptr [ebp + 0xc]
        push    ebx
        push    edx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af850
        call    FUN_006fabf0
        add    esp, 0x18
        test    eax, eax
        je    L_b9ad
        int 3    
L_b9ad:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
    }
}
