/*
 * FUN_0042261c (extent 0x42261c-0x4227c3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b95a4;
extern int    g_007b95c8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_004224c0(void);
extern void __cdecl FUN_0048fa40(void);
extern void __cdecl FUN_004906f0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0042261c(void)
{
    __asm {
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
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        xor    eax, eax
        mov    dword ptr [esi + 0x10], eax
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi], 0x76ddc0
        mov    eax, esi
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
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x30]
        push    edi
        push    esi
        mov    dword ptr [esi], 0x76ddc0
        call    FUN_0048fa40
        mov    edi, dword ptr [esi + 0x2c]
        test    edi, edi
        je    L_26a3
        mov    eax, dword ptr [edi + 0x10]
        push    eax
        mov    eax, dword ptr [esi + 0x30]
        mov    ecx, dword ptr [eax + 0x10034]
        call    FUN_004906f0
        test    eax, eax
        jne    L_26a3
        test    edi, edi
        je    L_269c
        mov    edx, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [edx]
L_269c:
        mov    dword ptr [esi + 0x2c], 0
L_26a3:
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_26be
        push    eax
        mov    byte ptr [esi + 0x24], 1
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi + 0x28], 0
L_26be:
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        je    L_26d8
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_26d8
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_26d8:
        mov    ecx, esi
        call    FUN_00415380
        pop    edi
        pop    esi
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
        mov    eax, dword ptr [g_007b95a4]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x38
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_2728
        mov    ecx, dword ptr [g_007b95c8]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004224c0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_2728:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
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
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [ecx + 0x30]
        mov    ecx, dword ptr [edx + 0x10]
        dec    eax
        sar    eax, cl
        ret    
        nop    
        nop    
        nop    
        mov    edx, ecx
        mov    ecx, dword ptr [edx + 0x30]
        mov    ecx, dword ptr [ecx + 0x10]
        mov    edx, dword ptr [edx + 0x1c]
        mov    eax, 1
        shl    eax, cl
        dec    eax
        not    eax
        dec    edx
        and    eax, edx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x2c]
        test    eax, eax
        je    L_279e
        test    byte ptr [eax + 0x18], 1
        jne    L_279e
        mov    ecx, dword ptr [ecx + 0x20]
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [edx]
        push    ecx
        push    eax
        mov    ecx, edx
        call    dword ptr [esi]
        pop    esi
L_279e:
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_27bd
        mov    edx, dword ptr [ecx + 0x20]
        mov    dword ptr [eax], edx
L_27bd:
        mov    eax, dword ptr [ecx + 0x2c]
        ret    4
    }
}
