/*
 * FUN_0052f058 (extent 0x52f058-0x52f5af) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b4674;
extern int    g_007b4678;
extern int    g_007b4680;
extern int    g_007b4684;
extern int    g_007b4688;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007ddd08;
extern int    g_007ddd0c;
extern int    g_007ddd10;
extern int    g_007ddd14;
extern int    g_007ddd18;
extern int    g_007ddd30;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d5d20(void);

__declspec(naked) void FUN_0052f058(void)
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
        mov    ecx, dword ptr [g_007b4678]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    dword ptr [g_007b4678], 0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4678]
        xor    eax, eax
        cmp    ecx, 1
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4678], 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4678]
        xor    eax, eax
        cmp    ecx, 2
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4678], 2
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4678]
        xor    eax, eax
        cmp    ecx, 3
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4678], 3
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4678]
        xor    eax, eax
        cmp    ecx, 4
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4678], 4
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4674]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    dword ptr [g_007b4674], 0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4674]
        xor    eax, eax
        cmp    ecx, 1
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4674], 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4674]
        xor    eax, eax
        cmp    ecx, 2
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4674], 2
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4674]
        xor    eax, eax
        cmp    ecx, 3
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4674], 3
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4674]
        xor    eax, eax
        cmp    ecx, 4
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4674], 4
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4674]
        xor    eax, eax
        cmp    ecx, 5
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4674], 5
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4674]
        xor    eax, eax
        cmp    ecx, 6
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4674], 6
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4674]
        xor    eax, eax
        cmp    ecx, 7
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4674], 7
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4674]
        xor    eax, eax
        cmp    ecx, 8
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4674], 8
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4674]
        xor    eax, eax
        cmp    ecx, 9
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4674], 9
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4680]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    dword ptr [g_007b4680], 0
        je    L_f29e
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        je    L_f29e
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x4c]
        cmp    dword ptr [edx + 0x14], 5
        jne    L_f29e
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    byte ptr [eax + 0xb0], 1
L_f29e:
        ret    
        nop    
        mov    ecx, dword ptr [g_007b4680]
        xor    eax, eax
        cmp    ecx, 1
        sete    al
        ret    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, edx
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    ecx, 1
        mov    dword ptr [g_007b4680], ecx
        je    L_f2fe
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        je    L_f2fe
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    edx, dword ptr [edx + 0x4c]
        cmp    dword ptr [edx + 0x14], 5
        jne    L_f2fe
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    byte ptr [eax + 0xb0], cl
L_f2fe:
        ret    
        nop    
        mov    ecx, dword ptr [g_007b4680]
        xor    eax, eax
        cmp    ecx, 2
        sete    al
        ret    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    dword ptr [g_007b4680], 2
        je    L_f35e
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        je    L_f35e
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x4c]
        cmp    dword ptr [edx + 0x14], 5
        jne    L_f35e
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    byte ptr [eax + 0xb0], 1
L_f35e:
        ret    
        nop    
        mov    ecx, dword ptr [g_007b4684]
        xor    eax, eax
        cmp    ecx, -1
        sete    al
        ret    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    dword ptr [g_007b4684], 0xffffffff
        je    L_f3be
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        je    L_f3be
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x4c]
        cmp    dword ptr [edx + 0x14], 5
        jne    L_f3be
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    byte ptr [eax + 0xb0], 1
L_f3be:
        ret    
        nop    
        mov    ecx, dword ptr [g_007b4684]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    dword ptr [g_007b4684], 0
        je    L_f41e
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        je    L_f41e
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x4c]
        cmp    dword ptr [edx + 0x14], 5
        jne    L_f41e
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    byte ptr [eax + 0xb0], 1
L_f41e:
        ret    
        nop    
        mov    ecx, dword ptr [g_007b4684]
        xor    eax, eax
        cmp    ecx, 1
        sete    al
        ret    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, edx
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    ecx, 1
        mov    dword ptr [g_007b4684], ecx
        je    L_f47e
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        je    L_f47e
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    edx, dword ptr [edx + 0x4c]
        cmp    dword ptr [edx + 0x14], 5
        jne    L_f47e
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    byte ptr [eax + 0xb0], cl
L_f47e:
        ret    
        nop    
        mov    ecx, dword ptr [g_007b4684]
        xor    eax, eax
        cmp    ecx, 2
        sete    al
        ret    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    dword ptr [g_007b4684], 2
        je    L_f4de
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        je    L_f4de
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x4c]
        cmp    dword ptr [edx + 0x14], 5
        jne    L_f4de
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    byte ptr [eax + 0xb0], 1
L_f4de:
        ret    
        nop    
        mov    ecx, dword ptr [g_007b4688]
        xor    eax, eax
        cmp    ecx, 1
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b4688]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        mov    dword ptr [g_007b4688], eax
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
        push    esi
        mov    esi, dword ptr [g_007ddd30]
        push    edi
        xor    edi, edi
        cmp    esi, edi
        je    L_f52e
        mov    ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_f52e:
        mov    eax, dword ptr [g_007ddd08]
        cmp    eax, edi
        mov    dword ptr [g_007ddd30], edi
        je    L_f54c
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [g_007ddd08], edi
L_f54c:
        mov    eax, dword ptr [g_007ddd0c]
        cmp    eax, edi
        je    L_f564
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [g_007ddd0c], edi
L_f564:
        mov    eax, dword ptr [g_007ddd14]
        cmp    eax, edi
        je    L_f57c
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [g_007ddd14], edi
L_f57c:
        mov    eax, dword ptr [g_007ddd10]
        cmp    eax, edi
        je    L_f594
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [g_007ddd10], edi
L_f594:
        mov    eax, dword ptr [g_007ddd18]
        cmp    eax, edi
        je    L_f5ac
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [g_007ddd18], edi
L_f5ac:
        pop    edi
        pop    esi
        ret    
    }
}
