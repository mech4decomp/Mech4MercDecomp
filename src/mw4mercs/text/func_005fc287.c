/*
 * FUN_005fc287 (extent 0x5fc287-0x5fc457) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc8c8;
extern int    g_007dd234;
extern int    g_007f26a0;
extern int    g_007f26a4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd220(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_00501500(void);
extern void __cdecl FUN_005016b0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005fc287(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_c2d5
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [g_007f26a0]
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_004dd220
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi], 0x78adbc
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_c2d5:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
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
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_c34b
        mov    ecx, dword ptr [g_007f26a0]
        mov    edx, dword ptr [g_007dc8c8]
        push    0x502c60
        push    0x5028b0
        push    0x507b30
        push    0
        push    0x507b10
        push    ecx
        push    0x692f40
        push    0x5fc490
        push    0
        push    0
        push    edx
        push    0x78addc
        push    0x421
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f26a4], eax
        jmp    L_c355
L_c34b:
        mov    dword ptr [g_007f26a4], 0
L_c355:
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_c37d
        push    0xe0
        push    0x422
        push    0x773250
        push    1
        mov    ecx, eax
        call    FUN_00501500
        jmp    L_c37f
L_c37d:
        xor    eax, eax
L_c37f:
        push    esi
        push    eax
        mov    eax, dword ptr [g_007f26a4]
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_c3bb
        push    0x210
        push    1
        push    0x78add4
        push    0xa
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x773234
        jmp    L_c3bd
L_c3bb:
        xor    esi, esi
L_c3bd:
        mov    ecx, dword ptr [g_007f26a4]
        push    esi
        add    ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_c3f9
        push    0x214
        push    9
        push    0x78adcc
        push    0xb
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7895d8
        jmp    L_c3fb
L_c3f9:
        xor    esi, esi
L_c3fb:
        mov    edx, dword ptr [g_007f26a4]
        push    esi
        lea    ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_c445
        push    0x244
        push    9
        push    0x78adc4
        push    0xc
        mov    ecx, esi
        call    FUN_005013f0
        mov    eax, dword ptr [g_007f26a4]
        push    esi
        lea    ecx, [eax + 0x44]
        mov    dword ptr [esi], 0x7895d8
        call    FUN_005016b0
        pop    esi
        ret    
L_c445:
        mov    eax, dword ptr [g_007f26a4]
        xor    esi, esi
        push    esi
        lea    ecx, [eax + 0x44]
        call    FUN_005016b0
        pop    esi
        ret    
    }
}
