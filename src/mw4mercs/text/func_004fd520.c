/*
 * FUN_004fd520 (extent 0x4fd520-0x4fd853) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_004fd520(void)
{
    __asm {
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov    esi, ecx
        je    L_d598
        mov    eax, dword ptr [esi - 4]
        push    edi
        lea    edi, [esi - 4]
        lea    ecx, [eax*8]
        sub    ecx, eax
        dec    eax
        lea    esi, [esi + ecx*4]
        js    L_d582
        push    ebp
        lea    ebp, [eax + 1]
L_d547:
        sub    esi, 0x1c
        mov    dword ptr [esi], 0x775ea4
        mov    ecx, dword ptr [esi + 0x14]
        test    ecx, ecx
        je    L_d55d
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_d55d:
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        je    L_d577
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_d577
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_d577:
        mov    ecx, esi
        call    FUN_00415380
        dec    ebp
        jne    L_d547
        pop    ebp
L_d582:
        test    bl, 1
        je    L_d590
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_d590:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebx
        ret    4
L_d598:
        mov    ecx, dword ptr [esi + 0x14]
        test    ecx, ecx
        mov    dword ptr [esi], 0x775ea4
        je    L_d5ab
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_d5ab:
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        je    L_d5c5
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_d5c5
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_d5c5:
        mov    ecx, esi
        call    FUN_00415380
        test    bl, 1
        je    L_d5da
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_d5da:
        mov    eax, esi
        pop    esi
        pop    ebx
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
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 4]
        push    edi
        mov    edi, dword ptr [esp + 0x1c]
        xor    ebp, ebp
        cmp    edi, eax
        je    L_d6c8
        cmp    edi, ebp
        mov    ecx, dword ptr [ebx]
        jbe    L_d6bc
        cmp    ecx, ebp
        je    L_d61c
        mov    eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax]
L_d61c:
        lea    ecx, [edi*8]
        sub    ecx, edi
        lea    edx, [ecx*4 + 4]
        push    edx
        mov    dword ptr [ebx + 4], edi
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_d6b6
        lea    esi, [eax + 4]
        mov    dword ptr [eax], edi
        lea    eax, [edi - 1]
        cmp    eax, ebp
        mov    dword ptr [esp + 0x10], esi
        jl    L_d6b0
        inc    eax
        mov    dword ptr [esp + 0x1c], eax
L_d651:
        mov    eax, dword ptr [g_007b8c10]
        push    eax
        mov    ecx, esi
        call    FUN_00415180
        push    ebp
        lea    ecx, [esi + 0x10]
        mov    dword ptr [esi + 8], ebp
        mov    dword ptr [esi + 0xc], ebp
        mov    dword ptr [esi], 0x76cd9c
        call    FUN_00412570
        push    8
        mov    dword ptr [esi], 0x775ea4
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        cmp    edi, ebp
        je    L_d699
        push    ebp
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x773328
        jmp    L_d69b
L_d699:
        xor    edi, edi
L_d69b:
        mov    eax, dword ptr [esp + 0x1c]
        mov    dword ptr [esi + 0x14], edi
        add    esi, 0x1c
        dec    eax
        mov    dword ptr [esp + 0x1c], eax
        jne    L_d651
        mov    esi, dword ptr [esp + 0x10]
L_d6b0:
        mov    eax, esi
        mov    dword ptr [ebx], eax
        jmp    L_d6c8
L_d6b6:
        xor    eax, eax
        mov    dword ptr [ebx], eax
        jmp    L_d6c8
L_d6bc:
        cmp    ecx, ebp
        je    L_d6c6
        mov    edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx]
L_d6c6:
        mov    dword ptr [ebx], ebp
L_d6c8:
        mov    eax, dword ptr [ebx + 4]
        cmp    eax, ebp
        jbe    L_d71b
        mov    esi, dword ptr [ebx]
        mov    ecx, dword ptr [esp + 0x18]
        add    esi, 0x14
        lea    edi, [ecx + 0x14]
        mov    ebp, eax
L_d6dd:
        lea    edx, [edi - 4]
        push    edx
        lea    ecx, [esi - 4]
        call    FUN_00412740
        mov    eax, dword ptr [edi + 4]
        mov    ecx, dword ptr [esi]
        mov    dword ptr [esi + 4], eax
        call    FUN_0041fcb0
        mov    ebx, dword ptr [edi]
        mov    ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        je    L_d712
        mov    ecx, ebx
        call    FUN_0041fd80
        mov    ecx, dword ptr [esi]
        push    eax
        call    FUN_0041fcd0
L_d712:
        add    edi, 0x1c
        add    esi, 0x1c
        dec    ebp
        jne    L_d6dd
L_d71b:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
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
        nop    
        push    ecx
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    eax, dword ptr [ebp + 4]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        cmp    edi, eax
        mov    dword ptr [esp + 0xc], ebp
        je    L_d815
        mov    ecx, dword ptr [ebp]
        xor    ebx, ebx
        cmp    edi, ebx
        jbe    L_d808
        cmp    ecx, ebx
        je    L_d760
        mov    eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax]
L_d760:
        lea    ecx, [edi*8]
        sub    ecx, edi
        lea    edx, [ecx*4 + 4]
        push    edx
        mov    dword ptr [ebp + 4], edi
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_d7fc
        push    esi
        lea    esi, [eax + 4]
        mov    dword ptr [eax], edi
        lea    eax, [edi - 1]
        cmp    eax, ebx
        mov    dword ptr [esp + 0x18], esi
        jl    L_d7ef
        lea    ebp, [eax + 1]
L_d794:
        mov    eax, dword ptr [g_007b8c10]
        push    eax
        mov    ecx, esi
        call    FUN_00415180
        push    ebx
        lea    ecx, [esi + 0x10]
        mov    dword ptr [esi + 8], ebx
        mov    dword ptr [esi + 0xc], ebx
        mov    dword ptr [esi], 0x76cd9c
        call    FUN_00412570
        push    8
        mov    dword ptr [esi], 0x775ea4
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        cmp    edi, ebx
        je    L_d7dc
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x773328
        jmp    L_d7de
L_d7dc:
        xor    edi, edi
L_d7de:
        mov    dword ptr [esi + 0x14], edi
        add    esi, 0x1c
        dec    ebp
        jne    L_d794
        mov    esi, dword ptr [esp + 0x18]
        mov    ebp, dword ptr [esp + 0x10]
L_d7ef:
        mov    eax, esi
        pop    esi
        pop    edi
        mov    dword ptr [ebp], eax
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
L_d7fc:
        xor    eax, eax
        pop    edi
        mov    dword ptr [ebp], eax
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
L_d808:
        cmp    ecx, ebx
        je    L_d812
        mov    edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx]
L_d812:
        mov    dword ptr [ebp], ebx
L_d815:
        pop    edi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b8c10]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 0xc]
        xor    eax, eax
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi + 0x10], ecx
        mov    dword ptr [esi + 0x14], edx
        mov    dword ptr [esi], 0x776020
        mov    eax, esi
        pop    esi
        ret    8
    }
}
