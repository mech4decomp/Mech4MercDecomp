/*
 * FUN_0040ef7a (extent 0x40ef7a-0x40f074) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040f2a0(void);
extern void __cdecl FUN_0040f2d0(void);
extern void __cdecl FUN_0040f300(void);
extern void __cdecl FUN_0040f930(void);

__declspec(naked) void FUN_0040ef7a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    ebp
        mov    ebp, ecx
        push    esi
        mov    esi, dword ptr [ebp + 0x44]
        mov    dword ptr [esp + 0x10], ebp
        xor    ebx, ebx
L_ef91:
        cmp    esi, ebx
        je    L_efa6
        mov    ecx, dword ptr [esi]
        cmp    ecx, ebx
        mov    esi, dword ptr [esi + 4]
        je    L_efa6
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        jmp    L_ef91
L_efa6:
        push    edi
        mov    edi, dword ptr [ebp + 0x4c]
        cmp    edi, ebx
        je    L_effd
        cmp    dword ptr [edi + 4], ebx
        je    L_efea
        mov    ecx, dword ptr [edi]
        mov    esi, dword ptr [ecx + 4]
        cmp    esi, ebx
        je    L_efdc
L_efbc:
        mov    edx, dword ptr [esi + 0xc]
        push    edx
        mov    ecx, edi
        call    FUN_0040f930
        mov    ebp, dword ptr [esi + 8]
        push    esi
        mov    ecx, edi
        call    FUN_0040f2a0
        cmp    ebp, ebx
        mov    esi, ebp
        jne    L_efbc
        mov    ebp, dword ptr [esp + 0x14]
L_efdc:
        mov    eax, dword ptr [edi]
        mov    dword ptr [eax + 8], eax
        mov    dword ptr [eax + 4], ebx
        mov    dword ptr [eax + 0xc], eax
        mov    dword ptr [edi + 4], ebx
L_efea:
        mov    eax, dword ptr [edi]
        push    1
        push    eax
        call    FUN_0040f300
        push    edi
        call    FUN_004084e0
        add    esp, 0xc
L_effd:
        push    0xc
        call    FUN_004084d0
        add    esp, 4
        mov    esi, eax
        cmp    esi, ebx
        pop    edi
        je    L_f04e
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    edx, [esp + 0x13]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], ebx
        call    FUN_0040f2d0
        push    0x18
        call    FUN_004084d0
        mov    cl, byte ptr [esp + 0x13]
        add    esp, 4
        mov    dword ptr [esi + 4], ebx
        mov    dword ptr [ebp + 0x4c], esi
        mov    dword ptr [esi], eax
        mov    byte ptr [esi + 8], cl
        pop    esi
        mov    dword ptr [eax + 4], ebx
        pop    ebp
        mov    byte ptr [eax], bl
        mov    dword ptr [eax + 8], eax
        mov    dword ptr [eax + 0xc], eax
        pop    ebx
        add    esp, 8
        ret    
L_f04e:
        xor    eax, eax
        pop    esi
        mov    dword ptr [ebp + 0x4c], eax
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        test    edx, edx
        mov    dword ptr [eax], edx
        je    L_f071
        inc    byte ptr [edx - 1]
L_f071:
        ret    4
    }
}
