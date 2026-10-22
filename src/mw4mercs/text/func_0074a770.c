/*
 * FUN_0074a770 (extent 0x74a770-0x74a8f0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008aad88;
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_0074a770(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [g_008aad88]
        test    eax, eax
        push    esi
        push    edi
        je    L_a7dd
        mov    ecx, dword ptr [ebp + 0x24]
        mov    edx, dword ptr [ebp + 0x20]
        mov    esi, dword ptr [ebp + 8]
        mov    edi, dword ptr [ebp + 0x10]
        push    ebx
        mov    ebx, dword ptr [esi]
        push    ecx
        mov    ecx, dword ptr [ebp + 0x1c]
        push    edx
        mov    edx, dword ptr [ebp + 0x18]
        push    ecx
        mov    ecx, dword ptr [ebp + 0x14]
        push    edx
        push    ecx
        push    esi
        push    edi
        call    eax
        mov    edx, dword ptr [ebp + 0xc]
        push    eax
        push    edx
        push    esi
        call    dword ptr [ebx + 0x80]
        mov    esi, eax
        test    esi, esi
        pop    ebx
        jge    L_a82e
        cmp    esi, 0x887601c2
        je    L_a82e
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa91c
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_a82e
        int 3    
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0x20
L_a7dd:
        mov    edx, dword ptr [ebp + 0x24]
        mov    edi, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    edx
        mov    edx, dword ptr [ebp + 0x20]
        push    edx
        mov    edx, dword ptr [ebp + 0x1c]
        push    edx
        mov    edx, dword ptr [ebp + 0x18]
        push    edx
        mov    edx, dword ptr [ebp + 0x14]
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    edi
        push    edx
        push    eax
        call    dword ptr [ecx + 0x80]
        mov    esi, eax
        test    esi, esi
        jge    L_a82e
        cmp    esi, 0x887601c2
        je    L_a82e
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa91c
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_a82e
        int 3    
L_a82e:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0x20
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
        mov    eax, dword ptr [g_008aad88]
        test    eax, eax
        push    esi
        push    edi
        je    L_a8a2
        mov    ecx, dword ptr [ebp + 0x1c]
        mov    edx, dword ptr [ebp + 0x18]
        mov    esi, dword ptr [ebp + 8]
        mov    edi, dword ptr [ebp + 0x10]
        push    ebx
        mov    ebx, dword ptr [esi]
        push    ecx
        mov    ecx, dword ptr [ebp + 0x14]
        push    edx
        push    ecx
        push    esi
        push    edi
        call    eax
        mov    edx, dword ptr [ebp + 0xc]
        push    eax
        push    edx
        push    esi
        call    dword ptr [ebx + 0x7c]
        mov    esi, eax
        test    esi, esi
        pop    ebx
        jge    L_a8e8
        cmp    esi, 0x887601c2
        je    L_a8e8
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa950
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_a8e8
        int 3    
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0x18
L_a8a2:
        mov    edx, dword ptr [ebp + 0x1c]
        mov    edi, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    edx
        mov    edx, dword ptr [ebp + 0x18]
        push    edx
        mov    edx, dword ptr [ebp + 0x14]
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    edi
        push    edx
        push    eax
        call    dword ptr [ecx + 0x7c]
        mov    esi, eax
        test    esi, esi
        jge    L_a8e8
        cmp    esi, 0x887601c2
        je    L_a8e8
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa950
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_a8e8
        int 3    
L_a8e8:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0x18
    }
}
