/*
 * FUN_005e177e (extent 0x5e177e-0x5e1a74) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_005cb3d0(void);
extern void __cdecl FUN_005cbd00(void);
extern void __cdecl FUN_005cbe50(void);
extern void __cdecl FUN_005cbf80(void);
extern void __cdecl FUN_005dda40(void);
extern void __cdecl FUN_005df620(void);
extern void __cdecl FUN_005dfd80(void);
extern void __cdecl FUN_005e1240(void);
extern void __cdecl FUN_005e1b60(void);
extern void __cdecl FUN_005f92d0(void);
extern void __cdecl FUN_004dad60(void);

__declspec(naked) void FUN_005e177e(void)
{
    __asm {
        nop    
        nop    
        jmp    FUN_004dad60
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
        mov    eax, dword ptr [esp - 0x74]
        sub    esp, 0x78
        push    ebx
        mov    ebx, ecx
        mov    edx, dword ptr [ebx + 0x2c]
        push    esi
        mov    esi, dword ptr [esp + 0x84]
        push    edi
        or    ecx, 0xffffffff
        push    eax
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, edx
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_005cbd00
        mov    ecx, ebx
        call    FUN_005dfd80
        cmp    eax, 8
        je    L_1899
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    0x7540
        call    dword ptr [eax + 0x34]
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        mov    edx, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, edx
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_005cbd00
        mov    edx, dword ptr [ebx + 0x44c]
        push    edx
        lea    eax, [esp + 0x24]
        push    0x76b9a8
        push    eax
        call    dword ptr [g_0076b420]
        add    esp, 0xc
        lea    ecx, [esp + 0xf]
        push    ecx
        lea    edx, [esp + 0x24]
        push    edx
        lea    ecx, [esp + 0x1c]
        call    FUN_005dda40
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_005cbe50
        lea    ecx, [esp + 0x14]
        call    FUN_005cb3d0
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    ecx, dword ptr [ecx + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0x7538
        call    dword ptr [edx + 0x34]
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x10]
        or    ecx, 0xffffffff
        push    eax
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, edx
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_005cbd00
L_1899:
        mov    ecx, ebx
        call    FUN_005df620
        test    eax, eax
        je    L_18ce
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    0x7530
        call    dword ptr [eax + 0x34]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, eax
        push    ecx
        jmp    L_18f6
L_18ce:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0x7535
        call    dword ptr [edx + 0x34]
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x10]
        push    eax
L_18f6:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, edx
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_005cbd00
        cmp    byte ptr [ebx + 0x41c], 1
        jne    L_1957
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    0x7541
        call    dword ptr [eax + 0x34]
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        mov    edx, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, edx
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_005cbd00
        jmp    L_1996
L_1957:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0x7537
        call    dword ptr [edx + 0x34]
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x10]
        or    ecx, 0xffffffff
        push    eax
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, edx
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_005cbf80
L_1996:
        mov    ecx, ebx
        call    FUN_005e1240
        cmp    al, 1
        jne    L_19cb
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    0x7531
        call    dword ptr [eax + 0x34]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, eax
        push    ecx
        jmp    L_19f3
L_19cb:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0x7536
        call    dword ptr [edx + 0x34]
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x10]
        push    eax
L_19f3:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, edx
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_005cbf80
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x78
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
        push    ebx
        push    esi
        mov    ebx, ecx
        mov    esi, dword ptr [ebx + 0xbc]
        push    edi
        mov    edi, dword ptr [esp + 0x10]
L_1a2f:
        test    esi, esi
        je    L_1a44
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_1a44
        mov    eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 0x34]
        jmp    L_1a2f
L_1a44:
        push    edi
        mov    ecx, ebx
        call    FUN_005f92d0
        pop    edi
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
        push    1
        mov    dword ptr [ecx + 0x490], 1
        call    FUN_005e1b60
        ret    4
    }
}
