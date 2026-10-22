/*
 * FUN_0059b9d5 (extent 0x59b9d5-0x59bc7b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_00595b60(void);
extern void __cdecl FUN_0059bf30(void);
extern void __cdecl FUN_0059ced0(void);
extern void __cdecl FUN_0059cef0(void);
extern void __cdecl FUN_0059cf10(void);
extern void __cdecl FUN_0059cf30(void);
extern void __cdecl FUN_0059cf50(void);

__declspec(naked) void FUN_0059b9d5(void)
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
        sub    esp, 0xc
        push    ebx
        mov    ebx, ecx
        push    esi
        lea    eax, [ebx + 0x10]
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_004c41d0
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 8], 0x7838a0
        call    FUN_0040c0e0
        mov    esi, eax
        test    esi, esi
        je    L_bc75
        push    ebp
        push    edi
L_ba21:
        mov    eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jne    L_bc60
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        mov    edx, dword ptr [esi + 0x34]
        cmp    edx, dword ptr [ecx + 0x28]
        jg    L_ba74
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [ecx + 0x28]
        push    esi
        lea    ecx, [ebx + 0x18]
        mov    dword ptr [esi + 0x1c], 1
        mov    dword ptr [esi + 0x4c], edx
        call    FUN_004179b0
        jmp    L_bc60
L_ba74:
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059ced0
        cmp    dword ptr [esi + 0x20], eax
        jg    L_babd
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [ecx + 0x28]
        push    esi
        lea    ecx, [ebx + 0x18]
        mov    dword ptr [esi + 0x1c], 1
        mov    dword ptr [esi + 0x4c], edx
        call    FUN_004179b0
        jmp    L_bc60
L_babd:
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1c]
        call    FUN_0059cf10
        cmp    dword ptr [esi + 0x24], eax
        jle    L_bbb6
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        call    FUN_0059cf30
        cmp    dword ptr [esi + 0x28], eax
        jg    L_bb3c
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x1c]
        mov    ecx, dword ptr [eax + 0x28]
        mov    dword ptr [esi + 0x4c], ecx
        push    esi
        lea    ecx, [ebx + 0x18]
        mov    dword ptr [esi + 0x1c], 1
        call    FUN_004179b0
        jmp    L_bc60
L_bb3c:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059cef0
        cmp    dword ptr [esi + 0x2c], eax
        jg    L_bb93
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [ecx + 0x28]
        push    esi
        lea    ecx, [ebx + 0x18]
        mov    dword ptr [esi + 0x1c], 1
        mov    dword ptr [esi + 0x4c], edx
        call    FUN_004179b0
        jmp    L_bc60
L_bb93:
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1c]
        call    FUN_0059cf50
        cmp    dword ptr [esi + 0x30], eax
        jg    L_bbe8
L_bbb6:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x1c]
        mov    eax, dword ptr [edx + 0x28]
        push    esi
        lea    ecx, [ebx + 0x18]
        mov    dword ptr [esi + 0x1c], 1
        mov    dword ptr [esi + 0x4c], eax
        call    FUN_004179b0
        jmp    L_bc60
L_bbe8:
        xor    edi, edi
        lea    ebp, [esi + 0x38]
L_bbed:
        mov    ecx, dword ptr [ebp]
        test    ecx, ecx
        jl    L_bc60
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        push    ecx
        mov    ecx, dword ptr [eax + 0x34]
        call    FUN_00595b60
        cmp    dword ptr [eax + 0x18], 2
        jne    L_bc53
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [ecx + 0x28]
        push    esi
        lea    ecx, [ebx + 0x18]
        mov    dword ptr [esi + 0x1c], 1
        mov    dword ptr [esi + 0x4c], edx
        call    FUN_004179b0
        inc    edi
        add    ebp, 4
        cmp    edi, 5
        jl    L_bbed
        jmp    L_bc60
L_bc53:
        mov    eax, dword ptr [esi + 0x18]
        push    eax
        push    0
        mov    ecx, ebx
        call    FUN_0059bf30
L_bc60:
        lea    ecx, [esp + 0x10]
        call    FUN_0040c0e0
        mov    esi, eax
        test    esi, esi
        jne    L_ba21
        pop    edi
        pop    ebp
L_bc75:
        pop    esi
        pop    ebx
        add    esp, 0xc
        ret    
    }
}
