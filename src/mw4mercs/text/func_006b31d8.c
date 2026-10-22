/*
 * FUN_006b31d8 (extent 0x6b31d8-0x6b36e8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0079a010;
extern float  g_0079a018;
extern float  g_0079a020;
extern float  g_0079a028;
extern float  g_0079a030;
extern float  g_0079a038;
extern float  g_0079a040;
extern float  g_0079a048;
extern float  g_0079a050;
extern float  g_0079a058;
extern float  g_0079a060;
extern float  g_0079a068;
extern float  g_0079a070;
extern float  g_0079a078;
extern float  g_0079a080;
extern float  g_0079a088;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_0041eae0(void);
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_006b3090(void);

__declspec(naked) void FUN_006b31d8(void)
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006b3090
        add    esp, 4
        ret    
        nop    
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    ebx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 8]
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        sub    edi, ebx
        shl    edi, 3
        cmp    eax, -0x14
        je    L_320e
        lea    edi, [edi + eax - 8]
L_320e:
        mov    ebx, dword ptr [esp + 0x14]
        test    ebx, ebx
        jle    L_322f
L_3216:
        push    1
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0041eb40
        dec    ebx
        jne    L_3216
L_322f:
        mov    eax, dword ptr [esi + 0x14]
        mov    ebx, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, ebx
        shl    eax, 3
        cmp    esi, -0x14
        je    L_3246
        lea    eax, [eax + esi - 8]
L_3246:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x20]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1814]
        mov    esi, dword ptr [ecx + edx*4 + 0x9ca4]
        add    ecx, 0x9c9c
        sub    eax, edi
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        pop    edi
        add    edx, eax
        pop    esi
        mov    dword ptr [ecx + 0xc00], edx
        pop    ebx
        ret    
        nop    
        nop    
        sub    esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [esi + 0x14]
        mov    ebx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 8]
        sub    ecx, ebx
        shl    ecx, 3
        cmp    eax, -0x14
        push    edi
        mov    dword ptr [esp + 0x10], ecx
        je    L_32ba
        lea    eax, [ecx + eax - 8]
        mov    dword ptr [esp + 0x10], eax
L_32ba:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ebp, dword ptr [edx]
        xor    ebp, 0x85739531
        lea    eax, [ebp + 0x4c4]
        mov    dword ptr [esp + 0x18], eax
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 0x14], 0x79a004
        call    FUN_0040c0e0
        xor    ebx, ebx
        cmp    eax, ebx
        je    L_332b
L_32f7:
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        je    L_330e
        lea    edx, [esp + 0x34]
        mov    byte ptr [esp + 0x34], 1
        push    edx
        jmp    L_3317
L_330e:
        lea    eax, [esp + 0x34]
        mov    byte ptr [esp + 0x34], bl
        push    eax
L_3317:
        mov    ecx, esi
        call    FUN_0041eae0
        lea    ecx, [esp + 0x14]
        call    FUN_0040c0e0
        cmp    eax, ebx
        jne    L_32f7
L_332b:
        lea    eax, [ebp + 0x4cc]
        mov    dword ptr [esp + 0x24], eax
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0x28], ecx
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x20], 0x79a000
        call    FUN_0040c0e0
        cmp    eax, ebx
        je    L_3384
L_3350:
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_3367
        lea    eax, [esp + 0x34]
        mov    byte ptr [esp + 0x34], 1
        push    eax
        jmp    L_3370
L_3367:
        lea    ecx, [esp + 0x34]
        mov    byte ptr [esp + 0x34], bl
        push    ecx
L_3370:
        mov    ecx, esi
        call    FUN_0041eae0
        lea    ecx, [esp + 0x20]
        call    FUN_0040c0e0
        cmp    eax, ebx
        jne    L_3350
L_3384:
        mov    edi, dword ptr [ebp + 0x4d4]
L_338a:
        cmp    edi, ebx
        je    L_33c7
        mov    eax, dword ptr [edi]
        cmp    eax, ebx
        mov    edi, dword ptr [edi + 4]
        je    L_33c7
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_33b5
        lea    eax, [esp + 0x34]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x38], 1
        call    FUN_0041eae0
        jmp    L_338a
L_33b5:
        lea    ecx, [esp + 0x34]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x38], bl
        call    FUN_0041eae0
        jmp    L_338a
L_33c7:
        mov    edi, dword ptr [ebp + 0x4dc]
L_33cd:
        cmp    edi, ebx
        je    L_340a
        mov    eax, dword ptr [edi]
        cmp    eax, ebx
        mov    edi, dword ptr [edi + 4]
        je    L_340a
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_33f8
        lea    eax, [esp + 0x34]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x38], 1
        call    FUN_0041eae0
        jmp    L_33cd
L_33f8:
        lea    ecx, [esp + 0x34]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x38], bl
        call    FUN_0041eae0
        jmp    L_33cd
L_340a:
        mov    edi, dword ptr [ebp + 0x4e4]
L_3410:
        cmp    edi, ebx
        je    L_344d
        mov    eax, dword ptr [edi]
        cmp    eax, ebx
        mov    edi, dword ptr [edi + 4]
        je    L_344d
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_343b
        lea    eax, [esp + 0x34]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x38], 1
        call    FUN_0041eae0
        jmp    L_3410
L_343b:
        lea    ecx, [esp + 0x34]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x38], bl
        call    FUN_0041eae0
        jmp    L_3410
L_344d:
        mov    edi, dword ptr [ebp + 0x4ec]
L_3453:
        cmp    edi, ebx
        je    L_3490
        mov    eax, dword ptr [edi]
        cmp    eax, ebx
        mov    edi, dword ptr [edi + 4]
        je    L_3490
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_347e
        lea    eax, [esp + 0x34]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x38], 1
        call    FUN_0041eae0
        jmp    L_3453
L_347e:
        lea    ecx, [esp + 0x34]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x38], bl
        call    FUN_0041eae0
        jmp    L_3453
L_3490:
        mov    edi, dword ptr [ebp + 0x4f4]
L_3496:
        cmp    edi, ebx
        je    L_34d3
        mov    eax, dword ptr [edi]
        cmp    eax, ebx
        mov    edi, dword ptr [edi + 4]
        je    L_34d3
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_34c1
        lea    eax, [esp + 0x34]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x38], 1
        call    FUN_0041eae0
        jmp    L_3496
L_34c1:
        lea    ecx, [esp + 0x34]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x38], bl
        call    FUN_0041eae0
        jmp    L_3496
L_34d3:
        mov    edi, dword ptr [ebp + 0x4fc]
L_34d9:
        cmp    edi, ebx
        je    L_3516
        mov    eax, dword ptr [edi]
        cmp    eax, ebx
        mov    edi, dword ptr [edi + 4]
        je    L_3516
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_3504
        lea    eax, [esp + 0x34]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x38], 1
        call    FUN_0041eae0
        jmp    L_34d9
L_3504:
        lea    ecx, [esp + 0x34]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x38], bl
        call    FUN_0041eae0
        jmp    L_34d9
L_3516:
        mov    eax, dword ptr [esi + 0x14]
        mov    edi, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, edi
        shl    eax, 3
        cmp    esi, -0x14
        je    L_352d
        lea    eax, [eax + esi - 8]
L_352d:
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [g_007dab40]
        sub    eax, ecx
        mov    ecx, eax
        mov    eax, dword ptr [edx]
        xor    eax, ebp
        mov    edx, dword ptr [eax + 0x14]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [esp + 0x38]
        mov    esi, dword ptr [eax + edx*4 + 0x9ca4]
        add    eax, 0x9c9c
        add    esi, ecx
        mov    dword ptr [eax + edx*4 + 8], esi
        mov    edx, dword ptr [eax + 0xc00]
        pop    edi
        pop    esi
        add    edx, ecx
        pop    ebp
        mov    dword ptr [eax + 0xc00], edx
        pop    ebx
        add    esp, 0x1c
        ret    
        fld    dword ptr [esp + 4]
        fcomp    qword ptr [g_0079a088]
        fld    dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 1
        je    L_3636
        fcomp    qword ptr [g_0079a080]
        fld    dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 1
        je    L_35ef
        fcomp    qword ptr [g_0079a078]
        fnstsw  ax
        test    ah, 1
        jne    L_36e2
        fld    dword ptr [esp + 4]
        fcomp    qword ptr [g_0079a070]
        fnstsw  ax
        test    ah, 1
        je    L_35d2
        mov    eax, 7
        ret    
L_35d2:
        fld    dword ptr [esp + 4]
        fcomp    qword ptr [g_0079a068]
        fnstsw  ax
        test    ah, 1
        je    L_35e9
        mov    eax, 8
        ret    
L_35e9:
        mov    eax, 9
        ret    
L_35ef:
        fcomp    qword ptr [g_0079a060]
        fnstsw  ax
        test    ah, 1
        je    L_3602
        mov    eax, 0xa
        ret    
L_3602:
        fld    dword ptr [esp + 4]
        fcomp    qword ptr [g_0079a058]
        fnstsw  ax
        test    ah, 1
        je    L_3619
        mov    eax, 0xb
        ret    
L_3619:
        fld    dword ptr [esp + 4]
        fcomp    qword ptr [g_0079a050]
        fnstsw  ax
        test    ah, 1
        je    L_3630
        mov    eax, 0xc
        ret    
L_3630:
        mov    eax, 0xd
        ret    
L_3636:
        fcomp    qword ptr [g_0079a048]
        fld    dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 1
        je    L_36a2
        fcomp    qword ptr [g_0079a040]
        fnstsw  ax
        test    ah, 1
        je    L_365a
        mov    eax, 0xe
        ret    
L_365a:
        fld    dword ptr [esp + 4]
        fcomp    qword ptr [g_0079a038]
        fnstsw  ax
        test    ah, 1
        je    L_3671
        mov    eax, 0xf
        ret    
L_3671:
        fld    dword ptr [esp + 4]
        fcomp    qword ptr [g_0079a030]
        fnstsw  ax
        test    ah, 1
        je    L_3685
        xor    eax, eax
        ret    
L_3685:
        fld    dword ptr [esp + 4]
        fcomp    qword ptr [g_0079a028]
        fnstsw  ax
        test    ah, 1
        je    L_369c
        mov    eax, 1
        ret    
L_369c:
        mov    eax, 2
        ret    
L_36a2:
        fcomp    qword ptr [g_0079a020]
        fnstsw  ax
        test    ah, 1
        je    L_36b5
        mov    eax, 3
        ret    
L_36b5:
        fld    dword ptr [esp + 4]
        fcomp    qword ptr [g_0079a018]
        fnstsw  ax
        test    ah, 1
        je    L_36cc
        mov    eax, 4
        ret    
L_36cc:
        fld    dword ptr [esp + 4]
        fcomp    qword ptr [g_0079a010]
        fnstsw  ax
        test    ah, 1
        mov    eax, 5
        jne    L_36e7
L_36e2:
        mov    eax, 6
L_36e7:
        ret    
    }
}
