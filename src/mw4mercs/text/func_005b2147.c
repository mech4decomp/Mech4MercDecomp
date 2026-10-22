/*
 * FUN_005b2147 (extent 0x5b2147-0x5b2353) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f20f4;
extern int    g_007f2450;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005b21b0(void);
extern void __cdecl FUN_005b38b0(void);
extern void __cdecl FUN_005b38d0(void);
extern void __cdecl FUN_005b38f0(void);
extern void __cdecl FUN_005b3910(void);
extern void __cdecl FUN_005c0fe0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005b2147(void)
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
        mov    eax, dword ptr [g_007f2450]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x6f0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_219b
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f20f4]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005b21b0
        mov    esi, eax
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x48]
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_219b:
        xor    esi, esi
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x48]
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005c0fe0
        lea    ecx, [esp + 0x20]
        lea    edi, [esi + 0x6b0]
        push    ecx
        mov    ecx, edi
        call    FUN_005b38b0
        lea    edx, [esp + 0x1c]
        xor    ebx, ebx
        push    edx
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esi + 0x6c4]
        mov    dword ptr [esi + 0x6bc], ebx
        mov    dword ptr [esi + 0x6c0], ebx
        mov    dword ptr [esp + 0x24], ebx
        call    FUN_005b38f0
        mov    ecx, dword ptr [g_007f2450]
        mov    eax, 0xbf800000
        mov    dword ptr [esi + 0x6e4], eax
        push    ecx
        mov    dword ptr [esi + 0x6e8], eax
        mov    dword ptr [esi + 0x6ec], eax
        mov    dword ptr [esi], 0x7860fc
        call    FUN_006f4950
        mov    ebp, dword ptr [edi + 8]
        lea    eax, [edi + 8]
        mov    dword ptr [esi + 0x6a8], ebx
        mov    ebx, dword ptr [edi]
        mov    edx, ebp
        sub    edx, ebx
        sar    edx, 2
        cmp    edx, 0x14
        mov    dword ptr [esi + 0x6ac], 1
        mov    dword ptr [esp + 0x20], eax
        jae    L_22c4
        mov    eax, dword ptr [edi + 4]
        sub    eax, ebx
        sar    eax, 2
        test    ebx, ebx
        mov    dword ptr [esp + 0x18], eax
        push    0x50
        je    L_22a5
        call    FUN_004084d0
        mov    ecx, dword ptr [esp + 0x24]
        push    ecx
        push    eax
        mov    dword ptr [esp + 0x28], eax
        mov    eax, dword ptr [edi + 4]
        push    eax
        push    ebx
        call    FUN_005b3910
        mov    eax, dword ptr [edi]
        mov    ebx, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [esp + 0x34]
        sub    ebp, eax
        add    esp, 0x14
        sar    ebp, 2
        push    ebp
        push    eax
        mov    dword ptr [esp + 0x24], eax
        call    FUN_005b38d0
        jmp    L_22af
L_22a5:
        call    FUN_004084d0
        add    esp, 4
        mov    ebx, eax
L_22af:
        mov    edx, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x20]
        lea    eax, [ebx + edx*4]
        mov    dword ptr [edi], ebx
        add    ebx, 0x50
        mov    dword ptr [edi + 4], eax
        mov    dword ptr [ecx], ebx
L_22c4:
        mov    edx, dword ptr [g_007dab44]
        mov    edi, dword ptr [g_007dab40]
        mov    eax, 0xbf800000
        mov    dword ptr [esi + 0x4bc], eax
        mov    dword ptr [esi + 0x4c0], eax
        mov    dword ptr [esi + 0x4c4], eax
        mov    eax, dword ptr [edx]
        xor    eax, edi
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        mov    al, byte ptr [ecx + 0x17fc]
        test    al, al
        mov    byte ptr [esi + 0x6d0], 0
        mov    byte ptr [esi + 0x6d1], 0
        mov    byte ptr [esi + 0x6e0], 0
        je    L_2327
        mov    ecx, dword ptr [esi + 0x170]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [esi + 0x6a4], ecx
        call    dword ptr [edx + 0xc4]
L_2327:
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x10
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
        mov    eax, 8
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
        mov    al, 1
        ret    
    }
}
