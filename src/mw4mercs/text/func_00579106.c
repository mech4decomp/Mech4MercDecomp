/*
 * FUN_00579106 (extent 0x579106-0x579c17) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b304;
extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f24d8;
extern int    g_007f268c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9bc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00558760(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_00578f90(void);
extern void __cdecl FUN_00580be0(void);
extern void __cdecl FUN_00580d50(void);
extern void __cdecl FUN_0059e5c0(void);
extern void __cdecl FUN_0059e640(void);
extern void __cdecl FUN_0059e800(void);
extern void __cdecl FUN_0059e890(void);
extern void __cdecl FUN_0059e930(void);
extern void __cdecl FUN_0059e9b0(void);
extern void __cdecl FUN_0059ea30(void);
extern void __cdecl FUN_0059eab0(void);
extern void __cdecl FUN_0059f9f0(void);
extern void __cdecl FUN_0059fac0(void);
extern void __cdecl FUN_0059fdd0(void);
extern void __cdecl FUN_00618120(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_00579106(void)
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
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        push    esi
        jne    L_9159
        call    FUN_00566c30
        push    eax
        call    FUN_00578f90
        add    esp, 8
        jmp    L_91b4
L_9159:
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        jne    L_917f
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        ret    
L_917f:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_91aa
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        je    L_91aa
        push    0x781314
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_91aa
        int 3    
L_91aa:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x118]
L_91b4:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    edx, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805918]
        sub    edx, 4
        mov    dword ptr [g_0080592c], edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        cmp    ecx, 1
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        sete    al
        push    eax
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x18]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x178]
        call    FUN_00558760
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
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
        sub    esp, 0xc
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x18]
        test    esi, 0xf00000
        push    edi
        mov    dword ptr [esp + 0xc], 0
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], 0
        je    L_92b3
        lea    eax, [esp + 0xc]
        push    eax
        add    esi, 0xff100000
        push    esi
        call    FUN_00580be0
        add    esp, 8
        jmp    L_939b
L_92b3:
        call    FUN_00566c80
        mov    edi, eax
        push    esi
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_939b
        push    esi
        mov    ecx, edi
        call    FUN_0064e540
        mov    ebp, eax
        mov    ecx, ebp
        call    FUN_0064e100
        mov    edi, dword ptr [eax]
        mov    ecx, ebp
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        je    L_939b
L_92ed:
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [edi]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x10]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_9388
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_9388
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_9388
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_9388
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_9388
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_9388
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x1c], esi
        je    L_9377
        test    eax, eax
        je    L_936e
        mov    dword ptr [eax], esi
        mov    eax, dword ptr [esp + 0x10]
L_936e:
        add    eax, 4
        mov    dword ptr [esp + 0x10], eax
        jmp    L_9388
L_9377:
        push    1
        lea    ecx, [esp + 0x20]
        push    ecx
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00580d50
L_9388:
        mov    ecx, ebp
        add    edi, 4
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        jne    L_92ed
L_939b:
        mov    esi, dword ptr [esp + 0xc]
        cmp    esi, dword ptr [esp + 0x10]
        je    L_93be
L_93a5:
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x128]
        mov    eax, dword ptr [esp + 0x10]
        add    esi, 4
        cmp    esi, eax
        jne    L_93a5
        mov    esi, dword ptr [esp + 0xc]
L_93be:
        test    esi, esi
        je    L_93cb
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_93cb:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0xc
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
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_9486
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x24]
        test    edx, edx
        je    L_9486
        push    ecx
        call    dword ptr [g_0076b304]
        mov    edx, dword ptr [g_007dab44]
        add    esp, 4
        push    0
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, dword ptr [g_007dab40]
        push    eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        call    FUN_00618120
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007dab40]
        __emit 0x8B  // 139 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        xor    edx, eax
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    eax, dword ptr [eax + 0x24]
        add    dword ptr [eax + 0x28], ecx
L_9486:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    ecx
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x44]
        je    L_954b
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x24]
        test    ecx, ecx
        je    L_954b
        push    esi
        call    dword ptr [g_0076b304]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [g_007dab40]
        add    esp, 4
        push    edi
        push    eax
        xor    edx, esi
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x24]
        call    FUN_0059f9f0
L_954b:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
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
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x44]
        je    L_9645
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x24]
        test    ecx, ecx
        je    L_9645
        push    esi
        call    dword ptr [g_0076b304]
        mov    edx, dword ptr [g_007dab44]
        add    esp, 4
        lea    ecx, [esp + 8]
        push    ecx
        mov    ecx, dword ptr [g_007dab40]
        push    edi
        push    eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x24]
        call    FUN_0059fac0
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        mov    esi, dword ptr [g_007dab40]
        mov    edx, dword ptr [esp + 8]
        xor    eax, esi
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx + 0x24]
        add    dword ptr [eax + 0x28], edx
L_9645:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        pop    ecx
        ret    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x44]
        je    L_9711
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x2c]
        test    ecx, ecx
        je    L_9711
        push    edi
        call    dword ptr [g_0076b304]
        add    esp, 4
        test    esi, esi
        mov    edi, eax
        jle    L_9711
L_96ef:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x2c]
        push    edi
        call    FUN_0059e5c0
        dec    esi
        jne    L_96ef
L_9711:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    esi, esi
        xor    edx, 0x85739531
        je    L_97b4
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x2c]
        test    edx, edx
        je    L_97b4
        push    ecx
        call    dword ptr [g_0076b304]
        mov    ecx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [ecx]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x44]
        add    esp, 4
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x2c]
        push    eax
        call    FUN_0059e800
        mov    esi, eax
L_97b4:
        mov    edi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    edi, 4
        add    eax, 0xa000
        cmp    edi, eax
        mov    dword ptr [g_0080592c], edi
        jb    L_97db
        push    0
        call    FUN_00563060
        add    esp, 4
L_97db:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [edi], esi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x44]
        je    L_98b1
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x2c]
        test    ecx, ecx
        je    L_98b1
        push    edi
        call    dword ptr [g_0076b304]
        add    esp, 4
        test    esi, esi
        mov    edi, eax
        jle    L_98b1
L_988f:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x2c]
        push    edi
        call    FUN_0059e930
        dec    esi
        jne    L_988f
L_98b1:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    ecx, 0x85739531
        je    L_9920
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x2c]
        test    ecx, ecx
        je    L_9920
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x2c]
        call    FUN_0059ea30
L_9920:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_99bd
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x2c]
        test    edx, edx
        je    L_99bd
        push    ecx
        call    dword ptr [g_0076b304]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        add    esp, 4
        push    eax
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x2c]
        call    FUN_0059e640
L_99bd:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [g_007dab44]
        sub    ecx, 4
        mov    dword ptr [g_0080592c], ecx
        mov    ecx, dword ptr [edx]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x44]
        xor    esi, esi
        xor    edx, 0x85739531
        je    L_9a55
        push    eax
        call    dword ptr [g_0076b304]
        mov    ecx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [ecx]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x44]
        add    esp, 4
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x2c]
        push    eax
        call    FUN_0059e890
        mov    esi, eax
L_9a55:
        mov    edi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    edi, 4
        add    eax, 0xa000
        cmp    edi, eax
        mov    dword ptr [g_0080592c], edi
        jb    L_9a7c
        push    0
        call    FUN_00563060
        add    esp, 4
L_9a7c:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [edi], esi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_9b1d
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x2c]
        test    edx, edx
        je    L_9b1d
        push    ecx
        call    dword ptr [g_0076b304]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        add    esp, 4
        push    eax
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x2c]
        call    FUN_0059e9b0
L_9b1d:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    ecx, 0x85739531
        je    L_9b90
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x2c]
        test    ecx, ecx
        je    L_9b90
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x2c]
        call    FUN_0059eab0
L_9b90:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    ecx, 0x85739531
        je    L_9c00
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x24]
        test    ecx, ecx
        je    L_9c00
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x24]
        call    FUN_0059fdd0
L_9c00:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
    }
}
