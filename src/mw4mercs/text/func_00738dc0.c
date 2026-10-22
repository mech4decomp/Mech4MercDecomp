/*
 * FUN_00738dc0 (extent 0x738dc0-0x739320) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0d8;
extern int    g_0076b0e0;
extern int    g_0076b0ec;
extern int    g_0076b0f4;
extern int    g_0076b100;
extern int    g_0076b108;
extern int    g_0076b10c;
extern int    g_0076b110;
extern int    g_0076b168;
extern int    g_0076b16c;
extern int    g_0076b210;
extern int    g_0076b218;
extern int    g_0076b21c;
extern int    g_0076b2d0;
extern int    g_008aac88;
extern int    g_008aac8c;
extern int    g_008aaca4;
extern int    g_008aaca8;
extern int    g_008aacb8;
extern int    g_008aacc8;
extern void __cdecl FUN_00738c90(void);
extern void __cdecl FUN_00738d20(void);
extern void __cdecl FUN_00739510(void);
extern void __cdecl FUN_00739be0(void);
extern void __cdecl FUN_00739c00(void);
extern void __cdecl FUN_00739c20(void);
extern void __cdecl FUN_00739c30(void);

__declspec(naked) void FUN_00738dc0(void)
{
    __asm {
        sub    esp, 0x194
        push    esi
        push    edi
        push    0x7a7138
        push    0
        push    0
        call    dword ptr [g_0076b21c]
        mov    edi, eax
        test    edi, edi
        jne    L_8ded
        pop    edi
        mov    eax, 0x80004005
        pop    esi
        add    esp, 0x194
        ret    4
L_8ded:
        push    -1
        push    edi
        call    dword ptr [g_0076b0f4]
        mov    esi, dword ptr [esp + 0x1a0]
        mov    eax, dword ptr [esi + 0x50]
        test    eax, eax
        jne    L_8e09
        mov    dword ptr [esi + 0x50], edi
        jmp    L_8e10
L_8e09:
        push    edi
        call    dword ptr [g_0076b0ec]
L_8e10:
        mov    edx, dword ptr [esi + 0x54]
        inc    edx
        mov    eax, edx
        cmp    eax, 1
        mov    dword ptr [esi + 0x54], edx
        jne    L_8eb4
        lea    eax, [esi + 0x30]
        push    eax
        call    dword ptr [g_0076b108]
        lea    ecx, [esp + 0xc]
        push    ecx
        push    0x101
        call    dword ptr [g_008aac88]
        test    eax, eax
        jne    L_8e94
        mov    edi, dword ptr [g_0076b16c]
        push    eax
        push    eax
        push    1
        push    eax
        call    edi
        test    eax, eax
        mov    dword ptr [esi + 0x2c], eax
        je    L_8e94
        mov    ecx, esi
        call    FUN_00738d20
        test    eax, eax
        je    L_8e94
        push    0x7a711c
        push    0
        push    1
        push    0
        call    edi
        test    eax, eax
        mov    dword ptr [esi + 0x28], eax
        je    L_8e94
        lea    edx, [esp + 8]
        push    edx
        push    0
        push    esi
        push    0x7397b0
        push    0x1000
        push    0
        call    dword ptr [g_0076b218]
        test    eax, eax
        mov    dword ptr [esi + 0x4c], eax
        jne    L_8eb4
L_8e94:
        mov    eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esi + 0x50]
        push    ecx
        call    dword ptr [g_0076b210]
        pop    edi
        mov    eax, 0x80004005
        pop    esi
        add    esp, 0x194
        ret    4
L_8eb4:
        mov    edx, dword ptr [esi + 0x50]
        push    edx
        call    dword ptr [g_0076b210]
        pop    edi
        xor    eax, eax
        pop    esi
        add    esp, 0x194
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    edi
        mov    edi, dword ptr [esp + 8]
        mov    eax, dword ptr [edi + 0x50]
        test    eax, eax
        jne    L_8ee5
        mov    eax, 0x8000ffff
        pop    edi
        ret    8
L_8ee5:
        mov    ecx, dword ptr [edi + 0x54]
        test    ecx, ecx
        jne    L_8ef5
        mov    eax, 0x8000ffff
        pop    edi
        ret    8
L_8ef5:
        push    -1
        push    eax
        call    dword ptr [g_0076b0f4]
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_8fa5
        mov    ecx, dword ptr [edi + 0x18]
        test    ecx, ecx
        jne    L_8fa5
        test    eax, 0xfffffffe
        mov    dword ptr [edi + 0x18], eax
        jne    L_8f26
        mov    dword ptr [edi + 0x18], 2
L_8f26:
        push    ebx
        mov    ebx, dword ptr [edi + 0x18]
        mov    eax, ebx
        push    ebp
        shl    eax, 5
        push    eax
        mov    dword ptr [edi + 0x1c], ebx
        call    FUN_00739c00
        mov    ebp, eax
        test    ebp, ebp
        je    L_8f60
        lea    eax, [ebx - 1]
        test    eax, eax
        push    esi
        mov    esi, ebp
        jl    L_8f5b
        lea    ebx, [eax + 1]
L_8f4c:
        push    0
        mov    ecx, esi
        call    FUN_00738c90
        add    esi, 0x20
        dec    ebx
        jne    L_8f4c
L_8f5b:
        mov    eax, ebp
        pop    esi
        jmp    L_8f62
L_8f60:
        xor    eax, eax
L_8f62:
        test    eax, eax
        pop    ebp
        mov    dword ptr [edi + 4], eax
        pop    ebx
        je    L_8f8c
        lea    ecx, [esp + 8]
        push    ecx
        push    0
        push    edi
        push    0x7394f0
        push    0x1000
        push    0
        call    dword ptr [g_0076b218]
        test    eax, eax
        mov    dword ptr [edi + 0x48], eax
        jne    L_8fa5
L_8f8c:
        mov    edx, dword ptr [edi]
        push    edi
        call    dword ptr [edx + 4]
        mov    eax, dword ptr [edi + 0x50]
        push    eax
        call    dword ptr [g_0076b210]
        mov    eax, 0x80004005
        pop    edi
        ret    8
L_8fa5:
        mov    ecx, dword ptr [edi + 0x50]
        push    ecx
        call    dword ptr [g_0076b210]
        xor    eax, eax
        pop    edi
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
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi + 0x50]
        xor    ebp, ebp
        cmp    eax, ebp
        je    L_90f8
        push    -1
        push    eax
        call    dword ptr [g_0076b0f4]
        dec    dword ptr [esi + 0x54]
        jne    L_90ee
        push    ebx
        push    edi
        lea    eax, [esi + 0x30]
        push    eax
        call    dword ptr [g_0076b110]
        mov    ebx, dword ptr [esi + 0x2c]
        cmp    ebx, ebp
        je    L_906b
        push    ebx
        call    dword ptr [g_0076b168]
        mov    eax, dword ptr [esi + 0x20]
        push    eax
        call    dword ptr [g_008aacc8]
        mov    edi, dword ptr [esi + 0x48]
        cmp    edi, ebp
        mov    dword ptr [esi + 0x20], 0xffffffff
        je    L_9044
        push    0x1388
        push    edi
        call    dword ptr [g_0076b0f4]
        push    edi
        call    dword ptr [g_0076b0ec]
        mov    eax, dword ptr [esi + 0x10]
        cmp    eax, ebp
        mov    dword ptr [esi + 0x48], ebp
        je    L_9041
        push    eax
        call    dword ptr [g_0076b2d0]
        add    esp, 4
        mov    dword ptr [esi + 0x10], ebp
L_9041:
        mov    dword ptr [esi + 0x14], ebp
L_9044:
        mov    edi, dword ptr [esi + 0x4c]
        cmp    edi, ebp
        je    L_9061
        push    0x1388
        push    edi
        call    dword ptr [g_0076b0f4]
        push    edi
        call    dword ptr [g_0076b0ec]
        mov    dword ptr [esi + 0x4c], ebp
L_9061:
        push    ebx
        call    dword ptr [g_0076b0ec]
        mov    dword ptr [esi + 0x2c], ebp
L_906b:
        mov    edi, dword ptr [esi + 0x28]
        cmp    edi, ebp
        je    L_9088
        cmp    dword ptr [esi + 0x24], ebp
        je    L_907e
        push    edi
        call    dword ptr [g_0076b168]
L_907e:
        push    edi
        call    dword ptr [g_0076b0ec]
        mov    dword ptr [esi + 0x28], ebp
L_9088:
        mov    ebx, dword ptr [esi + 4]
        cmp    ebx, ebp
        je    L_90cc
        mov    eax, dword ptr [esi + 0x18]
        cmp    eax, ebp
        jbe    L_90c0
        add    ebx, 0x1c
        mov    dword ptr [esp + 0x14], eax
L_909d:
        mov    edi, dword ptr [ebx]
        cmp    edi, ebp
        je    L_90b2
L_90a3:
        mov    eax, edi
        mov    edi, dword ptr [edi + 0x1c]
        push    eax
        call    FUN_00739c20
        cmp    edi, ebp
        jne    L_90a3
L_90b2:
        mov    eax, dword ptr [esp + 0x14]
        add    ebx, 0x20
        dec    eax
        mov    dword ptr [esp + 0x14], eax
        jne    L_909d
L_90c0:
        mov    eax, dword ptr [esi + 4]
        push    eax
        call    FUN_00739c30
        mov    dword ptr [esi + 4], ebp
L_90cc:
        lea    edi, [esi + 0x30]
        push    edi
        mov    dword ptr [esi + 8], ebp
        mov    dword ptr [esi + 0x18], ebp
        mov    dword ptr [esi + 0xc], ebp
        call    dword ptr [g_0076b100]
        push    edi
        call    dword ptr [g_0076b10c]
        call    dword ptr [g_008aac8c]
        pop    edi
        pop    ebx
L_90ee:
        mov    ecx, dword ptr [esi + 0x50]
        push    ecx
        call    dword ptr [g_0076b210]
L_90f8:
        pop    esi
        xor    eax, eax
        pop    ebp
        ret    4
        nop    
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        mov    eax, ebp
        and    eax, 0xff
        xor    edx, edx
        div    dword ptr [esi + 0x18]
        push    edi
        push    0x20
        mov    edi, edx
        call    FUN_00739be0
        test    eax, eax
        je    L_91bf
        push    ebp
        mov    ecx, eax
        call    FUN_00738c90
        mov    ebx, eax
        test    ebx, ebx
        je    L_91bf
        lea    eax, [esi + 0x30]
        push    eax
        mov    dword ptr [esp + 0x1c], eax
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_91b4
        shl    edi, 5
        mov    edx, dword ptr [edi + eax + 0x1c]
        lea    ecx, [edi + eax + 0x1c]
        mov    eax, edx
        test    eax, eax
        je    L_9172
L_9161:
        cmp    dword ptr [eax], ebp
        je    L_916e
        mov    eax, dword ptr [eax + 0x1c]
        test    eax, eax
        jne    L_9161
        jmp    L_9172
L_916e:
        test    eax, eax
        jne    L_918c
L_9172:
        mov    eax, dword ptr [esi + 0xc]
        mov    dword ptr [ecx], ebx
        mov    ecx, dword ptr [esi + 8]
        inc    ecx
        test    eax, eax
        mov    dword ptr [ebx + 0x1c], edx
        mov    dword ptr [esi + 8], ecx
        jne    L_9188
        mov    dword ptr [esi + 0xc], ebx
L_9188:
        xor    ebx, ebx
        jmp    L_9196
L_918c:
        mov    ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        jne    L_9196
        mov    dword ptr [esi + 0xc], eax
L_9196:
        mov    eax, dword ptr [esp + 0x18]
        push    eax
        call    dword ptr [g_0076b100]
        test    ebx, ebx
        je    L_91ab
        push    ebx
        call    FUN_00739c20
L_91ab:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        ret    8
L_91b4:
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        call    dword ptr [g_0076b100]
L_91bf:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0x80004005
        pop    ebx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x7080
        call    dword ptr [g_008aaca4]
        mov    word ptr [esp + 0x12], ax
        mov    eax, dword ptr [esp + 0x28]
        push    eax
        mov    word ptr [esp + 0x14], 2
        call    dword ptr [g_008aaca8]
        mov    ecx, dword ptr [esp + 0x24]
        mov    edi, dword ptr [ecx + 0x20]
        mov    ebp, dword ptr [g_0076b0d8]
        mov    esi, dword ptr [g_0076b0e0]
        mov    dword ptr [esp + 0x14], eax
        xor    ebx, ebx
L_9212:
        test    ebx, ebx
        je    L_921a
        push    0x14
        call    ebp
L_921a:
        call    esi
        push    0x10
        and    eax, 0x1fff
        lea    edx, [esp + 0x14]
        push    edx
        or    eax, 0x90000000
        push    0
        mov    dword ptr [esp + 0x34], eax
        push    4
        lea    eax, [esp + 0x38]
        push    eax
        push    edi
        call    dword ptr [g_008aacb8]
        cmp    eax, -1
        je    L_9258
        inc    ebx
        cmp    ebx, 1
        jb    L_9212
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x10
        ret    8
L_9258:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0x80004005
        pop    ebx
        add    esp, 0x10
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
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        and    eax, 0xff
        xor    edx, edx
        div    dword ptr [edi + 0x18]
        lea    eax, [edi + 0x30]
        push    eax
        mov    ebx, 0x80004005
        mov    dword ptr [esp + 0x18], eax
        mov    esi, edx
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [edi + 4]
        test    eax, eax
        je    L_930c
        shl    esi, 5
        lea    ebp, [esi + eax]
        mov    esi, dword ptr [ebp + 0x1c]
        test    esi, esi
        je    L_930c
L_92af:
        mov    eax, dword ptr [esp + 0x18]
        cmp    dword ptr [esi], eax
        je    L_92d4
        mov    ebp, esi
        mov    esi, dword ptr [esi + 0x1c]
        test    esi, esi
        jne    L_92af
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, ebx
        pop    ebx
        ret    8
L_92d4:
        mov    eax, dword ptr [edi + 0xc]
        cmp    eax, esi
        jne    L_92fb
        lea    ecx, [esp + 0x18]
        push    ecx
        push    eax
        mov    ecx, edi
        mov    byte ptr [esp + 0x20], 0
        call    FUN_00739510
        cmp    eax, esi
        mov    dword ptr [edi + 0xc], eax
        jne    L_92fb
        mov    dword ptr [edi + 0xc], 0
L_92fb:
        mov    edx, dword ptr [esi + 0x1c]
        push    esi
        mov    dword ptr [ebp + 0x1c], edx
        call    FUN_00739c20
        dec    dword ptr [edi + 8]
        xor    ebx, ebx
L_930c:
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, ebx
        pop    ebx
        ret    8
    }
}
