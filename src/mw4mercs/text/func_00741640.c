/*
 * FUN_00741640 (extent 0x741640-0x7416f5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_00741640(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x18]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x1c]
        push    edi
        push    ebx
        push    edx
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0xc8]
        mov    esi, eax
        test    esi, esi
        jge    L_1694
        mov    eax, dword ptr [ebp + 0x14]
        mov    ecx, dword ptr [ebp + 0x10]
        mov    edx, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    eax
        push    ecx
        push    edx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a934c
        call    FUN_006fabf0
        add    esp, 0x20
        test    eax, eax
        je    L_1694
        int 3    
L_1694:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x18
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x18]
        push    edi
        push    ebx
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0xb4]
        mov    esi, eax
        test    esi, esi
        jge    L_16ec
        mov    eax, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    eax
        push    ecx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a938c
        call    FUN_006fabf0
        add    esp, 0x1c
        test    eax, eax
        je    L_16ec
        int 3    
L_16ec:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x14
    }
}
