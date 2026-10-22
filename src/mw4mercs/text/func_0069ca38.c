/*
 * FUN_0069ca38 (extent 0x69ca38-0x69cb25) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0069cae0(void);

__declspec(naked) void FUN_0069ca38(void)
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
        ret    0xc
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
        mov    eax, dword ptr [ecx + 0x50]
        push    esi
        mov    esi, dword ptr [eax]
        cmp    esi, eax
        push    edi
        lea    edi, [ecx + 0x50]
        je    L_ca93
        mov    ecx, dword ptr [esp + 0xc]
L_ca62:
        cmp    dword ptr [esi + 0x10c], ecx
        je    L_ca75
        mov    esi, dword ptr [esi]
        cmp    esi, eax
        jne    L_ca62
        pop    edi
        pop    esi
        ret    4
L_ca75:
        mov    ecx, dword ptr [esi + 8]
        test    ecx, ecx
        je    L_ca82
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_ca82:
        push    ecx
        mov    eax, esp
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [eax], esi
        call    FUN_0069cae0
L_ca93:
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
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
        ret    
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
        ret    
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
        ret    
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
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        mov    ecx, dword ptr [eax + 4]
        push    esi
        mov    esi, dword ptr [eax]
        mov    dword ptr [ecx], esi
        mov    dword ptr [esi + 4], ecx
        je    L_cafc
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_cafc:
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [eax], esi
        pop    esi
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
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    dl, byte ptr [ecx]
        mov    ecx, dword ptr [esp + 8]
        mov    byte ptr [eax], dl
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        ret    8
    }
}
