/*
 * FUN_006f3219 (extent 0x6f3219-0x6f33a2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007dc7f8;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004eddf0(void);

__declspec(naked) void FUN_006f3219(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b8810]
        push    ebx
        push    esi
        push    edi
        push    eax
        push    0xc
        mov    ebx, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_3253
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [ecx + 0x44]
        add    ecx, 0x44
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x76cd64
        mov    edi, eax
        jmp    L_3255
L_3253:
        xor    edi, edi
L_3255:
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        je    L_32a5
        mov    esi, dword ptr [eax]
        test    esi, esi
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [edi + 8], eax
        je    L_32a5
        push    0x28
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3294
        mov    ecx, dword ptr [g_007dc7f8]
        push    esi
        push    ecx
        mov    ecx, eax
        call    FUN_004eddf0
        lea    edx, [eax + 0x10]
        push    edx
        push    eax
        lea    ecx, [ebx + 0x10]
        call    FUN_00416a90
        jmp    L_3255
L_3294:
        xor    eax, eax
        lea    edx, [eax + 0x10]
        push    edx
        push    eax
        lea    ecx, [ebx + 0x10]
        call    FUN_00416a90
        jmp    L_3255
L_32a5:
        push    edi
        call    FUN_004084e0
        add    esp, 4
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
        sub    esp, 0x14
        add    ecx, 0x10
        push    ecx
        lea    ecx, [esp + 4]
        call    FUN_00416bc0
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        __emit 0xC7  // mov dword ptr [esp], 0x79f6f0 (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
__emit 0xF0
__emit 0xF6
__emit 0x79
__emit 0x00
        call    FUN_00416cc0
        test    eax, eax
        je    L_32f9
L_32e5:
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        call    dword ptr [edx + 0x10]
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00416cc0
        test    eax, eax
        jne    L_32e5
L_32f9:
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00416c60
        add    esp, 0x14
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
        mov    eax, dword ptr [g_007b8810]
        push    ebx
        push    esi
        push    edi
        push    eax
        push    0xc
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_3341
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [ecx + 0x44]
        add    ecx, 0x44
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x76cd64
        mov    edi, eax
        jmp    L_3343
L_3341:
        xor    edi, edi
L_3343:
        mov    ebx, dword ptr [esp + 0x14]
L_3347:
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        je    L_3393
        mov    esi, dword ptr [eax]
        test    esi, esi
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [edi + 8], eax
        je    L_3393
        push    0x28
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_337b
        mov    ecx, dword ptr [g_007dc7f8]
        push    esi
        push    ecx
        mov    ecx, eax
        call    FUN_004eddf0
        mov    esi, eax
        jmp    L_337d
L_337b:
        xor    esi, esi
L_337d:
        mov    edx, dword ptr [esi]
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        test    esi, esi
        je    L_3347
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax]
        jmp    L_3347
L_3393:
        push    edi
        call    FUN_004084e0
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebx
        ret    8
    }
}
