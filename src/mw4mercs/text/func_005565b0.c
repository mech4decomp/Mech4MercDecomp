/*
 * FUN_005565b0 (extent 0x5565b0-0x5567b6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_005b9d60(void);
extern void __cdecl FUN_005ba2a0(void);
extern void __cdecl FUN_005faf20(void);
extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);
extern void __cdecl FUN_00629290(void);

__declspec(naked) void FUN_005565b0(void)
{
    __asm {
        push    ebx
        push    esi
        mov    ebx, ecx
        push    edi
        mov    edi, dword ptr [ebx + 0x384]
        mov    eax, dword ptr [edi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_66ba
        mov    al, byte ptr [ebx + 0x589]
        test    al, al
        jne    L_66ba
        mov    al, byte ptr [ebx + 0x5ac]
        test    al, al
        jne    L_66ba
        push    0x8000
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        test    al, al
        je    L_66ba
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jle    L_66ba
        mov    al, byte ptr [edi + 0x2f8]
        test    al, al
        jne    L_66ba
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_66ba
        mov    esi, dword ptr [edi + 0x3d4]
        test    esi, esi
        je    L_66ba
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x64]
        sub    eax, 0
        je    L_6676
        dec    eax
        jne    L_66ba
        mov    ecx, edi
        call    FUN_005faf20
        mov    ecx, esi
        push    eax
        push    0
        call    FUN_005b9d60
        push    0xf
        mov    ecx, ebx
        call    FUN_00559be0
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        jmp    L_6698
L_6676:
        mov    ecx, edi
        call    FUN_005faf20
        mov    ecx, esi
        push    eax
        push    1
        call    FUN_005b9d60
        push    0x10
        mov    ecx, ebx
        call    FUN_00559be0
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
L_6698:
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        push    0xc
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    ecx, esi
        mov    edi, eax
        call    FUN_005ba2a0
        fstp    dword ptr [edi + 0x50]
L_66ba:
        pop    edi
        pop    esi
        pop    ebx
        ret    4
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x384]
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_67b1
        mov    al, byte ptr [edi + 0x589]
        test    al, al
        jne    L_67b1
        mov    al, byte ptr [edi + 0x5ac]
        test    al, al
        jne    L_67b1
        push    0x8000
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        test    al, al
        je    L_67b1
        mov    ecx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jle    L_67b1
        mov    al, byte ptr [esi + 0x2f8]
        test    al, al
        jne    L_67b1
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_67b1
        mov    esi, dword ptr [esi + 0x3d4]
        test    esi, esi
        je    L_67b1
        mov    ecx, esi
        call    FUN_005ba2a0
        fstp    dword ptr [esp + 0xc]
        push    0xe
        mov    ecx, edi
        call    FUN_00559be0
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x40]
        push    0xc
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    edi, eax
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x64]
        test    eax, eax
        jne    L_67b1
        fld    dword ptr [edi + 0x50]
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x40
        je    L_67aa
        mov    dword ptr [edi + 0x50], 0x43c80000
        pop    edi
        pop    esi
        ret    4
L_67aa:
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [edi + 0x50], ecx
L_67b1:
        pop    edi
        pop    esi
        ret    4
    }
}
