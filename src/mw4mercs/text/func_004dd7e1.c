/*
 * FUN_004dd7e1 (extent 0x4dd7e1-0x4dd8a1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6a4;
extern int    g_007dc6a8;
extern void __cdecl FUN_00415230(void);

__declspec(naked) void FUN_004dd7e1(void)
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
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [ecx + 0x10]
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
L_d7fb:
        test    ebx, ebx
        je    L_d85e
        mov    esi, dword ptr [ebx]
        test    esi, esi
        mov    ebx, dword ptr [ebx + 4]
        je    L_d85e
        mov    eax, dword ptr [esp + 0x14]
        mov    edi, dword ptr [eax]
        test    edi, edi
        je    L_d836
        mov    eax, dword ptr [g_007dc6a4]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_d836
        mov    ecx, dword ptr [esi + 0x20]
        cmp    dword ptr [ecx + 0x10], edi
        jne    L_d7fb
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
        jmp    L_d7fb
L_d836:
        mov    edi, dword ptr [ebp]
        test    edi, edi
        je    L_d7fb
        mov    eax, dword ptr [g_007dc6a8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_d7fb
        cmp    dword ptr [esi + 0x20], edi
        jne    L_d7fb
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax]
        jmp    L_d7fb
L_d85e:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
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
        push    esi
        mov    esi, dword ptr [ecx + 0x10]
        push    edi
        mov    edi, dword ptr [esp + 0xc]
L_d879:
        test    esi, esi
        je    L_d89c
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_d89c
        mov    edx, dword ptr [ecx + 0x10]
        mov    eax, edi
        not    eax
        and    edx, eax
        mov    dword ptr [ecx + 0x10], edx
        jne    L_d879
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        jmp    L_d879
L_d89c:
        pop    edi
        pop    esi
        ret    4
    }
}
