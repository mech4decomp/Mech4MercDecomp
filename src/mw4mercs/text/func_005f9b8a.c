/*
 * FUN_005f9b8a (extent 0x5f9b8a-0x5fa06e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d5ec;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc728;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_004d67e0(void);
extern void __cdecl FUN_004db240(void);
extern void __cdecl FUN_004e41f0(void);
extern void __cdecl FUN_004e7a70(void);
extern void __cdecl FUN_004e7bd0(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_004feb00(void);

__declspec(naked) void FUN_005f9b8a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x28
        push    esi
        mov    esi, ecx
        lea    eax, [esi + 0x370]
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00416bc0
        add    esi, 0x384
        push    esi
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 0x1c], 0x783ec4
        call    FUN_00416bc0
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 4], 0x783f04
        call    FUN_00416cc0
        test    eax, eax
        pop    esi
        je    L_9be8
L_9bd4:
        mov    ecx, eax
        call    FUN_004e7bd0
        lea    ecx, [esp + 0x14]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_9bd4
L_9be8:
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00416cc0
        test    eax, eax
        je    L_9c09
L_9bf5:
        mov    ecx, eax
        call    FUN_004e7a70
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00416cc0
        test    eax, eax
        jne    L_9bf5
L_9c09:
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00416c60
        lea    ecx, [esp + 0x14]
        call    FUN_00416c60
        add    esp, 0x28
        ret    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        sub    esp, 0x70
        push    ebx
        mov    ebx, dword ptr [g_007dab40]
        push    ebp
        push    esi
        xor    eax, ebx
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        mov    dl, byte ptr [ecx + 0x17fc]
        xor    ebx, ebx
        cmp    dl, bl
        je    L_9ed5
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x50]
        cmp    dword ptr [eax + 0x48], ebx
        je    L_9ed5
        mov    edx, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [edx + 4]
        mov    ebp, eax
        fld    dword ptr [ebp + 0x80]
        mov    dword ptr [edi + 0x36c], ebx
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9ed5
        mov    eax, dword ptr [edi + 0x124]
        cmp    eax, ebx
        jne    L_9cde
        mov    eax, dword ptr [edi + 0x410]
        mov    edx, dword ptr [edi + 0x40c]
        sub    eax, edx
        sar    eax, 2
        je    L_9cd4
        mov    eax, edx
        cmp    dword ptr [eax], ebx
        je    L_9cd4
        mov    ecx, dword ptr [edi + 0x410]
        mov    esi, edx
        sub    ecx, esi
        sar    ecx, 2
        je    L_9cca
        mov    eax, dword ptr [eax]
        mov    eax, dword ptr [eax + 0x128]
        jmp    L_9cda
L_9cca:
        xor    eax, eax
        mov    eax, dword ptr [eax + 0x128]
        jmp    L_9cda
L_9cd4:
        mov    eax, dword ptr [edi + 0x128]
L_9cda:
        cmp    eax, ebx
        je    L_9d12
L_9cde:
        mov    edx, dword ptr [edi + 0xd8]
        add    edx, 0x80
        push    edx
        add    eax, 0x10
        push    eax
        lea    ecx, [esp + 0x44]
        call    FUN_00417d80
        mov    eax, dword ptr [esp + 0x48]
        mov    ecx, dword ptr [esp + 0x58]
        mov    edx, dword ptr [esp + 0x68]
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [esp + 0x30], ecx
        mov    dword ptr [esp + 0x34], edx
        jmp    L_9d35
L_9d12:
        mov    eax, dword ptr [edi + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    dword ptr [esp + 0x2c], ecx
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0x30], edx
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x34], eax
L_9d35:
        mov    ecx, dword ptr [ebp + 0x7c]
        push    edi
        push    0x5f9ee0
        lea    edx, [esp + 0x34]
        mov    dword ptr [esp + 0x40], ecx
        mov    ecx, dword ptr [g_007dc728]
        push    edx
        mov    dword ptr [edi + 0x36c], ebx
        call    FUN_004e41f0
        cmp    dword ptr [edi + 0x36c], ebx
        je    L_9ed5
        lea    eax, [edi + 0x364]
        mov    dword ptr [esp + 0x18], eax
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 0x14], 0x772d80
        call    FUN_0040c0e0
        cmp    eax, ebx
        je    L_9da3
L_9d89:
        mov    eax, dword ptr [eax + 0x150]
        cmp    eax, ebx
        je    L_9d96
        mov    byte ptr [eax + 0x54], bl
L_9d96:
        lea    ecx, [esp + 0x14]
        call    FUN_0040c0e0
        cmp    eax, ebx
        jne    L_9d89
L_9da3:
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007dab44]
        mov    dword ptr [esp + 0x1c], edx
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x50]
        mov    dword ptr [esp + 0x10], eax
L_9dca:
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, ebx
        je    L_9ed5
        mov    esi, dword ptr [eax]
        cmp    esi, ebx
        je    L_9ed5
        mov    eax, dword ptr [esi + 0x150]
        cmp    eax, ebx
        je    L_9df7
        cmp    byte ptr [eax + 0x54], bl
        jne    L_9ec7
        mov    byte ptr [eax + 0x54], 1
L_9df7:
        mov    eax, dword ptr [esi + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x20], ecx
        lea    ecx, [esi + 0x14]
        push    ecx
        lea    ecx, [esp + 0x50]
        mov    dword ptr [esp + 0x28], edx
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [esp + 0x40], 0x44
        mov    dword ptr [esp + 0x44], 4
        mov    dword ptr [esp + 0x48], 2
        mov    dword ptr [esp + 0x4c], ebx
        call    FUN_004ea0f0
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x24]
        mov    dword ptr [esp + 0x70], ecx
        mov    ecx, dword ptr [esp + 0x10]
        fild    dword ptr [ecx + 0x4c]
        mov    dword ptr [esp + 0x68], edx
        mov    dl, byte ptr [edi + 0x14]
        mov    byte ptr [esp + 0x54], dl
        fmul    dword ptr [g_0076d5ec]
        mov    dword ptr [esp + 0x6c], eax
        mov    ax, word ptr [edi + 0x16]
        lea    edx, [esp + 0x3c]
        fmul    dword ptr [ebp + 0x80]
        push    edx
        mov    ecx, esi
        fstp    dword ptr [esp + 0x54]
        fld    dword ptr [ebp + 0x84]
        mov    dword ptr [esp + 0x60], 0
        fstp    dword ptr [esp + 0x78]
        mov    dword ptr [esp + 0x64], 0
        mov    dword ptr [esp + 0x68], 0x3f800000
        mov    word ptr [esp + 0x5a], ax
        mov    byte ptr [esp + 0x5c], 3
        mov    byte ptr [esp + 0x7c], bl
        mov    dword ptr [esp + 0x80], 0xffffffff
        call    FUN_004d5b70
L_9ec7:
        lea    ecx, [esp + 0x14]
        call    FUN_00417ad0
        jmp    L_9dca
L_9ed5:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x70
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_9f34
        mov    ecx, dword ptr [eax + 0x128]
        test    ecx, ecx
        je    L_9f1c
        mov    edx, dword ptr [eax + 0xd8]
        add    edx, 0x80
        push    edx
        mov    edx, dword ptr [esp + 0x10]
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        push    0x5f9f40
        push    edx
        call    FUN_004feb00
        ret    
L_9f1c:
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    eax
        lea    ecx, [esi + 0x364]
        call    FUN_004179b0
        inc    dword ptr [esi + 0x36c]
        pop    esi
L_9f34:
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
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x98]
        test    eax, eax
        je    L_9f71
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_9f71
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    eax
        lea    ecx, [esi + 0x364]
        call    FUN_004179b0
        inc    dword ptr [esi + 0x36c]
        pop    esi
L_9f71:
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
        sub    esp, 0x14
        add    ecx, 0x370
        push    ecx
        lea    ecx, [esp + 4]
        call    FUN_00416bc0
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        __emit 0xC7  // mov dword ptr [esp], 0x783ec4 (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
__emit 0xC4
__emit 0x3E
__emit 0x78
__emit 0x00
        call    FUN_00416cc0
        test    eax, eax
        je    L_9fc5
        push    esi
        mov    esi, dword ptr [esp + 0x1c]
L_9fad:
        mov    edx, dword ptr [eax]
        push    0
        push    esi
        mov    ecx, eax
        call    dword ptr [edx + 0x10]
        lea    ecx, [esp + 4]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_9fad
        pop    esi
L_9fc5:
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00416c60
        add    esp, 0x14
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
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x130]
        test    esi, esi
        je    L_a010
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_9ffd
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_9ffd:
        push    esi
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi + 0x130], 0
L_a010:
        mov    ecx, dword ptr [edi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 4]
        mov    esi, dword ptr [edi + 0xd8]
        mov    ecx, dword ptr [esi + 0x18]
        mov    edx, dword ptr [esi]
        or    ecx, 0xc0
        mov    dword ptr [esi + 0x18], ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx]
        push    edi
        xor    ecx, 0x85739531
        call    FUN_004d67e0
        mov    ecx, edi
        call    FUN_004db240
        mov    eax, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [eax + 0x48]
        pop    edi
        pop    esi
        ret    
    }
}
