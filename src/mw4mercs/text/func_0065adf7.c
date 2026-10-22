/*
 * FUN_0065adf7 (extent 0x65adf7-0x65b17c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0065ac50(void);
extern void __cdecl FUN_0065b300(void);
extern void __cdecl FUN_0065b520(void);
extern void __cdecl FUN_0065b6f0(void);
extern void __cdecl FUN_0065bad0(void);
extern void __cdecl FUN_0065bb80(void);
extern void __cdecl FUN_0065bc00(void);
extern void __cdecl FUN_0065be20(void);
extern void __cdecl FUN_0065bed0(void);
extern void __cdecl FUN_0065c010(void);
extern void __cdecl FUN_0065c440(void);
extern void __cdecl FUN_0065d1f0(void);

__declspec(naked) void FUN_0065adf7(void)
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
        mov    eax, dword ptr [esp + 8]
        add    eax, 0xffffec78
        cmp    eax, 9
        push    esi
        ja    L_b164
        jmp    dword ptr [eax*4 + 0x65b17c]
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b044
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_0065ac50
        mov    ecx, esi
        mov    dword ptr [esi], 0x794c80
        call    FUN_0065b300
        mov    eax, dword ptr [esp + 8]
        or    esi, 1
        mov    dword ptr [eax], esi
        pop    esi
        ret    
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b14f
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_0065ac50
        mov    ecx, esi
        mov    dword ptr [esi], 0x794c50
        call    FUN_0065b520
        push    0
        push    1
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    ecx, esi
        call    FUN_0065d1f0
        mov    eax, esi
        pop    esi
        ret    
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b14f
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_0065ac50
        mov    ecx, esi
        mov    dword ptr [esi], 0x794c20
        call    FUN_0065b6f0
        push    0
        push    1
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    ecx, esi
        call    FUN_0065d1f0
        mov    eax, esi
        pop    esi
        ret    
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b14f
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_0065ac50
        mov    ecx, esi
        mov    dword ptr [esi], 0x794bf0
        call    FUN_0065bad0
        push    0
        push    1
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    ecx, esi
        call    FUN_0065d1f0
        mov    eax, esi
        pop    esi
        ret    
        push    0x14
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b14f
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_0065ac50
        mov    ecx, esi
        mov    dword ptr [esi], 0x794bc0
        call    FUN_0065bb80
        push    0
        push    1
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    ecx, esi
        call    FUN_0065d1f0
        mov    eax, esi
        pop    esi
        ret    
        push    0x24
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b14f
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_0065ac50
        mov    ecx, esi
        mov    dword ptr [esi], 0x794b90
        call    FUN_0065bc00
        push    0
        push    1
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    ecx, esi
        call    FUN_0065d1f0
        mov    eax, esi
        pop    esi
        ret    
        push    0x14
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b044
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_0065ac50
        mov    ecx, esi
        mov    dword ptr [esi], 0x794b60
        call    FUN_0065be20
        mov    eax, dword ptr [esp + 8]
        or    esi, 1
        mov    dword ptr [eax], esi
        pop    esi
        ret    
L_b044:
        mov    eax, dword ptr [esp + 8]
        xor    esi, esi
        or    esi, 1
        mov    dword ptr [eax], esi
        pop    esi
        ret    
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b14f
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_0065ac50
        mov    ecx, esi
        mov    dword ptr [esi], 0x794b30
        call    FUN_0065bed0
        push    0
        push    1
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    ecx, esi
        call    FUN_0065d1f0
        mov    eax, esi
        pop    esi
        ret    
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b14f
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_0065ac50
        mov    ecx, esi
        mov    dword ptr [esi], 0x794b00
        call    FUN_0065c010
        push    0
        push    1
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    ecx, esi
        call    FUN_0065d1f0
        mov    eax, esi
        pop    esi
        ret    
        push    0x44
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b14f
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_0065ac50
        push    0x454eb0
        push    2
        push    0xc
        lea    edx, [esi + 0x24]
        push    edx
        call    FUN_00406c90
        mov    ecx, esi
        mov    dword ptr [esi], 0x794ad0
        call    FUN_0065c440
        push    0
        push    1
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    ecx, esi
        call    FUN_0065d1f0
        mov    eax, esi
        pop    esi
        ret    
L_b14f:
        xor    esi, esi
        push    esi
        push    1
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    ecx, esi
        call    FUN_0065d1f0
        mov    eax, esi
        pop    esi
        ret    
L_b164:
        mov    esi, dword ptr [esp + 8]
        push    0
        push    1
        push    0
        mov    ecx, esi
        call    FUN_0065d1f0
        mov    eax, esi
        pop    esi
        ret    
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x0065B17C (0 relocated pointers)
    }
}
