/*
 * FUN_00486cac (extent 0x486cac-0x486e47) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da718;
extern int    g_007da71c;
extern int    g_007da720;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_00423b30(void);
extern void __cdecl FUN_00423b50(void);
extern void __cdecl FUN_00486b80(void);
extern void __cdecl FUN_00487130(void);
extern void __cdecl FUN_00487140(void);

__declspec(naked) void FUN_00486cac(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    edi
        mov    edi, ecx
        je    L_6d2e
        mov    eax, dword ptr [edi - 4]
        push    ebp
        lea    ebp, [edi - 4]
        push    esi
        mov    esi, eax
        shl    esi, 5
        add    esi, edi
        dec    eax
        js    L_6d17
        lea    edi, [eax + 1]
L_6cd2:
        mov    eax, dword ptr [esi - 8]
        sub    esi, 0x20
        test    eax, eax
        je    L_6ce5
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6ce5:
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        je    L_6cf5
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6cf5:
        mov    eax, dword ptr [esi + 8]
        test    eax, eax
        je    L_6d05
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6d05:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_6d14
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6d14:
        dec    edi
        jne    L_6cd2
L_6d17:
        test    bl, 1
        je    L_6d25
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_6d25:
        pop    esi
        mov    eax, ebp
        pop    ebp
        pop    edi
        pop    ebx
        ret    4
L_6d2e:
        mov    eax, dword ptr [edi + 0x18]
        test    eax, eax
        je    L_6d3e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6d3e:
        mov    eax, dword ptr [edi + 0x10]
        test    eax, eax
        je    L_6d4e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6d4e:
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        je    L_6d5e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6d5e:
        mov    eax, dword ptr [edi]
        test    eax, eax
        je    L_6d6d
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6d6d:
        test    bl, 1
        je    L_6d7b
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_6d7b:
        mov    eax, edi
        pop    edi
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
        mov    eax, dword ptr [g_007da71c]
        push    esi
        lea    ecx, [eax + 0x20]
        call    FUN_00486b80
        mov    ecx, dword ptr [g_007da71c]
        call    FUN_00486b80
        mov    ecx, dword ptr [g_007da71c]
        test    ecx, ecx
        je    L_6dff
        mov    eax, dword ptr [ecx - 4]
        push    ebp
        lea    ebp, [ecx - 4]
        mov    esi, eax
        shl    esi, 5
        add    esi, ecx
        dec    eax
        js    L_6df5
        push    ebx
        push    edi
        lea    edi, [esi + 0x10]
        lea    ebx, [eax + 1]
L_6dcc:
        sub    edi, 0x20
        lea    ecx, [edi + 8]
        sub    esi, 0x20
        call    FUN_00423b50
        mov    ecx, edi
        call    FUN_00423b30
        lea    ecx, [edi - 8]
        call    FUN_00487140
        mov    ecx, esi
        call    FUN_00487130
        dec    ebx
        jne    L_6dcc
        pop    edi
        pop    ebx
L_6df5:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
        pop    ebp
L_6dff:
        mov    esi, dword ptr [g_007da718]
        test    esi, esi
        je    L_6e21
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_6e18
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6e18:
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6e21:
        mov    esi, dword ptr [g_007da720]
        test    esi, esi
        je    L_6e3b
        mov    ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6e3b:
        mov    dword ptr [g_007da720], 0
        pop    esi
        ret    
    }
}
