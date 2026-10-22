/*
 * FUN_0065c25a (extent 0x65c25a-0x65c439) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f202c;
extern int    g_007f2030;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_005d6480(void);
extern void __cdecl FUN_005dd7a0(void);
extern void __cdecl FUN_0065ab00(void);
extern void __cdecl FUN_0065c0b0(void);
extern void __cdecl FUN_0065c4e0(void);
extern void __cdecl FUN_00665c30(void);
extern void __cdecl FUN_0069eb70(void);

__declspec(naked) void FUN_0065c25a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, ecx
        cmp    dword ptr [esi + 0x3c], 3
        push    edi
        jle    L_c271
        pop    edi
        mov    al, 1
        pop    esi
        pop    ecx
        ret    
L_c271:
        mov    ecx, dword ptr [esi + 4]
        call    FUN_005d6480
        cmp    al, 1
        jne    L_c2c1
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x2c]
        test    al, al
        je    L_c2bb
        lea    ecx, [esp + 8]
        push    ecx
        mov    ecx, dword ptr [esi + 4]
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0xc]
        push    eax
        push    0xc
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_c2bb
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_c2bb
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_c2bb:
        pop    edi
        mov    al, 1
        pop    esi
        pop    ecx
        ret    
L_c2c1:
        mov    esi, dword ptr [esi + 0x14]
        cmp    esi, -2
        mov    edi, dword ptr [g_007f2030]
        je    L_c30b
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        test    eax, eax
        je    L_c30b
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        and    cl, 1
        cmp    cl, 1
        je    L_c30b
        mov    ecx, dword ptr [eax + 4]
        push    edi
        call    FUN_00415230
        test    al, al
        jne    L_c311
L_c30b:
        pop    edi
        mov    al, 1
        pop    esi
        pop    ecx
        ret    
L_c311:
        pop    edi
        xor    al, al
        pop    esi
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
        sub    esp, 0x10
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        push    0
        push    eax
        call    FUN_0065ab00
        mov    dword ptr [esi + 0x1c], 0
        mov    edx, dword ptr [esi + 0x1c]
        mov    dword ptr [esi + 0x28], edx
        mov    edx, dword ptr [esi + 0x1c]
        mov    dword ptr [esi + 0x18], 0
        mov    ecx, dword ptr [esi + 0x18]
        mov    dword ptr [esi + 0x24], ecx
        mov    ecx, dword ptr [esi + 0x18]
        mov    dword ptr [esi + 0x20], 0
        mov    eax, dword ptr [esi + 0x20]
        mov    dword ptr [esi + 0x2c], eax
        mov    eax, dword ptr [esi + 0x20]
        mov    dword ptr [esi + 0x34], edx
        mov    ebx, dword ptr [esi + 4]
        mov    dword ptr [esi + 0x30], ecx
        mov    ecx, dword ptr [ebx + 0x170]
        mov    dword ptr [esi + 0x38], eax
        mov    eax, dword ptr [ecx + 0xd8]
        mov    edx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    dword ptr [esp + 0x18], edx
        mov    ecx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0x1c], ecx
        mov    edx, dword ptr [eax + 0x2c]
        mov    eax, dword ptr [g_007f202c]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    dword ptr [esp + 0x28], edx
        call    FUN_0065c0b0
        mov    edx, dword ptr [g_007f2030]
        add    esp, 0x10
        cmp    eax, -2
        mov    dword ptr [esi + 0x14], eax
        mov    dword ptr [esp + 0xc], edx
        je    L_c40d
        mov    ecx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [ecx]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x10]
        push    eax
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    edi, eax
        test    edi, edi
        je    L_c40d
        mov    edx, dword ptr [edi + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_c40d
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_c40d
        mov    edi, dword ptr [edi + 0x514]
        cmp    edi, ebx
        je    L_c40d
        test    edi, edi
        jne    L_c420
L_c40d:
        mov    ecx, dword ptr [ebx + 0x170]
        push    ecx
        call    FUN_00665c30
        add    esp, 4
        test    al, al
        jne    L_c429
L_c420:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x10
        ret    
L_c429:
        mov    ecx, esi
        call    FUN_0065c4e0
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        add    esp, 0x10
        ret    
    }
}
