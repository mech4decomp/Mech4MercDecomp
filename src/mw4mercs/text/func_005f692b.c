/*
 * FUN_005f692b (extent 0x5f692b-0x5f6aaa) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00563480(void);
extern void __cdecl FUN_005ba720(void);
extern void __cdecl FUN_005ba730(void);
extern void __cdecl FUN_005ba780(void);
extern void __cdecl FUN_005cb1c0(void);
extern void __cdecl FUN_005cbe50(void);
extern void __cdecl FUN_005cbf80(void);
extern void __cdecl FUN_005f6b40(void);
extern void __cdecl FUN_005faf30(void);

__declspec(naked) void FUN_005f692b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x78
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    ebx, dword ptr [ebp + 0x4cc]
        cmp    ebx, 8
        push    esi
        mov    esi, dword ptr [esp + 0x88]
        je    L_6a0d
        mov    eax, dword ptr [esp + 0x10]
        push    edi
        or    ecx, 0xffffffff
        push    eax
        xor    eax, eax
        mov    edi, 0x78a7cc
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, 0x78a7cc
        push    ecx
        push    0x78a7cc
        mov    ecx, esi
        call    FUN_005cbf80
        push    ebx
        lea    ecx, [esp + 0x28]
        push    0x76b9a8
        push    ecx
        call    dword ptr [g_0076b420]
        add    esp, 0xc
        lea    edx, [esp + 0x13]
        push    edx
        lea    ecx, [esp + 0x1c]
        call    FUN_005cb1c0
        mov    eax, dword ptr [esp + 0x14]
        or    ecx, 0xffffffff
        push    eax
        xor    eax, eax
        lea    edi, [esp + 0x28]
        repne scasb
        not    ecx
        dec    ecx
        lea    ecx, [esp + ecx + 0x28]
        push    ecx
        lea    edx, [esp + 0x2c]
        push    edx
        lea    ecx, [esp + 0x24]
        call    FUN_00563480
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_005cbe50
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_69e5
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_69e5:
        mov    eax, dword ptr [esp + 0x14]
        or    ecx, 0xffffffff
        push    eax
        xor    eax, eax
        mov    edi, 0x78a7c8
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, 0x78a7c8
        push    ecx
        push    0x78a7c8
        mov    ecx, esi
        call    FUN_005cbf80
        pop    edi
L_6a0d:
        push    esi
        mov    ecx, ebp
        call    FUN_005faf30
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x78
        ret    4
        nop    
        nop    
        sub    esp, 0xc
        push    esi
        push    edi
        mov    edi, ecx
        call    FUN_005f6b40
        test    eax, eax
        je    L_6aa4
        mov    ecx, dword ptr [edi + 0x4f4]
        mov    edx, dword ptr [edi + 0x4f8]
        lea    ecx, [ecx + ecx*4]
        lea    ecx, [edx + ecx*4]
        lea    esi, [eax + ecx*8]
        lea    edx, [esp + 8]
        push    edx
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x10], edi
        call    FUN_005ba720
        push    ecx
        mov    ecx, esp
        push    eax
        call    FUN_005ba780
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, esi
        call    FUN_005ba730
        mov    eax, dword ptr [esi]
        mov    ecx, eax
        xor    edx, edx
        test    ecx, ecx
        je    L_6a80
L_6a79:
        mov    ecx, dword ptr [ecx]
        inc    edx
        test    ecx, ecx
        jne    L_6a79
L_6a80:
        shl    edx, 0x18
        test    eax, eax
        mov    dword ptr [esi + 4], edx
        je    L_6aa4
L_6a8a:
        mov    edx, dword ptr [eax + 4]
        mov    ecx, dword ptr [edx + 0x30]
        mov    edx, dword ptr [esi + 4]
        mov    eax, dword ptr [eax]
        and    ecx, 0xffffff
        add    edx, ecx
        test    eax, eax
        mov    dword ptr [esi + 4], edx
        jne    L_6a8a
L_6aa4:
        pop    edi
        pop    esi
        add    esp, 0xc
        ret    
    }
}
