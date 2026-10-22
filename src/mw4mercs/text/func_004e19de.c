/*
 * FUN_004e19de (extent 0x4e19de-0x4e1b53) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b4350;
extern int    g_007dc690;
extern int    g_007dc700;
extern int    g_007dc8cc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_0070f090(void);

__declspec(naked) void FUN_004e19de(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x18]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_19f7
        xor    eax, eax
        ret    8
L_19f7:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_1a26
        xor    eax, eax
        ret    8
L_1a26:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
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
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_1a9b
        mov    ecx, dword ptr [g_007dc8cc]
        mov    edx, dword ptr [g_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x506e70
        push    0
        push    0x506410
        push    ecx
        push    0x506160
        push    0x4d93b0
        push    0
        push    0
        push    edx
        push    0x773cf8
        push    0x1e7
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007dc700], eax
        jmp    L_1aa5
L_1a9b:
        mov    dword ptr [g_007dc700], 0
L_1aa5:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1ad3
        push    0x28
        push    0x231
        push    0x773ce0
        push    6
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_1ad5
L_1ad3:
        xor    esi, esi
L_1ad5:
        mov    eax, dword ptr [g_007dc700]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0
        push    0
        push    0x4e1b40
        push    0x4e1b30
        push    0x773cb0
        call    FUN_0070f090
        mov    ecx, dword ptr [esp + 8]
        test    ecx, ecx
        pop    esi
        je    L_1b25
        push    0x76d9ec
        call    FUN_0040ecc0
        test    eax, eax
        je    L_1b25
        push    0
        push    0x7b4350
        push    0x773ca4
        mov    ecx, eax
        call    FUN_00411cb0
L_1b25:
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
        mov    ecx, dword ptr [g_007b4350]
        xor    eax, eax
        cmp    ecx, 4
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b4350]
        mov    eax, 5
        sub    eax, ecx
        mov    dword ptr [g_007b4350], eax
        ret    
    }
}
