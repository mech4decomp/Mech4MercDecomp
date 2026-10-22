/*
 * FUN_004d4e04 (extent 0x4d4e04-0x4d5043) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007b8ef4;
extern int    g_007b8ef8;
extern int    g_007dc124;
extern int    g_007dc128;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);

__declspec(naked) void FUN_004d4e04(void)
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
        mov    eax, dword ptr [g_007b8ef8]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b8ef8], eax
        jne    L_4e66
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_4e5c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b8ef4], esi
        jmp    L_4e66
L_4e5c:
        mov    dword ptr [g_007b8ef4], 0
L_4e66:
        mov    ecx, dword ptr [g_007b8ef4]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_4ea4
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [esi + 0x18]
        mov    dword ptr [ecx], 0
        push    edx
        mov    dword ptr [esi], 0x76d754
        call    FUN_00412740
        pop    edi
        mov    eax, esi
        pop    esi
        ret    8
L_4ea4:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_4eff
        mov    ecx, dword ptr [g_007dc124]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007dc128]
        jne    L_4eff
        push    edi
        mov    edi, dword ptr [g_007dc124]
        test    edi, edi
        je    L_4eee
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_4eee:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007dc124], 0
        pop    esi
        ret    4
L_4eff:
        mov    eax, esi
        pop    esi
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x18]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_4f26:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4f4e
        test    cl, cl
        je    L_4f4a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4f4e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_4f26
L_4f4a:
        xor    eax, eax
        jmp    L_4f53
L_4f4e:
        sbb    eax, eax
        sbb    eax, -1
L_4f53:
        test    eax, eax
        jne    L_4f5e
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_4f5e:
        mov    esi, edi
        mov    eax, ebp
L_4f62:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4f8a
        test    cl, cl
        je    L_4f86
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4f8a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_4f62
L_4f86:
        xor    eax, eax
        jmp    L_4f8f
L_4f8a:
        sbb    eax, eax
        sbb    eax, -1
L_4f8f:
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
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_4fc5:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4fed
        test    cl, cl
        je    L_4fe9
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4fed
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_4fc5
L_4fe9:
        xor    eax, eax
        jmp    L_4ff2
L_4fed:
        sbb    eax, eax
        sbb    eax, -1
L_4ff2:
        test    eax, eax
        jne    L_4ffd
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_4ffd:
        mov    esi, edi
        mov    eax, ebp
L_5001:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_5029
        test    cl, cl
        je    L_5025
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_5029
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_5001
L_5025:
        xor    eax, eax
        jmp    L_502e
L_5029:
        sbb    eax, eax
        sbb    eax, -1
L_502e:
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
    }
}
