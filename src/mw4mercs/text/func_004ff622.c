/*
 * FUN_004ff622 (extent 0x4ff622-0x4ffa3e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004ff390(void);
extern void __cdecl FUN_004ff5e0(void);
extern void __cdecl FUN_004ff600(void);
extern void __cdecl FUN_004ff6a0(void);
extern void __cdecl FUN_004ff6f0(void);
extern void __cdecl FUN_004ff7e0(void);
extern void __cdecl FUN_004ff870(void);
extern void __cdecl FUN_004ff9e0(void);
extern void __cdecl FUN_004ffa10(void);
extern void __cdecl FUN_005003e0(void);
extern void __cdecl FUN_00500520(void);
extern void __cdecl FUN_00500530(void);
extern void __cdecl FUN_00500890(void);
extern void __cdecl FUN_0050d680(void);
extern void __cdecl FUN_0050d690(void);
extern void __cdecl FUN_0050d6a0(void);
extern void __cdecl FUN_0050d6c0(void);
extern void __cdecl FUN_0050d7a0(void);
extern void __cdecl FUN_0050d7f0(void);
extern void __cdecl FUN_0075dfc2(void);
extern void __cdecl FUN_0075dfe6(void);
extern void __cdecl FUN_0075dfec(void);
extern void __cdecl FUN_0075e004(void);

__declspec(naked) void FUN_004ff622(void)
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
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        cmp    dword ptr [esi], 0
        je    L_f641
        mov    eax, 4
        pop    esi
        ret    
L_f641:
        push    esi
        call    FUN_004ff390
        add    esp, 4
        test    eax, eax
        jne    L_f690
        push    esi
        call    FUN_004ff6a0
        add    esp, 4
        test    eax, eax
        jne    L_f690
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    edx
        push    esi
        call    FUN_004ff6f0
        add    esp, 0x10
        test    eax, eax
        jne    L_f690
        mov    dword ptr [esi + 0x70], eax
        mov    dword ptr [esi + 0x74], eax
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        jne    L_f68e
        push    esi
        call    FUN_004ff600
        add    esp, 4
L_f68e:
        xor    eax, eax
L_f690:
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
        push    ecx
        push    0x11
        push    2
        push    2
        mov    dword ptr [esp + 0xc], 1
        call    FUN_0075dfc2
        cmp    eax, -1
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x88], eax
        jne    L_f6ca
        mov    eax, 1
        pop    ecx
        ret    
L_f6ca:
        push    4
        lea    edx, [esp + 4]
        push    edx
        push    0x20
        push    0xffff
        push    eax
        call    FUN_0075e004
        neg    eax
        sbb    eax, eax
        neg    eax
        pop    ecx
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
        sub    esp, 0x10
        push    esi
        mov    esi, dword ptr [esp + 0x1c]
        push    edi
        mov    edi, dword ptr [esp + 0x24]
        cmp    si, di
        mov    word ptr [esp + 8], 2
        mov    dword ptr [esp + 0xc], 0xffffffff
        jg    L_f74b
        mov    eax, dword ptr [esp + 0x1c]
        push    ebx
        mov    ebx, dword ptr [esp + 0x2c]
        push    ebp
        mov    ebp, dword ptr [eax + 0x88]
L_f721:
        push    esi
        call    FUN_0075dfe6
        push    0x10
        lea    ecx, [esp + 0x14]
        push    ecx
        push    0
        push    8
        push    0x7761c0
        push    ebp
        mov    word ptr [esp + 0x2a], ax
        call    FUN_0075dfec
        add    esi, ebx
        cmp    si, di
        jle    L_f721
        pop    ebp
        pop    ebx
L_f74b:
        mov    esi, dword ptr [esp + 0x1c]
        push    2
        push    esi
        call    FUN_004ff5e0
        add    esp, 8
        call    FUN_00500890
        mov    dword ptr [esi + 0x8c], eax
        pop    edi
        xor    eax, eax
        pop    esi
        add    esp, 0x10
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        push    eax
        push    ecx
        push    esi
        call    FUN_004ff7e0
        mov    edi, eax
        add    esp, 0xc
        cmp    edi, -1
        je    L_f7d3
        cmp    dword ptr [esi], 0
        je    L_f7c6
        cmp    dword ptr [esi + 0x70], edi
        jle    L_f7c6
        mov    edx, dword ptr [esi + 4]
        push    edi
        push    edx
        call    FUN_0050d690
        mov    eax, dword ptr [eax]
        push    eax
        push    esi
        call    FUN_004ff870
        add    esp, 0x10
        cmp    eax, -1
        je    L_f7c3
        mov    ecx, dword ptr [esi + 8]
        lea    eax, [eax + eax*2]
        mov    dword ptr [ecx + eax*4 + 4], 0
L_f7c3:
        dec    dword ptr [esi + 0x70]
L_f7c6:
        mov    edx, dword ptr [esi + 4]
        push    edi
        push    edx
        call    FUN_0050d7f0
        add    esp, 8
L_f7d3:
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
        mov    eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [eax + 4]
        push    esi
        push    edi
        push    ebp
        xor    edi, edi
        call    FUN_0050d680
        add    esp, 4
        test    eax, eax
        jle    L_f85e
        mov    ebx, dword ptr [esp + 0x1c]
L_f7fe:
        push    edi
        push    ebp
        call    FUN_0050d690
        mov    esi, dword ptr [eax]
        push    esi
        call    FUN_00500530
        add    esp, 0xc
        cmp    ebx, eax
        jne    L_f850
        push    esi
        call    FUN_00500520
        mov    ecx, dword ptr [esp + 0x1c]
        add    esp, 4
        mov    esi, eax
L_f823:
        mov    dl, byte ptr [ecx]
        mov    al, dl
        cmp    dl, byte ptr [esi]
        jne    L_f847
        test    al, al
        je    L_f843
        mov    dl, byte ptr [ecx + 1]
        mov    al, dl
        cmp    dl, byte ptr [esi + 1]
        jne    L_f847
        add    ecx, 2
        add    esi, 2
        test    al, al
        jne    L_f823
L_f843:
        xor    eax, eax
        jmp    L_f84c
L_f847:
        sbb    eax, eax
        sbb    eax, -1
L_f84c:
        test    eax, eax
        je    L_f866
L_f850:
        push    ebp
        inc    edi
        call    FUN_0050d680
        add    esp, 4
        cmp    edi, eax
        jl    L_f7fe
L_f85e:
        pop    edi
        pop    esi
        pop    ebp
        or    eax, 0xffffffff
        pop    ebx
        ret    
L_f866:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0x6c]
        push    esi
        xor    eax, eax
        test    edx, edx
        jle    L_f894
        mov    ecx, dword ptr [ecx + 8]
        mov    esi, dword ptr [esp + 0xc]
        add    ecx, 4
L_f888:
        cmp    dword ptr [ecx], esi
        je    L_f897
        inc    eax
        add    ecx, 0xc
        cmp    eax, edx
        jl    L_f888
L_f894:
        or    eax, 0xffffffff
L_f897:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        push    ebx
        push    ebp
        push    esi
        call    FUN_004ff7e0
        mov    edi, eax
        mov    eax, dword ptr [esi]
        add    esp, 0xc
        test    eax, eax
        jne    L_f951
        push    esi
        call    FUN_004ff390
        add    esp, 4
        test    eax, eax
        jne    L_f9d0
        cmp    edi, -1
        je    L_f90b
        mov    ebx, dword ptr [esi + 4]
        push    edi
        push    ebx
        call    FUN_0050d690
        mov    eax, dword ptr [eax]
        push    edi
        mov    dword ptr [esp + 0x28], eax
        push    ebx
        mov    dword ptr [eax + 0x14], 0x270f
        call    FUN_0050d7a0
        lea    eax, [esp + 0x2c]
        push    eax
        push    ebx
        call    FUN_0050d6a0
        add    esp, 0x18
        jmp    L_f916
L_f90b:
        push    ebx
        push    ebp
        push    esi
        call    FUN_004ff9e0
        add    esp, 0xc
L_f916:
        mov    ecx, dword ptr [esi + 4]
        push    ecx
        call    FUN_0050d680
        dec    eax
        push    3
        push    esi
        mov    dword ptr [esi + 0x70], eax
        mov    dword ptr [esi + 0x74], 0
        call    FUN_004ff5e0
        mov    eax, dword ptr [esp + 0x2c]
        add    esp, 0xc
        test    eax, eax
        jne    L_f9ce
        push    esi
        call    FUN_004ff600
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        ret    
L_f951:
        cmp    edi, -1
        jne    L_f96c
        mov    edx, dword ptr [esi + 0x70]
        push    edx
        push    ebx
        push    ebp
        push    esi
        call    FUN_004ffa10
        add    esp, 0x10
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        ret    
L_f96c:
        mov    eax, dword ptr [esi + 4]
        push    edi
        push    eax
        call    FUN_0050d690
        mov    ecx, dword ptr [esi + 0x70]
        mov    eax, dword ptr [eax]
        add    esp, 8
        cmp    edi, ecx
        mov    dword ptr [esp + 0x1c], eax
        jge    L_f9ce
        mov    dword ptr [eax + 0x14], 0x270f
        mov    ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    esi
        call    FUN_004ff870
        add    esp, 8
        cmp    eax, -1
        je    L_f9ae
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esi + 8]
        mov    dword ptr [eax + edx*4 + 4], 0
L_f9ae:
        mov    ebx, dword ptr [esi + 0x70]
        mov    ebp, dword ptr [esi + 4]
        push    ebx
        lea    ecx, [esp + 0x20]
        push    ecx
        push    ebp
        call    FUN_0050d6c0
        push    edi
        push    ebp
        call    FUN_0050d7a0
        add    esp, 0x14
        dec    ebx
        mov    dword ptr [esi + 0x70], ebx
L_f9ce:
        xor    eax, eax
L_f9d0:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
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
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        call    FUN_005003e0
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax + 4]
        lea    edx, [esp + 0x14]
        push    edx
        push    ecx
        call    FUN_0050d6a0
        add    esp, 0x10
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        call    FUN_005003e0
        mov    edx, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x18], eax
        lea    eax, [esp + 0x18]
        push    eax
        push    edx
        call    FUN_0050d6c0
        add    esp, 0x14
        ret    
    }
}
