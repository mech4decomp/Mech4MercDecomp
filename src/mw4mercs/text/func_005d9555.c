/*
 * FUN_005d9555 (extent 0x5d9555-0x5d97e3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f2440;
extern int    g_007f2464;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00684d10(void);
extern void __cdecl FUN_00684fb0(void);
extern void __cdecl FUN_00685100(void);
extern void __cdecl FUN_006852c0(void);
extern void __cdecl FUN_0068f240(void);
extern void __cdecl FUN_0068f370(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005d9555(void)
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
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    8
        lea    ecx, [edi + 4]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0xc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x18]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x1c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    ebp, dword ptr [edi + 0x28]
        test    ebp, ebp
        je    L_95c6
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x18], 1
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        add    ebp, 0x30
        push    ebp
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        jmp    L_95d9
L_95c6:
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x18], 0
        call    dword ptr [eax + 0x24]
L_95d9:
        mov    ebp, dword ptr [edi + 0x10]
        test    ebp, ebp
        je    L_95fd
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x18], 1
        call    dword ptr [edx + 0x24]
        push    esi
        mov    ecx, ebp
        call    FUN_00685100
        jmp    L_9610
L_95fd:
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x18], 0
        call    dword ptr [edx + 0x24]
L_9610:
        mov    edi, dword ptr [edi + 0x14]
        test    edi, edi
        je    L_9637
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x18], 1
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi]
        push    esi
        mov    ecx, edi
        call    dword ptr [edx]
        pop    edi
        pop    esi
        pop    ebp
        ret    4
L_9637:
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x18], 0
        call    dword ptr [eax + 0x24]
        pop    edi
        pop    esi
        pop    ebp
        ret    4
        push    ecx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    8
        lea    ecx, [edi + 4]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0xc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x18]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x1c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    ebp, dword ptr [edi + 0x10]
        test    ebp, ebp
        je    L_96a5
        mov    ecx, ebp
        call    FUN_00684fb0
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_96a5:
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        mov    dword ptr [edi + 0x28], 0
        call    dword ptr [edx + 0x20]
        mov    al, byte ptr [esp + 0x14]
        test    al, al
        je    L_96f4
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax + 0x10]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    dword ptr [edi + 0x28], eax
L_96f4:
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [g_007f2464]
        push    edx
        call    FUN_006f4950
        mov    al, byte ptr [esp + 0x14]
        test    al, al
        mov    dword ptr [edi + 0x10], 0
        je    L_974c
        push    0x6c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_973f
        mov    ecx, dword ptr [edi + 0x28]
        mov    edx, dword ptr [g_007f2440]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_00684d10
        jmp    L_9741
L_973f:
        xor    eax, eax
L_9741:
        push    esi
        mov    ecx, eax
        mov    dword ptr [edi + 0x10], eax
        call    FUN_006852c0
L_974c:
        mov    ebp, dword ptr [edi + 0x14]
        test    ebp, ebp
        je    L_9763
        mov    ecx, ebp
        call    FUN_0068f370
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_9763:
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [edi + 0x14], 0
        call    dword ptr [eax + 0x20]
        mov    al, byte ptr [esp + 0x14]
        test    al, al
        je    L_97ab
        push    0x40
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_979e
        mov    edx, dword ptr [g_007f2440]
        push    edx
        mov    ecx, eax
        call    FUN_0068f240
        jmp    L_97a0
L_979e:
        xor    eax, eax
L_97a0:
        mov    edx, dword ptr [eax]
        push    esi
        mov    ecx, eax
        mov    dword ptr [edi + 0x14], eax
        call    dword ptr [edx + 4]
L_97ab:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ecx
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
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x28]
        mov    eax, dword ptr [esi]
        push    0
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 0x184]
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x18c]
        pop    edi
        pop    esi
        ret    
    }
}
