/*
 * FUN_00522fa5 (extent 0x522fa5-0x5230dc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_00513c30(void);
extern void __cdecl FUN_00523000(void);

__declspec(naked) void FUN_00522fa5(void)
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
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        push    ebx
        push    esi
        push    edi
        je    L_2fe2
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [eax]
        mov    edi, dword ptr [ecx]
        mov    ebx, dword ptr [g_0076b2ac]
        xor    esi, esi
L_2fcb:
        push    esi
        call    FUN_00523000
        push    eax
        push    edi
        call    ebx
        add    esp, 8
        test    eax, eax
        je    L_2feb
        inc    esi
        cmp    esi, 0xd
        jl    L_2fcb
L_2fe2:
        pop    edi
        pop    esi
        or    eax, 0xffffffff
        pop    ebx
        ret    0xc
L_2feb:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
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
        mov    eax, dword ptr [esp + 4]
        cmp    eax, 0xd
        jb    L_300e
        xor    eax, eax
        ret    4
L_300e:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        add    eax, 0x4b0
        push    eax
        call    dword ptr [edx + 0x34]
        ret    4
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        push    esi
        jne    L_307f
        mov    eax, dword ptr [esp + 0xc]
        cmp    eax, 0xd
        jae    L_30cd
        mov    esi, dword ptr [esp + 0x14]
        test    esi, esi
        je    L_30c6
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        xor    ecx, 0x85739531
        push    edx
        mov    edx, dword ptr [ecx]
        add    eax, 0x4e2
        jmp    L_30b8
L_307f:
        cmp    eax, 1
        jne    L_30d8
        mov    eax, dword ptr [esp + 0xc]
        cmp    eax, 0xd
        jae    L_30cd
        mov    esi, dword ptr [esp + 0x14]
        test    esi, esi
        je    L_30c6
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        xor    ecx, 0x85739531
        push    edx
        mov    edx, dword ptr [ecx]
        add    eax, 0x4b0
L_30b8:
        push    eax
        call    dword ptr [edx + 0x34]
        push    eax
        push    esi
        call    FUN_00513c30
        add    esp, 0xc
L_30c6:
        mov    eax, 1
        pop    esi
        ret    
L_30cd:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_30d8
        mov    byte ptr [eax], 0
L_30d8:
        xor    eax, eax
        pop    esi
        ret    
    }
}
