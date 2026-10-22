/*
 * FUN_0057f687 (extent 0x57f687-0x580515) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077a1a0;
extern char   g_007b5230;
extern int    g_007b5234;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd268;
extern char   g_007dde2c;
extern int    g_007f25c0;
extern int    g_007f2ba8;
extern int    g_007f2d2c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern int    g_0080da7c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0041f030(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004ce190(void);
extern void __cdecl FUN_004ebcf0(void);
extern void __cdecl FUN_004ebe90(void);
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_00563550(void);
extern void __cdecl FUN_00563c80(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_005670b0(void);
extern void __cdecl FUN_00567100(void);
extern void __cdecl FUN_0057f630(void);
extern void __cdecl FUN_00580570(void);
extern void __cdecl FUN_00580850(void);
extern void __cdecl FUN_00620810(void);
extern void __cdecl FUN_00620850(void);
extern void __cdecl FUN_006472f0(void);
extern void __cdecl FUN_00647450(void);
extern void __cdecl FUN_006474e0(void);
extern void __cdecl FUN_006476a0(void);
extern void __cdecl FUN_006477d0(void);
extern void __cdecl FUN_006478c0(void);
extern void __cdecl FUN_006478f0(void);
extern void __cdecl FUN_00647900(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0057f687(void)
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        sub    esp, 0x10
        inc    eax
        push    ebp
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ebp, dword ptr [eax]
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
        sub    eax, 4
        cmp    esi, 0x74
        mov    dword ptr [g_0080592c], eax
        jne    L_f70f
        mov    ecx, dword ptr [g_007dd268]
        mov    edx, dword ptr [ecx + 0x40ee8]
        mov    ecx, dword ptr [edx + 0x48]
        test    ecx, ecx
        jne    L_f70f
        add    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    esi, eax
        jmp    L_f7a7
L_f70f:
        mov    edi, dword ptr [g_007f2d2c]
        test    edi, edi
        je    L_f784
        push    ebx
        push    esi
        push    ebp
        call    FUN_0057f630
        add    esp, 8
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, edi
        mov    dword ptr [esp + 0x18], eax
        call    FUN_00580570
        mov    ebx, dword ptr [eax]
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, edi
        call    FUN_00580850
        cmp    dword ptr [eax], ebx
        pop    ebx
        jne    L_f765
        mov    ecx, dword ptr [g_007f2d2c]
        push    esi
        call    FUN_006478c0
        push    eax
        call    FUN_005670b0
        add    esp, 4
        cmp    al, 1
        jne    L_f784
L_f765:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, edx
        jmp    L_f7b3
L_f784:
        mov    edx, dword ptr [esi*4 + 0x7b5238]
        push    edx
        call    FUN_00567100
        add    esp, 4
        cmp    al, 1
        jne    L_f7e5
        mov    esi, dword ptr [g_0080592c]
        add    esi, 4
        mov    dword ptr [g_0080592c], esi
L_f7a7:
        mov    eax, dword ptr [g_00805928]
        add    eax, 0xa000
        cmp    esi, eax
L_f7b3:
        jb    L_f7bf
        push    0
        call    FUN_00563060
        add    esp, 4
L_f7bf:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        inc    eax
        mov    dword ptr [esi], 1
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    ebp
        add    esp, 0x10
        ret    
L_f7e5:
        push    ebp
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        mov    eax, dword ptr [esi*4 + 0x7b5238]
        mov    edx, dword ptr [esp + 0xc]
        push    eax
        push    edx
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_f82a
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f82a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f82a:
        mov    eax, dword ptr [esp + 0xc]
        push    0x3f4ccccd
        push    0x3f000000
        push    0x3f800000
        push    0x3f800000
        push    eax
        push    1
        call    FUN_004ebcf0
        mov    edi, eax
        add    esp, 0x18
        test    edi, edi
        je    L_f88a
        push    0
        mov    ecx, edi
        call    FUN_004ebe90
        mov    ecx, dword ptr [g_007f2d2c]
        test    ecx, ecx
        je    L_f88a
        push    esi
        push    edi
        call    FUN_00647450
        mov    eax, dword ptr [g_007f2d2c]
        test    eax, eax
        je    L_f88a
        push    esi
        push    ebp
        mov    edi, eax
        call    FUN_0057f630
        add    esp, 8
        push    eax
        mov    ecx, edi
        call    FUN_006472f0
L_f88a:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_f8b3
        push    0
        call    FUN_00563060
        add    esp, 4
L_f8b3:
        mov    dword ptr [esi], 0
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        mov    esi, dword ptr [g_0080d9b0]
        je    L_f8da
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f8da
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f8da:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, esi
        pop    esi
        mov    dword ptr [g_00805908], edx
        pop    ebp
        add    esp, 0x10
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
        mov    ecx, dword ptr [g_007f2d2c]
        test    ecx, ecx
        je    L_f90f
        call    FUN_006474e0
L_f90f:
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
        mov    ecx, dword ptr [g_007f2d2c]
        test    ecx, ecx
        push    esi
        je    L_f976
        push    ebx
        call    FUN_006478f0
        mov    esi, dword ptr [g_0080592c]
        mov    bl, al
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_f96a
        push    0
        call    FUN_00563060
        add    esp, 4
L_f96a:
        xor    ecx, ecx
        test    bl, bl
        setne    cl
        pop    ebx
        mov    dword ptr [esi], ecx
        jmp    L_f9a5
L_f976:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_f99f
        push    0
        call    FUN_00563060
        add    esp, 4
L_f99f:
        mov    dword ptr [esi], 0
L_f9a5:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
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
        mov    dword ptr [esp + 0x14], ecx
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
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 4], ecx
        fild    dword ptr [esp + 4]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007b5230]
        test    al, al
        fmul    dword ptr [g_0077a1a0]
        fstp    dword ptr [esp + 0xc]
        je    L_fb30
        push    esi
        lea    ecx, [esp + 8]
        call    FUN_00412570
        mov    edx, dword ptr [esp + 4]
        push    0x7814b4
        push    edx
        lea    ecx, [esp + 0x10]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_facf
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_facf
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_facf:
        mov    eax, dword ptr [esp + 4]
        push    0x3f4ccccd
        push    0x3f000000
        push    0x3f800000
        push    0x3f800000
        push    eax
        push    0
        call    FUN_004ebcf0
        add    esp, 0x18
        test    eax, eax
        je    L_fb15
        mov    ecx, dword ptr [g_007f2d2c]
        test    ecx, ecx
        je    L_fb15
        mov    edx, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        call    FUN_006476a0
L_fb15:
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_fb30
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_fb30
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_fb30:
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
        mov    ecx, dword ptr [g_007f2d2c]
        test    ecx, ecx
        push    esi
        je    L_fb96
        push    ebx
        call    FUN_00647900
        mov    esi, dword ptr [g_0080592c]
        mov    bl, al
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_fb8a
        push    0
        call    FUN_00563060
        add    esp, 4
L_fb8a:
        xor    ecx, ecx
        test    bl, bl
        setne    cl
        pop    ebx
        mov    dword ptr [esi], ecx
        jmp    L_fbc5
L_fb96:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_fbbf
        push    0
        call    FUN_00563060
        add    esp, 4
L_fbbf:
        mov    dword ptr [esi], 0
L_fbc5:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
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
        push    ecx
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x2c]
        xor    ecx, 0x85739531
        call    FUN_00559be0
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        sub    esp, 0x30
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
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        mov    dword ptr [esp + 4], ecx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    esi, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    dword ptr [esp + 8], ecx
        mov    eax, dword ptr [eax]
        xor    eax, esi
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        je    L_fd91
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        je    L_fd91
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_fdac
        cmp    eax, 9
        jg    L_fdac
        push    edi
        dec    eax
        push    0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0xc], eax
        call    FUN_0041ee70
        push    1
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_0041f030
        push    1
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    ecx, [esp + 0x18]
        call    FUN_0041f030
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0xc]
        xor    eax, 0x85739531
        xor    esi, esi
        lea    edi, [eax + 0x3584]
L_fd2f:
        mov    al, byte ptr [edi - 0x49]
        test    al, al
        je    L_fd78
        cmp    dword ptr [edi], 0
        je    L_fd78
        mov    edx, dword ptr [esp + 0x10]
        push    0
        lea    ecx, [esp + 0x14]
        call    dword ptr [edx + 0xc]
        mov    ecx, dword ptr [g_007dab44]
        mov    dword ptr [esp + 0x18], 0xffffffec
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        push    1
        lea    eax, [esp + 0x14]
        push    eax
        xor    edx, ecx
        mov    ecx, dword ptr [edx + 0x14]
        push    0x37
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004ce190
L_fd78:
        inc    esi
        add    edi, 0x2038
        cmp    esi, 0xff
        jl    L_fd2f
        lea    ecx, [esp + 0x10]
        call    FUN_0041ef60
        pop    edi
L_fd91:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        add    esp, 0x30
        ret    
L_fdac:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        add    esp, 0x30
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
        sub    esp, 0x2c
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
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007b5230]
        test    al, al
        mov    dword ptr [esp + 4], ecx
        je    L_fed9
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        je    L_fed9
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        je    L_fed9
        push    edi
        push    0
        lea    ecx, [esp + 0x10]
        call    FUN_0041ee70
        push    1
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_0041f030
        mov    ecx, dword ptr [g_007dab44]
        mov    esi, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx]
        xor    edx, esi
        mov    eax, dword ptr [edx + 0xc]
        xor    eax, 0x85739531
        xor    esi, esi
        lea    edi, [eax + 0x3584]
L_fe77:
        mov    al, byte ptr [edi - 0x49]
        test    al, al
        je    L_fec0
        cmp    dword ptr [edi], 0
        je    L_fec0
        mov    eax, dword ptr [esp + 0xc]
        push    0
        lea    ecx, [esp + 0x10]
        call    dword ptr [eax + 0xc]
        mov    edx, dword ptr [g_007dab44]
        push    1
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [esp + 0x1c], 0xffffffec
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x14]
        push    0x38
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004ce190
L_fec0:
        inc    esi
        add    edi, 0x2038
        cmp    esi, 0xff
        jl    L_fe77
        lea    ecx, [esp + 0xc]
        call    FUN_0041ef60
        pop    edi
L_fed9:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        add    esp, 0x2c
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
        sub    esp, 0x30
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    ebx
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        mov    dword ptr [esp + 0xc], ecx
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
        mov    dword ptr [esp + 0x10], ecx
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    edi, dword ptr [eax + 0x14]
        xor    edi, 0x85739531
        je    L_0118
        mov    eax, dword ptr [eax + 0xc]
        xor    eax, 0x85739531
        je    L_0118
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        jne    L_ff9c
        mov    eax, 8
        jmp    L_ffa4
L_ff9c:
        jl    L_fff5
        cmp    eax, 8
        jg    L_fff5
        dec    eax
L_ffa4:
        mov    dword ptr [esp + 0xc], eax
        mov    edx, dword ptr [edx]
        xor    edx, esi
        mov    ebx, dword ptr [edx + 0xc]
        xor    ebx, 0x85739531
        cmp    eax, 8
        jne    L_ffc1
        mov    eax, dword ptr [g_007b5234]
        jmp    L_fff1
L_ffc1:
        mov    eax, dword ptr [ebx + eax*4 + 0x204d00]
        test    eax, eax
        je    L_0012
        mov    ecx, eax
        call    FUN_0041fd80
        test    eax, eax
        je    L_0012
        mov    edx, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [ebx + edx*4 + 0x204d00]
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0x51c]
        mov    ecx, dword ptr [esp + 0x10]
L_fff1:
        cmp    eax, ecx
        jne    L_0012
L_fff5:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ebx
        add    esp, 0x30
        ret    
L_0012:
        push    ebp
        push    0
        lea    ecx, [esp + 0x1c]
        call    FUN_0041ee70
        push    1
        lea    edx, [esp + 0x14]
        push    edx
        lea    ecx, [esp + 0x20]
        call    FUN_0041f030
        push    4
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_0041f030
        xor    edi, edi
        lea    ebp, [ebx + 0x3584]
L_0046:
        mov    al, byte ptr [ebp - 0x49]
        test    al, al
        je    L_00b9
        mov    eax, dword ptr [ebp]
        test    eax, eax
        je    L_00b9
        mov    esi, dword ptr [eax + 0x170]
        test    esi, esi
        je    L_00b9
        mov    eax, dword ptr [g_007f25c0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_00b9
        mov    ecx, dword ptr [esi + 0x4cc]
        cmp    ecx, dword ptr [esp + 0x10]
        jne    L_00b9
        mov    edx, dword ptr [esp + 0x18]
        push    0
        lea    ecx, [esp + 0x1c]
        call    dword ptr [edx + 0xc]
        mov    ecx, dword ptr [g_007dab44]
        mov    dword ptr [esp + 0x20], 0xffffffec
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        push    1
        lea    eax, [esp + 0x1c]
        push    eax
        xor    edx, ecx
        mov    ecx, dword ptr [edx + 0x14]
        push    0x39
        push    edi
        xor    ecx, 0x85739531
        call    FUN_004ce190
L_00b9:
        inc    edi
        add    ebp, 0x2038
        cmp    edi, 0xff
        jl    L_0046
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, 8
        pop    ebp
        jne    L_00e1
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [g_007b5234], eax
        jmp    L_010f
L_00e1:
        mov    ecx, dword ptr [ebx + eax*4 + 0x204d00]
        test    ecx, ecx
        je    L_010f
        call    FUN_0041fd80
        test    eax, eax
        je    L_010f
        mov    ecx, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [ebx + ecx*4 + 0x204d00]
        call    FUN_0041fd80
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 0x51c], edx
L_010f:
        lea    ecx, [esp + 0x14]
        call    FUN_0041ef60
L_0118:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        pop    edi
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    ebx
        add    esp, 0x30
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
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [g_007f2d2c]
        sub    eax, 4
        test    ecx, ecx
        mov    dword ptr [g_0080592c], eax
        je    L_01a4
        push    edx
        push    esi
        call    FUN_006477d0
L_01a4:
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
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        je    L_0215
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_0215
        mov    eax, dword ptr [eax + 0x3b0]
        test    eax, eax
        je    L_0215
        push    0x2d
        mov    ecx, eax
        call    FUN_00559be0
L_0215:
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
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [g_007f2ba8]
        test    ecx, ecx
        push    esi
        mov    esi, dword ptr [ebp + 8]
        push    edi
        je    L_0248
        push    esi
        call    FUN_00620810
L_0248:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        mov    edi, dword ptr [esi + 0x1c]
        je    L_0279
        mov    eax, dword ptr [g_0080da7c]
        mov    ecx, dword ptr [eax]
        cmp    dword ptr [ecx + edi*4], 0
        jne    L_0279
        push    0x7814c8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_0279
        int 3    
L_0279:
        mov    edx, dword ptr [g_0080da7c]
        mov    eax, dword ptr [edx]
        mov    eax, dword ptr [eax + edi*4]
        push    esi
        call    dword ptr [eax + 0x6c]
        mov    ecx, dword ptr [g_007f2ba8]
        add    esp, 4
        test    ecx, ecx
        mov    edi, eax
        je    L_029d
        push    esi
        call    FUN_00620850
L_029d:
        mov    eax, edi
        pop    edi
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        push    0x7814e0
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add    esp, 8
        xor    eax, eax
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
        sub    eax, 4
        dec    ecx
        push    ecx
        push    0x7814ec
        mov    dword ptr [g_0080592c], eax
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 0xc
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
        dec    ecx
        push    ecx
        dec    esi
        push    esi
        push    0x781500
        mov    dword ptr [g_0080592c], eax
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    esp, 0x10
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
        push    ecx
        dec    esi
        push    esi
        push    0x781514
        mov    dword ptr [g_0080592c], eax
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    esp, 0x10
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
        push    ecx
        sub    eax, 4
        push    0x78152c
        mov    dword ptr [g_0080592c], eax
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 0xc
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        push    ecx
        sub    eax, 4
        push    0x78153c
        mov    dword ptr [g_0080592c], eax
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 0xc
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        ret    
    }
}
