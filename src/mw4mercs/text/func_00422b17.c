/*
 * FUN_00422b17 (extent 0x422b17-0x422e30) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b95cc;
extern int    g_007b95d0;
extern int    g_007b95d4;
extern int    g_007b95d8;
extern int    g_007b95dc;
extern int    g_007b95e0;
extern int    g_007b95e4;
extern int    g_007b95ec;
extern int    g_007b95f0;
extern int    g_007b95f4;
extern int    g_007b95f8;
extern int    g_007b960c;
extern int    g_007b9610;
extern void __cdecl FUN_00406cc0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_00423b10(void);
extern void __cdecl FUN_00423b20(void);
extern void __cdecl FUN_00423b30(void);
extern void __cdecl FUN_00423b40(void);
extern void __cdecl FUN_00423b50(void);
extern void __cdecl FUN_00480470(void);

__declspec(naked) void FUN_00422b17(void)
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
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        je    L_2bb5
        mov    eax, dword ptr [edi - 4]
        lea    ebp, [edi - 4]
        lea    esi, [eax + eax*2]
        shl    esi, 4
        add    esi, edi
        dec    eax
        js    L_2b9e
        lea    edi, [eax + 1]
L_2b47:
        push    0x423b10
        push    2
        sub    esi, 0x30
        push    8
        lea    eax, [esi + 0x20]
        push    eax
        call    FUN_00406cc0
        mov    eax, dword ptr [esi + 0x18]
        test    eax, eax
        je    L_2b6c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2b6c:
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        je    L_2b7c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2b7c:
        mov    eax, dword ptr [esi + 8]
        test    eax, eax
        je    L_2b8c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2b8c:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_2b9b
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2b9b:
        dec    edi
        jne    L_2b47
L_2b9e:
        test    bl, 1
        je    L_2bac
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_2bac:
        pop    edi
        pop    esi
        mov    eax, ebp
        pop    ebp
        pop    ebx
        ret    4
L_2bb5:
        lea    esi, [edi + 0x30]
        mov    ebp, 2
L_2bbd:
        mov    eax, dword ptr [esi - 8]
        sub    esi, 8
        test    eax, eax
        je    L_2bd0
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2bd0:
        dec    ebp
        jne    L_2bbd
        mov    eax, dword ptr [edi + 0x18]
        test    eax, eax
        je    L_2be3
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2be3:
        mov    eax, dword ptr [edi + 0x10]
        test    eax, eax
        je    L_2bf3
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2bf3:
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        je    L_2c03
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2c03:
        mov    eax, dword ptr [edi]
        test    eax, eax
        je    L_2c12
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2c12:
        test    bl, 1
        je    L_2c20
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_2c20:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b95cc]
        push    esi
        lea    ecx, [eax + 0x30]
        call    FUN_00480470
        mov    ecx, dword ptr [g_007b95cc]
        call    FUN_00480470
        mov    eax, dword ptr [g_007b95cc]
        test    eax, eax
        je    L_2c6f
        mov    ecx, dword ptr [eax - 4]
        lea    esi, [eax - 4]
        push    0x422e30
        push    ecx
        push    0x30
        push    eax
        call    FUN_00406cc0
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2c6f:
        mov    esi, dword ptr [g_007b95e0]
        test    esi, esi
        je    L_2c91
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_2c88
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2c88:
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2c91:
        mov    esi, dword ptr [g_007b95dc]
        test    esi, esi
        je    L_2cb3
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_2caa
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2caa:
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2cb3:
        mov    esi, dword ptr [g_007b95d8]
        test    esi, esi
        je    L_2cd5
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_2ccc
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2ccc:
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2cd5:
        mov    esi, dword ptr [g_007b95d4]
        test    esi, esi
        je    L_2cef
        mov    ecx, esi
        call    FUN_00423b30
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2cef:
        mov    esi, dword ptr [g_007b95d0]
        test    esi, esi
        je    L_2d09
        mov    ecx, esi
        call    FUN_00423b50
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2d09:
        mov    esi, dword ptr [g_007b95f8]
        test    esi, esi
        je    L_2d23
        mov    ecx, esi
        call    FUN_00423b20
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2d23:
        mov    esi, dword ptr [g_007b95f4]
        test    esi, esi
        je    L_2d3d
        mov    ecx, esi
        call    FUN_00423b30
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2d3d:
        mov    esi, dword ptr [g_007b95f0]
        test    esi, esi
        je    L_2d57
        mov    ecx, esi
        call    FUN_00423b10
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2d57:
        mov    esi, dword ptr [g_007b95ec]
        test    esi, esi
        je    L_2d71
        mov    ecx, esi
        call    FUN_00423b40
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2d71:
        mov    eax, dword ptr [g_007b95e4]
        mov    ecx, dword ptr [eax + 4]
        xor    esi, esi
        test    ecx, ecx
        jbe    L_2da6
L_2d7f:
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [edx + esi*4]
        dec    word ptr [ecx + 8]
        cmp    word ptr [ecx + 8], 0
        jne    L_2d9e
        test    ecx, ecx
        je    L_2d9e
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov    eax, dword ptr [g_007b95e4]
L_2d9e:
        mov    ecx, dword ptr [eax + 4]
        inc    esi
        cmp    esi, ecx
        jb    L_2d7f
L_2da6:
        mov    esi, eax
        test    esi, esi
        je    L_2dc4
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_2dbb
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2dbb:
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2dc4:
        mov    esi, dword ptr [g_007b960c]
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    ecx, dword ptr [g_007b960c]
        mov    eax, dword ptr [ecx]
        mov    dword ptr [esi + 8], 0xffffffec
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [g_007b960c]
        test    ecx, ecx
        mov    esi, eax
        je    L_2df7
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_2df7:
        push    esi
        mov    dword ptr [g_007b960c], 0
        call    FUN_004084e0
        mov    esi, dword ptr [g_007b9610]
        add    esp, 4
        test    esi, esi
        je    L_2e24
        mov    ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2e24:
        mov    dword ptr [g_007b9610], 0
        pop    esi
        ret    
    }
}
