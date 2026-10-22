/*
 * FUN_005c1e73 (extent 0x5c1e73-0x5c1f80) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00787930;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f268c;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_005c96a0(void);
extern void __cdecl FUN_005dcbb0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005c1e73(void)
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
        mov    eax, dword ptr [esp + 8]
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005dcbb0
        mov    ecx, dword ptr [esi + 0x5f8]
        cmp    ecx, -2
        je    L_1f05
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    edi, eax
        test    edi, edi
        je    L_1f05
        mov    eax, dword ptr [edi + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        je    L_1f05
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_1f05
        xor    ecx, ecx
        mov    cl, byte ptr [esi + 0x5fd]
        xor    edx, edx
        mov    dl, byte ptr [esi + 0x5fc]
        push    ecx
        mov    ecx, esi
        push    edx
        push    edi
        call    FUN_005c96a0
        mov    dword ptr [esi + 0x5f8], 0xfffffffe
L_1f05:
        pop    edi
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    ebx, ecx
        mov    ebp, dword ptr [ebx + 0x604]
        push    edi
L_1f1d:
        mov    edi, dword ptr [ebx + 0x608]
        mov    esi, ebp
L_1f25:
        cmp    esi, edi
        je    L_1f7a
        fld    dword ptr [g_00787930]
        push    0
        fadd    dword ptr [esi]
        fstp    dword ptr [esp + 0x14]
        call    FUN_00707e70
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je    L_1f4c
        add    esi, 4
        jmp    L_1f25
L_1f4c:
        mov    edx, dword ptr [ebx + 0x608]
        lea    ecx, [esi + 4]
        cmp    ecx, edx
        je    L_1f6f
        mov    eax, edx
        sub    eax, ecx
        sar    eax, 2
        test    eax, eax
        jle    L_1f6f
L_1f64:
        mov    ecx, dword ptr [esi + 4]
        mov    dword ptr [esi], ecx
        add    esi, 4
        dec    eax
        jne    L_1f64
L_1f6f:
        add    edx, -4
        mov    dword ptr [ebx + 0x608], edx
        jmp    L_1f1d
L_1f7a:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    
    }
}
