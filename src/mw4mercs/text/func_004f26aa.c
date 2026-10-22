/*
 * FUN_004f26aa (extent 0x4f26aa-0x4f2a15) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b4358;
extern int    g_007b435c;
extern int    g_007dc7cc;
extern int    g_007dc7d8;
extern int    g_00858998;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00416470(void);
extern void __cdecl FUN_004164b0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004179f0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004eba40(void);
extern void __cdecl FUN_004ec1e0(void);
extern void __cdecl FUN_004ec2e0(void);
extern void __cdecl FUN_004ec5f0(void);
extern void __cdecl FUN_004f2450(void);
extern void __cdecl FUN_004f2470(void);
extern void __cdecl FUN_00506f70(void);
extern void __cdecl FUN_00724350(void);

__declspec(naked) void FUN_004f26aa(void)
{
    __asm {
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
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, ecx
        xor    ebx, ebx
        sub    eax, ebx
        push    esi
        push    edi
        mov    dword ptr [esp + 0x10], ebp
        je    L_28e0
        sub    eax, 2
        jne    L_295c
        push    ebx
        push    ebx
        push    0x3f800000
        push    0x800
        push    -1
        call    FUN_00724350
        push    ebx
        push    ebx
        push    0x3f800000
        push    0x2000
        push    -1
        call    FUN_00724350
        push    ebx
        push    ebx
        push    0x3dcccccd
        push    0x4000
        push    -1
        call    FUN_00724350
        push    ebx
        push    ebx
        push    0x3f800000
        push    0x1000
        push    -1
        call    FUN_00724350
        push    ebx
        push    ebx
        push    0x3f800000
        push    0x400
        push    -1
        call    FUN_00724350
        push    ebx
        push    ebx
        push    0x3f800000
        push    2
        push    -1
        call    FUN_00724350
        mov    esi, dword ptr [ebp + 0x48]
        mov    byte ptr [esi + 0x50], 1
        mov    dword ptr [esi + 0x54], ebx
        push    0x38
        mov    dword ptr [esi + 0x4c], 1
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_276e
        push    1
        push    ebx
        mov    ecx, eax
        call    FUN_00506f70
        jmp    L_2770
L_276e:
        xor    eax, eax
L_2770:
        mov    ebp, dword ptr [ebp + 0x50]
        push    eax
        lea    ecx, [esi + 0x2c]
        mov    dword ptr [ebp], eax
        call    FUN_004179b0
        mov    eax, dword ptr [g_007b4358]
        mov    edi, 2
        mov    dword ptr [esi + 0x20], ebx
        mov    dword ptr [esi + 0x28], eax
        mov    ebx, edi
L_2791:
        push    0x38
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_27b4
        mov    ecx, dword ptr [g_007dc7d8]
        push    2
        push    0
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_004ec1e0
        jmp    L_27b6
L_27b4:
        xor    eax, eax
L_27b6:
        lea    ecx, [edi*4]
        mov    dword ptr [ecx + ebp], eax
        push    eax
        mov    ecx, esi
        inc    edi
        call    FUN_004179b0
        dec    ebx
        jne    L_2791
        mov    byte ptr [esi + 0x7c], 1
        mov    ebx, 0x3f800000
        mov    dword ptr [esi + 0x78], 2
        push    0x38
        mov    dword ptr [esi + 0x80], ebx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_2805
        mov    edx, dword ptr [g_007dc7d8]
        push    3
        push    2
        push    edi
        push    edx
        mov    ecx, eax
        call    FUN_004ec1e0
        jmp    L_2807
L_2805:
        xor    eax, eax
L_2807:
        mov    ecx, edi
        mov    dword ptr [ebp + ecx*4], eax
        push    eax
        lea    ecx, [esi + 0x58]
        inc    edi
        call    FUN_004179b0
        mov    dword ptr [esi + 0xa4], 3
        mov    dword ptr [esi + 0xac], ebx
        mov    ebx, 6
L_282c:
        push    0x38
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_284f
        mov    ecx, dword ptr [g_007dc7d8]
        push    3
        push    3
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_004ec1e0
        jmp    L_2851
L_284f:
        xor    eax, eax
L_2851:
        lea    ecx, [edi*4]
        mov    dword ptr [ecx + ebp], eax
        push    eax
        lea    ecx, [esi + 0x84]
        inc    edi
        call    FUN_004179b0
        dec    ebx
        jne    L_282c
        mov    eax, dword ptr [g_00858998]
        mov    edx, dword ptr [g_007b435c]
        sub    eax, edi
        test    eax, eax
        mov    dword ptr [esi + 0xd0], 4
        mov    dword ptr [esi + 0xd8], edx
        jle    L_28cd
        add    esi, 0xb0
        mov    ebx, eax
L_2894:
        push    0x5c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_28b5
        mov    ecx, dword ptr [g_007dc7cc]
        push    4
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_004eba40
        jmp    L_28b7
L_28b5:
        xor    eax, eax
L_28b7:
        lea    ecx, [edi*4]
        mov    dword ptr [ecx + ebp], eax
        push    eax
        mov    ecx, esi
        inc    edi
        call    FUN_004179b0
        dec    ebx
        jne    L_2894
L_28cd:
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x10]
        pop    edi
        pop    esi
        pop    ebp
        mov    dword ptr [eax + 0x10], edx
        pop    ebx
        pop    ecx
        ret    4
L_28e0:
        mov    eax, dword ptr [ebp + 0x54]
        cmp    eax, ebx
        jbe    L_291c
        mov    edi, dword ptr [ebp + 0x50]
        mov    dword ptr [esp + 0x10], eax
L_28ee:
        mov    esi, dword ptr [edi]
        cmp    esi, ebx
        je    L_290e
        cmp    dword ptr [esi + 0x14], ebx
        je    L_2900
        mov    ecx, esi
        call    FUN_004ec2e0
L_2900:
        cmp    esi, ebx
        je    L_290c
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
L_290c:
        mov    dword ptr [edi], ebx
L_290e:
        mov    eax, dword ptr [esp + 0x10]
        add    edi, 4
        dec    eax
        mov    dword ptr [esp + 0x10], eax
        jne    L_28ee
L_291c:
        mov    esi, dword ptr [ebp + 0x48]
        add    esi, 0x18
        mov    edi, 5
L_2927:
        lea    ecx, [esi - 8]
        call    FUN_004179f0
        mov    ecx, esi
        call    FUN_004179f0
        add    esi, 0x2c
        dec    edi
        jne    L_2927
        mov    eax, dword ptr [ebp + 0x58]
        lea    ecx, [ebp + 0x58]
        call    dword ptr [eax + 8]
        lea    ecx, [ebp + 0x78]
        call    FUN_004179f0
        lea    ecx, [ebp + 0x80]
        call    FUN_004179f0
        mov    ecx, dword ptr [esp + 0x18]
L_295c:
        pop    edi
        pop    esi
        mov    dword ptr [ebp + 0x10], ecx
        pop    ebp
        pop    ebx
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
        mov    esi, dword ptr [ecx + 0x48]
        push    edi
        mov    edi, 5
L_297a:
        mov    ecx, esi
        call    FUN_004f2450
        add    esi, 0x2c
        dec    edi
        jne    L_297a
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [ecx + 0x48]
        push    edi
        mov    edi, 5
L_299a:
        mov    ecx, esi
        call    FUN_004f2470
        add    esi, 0x2c
        dec    edi
        jne    L_299a
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x44
        push    ebx
        mov    ebx, dword ptr [esp + 0x4c]
        push    edi
        lea    edi, [ecx + 0x58]
        push    ebx
        mov    ecx, edi
        call    FUN_004164b0
        test    eax, eax
        jne    L_2a0d
        push    esi
        push    1
        push    ebx
        lea    ecx, [esp + 0x14]
        call    FUN_004d1f80
        push    0xa8
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_29f6
        lea    ecx, [esp + 0xc]
        push    ecx
        mov    ecx, eax
        call    FUN_004ec5f0
        mov    esi, eax
        jmp    L_29f8
L_29f6:
        xor    esi, esi
L_29f8:
        push    ebx
        push    esi
        mov    ecx, edi
        call    FUN_00416470
        lea    ecx, [esp + 0xc]
        call    FUN_004d21c0
        mov    eax, esi
        pop    esi
L_2a0d:
        pop    edi
        pop    ebx
        add    esp, 0x44
        ret    4
    }
}
