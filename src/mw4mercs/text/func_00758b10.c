/*
 * FUN_00758b10 (extent 0x758b10-0x758c96) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d070;
extern int    g_008bc00c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_00713ae0(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_00713d10(void);
extern void __cdecl FUN_00713d70(void);
extern void __cdecl FUN_00717c10(void);
extern void __cdecl FUN_00758f00(void);
extern void __cdecl FUN_0075d8f0(void);

__declspec(naked) void FUN_00758b10(void)
{
    __asm {
        push    ebx
        mov    ebx, ecx
        push    esi
        mov    esi, dword ptr [ebx + 0x18]
        test    esi, esi
        je    L_8b2d
L_8b1b:
        mov    eax, esi
        mov    esi, dword ptr [esi + 0x80]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jne    L_8b1b
L_8b2d:
        mov    esi, dword ptr [ebx + 0x20]
        test    esi, esi
        je    L_8b4d
        push    edi
L_8b35:
        mov    edi, esi
        mov    eax, dword ptr [edi + 4]
        mov    esi, dword ptr [esi]
        push    eax
        call    FUN_00717c10
        push    edi
        call    FUN_006f4230
        test    esi, esi
        jne    L_8b35
        pop    edi
L_8b4d:
        mov    esi, dword ptr [ebx + 0x1c]
        test    esi, esi
        je    L_8b6b
        mov    ecx, esi
        call    FUN_0075d8f0
        push    esi
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx + 0x1c], 0
L_8b6b:
        cmp    ebx, dword ptr [g_008bc00c]
        mov    eax, dword ptr [ebx + 0x24]
        jne    L_8b7d
        mov    dword ptr [g_008bc00c], eax
        jmp    L_8b83
L_8b7d:
        mov    ecx, dword ptr [ebx + 0x28]
        mov    dword ptr [ecx + 0x24], eax
L_8b83:
        test    eax, eax
        je    L_8b8d
        mov    edx, dword ptr [ebx + 0x28]
        mov    dword ptr [eax + 0x28], edx
L_8b8d:
        pop    esi
        pop    ebx
        ret    
        push    ebx
        push    esi
        mov    esi, ecx
        mov    byte ptr [esi + 0x204c], 1
        call    FUN_00713d10
        push    1
        push    7
        call    FUN_00713cc0
        push    0
        push    8
        call    FUN_00713cc0
        push    0
        push    9
        call    FUN_00713cc0
        push    0
        push    0xa
        call    FUN_00713cc0
        push    1
        push    4
        call    FUN_00713cc0
        push    0
        push    0xb
        call    FUN_00713cc0
        push    0
        push    6
        call    FUN_00713cc0
        push    0
        push    5
        call    FUN_00713cc0
        push    0
        push    0xc
        call    FUN_00713cc0
        push    1
        push    0xf
        call    FUN_00713cc0
        push    0
        push    0x12
        call    FUN_00713cc0
        push    3
        push    0xd
        call    FUN_00713cc0
        push    3
        push    0x10
        call    FUN_00713cc0
        push    0
        push    0
        push    0
        push    2
        call    FUN_00704a80
        test    eax, eax
        je    L_8c2e
        fld    dword ptr [g_0076c5b0]
        jmp    L_8c34
L_8c2e:
        fld    dword ptr [g_0076d070]
L_8c34:
        fld    dword ptr [esi + 0x30]
        push    ecx
        fsub st(0), st(1)
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esi + 0x2c]
        mov    ecx, esi
        fsub st(0), st(1)
        fstp    dword ptr [esp]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00758f00
        test    al, al
        je    L_8c5c
        push    2
        push    0xb
        call    FUN_00713cc0
L_8c5c:
        mov    esi, dword ptr [esi + 0x18]
        or    ebx, 0xffffffff
        test    esi, esi
        je    L_8c8e
        push    edi
L_8c67:
        mov    edi, dword ptr [esi + 0x84]
        cmp    ebx, edi
        je    L_8c7b
        push    edi
        push    1
        call    FUN_00713cc0
        mov    ebx, edi
L_8c7b:
        push    4
        push    esi
        call    FUN_00713ae0
        mov    esi, dword ptr [esi + 0x80]
        test    esi, esi
        jne    L_8c67
        pop    edi
L_8c8e:
        call    FUN_00713d70
        pop    esi
        pop    ebx
        ret    
    }
}
