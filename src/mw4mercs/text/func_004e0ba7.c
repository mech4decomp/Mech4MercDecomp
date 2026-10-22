/*
 * FUN_004e0ba7 (extent 0x4e0ba7-0x4e0dce) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007dc12c;
extern int    g_007dc6d8;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004e0550(void);
extern void __cdecl FUN_004e0bb0(void);
extern void __cdecl FUN_004e0bd0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004e0590(void);

__declspec(naked) void FUN_004e0ba7(void)
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
        mov    eax, dword ptr [g_007dc6d8]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004e0550
        mov    dword ptr [esi], 0x773af8
        mov    eax, esi
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
        mov    dword ptr [ecx], 0x773af8
        jmp    FUN_004e0590
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dc12c]
        push    ebx
        push    edi
        push    eax
        call    FUN_006f4950
        mov    edi, dword ptr [esp + 0xc]
        lea    ecx, [edi + edi*4]
        lea    edx, [ecx*8 + 4]
        push    edx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_0c37
        lea    ebx, [eax + 4]
        mov    dword ptr [eax], edi
        lea    eax, [edi - 1]
        test    eax, eax
        push    esi
        mov    esi, ebx
        jl    L_0c29
        push    ebp
        lea    ebp, [eax + 1]
L_0c1b:
        mov    ecx, esi
        call    FUN_004e0bb0
        add    esi, 0x28
        dec    ebp
        jne    L_0c1b
        pop    ebp
L_0c29:
        pop    esi
        mov    dword ptr [ebx + 0x10], edi
        call    FUN_006f49a0
        pop    edi
        mov    eax, ebx
        pop    ebx
        ret    
L_0c37:
        xor    ebx, ebx
        mov    dword ptr [ebx + 0x10], edi
        call    FUN_006f49a0
        pop    edi
        mov    eax, ebx
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
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov    esi, ecx
        je    L_0c95
        mov    eax, dword ptr [esi - 4]
        push    ebp
        lea    ebp, [esi - 4]
        lea    ecx, [eax + eax*4]
        dec    eax
        lea    esi, [esi + ecx*8]
        js    L_0c7f
        push    edi
        lea    edi, [eax + 1]
L_0c71:
        sub    esi, 0x28
        mov    ecx, esi
        call    FUN_004e0bd0
        dec    edi
        jne    L_0c71
        pop    edi
L_0c7f:
        test    bl, 1
        je    L_0c8d
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_0c8d:
        mov    eax, ebp
        pop    ebp
        pop    esi
        pop    ebx
        ret    4
L_0c95:
        mov    ecx, esi
        call    FUN_004e0bd0
        test    bl, 1
        je    L_0caa
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_0caa:
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
        mov    eax, dword ptr [ecx + 0x10]
        sub    esp, 8
        dec    eax
        js    L_0d68
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        lea    edx, [eax + eax*4]
        push    esi
        lea    ecx, [ecx + edx*8 + 0x1c]
        inc    eax
        push    edi
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x14], eax
L_0ce9:
        mov    edi, dword ptr [ecx - 8]
L_0cec:
        test    edi, edi
        je    L_0d1a
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_0d1a
        lea    ecx, [esi + 0x1c]
        call    FUN_0041fd80
        cmp    eax, ebp
        jne    L_0cec
        test    ebx, ebx
        je    L_0d11
        mov    eax, dword ptr [esi + 0x18]
        cmp    ebx, dword ptr [eax + 4]
        jne    L_0cec
L_0d11:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        jmp    L_0cec
L_0d1a:
        mov    eax, dword ptr [esp + 0x10]
        mov    edi, dword ptr [eax]
L_0d20:
        test    edi, edi
        je    L_0d4e
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_0d4e
        lea    ecx, [esi + 0x1c]
        call    FUN_0041fd80
        cmp    eax, ebp
        jne    L_0d20
        test    ebx, ebx
        je    L_0d45
        mov    ecx, dword ptr [esi + 0x18]
        cmp    ebx, dword ptr [ecx + 4]
        jne    L_0d20
L_0d45:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        jmp    L_0d20
L_0d4e:
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
        sub    ecx, 0x28
        dec    eax
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x14], eax
        jne    L_0ce9
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
L_0d68:
        add    esp, 8
        ret    8
        nop    
        nop    
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
        nop    
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_0dab
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x773ae0
        pop    esi
        ret    
L_0dab:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 8], 1
        je    L_0dc8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_0dc8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
