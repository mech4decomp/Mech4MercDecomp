/*
 * FUN_00570336 (extent 0x570336-0x571729) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f1fb8;
extern int    g_007f2114;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern int    g_0080d9bc;
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00545880(void);
extern void __cdecl FUN_00559b30(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_00570320(void);
extern void __cdecl FUN_00595ae0(void);
extern void __cdecl FUN_00597780(void);
extern void __cdecl FUN_00597ac0(void);
extern void __cdecl FUN_005b7d90(void);
extern void __cdecl FUN_005b7da0(void);
extern void __cdecl FUN_005b7dd0(void);
extern void __cdecl FUN_005b7e00(void);
extern void __cdecl FUN_005b7e20(void);
extern void __cdecl FUN_005b7e40(void);
extern void __cdecl FUN_005b7e50(void);
extern void __cdecl FUN_005b7ec0(void);
extern void __cdecl FUN_005b8080(void);
extern void __cdecl FUN_005b8150(void);
extern void __cdecl FUN_005e1e70(void);
extern void __cdecl FUN_005e1f10(void);
extern void __cdecl FUN_00601c40(void);
extern void __cdecl FUN_00602450(void);
extern void __cdecl FUN_00602650(void);
extern void __cdecl FUN_00602790(void);
extern void __cdecl FUN_00602890(void);
extern void __cdecl FUN_00602980(void);
extern void __cdecl FUN_00602bc0(void);
extern void __cdecl FUN_00615f60(void);
extern void __cdecl FUN_00618ae0(void);
extern void __cdecl FUN_00618f90(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_00570336(void)
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
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        lea    eax, [ecx + 0x44]
        mov    ecx, dword ptr [eax]
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_03b3
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x34]
        test    ecx, ecx
        je    L_03b3
        push    ecx
        mov    ecx, esp
        push    edx
        call    FUN_00412570
        call    FUN_00570320
        mov    ecx, dword ptr [eax + 0x34]
        call    FUN_00595ae0
        test    eax, eax
        je    L_03b3
        mov    edi, dword ptr [eax + 0x50]
L_03b3:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_03dc
        push    0
        call    FUN_00563060
        add    esp, 4
L_03dc:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
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
        push    ebx
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        sub    ecx, 4
        mov    dword ptr [g_0080592c], ecx
        mov    ecx, dword ptr [g_007f1fb8]
        xor    bl, bl
        test    ecx, ecx
        je    L_0450
        push    ecx
        mov    ecx, esp
        push    eax
        call    FUN_00412570
        mov    ecx, dword ptr [g_007f1fb8]
        call    FUN_00597780
        mov    bl, al
L_0450:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_0479
        push    0
        call    FUN_00563060
        add    esp, 4
L_0479:
        xor    eax, eax
        test    bl, bl
        setne    al
        mov    dword ptr [esi], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        ret    
        nop    
        nop    
        push    ecx
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
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
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
        mov    byte ptr [esp + 4], al
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        je    L_0530
        mov    ecx, dword ptr [esp + 4]
        push    ecx
        push    ecx
        mov    ecx, esp
        push    esi
        call    FUN_00412570
        call    FUN_00570320
        mov    ecx, eax
        call    FUN_00618ae0
L_0530:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        pop    ecx
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
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        sub    ecx, 4
        mov    dword ptr [g_0080592c], ecx
        mov    ecx, dword ptr [g_007f1fb8]
        xor    edi, edi
        test    ecx, ecx
        je    L_05a0
        push    ecx
        mov    ecx, esp
        push    eax
        call    FUN_00412570
        mov    ecx, dword ptr [g_007f1fb8]
        call    FUN_00597ac0
        mov    edi, eax
L_05a0:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_05c9
        push    0
        call    FUN_00563060
        add    esp, 4
L_05c9:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
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
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [eax]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        je    L_0670
        push    ecx
        push    ecx
        mov    ecx, esp
        push    esi
        call    FUN_00412570
        call    FUN_00570320
        mov    ecx, eax
        call    FUN_00618f90
L_0670:
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
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    ecx, eax
        call    FUN_005e1e70
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    ebx
        inc    eax
        push    esi
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
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    bl, byte ptr [eax + 0x41c]
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_0776
        push    0
        call    FUN_00563060
        add    esp, 4
L_0776:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        xor    ecx, ecx
        test    bl, bl
        setne    cl
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [esi], ecx
        pop    esi
        pop    ebx
        ret    
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
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        jne    L_0806
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
L_0806:
        mov    ecx, esi
        call    FUN_005e1e70
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x2c]
        add    eax, 0x2c
        xor    ecx, 0x85739531
        je    L_0839
        mov    ecx, dword ptr [eax]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_00559b30
L_0839:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
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
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        test    eax, eax
        jne    L_08c2
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
L_08c2:
        mov    edx, dword ptr [eax + 0x10]
        and    edx, 0xff7fffff
        mov    ecx, eax
        mov    dword ptr [eax + 0x10], edx
        mov    byte ptr [eax + 0x41c], 0
        call    FUN_005e1f10
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
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
        mov    eax, dword ptr [eax]
        xor    eax, edx
        mov    ecx, dword ptr [eax + 0x10]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        test    eax, eax
        jne    L_098f
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
L_098f:
        mov    dword ptr [eax + 0x420], edi
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        sub    esp, 0x18
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
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 0xc], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 4], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [g_007dab40]
        mov    dword ptr [esp + 8], ecx
        xor    eax, edx
        mov    ecx, dword ptr [eax + 0x10]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    ecx, dword ptr [g_007dab44]
        fild    dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0xd8]
        xor    edx, ecx
        mov    ecx, dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax + 0x8c]
        xor    ecx, 0x85739531
        push    ecx
        fstp    dword ptr [esp]
        fild    dword ptr [esp + 0xc]
        add    eax, 0x80
        push    ecx
        mov    dword ptr [esp + 0x18], edx
        mov    edx, dword ptr [eax + 0x1c]
        fstp    dword ptr [esp]
        fild    dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x1c], edx
        mov    eax, dword ptr [eax + 0x2c]
        push    ecx
        fstp    dword ptr [esp]
        lea    edx, [esp + 0x1c]
        mov    dword ptr [esp + 0x24], eax
        push    edx
        call    FUN_00602650
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        add    esp, 0x18
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x14
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
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 8], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [g_007dab40]
        mov    dword ptr [esp + 4], ecx
        xor    eax, edx
        mov    ecx, dword ptr [eax + 0x10]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    ecx, dword ptr [g_007dab44]
        fild    dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0xd8]
        xor    edx, esi
        mov    ecx, dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax + 0x8c]
        xor    ecx, 0x85739531
        add    eax, 0x80
        push    ecx
        mov    dword ptr [esp + 0x10], edx
        mov    edx, dword ptr [eax + 0x1c]
        fstp    dword ptr [esp]
        fild    dword ptr [esp + 0xc]
        mov    dword ptr [esp + 0x14], edx
        mov    eax, dword ptr [eax + 0x2c]
        push    ecx
        lea    edx, [esp + 0x14]
        fstp    dword ptr [esp]
        push    edx
        mov    dword ptr [esp + 0x20], eax
        call    FUN_00602890
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        add    esp, 0x14
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
        sub    esp, 0x14
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
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 8], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [g_007dab40]
        mov    dword ptr [esp + 4], ecx
        xor    eax, edx
        mov    ecx, dword ptr [eax + 0x10]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    ecx, dword ptr [g_007dab44]
        fild    dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0xd8]
        xor    edx, esi
        mov    ecx, dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax + 0x8c]
        xor    ecx, 0x85739531
        add    eax, 0x80
        push    ecx
        mov    dword ptr [esp + 0x10], edx
        mov    edx, dword ptr [eax + 0x1c]
        fstp    dword ptr [esp]
        fild    dword ptr [esp + 0xc]
        mov    dword ptr [esp + 0x14], edx
        mov    eax, dword ptr [eax + 0x2c]
        push    ecx
        lea    edx, [esp + 0x14]
        fstp    dword ptr [esp]
        push    edx
        mov    dword ptr [esp + 0x20], eax
        call    FUN_00602980
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        add    esp, 0x14
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
        sub    esp, 0x18
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
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 0xc], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 4], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [g_007dab40]
        mov    dword ptr [esp + 8], ecx
        xor    eax, edx
        mov    ecx, dword ptr [eax + 0x10]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    ecx, dword ptr [g_007dab44]
        fild    dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0xd8]
        xor    edx, ecx
        mov    ecx, dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax + 0x8c]
        xor    ecx, 0x85739531
        push    ecx
        fstp    dword ptr [esp]
        fild    dword ptr [esp + 0xc]
        add    eax, 0x80
        push    ecx
        mov    dword ptr [esp + 0x18], edx
        mov    edx, dword ptr [eax + 0x1c]
        fstp    dword ptr [esp]
        fild    dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x1c], edx
        mov    eax, dword ptr [eax + 0x2c]
        push    ecx
        fstp    dword ptr [esp]
        lea    edx, [esp + 0x1c]
        mov    dword ptr [esp + 0x24], eax
        push    edx
        call    FUN_00602790
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        add    esp, 0x18
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007f2114]
        call    FUN_005b8150
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
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    ecx, eax
        call    FUN_005b7e00
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
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    ecx, eax
        call    FUN_005b7e20
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
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
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_1010
        mov    ecx, esi
        call    FUN_005b7d90
        test    al, al
        je    L_1010
        push    0x78069c
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_1010
        int 3    
L_1010:
        mov    ecx, esi
        call    FUN_005b7dd0
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    ecx
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax + 1]
        push    ebp
        xor    ecx, dword ptr [g_007dab40]
        push    esi
        mov    esi, dword ptr [ecx + 0x10]
        xor    esi, 0x85739531
        inc    eax
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        mov    dword ptr [esp + 0xc], ecx
        xor    eax, ebp
        mov    edi, dword ptr [eax + 0x20]
        fild    dword ptr [esp + 0xc]
        push    ecx
        xor    edi, 0x85739531
        mov    ecx, edi
        fstp    dword ptr [esp]
        call    FUN_00602bc0
        mov    eax, dword ptr [esi + 0x4c]
        test    eax, eax
        jle    L_10de
        mov    esi, dword ptr [esi + 0x48]
        push    ebx
        add    esi, 0x14
        mov    ebp, eax
L_10b0:
        mov    ecx, dword ptr [esi]
        call    FUN_0041fd80
        mov    ebx, eax
        mov    ecx, ebx
        call    FUN_005b7d90
        test    al, al
        jne    L_10d7
        mov    ecx, ebx
        call    FUN_005b7e40
        cmp    eax, 2
        jne    L_10d7
        mov    ecx, ebx
        call    FUN_005b7dd0
L_10d7:
        add    esi, 0x1c
        dec    ebp
        jne    L_10b0
        pop    ebx
L_10de:
        push    0
        mov    ecx, edi
        call    FUN_00602450
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ebp
        pop    ecx
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
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        mov    esi, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    esi, dword ptr [eax + 0x20]
        mov    dword ptr [esp + 8], ecx
        push    ecx
        fild    dword ptr [esp + 0xc]
        xor    esi, 0x85739531
        mov    ecx, esi
        fstp    dword ptr [esp]
        call    FUN_00602bc0
        cmp    edi, 1
        sete    cl
        push    ecx
        mov    ecx, esi
        call    FUN_00602450
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        pop    ecx
        ret    
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
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        call    FUN_00545880
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
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
        mov    esi, dword ptr [eax + 0x20]
        xor    esi, 0x85739531
        dec    ecx
        push    ecx
        mov    ecx, esi
        call    FUN_00601c40
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        mov    edx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        xor    edx, 0x85739531
        je    L_12d2
        mov    eax, dword ptr [eax + 0x14]
        xor    eax, 0x85739531
        cmp    byte ptr [eax + 0x17fc], 1
        jne    L_1293
        mov    eax, dword ptr [ecx + 0x50]
        jmp    L_1296
L_1293:
        mov    eax, dword ptr [ecx + 0x54]
L_1296:
        test    eax, eax
        je    L_12d2
        mov    edx, dword ptr [eax + 0x38]
        test    edx, edx
        je    L_12d2
        mov    eax, dword ptr [eax + 0x40]
        test    eax, eax
        jle    L_12d2
        mov    edx, dword ptr [esi + 0x226c]
        dec    eax
        cmp    edx, eax
        jl    L_12d2
        mov    edx, dword ptr [ecx]
        push    0
        call    dword ptr [edx + 0x2c]
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
L_12d2:
        call    FUN_00545880
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x44]
        je    L_1318
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        call    FUN_00615f60
L_1318:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        push    ebp
        mov    ebp, esp
        push    ecx
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
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        cmp    esi, -2
        mov    dword ptr [ebp - 4], ecx
        mov    dword ptr [g_0080592c], eax
        jne    L_13a2
        mov    ecx, dword ptr [g_007f2114]
        push    0
        push    0
        push    0
        call    FUN_005b8080
        jmp    L_13f7
L_13a2:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_13e7
        mov    ecx, esi
        call    FUN_005b7d90
        test    al, al
        jne    L_13e7
        push    0x7806bc
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_13e7
        int 3    
L_13e7:
        fild    dword ptr [ebp - 4]
        sub    esp, 8
        mov    ecx, esi
        fstp    qword ptr [esp]
        call    FUN_005b7ec0
L_13f7:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        mov    esp, ebp
        pop    ebp
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
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
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_1490
        mov    ecx, esi
        call    FUN_005b7d90
        test    al, al
        je    L_1490
        push    0x7806f0
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_1490
        int 3    
L_1490:
        mov    ecx, esi
        call    FUN_005b7da0
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    ecx
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax + 1]
        push    ebp
        xor    ecx, dword ptr [g_007dab40]
        push    esi
        mov    esi, dword ptr [ecx + 0x10]
        xor    esi, 0x85739531
        inc    eax
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        mov    dword ptr [esp + 0xc], ecx
        xor    eax, ebp
        mov    edi, dword ptr [eax + 0x20]
        fild    dword ptr [esp + 0xc]
        push    ecx
        xor    edi, 0x85739531
        mov    ecx, edi
        fstp    dword ptr [esp]
        call    FUN_00602bc0
        mov    eax, dword ptr [esi + 0x4c]
        test    eax, eax
        jle    L_155e
        mov    esi, dword ptr [esi + 0x48]
        push    ebx
        add    esi, 0x14
        mov    ebp, eax
L_1530:
        mov    ecx, dword ptr [esi]
        call    FUN_0041fd80
        mov    ebx, eax
        mov    ecx, ebx
        call    FUN_005b7d90
        test    al, al
        jne    L_1557
        mov    ecx, ebx
        call    FUN_005b7e40
        cmp    eax, 2
        jne    L_1557
        mov    ecx, ebx
        call    FUN_005b7da0
L_1557:
        add    esi, 0x1c
        dec    ebp
        jne    L_1530
        pop    ebx
L_155e:
        push    1
        mov    ecx, edi
        call    FUN_00602450
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ebp
        pop    ecx
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
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    ecx, eax
        call    FUN_005b7e40
        mov    esi, dword ptr [g_0080592c]
        mov    edi, eax
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_1609
        push    0
        call    FUN_00563060
        add    esp, 4
L_1609:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
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
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    ebx
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        mov    ebx, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, ebx
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        cmp    eax, -1
        jne    L_16af
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, eax
L_169b:
        jb    L_16a7
        push    0
        call    FUN_00563060
        add    esp, 4
L_16a7:
        mov    dword ptr [esi], 0
        jmp    L_170d
L_16af:
        test    eax, eax
        jne    L_16d2
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, ecx
        jmp    L_169b
L_16d2:
        mov    ecx, eax
        call    FUN_005b7e50
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    bl, al
        mov    dword ptr [g_0080592c], esi
        jb    L_1704
        push    0
        call    FUN_00563060
        add    esp, 4
L_1704:
        xor    eax, eax
        test    bl, bl
        setne    al
        mov    dword ptr [esi], eax
L_170d:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        ret    
    }
}
