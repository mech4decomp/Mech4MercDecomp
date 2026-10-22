/*
 * FUN_0074a4a0 (extent 0x74a4a0-0x74a544) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074fc10(void);

__declspec(naked) void FUN_0074a4a0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    edx
        push    eax
        call    dword ptr [ecx + 0x34]
        mov    esi, eax
        test    esi, esi
        jge    L_a4d1
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa7d0
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_a4d1
        int 3    
L_a4d1:
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    8
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
        mov    edx, dword ptr [ebp + 0x20]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x14]
        push    edx
        mov    edx, dword ptr [ebp + 0x1c]
        push    edx
        mov    edx, dword ptr [ebp + 0x18]
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    edx
        push    eax
        call    dword ptr [ecx + 0x28]
        mov    esi, eax
        test    esi, esi
        jge    L_a53b
        cmp    esi, 0x887601c2
        je    L_a53b
        mov    eax, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    eax
        call    FUN_0074fc10
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa7f4
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_a53b
        int 3    
L_a53b:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x1c
    }
}
