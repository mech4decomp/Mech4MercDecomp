/*
 * FUN_0067b706 (extent 0x67b706-0x67c03c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d588;
extern float  g_0076d968;
extern float  g_0076d970;
extern float  g_0077b640;
extern int    g_007b46c4;
extern char   g_007f1f7c;
extern char   g_0080db04;
extern char   g_0080db08;
extern char   g_0080db09;
extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);
extern void __cdecl FUN_0061ad30(void);
extern void __cdecl FUN_0065d780(void);
extern void __cdecl FUN_0065d850(void);
extern void __cdecl FUN_0065d870(void);
extern void __cdecl FUN_0065d8a0(void);
extern void __cdecl FUN_0065d8b0(void);
extern void __cdecl FUN_0067a560(void);
extern void __cdecl FUN_0067a640(void);
extern void __cdecl FUN_0067b1a0(void);
extern void __cdecl FUN_0067be90(void);
extern void __cdecl FUN_00699cc0(void);
extern void __cdecl FUN_00699e10(void);
extern void __cdecl FUN_00699ed0(void);
extern void __cdecl FUN_0058fa80(void);
extern void __cdecl FUN_0058fba0(void);
extern void __cdecl FUN_0058fbb0(void);
extern void __cdecl FUN_0058fbd0(void);
extern void __cdecl FUN_0058fbe0(void);
extern void __cdecl FUN_0058fbf0(void);
extern void __cdecl FUN_0058fc00(void);
extern void __cdecl FUN_0058fdc0(void);
extern void __cdecl FUN_0058ff80(void);
extern void __cdecl FUN_00590110(void);
extern void __cdecl FUN_005902a0(void);
extern void __cdecl FUN_00590310(void);
extern void __cdecl FUN_00590330(void);
extern void __cdecl FUN_00590340(void);
extern void __cdecl FUN_00590360(void);
extern void __cdecl FUN_00590370(void);
extern void __cdecl FUN_00590380(void);
extern void __cdecl FUN_00590390(void);
extern void __cdecl FUN_005903a0(void);
extern void __cdecl FUN_0065d8a0(void);

__declspec(naked) void FUN_0067b706(void)
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
        cmp    dword ptr [esp + 8], 3
        je    L_b71c
        xor    eax, eax
        ret    8
L_b71c:
        push    esi
        call    FUN_0067b1a0
        mov    ecx, eax
        mov    eax, 0xa41a41a5
        mul    ecx
        sub    ecx, edx
        shr    ecx, 1
        add    ecx, edx
        shr    ecx, 5
        mov    esi, ecx
        call    FUN_0067a640
        cmp    dword ptr [eax + 0x14], esi
        pop    esi
        jb    L_b755
        call    FUN_0067a640
        mov    dword ptr [eax + 0x14], 0
        mov    eax, 1
        ret    8
L_b755:
        call    FUN_0067a640
        mov    ecx, dword ptr [eax + 0x14]
        add    eax, 0x14
        inc    ecx
        mov    dword ptr [eax], ecx
        mov    eax, 1
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        jne    L_b77c
        xor    al, al
        ret    
L_b77c:
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d870
        fcomp    qword ptr [g_0076d588]
        fnstsw  ax
        test    ah, 0x40
        je    L_b79b
        mov    eax, 1
        ret    
L_b79b:
        xor    eax, eax
        ret    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        je    L_b7bc
        push    0x3fe00000
        push    0
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d850
L_b7bc:
        ret    
        nop    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        jne    L_b7cc
        xor    al, al
        ret    
L_b7cc:
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d870
        fcomp    qword ptr [g_0076d968]
        fnstsw  ax
        test    ah, 0x40
        je    L_b7eb
        mov    eax, 1
        ret    
L_b7eb:
        xor    eax, eax
        ret    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        je    L_b80c
        push    0x3ff00000
        push    0
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d850
L_b80c:
        ret    
        nop    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        jne    L_b81c
        xor    al, al
        ret    
L_b81c:
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d870
        fcomp    qword ptr [g_0077b640]
        fnstsw  ax
        test    ah, 0x40
        je    L_b83b
        mov    eax, 1
        ret    
L_b83b:
        xor    eax, eax
        ret    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        je    L_b85c
        push    0x40000000
        push    0
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d850
L_b85c:
        ret    
        nop    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        jne    L_b86c
        xor    al, al
        ret    
L_b86c:
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d870
        fcomp    qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 0x40
        je    L_b88b
        mov    eax, 1
        ret    
L_b88b:
        xor    eax, eax
        ret    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        je    L_b8a9
        push    0
        push    0
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d850
L_b8a9:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        je    L_b8c5
        call    FUN_0065d780
        mov    ecx, eax
        jmp    FUN_0065d8a0
L_b8c5:
        xor    al, al
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        je    L_b906
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d8a0
        cmp    al, 1
        jne    L_b8f8
        push    0
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d8b0
        ret    
L_b8f8:
        push    1
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d8b0
L_b906:
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
        mov    cl, byte ptr [g_0080db04]
        xor    eax, eax
        cmp    cl, 1
        sete    al
        ret    
        nop    
        cmp    byte ptr [g_0080db04], 1
        setne    al
        mov    byte ptr [g_0080db04], al
        ret    
        mov    al, byte ptr [g_0080db08]
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
        cmp    byte ptr [g_0080db08], 1
        setne    al
        mov    byte ptr [g_0080db08], al
        ret    
        mov    al, byte ptr [g_0080db09]
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
        cmp    byte ptr [g_0080db09], 1
        setne    al
        mov    byte ptr [g_0080db09], al
        ret    
        call    FUN_0067a560
        test    eax, eax
        jne    L_b97c
        xor    al, al
        ret    
L_b97c:
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_0058fba0
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a560
        test    eax, eax
        je    L_b9a5
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_0058fa80
L_b9a5:
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
        call    FUN_0067a560
        test    eax, eax
        jne    L_b9bc
        xor    al, al
        ret    
L_b9bc:
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_0058fbd0
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a560
        test    eax, eax
        je    L_b9e5
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_0058fbb0
L_b9e5:
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
        call    FUN_0067a560
        test    eax, eax
        jne    L_b9fc
        xor    al, al
        ret    
L_b9fc:
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_00590330
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a560
        test    eax, eax
        je    L_ba25
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_00590310
L_ba25:
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
        call    FUN_0067a560
        test    eax, eax
        jne    L_ba3c
        xor    al, al
        ret    
L_ba3c:
        call    FUN_0067a560
        mov    eax, dword ptr [eax + 0x8d8]
        and    eax, 1
        dec    al
        neg    al
        sbb    eax, eax
        inc    eax
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
        call    FUN_0067a560
        test    eax, eax
        je    L_ba78
        call    FUN_0067a560
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        jmp    dword ptr [edx + 0xe4]
L_ba78:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a560
        test    eax, eax
        jne    L_ba8c
        xor    al, al
        ret    
L_ba8c:
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_00590360
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a560
        test    eax, eax
        je    L_bab5
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_00590340
L_bab5:
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
        call    FUN_0067a560
        test    eax, eax
        je    L_bad5
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_0058fbe0
L_bad5:
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
        call    FUN_0067a560
        test    eax, eax
        je    L_baf5
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_0058fbf0
L_baf5:
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
        call    FUN_0067a560
        test    eax, eax
        je    L_bb15
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_0058fc00
L_bb15:
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
        call    FUN_0067a560
        test    eax, eax
        je    L_bb35
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_0058fdc0
L_bb35:
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
        call    FUN_0067a560
        test    eax, eax
        je    L_bb55
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_0058ff80
L_bb55:
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
        call    FUN_0067a560
        test    eax, eax
        je    L_bb75
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_00590110
L_bb75:
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
        call    FUN_0067a560
        test    eax, eax
        je    L_bb95
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_005902a0
L_bb95:
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
        call    FUN_0067a560
        test    eax, eax
        je    L_bbb5
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_00590370
L_bbb5:
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
        call    FUN_0067a560
        test    eax, eax
        je    L_bbd5
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_00590380
L_bbd5:
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
        call    FUN_0067a560
        test    eax, eax
        je    L_bbf5
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_005903a0
L_bbf5:
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
        call    FUN_0067a560
        test    eax, eax
        je    L_bc15
        call    FUN_0067a560
        mov    ecx, eax
        jmp    FUN_00590390
L_bc15:
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
        call    FUN_0067a640
        test    eax, eax
        jne    L_bc2c
        xor    al, al
        ret    
L_bc2c:
        call    FUN_0067a640
        mov    al, byte ptr [eax + 0x18]
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
        call    FUN_0067a640
        test    eax, eax
        je    L_bc67
        call    FUN_0067a640
        cmp    byte ptr [eax + 0x18], 1
        jne    L_bc5e
        call    FUN_0067a640
        mov    byte ptr [eax + 0x18], 0
        ret    
L_bc5e:
        call    FUN_0067a640
        mov    byte ptr [eax + 0x18], 1
L_bc67:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x18]
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
        call    FUN_0067a560
        test    eax, eax
        jne    L_bc8c
        xor    al, al
        ret    
L_bc8c:
        call    FUN_0067a560
        mov    al, byte ptr [eax + 0x894]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a560
        test    eax, eax
        je    L_bcbf
        call    FUN_0067a560
        mov    cl, byte ptr [eax + 0x894]
        test    cl, cl
        sete    cl
        mov    byte ptr [eax + 0x894], cl
L_bcbf:
        ret    
        mov    al, byte ptr [g_007f1f7c]
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
        mov    al, byte ptr [g_007f1f7c]
        test    al, al
        sete    al
        mov    byte ptr [g_007f1f7c], al
        ret    
        call    FUN_0067a560
        test    eax, eax
        jne    L_bcec
        xor    al, al
        ret    
L_bcec:
        call    FUN_0067a560
        mov    ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        jne    L_bcfe
        xor    al, al
        ret    
L_bcfe:
        call    FUN_0067a560
        mov    ecx, dword ptr [g_007b46c4]
        xor    eax, eax
        test    ecx, ecx
        sete    al
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
        call    FUN_0067a560
        test    eax, eax
        je    L_bd47
        call    FUN_0067a560
        mov    ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        je    L_bd47
        call    FUN_0067a560
        mov    dword ptr [g_007b46c4], 0
L_bd47:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a560
        test    eax, eax
        jne    L_bd5c
        xor    al, al
        ret    
L_bd5c:
        call    FUN_0067a560
        mov    ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        jne    L_bd6e
        xor    al, al
        ret    
L_bd6e:
        call    FUN_0067a560
        mov    ecx, dword ptr [g_007b46c4]
        xor    eax, eax
        cmp    ecx, 1
        sete    al
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
        call    FUN_0067a560
        test    eax, eax
        je    L_bdb7
        call    FUN_0067a560
        mov    ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        je    L_bdb7
        call    FUN_0067a560
        mov    dword ptr [g_007b46c4], 1
L_bdb7:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a560
        test    eax, eax
        jne    L_bdcc
        xor    al, al
        ret    
L_bdcc:
        call    FUN_0067a560
        mov    ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        jne    L_bdde
        xor    al, al
        ret    
L_bdde:
        call    FUN_0067a560
        mov    ecx, dword ptr [g_007b46c4]
        xor    eax, eax
        cmp    ecx, 2
        sete    al
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
        call    FUN_0067a560
        test    eax, eax
        je    L_be27
        call    FUN_0067a560
        mov    ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        je    L_be27
        call    FUN_0067a560
        mov    dword ptr [g_007b46c4], 2
L_be27:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00699cc0
        test    eax, eax
        je    L_be4a
        call    FUN_00699cc0
        mov    ecx, eax
        call    FUN_00699ed0
        cmp    al, 1
        jne    L_be4a
        ret    
L_be4a:
        xor    al, al
        ret    
        nop    
        nop    
        nop    
        call    FUN_00699cc0
        test    eax, eax
        je    L_be86
        call    FUN_00699cc0
        mov    ecx, eax
        call    FUN_00699ed0
        cmp    al, 1
        jne    L_be78
        push    0
        call    FUN_00699cc0
        mov    ecx, eax
        call    FUN_00699e10
        ret    
L_be78:
        push    1
        call    FUN_00699cc0
        mov    ecx, eax
        call    FUN_00699e10
L_be86:
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    esi
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        cmp    al, 1
        jne    L_beb7
        push    0
        push    esi
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad30
        pop    esi
        ret    
L_beb7:
        push    1
        push    esi
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad30
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
        push    1
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        ret    
        nop    
        push    1
        call    FUN_0067be90
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    2
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        ret    
        nop    
        push    2
        call    FUN_0067be90
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    4
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        ret    
        nop    
        push    4
        call    FUN_0067be90
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    8
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        ret    
        nop    
        push    8
        call    FUN_0067be90
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x10
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        ret    
        nop    
        push    0x10
        call    FUN_0067be90
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x20
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        ret    
        nop    
        push    0x20
        call    FUN_0067be90
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x40
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        ret    
        nop    
        push    0x40
        call    FUN_0067be90
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x80
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
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
        push    0x80
        call    FUN_0067be90
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        push    0x100
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
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
        push    0x100
        call    FUN_0067be90
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        push    0x8000
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
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
        push    0x8000
        call    FUN_0067be90
        pop    ecx
        ret    
    }
}
