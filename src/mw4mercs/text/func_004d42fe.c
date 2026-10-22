/*
 * FUN_004d42fe (extent 0x4d42fe-0x4d45a7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87d0;
extern int    g_007b87d4;
extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007b8eec;
extern char   g_007b8ef0;
extern int    g_007db0b8;
extern int    g_007dc11c;
extern int    g_007dc120;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2310(void);
extern void __cdecl FUN_004d2350(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006faca0(void);
extern void __cdecl FUN_006fc4d0(void);

__declspec(naked) void FUN_004d42fe(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007db0b8]
        sub    esp, 0x44
        test    eax, eax
        mov    byte ptr [g_007b8ef0], 0
        je    L_439f
        push    esi
        mov    esi, dword ptr [esp + 0x4c]
        push    0
        push    esi
        lea    ecx, [esp + 0xc]
        call    FUN_004d2000
        mov    eax, dword ptr [esp + 0x40]
        test    eax, eax
        je    L_436e
        mov    eax, dword ptr [esp + 0x20]
        test    eax, eax
        jbe    L_436e
        lea    ecx, [esp + 4]
        call    FUN_004d2310
        mov    ecx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x50]
        mov    edx, dword ptr [esp + 0x54]
        mov    dword ptr [eax], ecx
        mov    eax, dword ptr [esp + 0x20]
        lea    ecx, [esp + 4]
        mov    dword ptr [edx], eax
        call    FUN_004d2350
        lea    ecx, [esp + 4]
        call    FUN_004d21c0
        pop    esi
        add    esp, 0x44
        ret    0xc
L_436e:
        mov    ecx, dword ptr [g_007b8eec]
        push    ecx
        call    FUN_006f4950
        mov    edx, dword ptr [esp + 0x54]
        mov    eax, dword ptr [esp + 0x50]
        push    edx
        push    eax
        push    esi
        call    FUN_006faca0
        call    FUN_006f49a0
        lea    ecx, [esp + 4]
        call    FUN_004d21c0
        pop    esi
        add    esp, 0x44
        ret    0xc
L_439f:
        mov    ecx, dword ptr [g_007b8eec]
        push    ecx
        call    FUN_006f4950
        mov    edx, dword ptr [esp + 0x50]
        mov    eax, dword ptr [esp + 0x4c]
        mov    ecx, dword ptr [esp + 0x48]
        push    edx
        push    eax
        push    ecx
        call    FUN_006faca0
        call    FUN_006f49a0
        add    esp, 0x44
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007db0b8]
        sub    esp, 0x44
        test    eax, eax
        push    esi
        mov    byte ptr [g_007b8ef0], 0
        je    L_4432
        mov    esi, dword ptr [esp + 0x4c]
        push    0
        push    esi
        lea    ecx, [esp + 0xc]
        call    FUN_004d2000
        mov    eax, dword ptr [esp + 0x40]
        test    eax, eax
        je    L_4404
        mov    eax, dword ptr [esp + 0x20]
        test    eax, eax
        ja    L_4420
L_4404:
        push    ebx
        push    esi
        call    FUN_006fc4d0
        lea    ecx, [esp + 8]
        mov    bl, al
        call    FUN_004d21c0
        mov    al, bl
        pop    ebx
        pop    esi
        add    esp, 0x44
        ret    4
L_4420:
        lea    ecx, [esp + 4]
        call    FUN_004d21c0
        mov    al, 1
        pop    esi
        add    esp, 0x44
        ret    4
L_4432:
        mov    eax, dword ptr [esp + 0x4c]
        push    eax
        call    FUN_006fc4d0
        pop    esi
        add    esp, 0x44
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
        mov    eax, dword ptr [g_007b87d4]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b87d4], eax
        jne    L_44a6
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_449c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b87d0], esi
        jmp    L_44a6
L_449c:
        mov    dword ptr [g_007b87d0], 0
L_44a6:
        mov    ecx, dword ptr [g_007b87d0]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_44da
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [edx]
        mov    dword ptr [esi + 0x18], eax
        pop    edi
        mov    dword ptr [esi], 0x76ceb0
        mov    eax, esi
        pop    esi
        ret    8
L_44da:
        pop    edi
        xor    eax, eax
        pop    esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_453f
        mov    ecx, dword ptr [g_007dc120]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007dc11c]
        jne    L_453f
        push    edi
        mov    edi, dword ptr [g_007dc120]
        test    edi, edi
        je    L_452e
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_452e:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007dc120], 0
        pop    esi
        ret    4
L_453f:
        mov    eax, esi
        pop    esi
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x18]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_4567
        xor    eax, eax
        ret    8
L_4567:
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
        jne    L_4596
        xor    eax, eax
        ret    8
L_4596:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
    }
}
