/*
 * FUN_004d38af (extent 0x4d38af-0x4d3a16) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db0b8;
extern int    g_007dc12c;
extern int    g_007dc144;
extern int    g_007dc570;
extern int    g_007dc574;
extern int    g_007dc6b4;
extern int    g_007dc6d4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_004c8eb0(void);
extern void __cdecl FUN_004d2b10(void);
extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_004d6040(void);
extern void __cdecl FUN_004dd990(void);
extern void __cdecl FUN_004dfdf0(void);
extern void __cdecl FUN_004e05d0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004d38af(void)
{
    __asm {
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
        push    ebx
        mov    ebx, ecx
        mov    ecx, dword ptr [ebx + 0x4c]
        mov    eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [g_007dc12c]
        push    ecx
        call    FUN_006f4950
        push    0x77294c
        push    0x772938
        push    5
        call    FUN_004e05d0
        push    0x34
        mov    dword ptr [g_007dc6d4], eax
        call    FUN_004084d0
        add    esp, 0x10
        test    eax, eax
        je    L_390d
        mov    ecx, eax
        call    FUN_004d2b10
        mov    dword ptr [g_007db0b8], eax
        jmp    L_3917
L_390d:
        mov    dword ptr [g_007db0b8], 0
L_3917:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        jne    L_395f
        push    0x90
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3952
        mov    edx, dword ptr [g_007dc144]
        push    edx
        mov    ecx, eax
        call    FUN_004d6040
        jmp    L_3954
L_3952:
        xor    eax, eax
L_3954:
        push    0
        push    eax
        call    FUN_004c8eb0
        add    esp, 8
L_395f:
        push    esi
        push    0x24
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_39a1
        mov    eax, dword ptr [g_007dc570]
        push    edi
        push    eax
        mov    ecx, esi
        call    FUN_004d5b10
        push    1
        lea    edi, [esi + 0x10]
        push    0
        mov    ecx, edi
        call    FUN_00416990
        mov    dword ptr [edi], 0x77290c
        mov    dword ptr [esi], 0x7728f8
        mov    dword ptr [g_007dc574], esi
        pop    edi
        jmp    L_39ab
L_39a1:
        mov    dword ptr [g_007dc574], 0
L_39ab:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        pop    esi
        je    L_39c3
        mov    ecx, eax
        call    FUN_004dfdf0
        jmp    L_39c5
L_39c3:
        xor    eax, eax
L_39c5:
        push    0x3b88
        mov    dword ptr [ebx + 0x60], eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_39e7
        mov    ecx, eax
        call    FUN_004dd990
        mov    dword ptr [g_007dc6b4], eax
        jmp    L_39f1
L_39e7:
        mov    dword ptr [g_007dc6b4], 0
L_39f1:
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [edx + 0x14]
        mov    ecx, dword ptr [ebx + 0x4c]
        mov    eax, dword ptr [ecx]
        push    0
        push    2
        call    dword ptr [eax + 4]
        call    FUN_006f49a0
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 3
        ret    
    }
}
