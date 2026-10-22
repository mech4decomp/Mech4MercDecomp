/*
 * FUN_00487948 (extent 0x487948-0x487da4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b2434;
extern int    g_007b9590;
extern char   g_007b95a8;
extern int    g_007b9810;
extern int    g_007b9824;
extern int    g_007b9838;
extern int    g_007b9850;
extern int    g_007b986c;
extern int    g_007b98b4;
extern int    g_007b98cc;
extern int    g_007b98e0;
extern int    g_007d98f8;
extern int    g_007d9910;
extern int    g_007d9928;
extern int    g_007d993c;
extern int    g_007d9950;
extern int    g_007d9968;
extern int    g_007d9984;
extern int    g_007d9998;
extern int    g_007d99b0;
extern int    g_007da5e4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00431900(void);
extern void __cdecl FUN_004319d0(void);
extern void __cdecl FUN_00435e00(void);
extern void __cdecl FUN_00435ed0(void);
extern void __cdecl FUN_00439e40(void);
extern void __cdecl FUN_00439f10(void);
extern void __cdecl FUN_0043e480(void);
extern void __cdecl FUN_0043e550(void);
extern void __cdecl FUN_00442180(void);
extern void __cdecl FUN_00442230(void);
extern void __cdecl FUN_0044d070(void);
extern void __cdecl FUN_0044d140(void);
extern void __cdecl FUN_00450b10(void);
extern void __cdecl FUN_00450bd0(void);
extern void __cdecl FUN_00455070(void);
extern void __cdecl FUN_004554a0(void);
extern void __cdecl FUN_00458560(void);
extern void __cdecl FUN_00458660(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00487948(void)
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
        sub    esp, 0xc
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [ebx]
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        mov    ecx, dword ptr [eax]
        push    edi
        push    4
        lea    eax, [esp + 0x10]
        mov    dword ptr [esp + 0x10], ecx
        push    eax
        mov    ecx, ebx
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [ebx]
        push    1
        lea    edi, [esi + 0x1c]
        push    edi
        mov    ecx, ebx
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [g_007b9590]
        push    eax
        call    FUN_006f4950
        xor    eax, eax
        mov    al, byte ptr [edi]
        test    eax, eax
        jle    L_7ccb
        mov    edi, dword ptr [esi + 0x14]
        push    ebp
        mov    dword ptr [esp + 0x20], edi
        mov    dword ptr [esp + 0x10], eax
L_79a3:
        mov    eax, dword ptr [g_007b2434]
        test    eax, eax
        mov    esi, dword ptr [edi]
        je    L_7ca6
        cmp    byte ptr [g_007b95a8], 1
        jne    L_7ca6
        mov    eax, dword ptr [g_007da5e4]
        mov    edi, dword ptr [esi + 4]
        push    eax
        mov    ecx, edi
        call    FUN_00415230
        test    al, al
        jne    L_79f9
        mov    eax, dword ptr [g_007d99b0]
        push    eax
        mov    ecx, edi
        call    FUN_00415230
        test    al, al
        jne    L_79f9
        mov    eax, dword ptr [g_007d9998]
        push    eax
        mov    ecx, edi
        call    FUN_00415230
        test    al, al
        je    L_7ca6
L_79f9:
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
        mov    ecx, dword ptr [esp + 0x14]
        xor    eax, eax
        xor    edx, edx
        xor    edi, edi
        test    ecx, ecx
        jle    L_7ca6
        mov    ebp, dword ptr [esp + 0x18]
L_7a20:
        cmp    byte ptr [eax + ebp], 3
        jne    L_7a29
        inc    edx
        jmp    L_7a2a
L_7a29:
        inc    edi
L_7a2a:
        inc    eax
        cmp    eax, ecx
        jl    L_7a20
        test    edx, edx
        jle    L_7ca6
        test    edi, edi
        jne    L_7ca6
        mov    eax, dword ptr [esi + 4]
        cmp    eax, dword ptr [g_007d9998]
        mov    edi, esi
        jne    L_7a86
        push    0x78
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_7a77
        mov    edx, dword ptr [g_007b98b4]
        push    edx
        mov    ecx, eax
        call    FUN_0044d070
        mov    esi, eax
        push    edi
        mov    ecx, esi
        call    FUN_0044d140
        jmp    L_7c8f
L_7a77:
        xor    esi, esi
        push    edi
        mov    ecx, esi
        call    FUN_0044d140
        jmp    L_7c8f
L_7a86:
        cmp    eax, dword ptr [g_007d99b0]
        jne    L_7ac8
        push    0x70
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_7ab9
        mov    ecx, dword ptr [g_007b98cc]
        push    ecx
        mov    ecx, eax
        call    FUN_00450b10
        mov    esi, eax
        push    edi
        mov    ecx, esi
        call    FUN_00450bd0
        jmp    L_7c8f
L_7ab9:
        xor    esi, esi
        push    edi
        mov    ecx, esi
        call    FUN_00450bd0
        jmp    L_7c8f
L_7ac8:
        cmp    eax, dword ptr [g_007da5e4]
        jne    L_7b0a
        push    0x64
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_7afb
        mov    edx, dword ptr [g_007d98f8]
        push    edx
        mov    ecx, eax
        call    FUN_00458560
        mov    esi, eax
        push    edi
        mov    ecx, esi
        call    FUN_00458660
        jmp    L_7c8f
L_7afb:
        xor    esi, esi
        push    edi
        mov    ecx, esi
        call    FUN_00458660
        jmp    L_7c8f
L_7b0a:
        cmp    eax, dword ptr [g_007d9950]
        jne    L_7b4f
        push    0x9c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_7b40
        mov    ecx, dword ptr [g_007b9838]
        push    ecx
        mov    ecx, eax
        call    FUN_00439e40
        mov    esi, eax
        push    edi
        mov    ecx, esi
        call    FUN_00439f10
        jmp    L_7c8f
L_7b40:
        xor    esi, esi
        push    edi
        mov    ecx, esi
        call    FUN_00439f10
        jmp    L_7c8f
L_7b4f:
        cmp    eax, dword ptr [g_007d9968]
        jne    L_7b94
        push    0x94
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_7b85
        mov    edx, dword ptr [g_007b9850]
        push    edx
        mov    ecx, eax
        call    FUN_0043e480
        mov    esi, eax
        push    edi
        mov    ecx, esi
        call    FUN_0043e550
        jmp    L_7c8f
L_7b85:
        xor    esi, esi
        push    edi
        mov    ecx, esi
        call    FUN_0043e550
        jmp    L_7c8f
L_7b94:
        cmp    eax, dword ptr [g_007d9984]
        jne    L_7bd9
        push    0x88
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_7bca
        mov    ecx, dword ptr [g_007b986c]
        push    ecx
        mov    ecx, eax
        call    FUN_00442180
        mov    esi, eax
        push    edi
        mov    ecx, esi
        call    FUN_00442230
        jmp    L_7c8f
L_7bca:
        xor    esi, esi
        push    edi
        mov    ecx, esi
        call    FUN_00442230
        jmp    L_7c8f
L_7bd9:
        cmp    eax, dword ptr [g_007d9910]
        jne    L_7c1b
        push    0xbc
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_7c0f
        mov    edx, dword ptr [g_007b9810]
        push    edx
        mov    ecx, eax
        call    FUN_00431900
        mov    esi, eax
        push    edi
        mov    ecx, esi
        call    FUN_004319d0
        jmp    L_7c8f
L_7c0f:
        xor    esi, esi
        push    edi
        mov    ecx, esi
        call    FUN_004319d0
        jmp    L_7c8f
L_7c1b:
        cmp    eax, dword ptr [g_007d9928]
        jne    L_7c5a
        push    0xb4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_7c4e
        mov    ecx, dword ptr [g_007b9824]
        push    ecx
        mov    ecx, eax
        call    FUN_00435e00
        mov    esi, eax
        push    edi
        mov    ecx, esi
        call    FUN_00435ed0
        jmp    L_7c8f
L_7c4e:
        xor    esi, esi
        push    edi
        mov    ecx, esi
        call    FUN_00435ed0
        jmp    L_7c8f
L_7c5a:
        cmp    eax, dword ptr [g_007d993c]
        jne    L_7c8f
        push    0xa8
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_7c85
        mov    edx, dword ptr [g_007b98e0]
        push    edx
        mov    ecx, eax
        call    FUN_00455070
        mov    esi, eax
        jmp    L_7c87
L_7c85:
        xor    esi, esi
L_7c87:
        push    edi
        mov    ecx, esi
        call    FUN_004554a0
L_7c8f:
        dec    word ptr [edi + 8]
        cmp    word ptr [edi + 8], 0
        jne    L_7ca6
        test    edi, edi
        je    L_7ca6
        mov    eax, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [eax]
L_7ca6:
        mov    edi, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esi]
        push    ebx
        mov    ecx, esi
        mov    dword ptr [edi], esi
        call    dword ptr [edx + 4]
        mov    eax, dword ptr [esp + 0x10]
        add    edi, 4
        dec    eax
        mov    dword ptr [esp + 0x20], edi
        mov    dword ptr [esp + 0x10], eax
        jne    L_79a3
        pop    ebp
L_7ccb:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xc
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        xor    eax, eax
        push    esi
        mov    esi, ecx
        mov    al, byte ptr [esi + 0x1c]
        push    edi
        mov    edi, eax
        mov    eax, dword ptr [esi + 0x18]
        cmp    edi, eax
        mov    dword ptr [esp + 8], edi
        jae    L_7cff
        test    eax, eax
        jne    L_7d88
L_7cff:
        mov    ecx, dword ptr [g_007b9590]
        push    ebx
        push    ebp
        push    ecx
        call    FUN_006f4950
        mov    ebp, dword ptr [esi + 0x18]
        lea    ebx, [edi + 4]
        cmp    ebx, ebp
        je    L_7d81
        test    ebx, ebx
        jbe    L_7d6b
        lea    edx, [ebx*4]
        push    edx
        call    FUN_004084d0
        mov    edx, dword ptr [esi + 0x14]
        add    esp, 4
        test    edx, edx
        mov    edi, eax
        je    L_7d62
        cmp    ebx, ebp
        mov    ecx, ebx
        jb    L_7d3c
        mov    ecx, ebp
L_7d3c:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_7d56
        lea    eax, [edi + ecx*4]
        sub    edx, edi
        inc    ecx
L_7d49:
        mov    ebp, dword ptr [edx + eax]
        mov    dword ptr [eax], ebp
        dec    ecx
        sub    eax, 4
        test    ecx, ecx
        ja    L_7d49
L_7d56:
        mov    eax, dword ptr [esi + 0x14]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7d62:
        mov    dword ptr [esi + 0x14], edi
        mov    edi, dword ptr [esp + 0x10]
        jmp    L_7d7e
L_7d6b:
        mov    ecx, dword ptr [esi + 0x14]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi + 0x14], 0
L_7d7e:
        mov    dword ptr [esi + 0x18], ebx
L_7d81:
        call    FUN_006f49a0
        pop    ebp
        pop    ebx
L_7d88:
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esi + 0x14]
        mov    dword ptr [edx + edi*4], eax
        inc    word ptr [eax + 8]
        mov    al, byte ptr [esi + 0x1c]
        inc    al
        pop    edi
        mov    byte ptr [esi + 0x1c], al
        pop    esi
        pop    ecx
        ret    4
    }
}
