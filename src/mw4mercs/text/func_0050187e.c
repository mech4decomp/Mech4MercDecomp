/*
 * FUN_0050187e (extent 0x50187e-0x501b37) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500e00(void);
extern void __cdecl FUN_00500e50(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_005015f0(void);
extern void __cdecl FUN_00501640(void);
extern void __cdecl FUN_005016b0(void);

__declspec(naked) void FUN_0050187e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x10]
        mov    ecx, dword ptr [ecx + 0x10]
        cmp    eax, ecx
        jne    L_1897
        xor    eax, eax
        ret    8
L_1897:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x10]
        cmp    eax, ecx
        jne    L_18c6
        xor    eax, eax
        ret    8
L_18c6:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x10]
        mov    esi, edi
        mov    eax, ebp
L_18f6:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_191e
        test    cl, cl
        je    L_191a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_191e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_18f6
L_191a:
        xor    eax, eax
        jmp    L_1923
L_191e:
        sbb    eax, eax
        sbb    eax, -1
L_1923:
        test    eax, eax
        jne    L_192e
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_192e:
        mov    esi, edi
        mov    eax, ebp
L_1932:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_195a
        test    cl, cl
        je    L_1956
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_195a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_1932
L_1956:
        xor    eax, eax
        jmp    L_195f
L_195a:
        sbb    eax, eax
        sbb    eax, -1
L_195f:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x10]
        mov    esi, edi
        mov    eax, ebp
L_1995:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_19bd
        test    cl, cl
        je    L_19b9
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_19bd
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_1995
L_19b9:
        xor    eax, eax
        jmp    L_19c2
L_19bd:
        sbb    eax, eax
        sbb    eax, -1
L_19c2:
        test    eax, eax
        jne    L_19cd
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_19cd:
        mov    esi, edi
        mov    eax, ebp
L_19d1:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_19f9
        test    cl, cl
        je    L_19f5
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_19f9
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_19d1
L_19f5:
        xor    eax, eax
        jmp    L_19fe
L_19f9:
        sbb    eax, eax
        sbb    eax, -1
L_19fe:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 8]
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x24]
        push    ecx
        push    ebx
        push    edx
        push    ebp
        mov    ecx, esi
        call    FUN_004d5c10
        mov    ecx, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esp + 0x30]
        mov    dword ptr [esi + 0x24], ecx
        mov    ecx, dword ptr [esp + 0x38]
        mov    dword ptr [esi + 0x20], eax
        mov    eax, dword ptr [esp + 0x34]
        mov    dword ptr [esi + 0x30], ecx
        mov    ecx, dword ptr [esp + 0x44]
        mov    dword ptr [esi + 0x28], edx
        mov    edx, dword ptr [esp + 0x3c]
        mov    dword ptr [esi + 0x2c], eax
        mov    eax, dword ptr [esp + 0x40]
        mov    dword ptr [esi + 0x3c], ecx
        lea    edi, [esi + 0x44]
        mov    ecx, edi
        mov    dword ptr [esi + 0x34], edx
        mov    dword ptr [esi + 0x38], eax
        mov    dword ptr [esi + 0x40], 0
        call    FUN_005015f0
        lea    ecx, [esi + 0x74]
        call    FUN_00500e00
        cmp    ebp, 0x1c9
        je    L_1abf
        lea    edx, [ebx + 0x44]
        push    edx
        mov    ecx, edi
        call    FUN_00501640
        add    ebx, 0x74
        push    ebx
        lea    ecx, [esi + 0x74]
        call    FUN_00500e50
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x34
L_1abf:
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_1ae4
        push    0
        push    0x570
        push    0x776408
        push    0
        mov    ecx, eax
        call    FUN_005013f0
        jmp    L_1ae6
L_1ae4:
        xor    eax, eax
L_1ae6:
        push    eax
        mov    ecx, edi
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_1b23
        push    -1
        push    0x570
        push    0x776408
        push    0
        mov    ecx, eax
        call    FUN_005008e0
        push    eax
        lea    ecx, [esi + 0x74]
        call    FUN_00500ec0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x34
L_1b23:
        xor    eax, eax
        push    eax
        lea    ecx, [esi + 0x74]
        call    FUN_00500ec0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x34
    }
}
