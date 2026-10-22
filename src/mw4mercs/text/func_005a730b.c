/*
 * FUN_005a730b (extent 0x5a730b-0x5a7637) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc728;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_004e41f0(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_005a75d0(void);
extern void __cdecl FUN_005ed240(void);
extern void __cdecl FUN_005ed7d0(void);

__declspec(naked) void FUN_005a730b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x10]
        mov    edx, dword ptr [esp + 4]
        or    eax, 0x40
        mov    dword ptr [ecx + 0x10], eax
        mov    eax, dword ptr [esp + 8]
        push    eax
        push    edx
        call    FUN_005ed240
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005ed7d0
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        fld    qword ptr [esp + 8]
        fsub    qword ptr [esi + 0xec]
        fcomp    dword ptr [eax + 0x78]
        fnstsw  ax
        test    ah, 1
        jne    L_740a
        push    edi
        xor    edi, edi
        push    1
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], edi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_005a75d0
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x30], edi
        mov    ecx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi + 0xd8]
        mov    edx, dword ptr [eax + 0x8c]
        mov    dword ptr [ecx + 0xc], edx
        mov    edx, dword ptr [eax + 0x9c]
        mov    dword ptr [ecx + 0x10], edx
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [ecx + 0x14], eax
        add    ecx, 0xc
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 0x18], edi
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, 0x3f800000
        mov    dword ptr [edx + 0x1c], eax
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 0x20], edi
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [edx + 0x24], edi
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 0x28], eax
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [edx + 0x2c], edi
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 8], edi
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xa0]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x18]
        mov    eax, dword ptr [esp + 0xc]
        cmp    eax, edi
        pop    edi
        je    L_740a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_740a:
        pop    esi
        ret    8
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        sub    esp, 0x60
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x17fc]
        xor    ebx, ebx
        cmp    al, bl
        je    L_75b1
        mov    eax, dword ptr [edi + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    dword ptr [esp + 0x1c], ecx
        mov    edx, dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [edi + 0x248]
        push    edi
        mov    dword ptr [esp + 0x24], edx
        mov    eax, dword ptr [eax + 0x2c]
        push    0x5edca0
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x30], ecx
        mov    ecx, dword ptr [g_007dc728]
        push    edx
        mov    dword ptr [esp + 0x30], eax
        call    FUN_004e41f0
        cmp    dword ptr [edi + 0x244], ebx
        je    L_75b1
        lea    eax, [edi + 0x23c]
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x10], 0x772d80
L_74a8:
        cmp    eax, ebx
        je    L_74cc
        mov    ecx, dword ptr [eax]
        cmp    ecx, ebx
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x18], eax
        je    L_74cc
        mov    ecx, dword ptr [ecx + 0x150]
        cmp    ecx, ebx
        je    L_74a8
        mov    byte ptr [ecx + 0x54], bl
        mov    eax, dword ptr [esp + 0x18]
        jmp    L_74a8
L_74cc:
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [eax]
        mov    esi, dword ptr [esp + 0x74]
        mov    dword ptr [esp + 0x18], ecx
L_74da:
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, ebx
        je    L_75b1
        mov    ebp, dword ptr [eax]
        cmp    ebp, ebx
        je    L_75b1
        mov    eax, dword ptr [ebp + 0x150]
        cmp    eax, ebx
        je    L_7507
        cmp    byte ptr [eax + 0x54], bl
        jne    L_75a3
        mov    byte ptr [eax + 0x54], 1
L_7507:
        lea    edx, [ebp + 0x14]
        push    edx
        lea    ecx, [esp + 0x40]
        mov    dword ptr [esp + 0x30], 0x44
        mov    dword ptr [esp + 0x34], 4
        mov    dword ptr [esp + 0x38], 2
        mov    dword ptr [esp + 0x3c], ebx
        call    FUN_004ea0f0
        fld    dword ptr [edi + 0x228]
        mov    eax, dword ptr [esi + 0x18]
        mov    ecx, dword ptr [esi + 0x1c]
        mov    edx, dword ptr [esi + 0x20]
        mov    dword ptr [esp + 0x4c], eax
        mov    eax, dword ptr [esi + 0xc]
        mov    dword ptr [esp + 0x50], ecx
        mov    ecx, dword ptr [esi + 0x10]
        mov    dword ptr [esp + 0x58], eax
        mov    al, byte ptr [edi + 0x230]
        mov    dword ptr [esp + 0x54], edx
        mov    edx, dword ptr [esi + 0x14]
        mov    dword ptr [esp + 0x5c], ecx
        mov    cx, word ptr [edi + 0x232]
        mov    byte ptr [esp + 0x44], al
        fstp    dword ptr [esp + 0x40]
        fld    dword ptr [edi + 0x22c]
        mov    dword ptr [esp + 0x60], edx
        mov    edx, dword ptr [edi + 0x238]
        lea    eax, [esp + 0x2c]
        mov    word ptr [esp + 0x46], cx
        fstp    dword ptr [esp + 0x64]
        push    eax
        mov    ecx, ebp
        mov    byte ptr [esp + 0x4c], 3
        mov    byte ptr [esp + 0x6c], bl
        mov    dword ptr [esp + 0x70], edx
        call    FUN_004d5b70
L_75a3:
        lea    ecx, [esp + 0x10]
        call    FUN_00417ad0
        jmp    L_74da
L_75b1:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x60
        ret    4
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        cmp    esi, dword ptr [edi + 4]
        je    L_7632
        test    esi, esi
        jbe    L_7621
        mov    eax, dword ptr [edi]
        test    eax, eax
        je    L_75f0
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_75f0:
        lea    eax, [esi*8]
        sub    eax, esi
        shl    eax, 3
        push    eax
        mov    dword ptr [edi + 4], esi
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_7618
        dec    esi
        mov    dword ptr [edi], eax
        pop    edi
        mov    dword ptr [esp + 8], esi
        pop    esi
        ret    4
L_7618:
        xor    eax, eax
        mov    dword ptr [edi], eax
        pop    edi
        pop    esi
        ret    4
L_7621:
        mov    ecx, dword ptr [edi]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi], 0
L_7632:
        pop    edi
        pop    esi
        ret    4
    }
}
