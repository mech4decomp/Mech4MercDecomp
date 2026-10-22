/*
 * FUN_0056d7d3 (extent 0x56d7d3-0x56da44) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077f684;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566ef0(void);
extern void __cdecl FUN_0056d560(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0056d7d3(void)
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        push    esi
        jne    L_d82d
        call    FUN_00566c30
        push    eax
        call    FUN_0056d560
        add    esp, 8
        jmp    L_d98f
L_d82d:
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_d960
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        je    L_d871
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_d989
        jmp    L_d97f
L_d871:
        push    0
        call    FUN_00707e70
        fsub    dword ptr [g_0077f684]
        fld    dword ptr [esi + 0x1d8]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_d93f
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        je    L_d93f
        mov    ecx, dword ptr [esi + 0x1d4]
        cmp    ecx, -1
        je    L_d93f
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        test    eax, eax
        je    L_d93f
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_d93f
        mov    edi, dword ptr [esi + 0x170]
        cmp    eax, edi
        je    L_d93f
        test    edi, edi
        je    L_d910
        mov    edx, dword ptr [eax]
        push    ebx
        mov    ecx, eax
        call    dword ptr [edx + 0x60]
        mov    ebx, eax
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x60]
        cmp    ebx, eax
        pop    ebx
        jne    L_d910
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xc8]
        cmp    al, 1
        je    L_d93f
L_d910:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_d937
        push    0
        call    FUN_00563060
        add    esp, 4
L_d937:
        mov    dword ptr [esi], 1
        jmp    L_d98f
L_d93f:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_d989
        jmp    L_d97f
L_d960:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_d989
L_d97f:
        push    0
        call    FUN_00563060
        add    esp, 4
L_d989:
        mov    dword ptr [esi], 0
L_d98f:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        mov    ecx, dword ptr [esp + 0x10]
        push    ebx
        push    esi
        push    edi
        push    0
        lea    eax, [esp + 0x10]
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x1c], 0
        mov    dword ptr [esp + 0x20], 0
        call    FUN_00566ef0
        mov    esi, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x1c]
        add    esp, 0xc
        cmp    esi, eax
        je    L_da14
        mov    edi, dword ptr [esp + 0x24]
        mov    ebx, dword ptr [esp + 0x20]
L_d9f6:
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [ecx]
        push    1
        push    edi
        push    ebx
        call    dword ptr [edx + 0x5c]
        cmp    al, 1
        je    L_da2a
        mov    eax, dword ptr [esp + 0x10]
        add    esi, 4
        cmp    esi, eax
        jne    L_d9f6
        mov    esi, dword ptr [esp + 0xc]
L_da14:
        test    esi, esi
        je    L_da21
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_da21:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0xc
        ret    
L_da2a:
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_da3b
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_da3b:
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        add    esp, 0xc
        ret    
    }
}
