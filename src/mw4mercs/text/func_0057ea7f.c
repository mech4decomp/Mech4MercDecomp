/*
 * FUN_0057ea7f (extent 0x57ea7f-0x58022c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077a1a0;
extern float  g_0077f674;
extern char   g_007b5230;
extern int    g_007b5234;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd268;
extern char   g_007dde2c;
extern int    g_007f25c0;
extern int    g_007f2d2c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern int    g_0080d9bc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0041f030(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004ce190(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004ebcf0(void);
extern void __cdecl FUN_004ebe90(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_00566690(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_005670b0(void);
extern void __cdecl FUN_00567100(void);
extern void __cdecl FUN_0057f630(void);
extern void __cdecl FUN_00580540(void);
extern void __cdecl FUN_00580570(void);
extern void __cdecl FUN_005805a0(void);
extern void __cdecl FUN_00580630(void);
extern void __cdecl FUN_00580850(void);
extern void __cdecl FUN_005809d0(void);
extern void __cdecl FUN_00581300(void);
extern void __cdecl FUN_00584e30(void);
extern void __cdecl FUN_00628c80(void);
extern void __cdecl FUN_00628cc0(void);
extern void __cdecl FUN_00629290(void);
extern void __cdecl FUN_0063b370(void);
extern void __cdecl FUN_006472f0(void);
extern void __cdecl FUN_00647450(void);
extern void __cdecl FUN_006474e0(void);
extern void __cdecl FUN_006476a0(void);
extern void __cdecl FUN_006477d0(void);
extern void __cdecl FUN_006478c0(void);
extern void __cdecl FUN_006478f0(void);
extern void __cdecl FUN_00647900(void);
extern void __cdecl FUN_0064d3d0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_00666250(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_007047f0(void);

__declspec(naked) void FUN_0057ea7f(void)
{
    __asm {
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
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        add    esp, 4
        test    al, al
        je    L_ead5
        test    esi, esi
        jne    L_ead5
        push    0x78147c
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_ead5
        int 3    
L_ead5:
        mov    ecx, esi
        call    FUN_00584e30
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
        sub    esp, 0x10
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        push    ebx
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
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        cmp    ecx, 1
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        sete    bl
        xor    eax, ecx
        mov    esi, dword ptr [eax + 0x40]
        mov    byte ptr [esp + 0x10], bl
        mov    ecx, dword ptr [esp + 0x10]
        xor    esi, 0x85739531
        push    ecx
        mov    ecx, esi
        call    FUN_00628cc0
        test    bl, bl
        je    L_ec85
        push    0x13
        mov    ecx, esi
        call    FUN_00629290
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    esi, eax
        mov    dword ptr [esi + 0x54], edx
        cmp    dword ptr [esp + 0x18], 1
        sete    al
        mov    byte ptr [esi + 0x5c], al
        xor    eax, eax
        test    edi, edi
        mov    dword ptr [esi + 0x50], ebp
        mov    dword ptr [esi + 0x34], ecx
        je    L_ec82
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        push    edi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
L_ec82:
        mov    dword ptr [esi + 0x58], eax
L_ec85:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        pop    esi
        inc    eax
        pop    ebp
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ebx
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
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        push    ebx
        inc    eax
        push    ebp
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 0x14], edx
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
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        cmp    ecx, 1
        movsx    ecx, byte ptr [eax]
        sete    bl
        inc    eax
        mov    byte ptr [esp + 0x10], bl
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ebp, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    esi, dword ptr [eax + 0x40]
        mov    ecx, dword ptr [esp + 0x10]
        xor    esi, 0x85739531
        push    ecx
        mov    ecx, esi
        call    FUN_00628c80
        test    bl, bl
        je    L_ee18
        push    0x14
        mov    ecx, esi
        call    FUN_00629290
        fild    dword ptr [esp + 0x14]
        push    ebp
        push    edi
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fild    dword ptr [esp + 0x28]
        fstp    dword ptr [esp]
        push    ecx
        fild    dword ptr [esp + 0x30]
        mov    ecx, eax
        fmul    dword ptr [g_0077f674]
        fstp    dword ptr [esp]
        call    FUN_00666250
L_ee18:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        pop    edi
        pop    esi
        inc    eax
        pop    ebp
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    ebx
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
        nop    
        sub    esp, 0x14
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        push    ebx
        inc    eax
        push    ebp
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        add    eax, 4
        push    2
        push    ecx
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064d3d0
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 8
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ebp, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        cmp    ecx, 1
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        sete    bl
        xor    eax, ecx
        mov    esi, dword ptr [eax + 0x40]
        mov    byte ptr [esp + 0x10], bl
        mov    ecx, dword ptr [esp + 0x10]
        xor    esi, 0x85739531
        push    ecx
        mov    ecx, esi
        call    FUN_00628c80
        test    bl, bl
        je    L_ef5e
        push    0x14
        mov    ecx, esi
        call    FUN_00629290
        fild    dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x1c], 0x3f666666
        mov    dword ptr [eax + 0x34], ebp
        fmul    dword ptr [g_0077f674]
        fstp    dword ptr [eax + 0x50]
        fild    dword ptr [edi]
        fild    dword ptr [edi + 4]
        fstp    dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x1c]
        mov    dword ptr [eax + 0x18], edx
        fstp    dword ptr [eax + 0x14]
L_ef5e:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        pop    esi
        inc    eax
        pop    ebp
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ebx
        add    esp, 0x14
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        push    ebx
        inc    eax
        push    ebp
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
        mov    ebx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
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
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [esi]
        shl    eax, 8
        add    eax, edi
        shl    eax, 8
        add    eax, ebx
        shl    eax, 8
        add    eax, ebp
        mov    edi, eax
        mov    eax, dword ptr [g_00805928]
        add    eax, 0xa000
        cmp    esi, eax
        jb    L_f048
        push    0
        call    FUN_00563060
        add    esp, 4
L_f048:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        pop    edi
        pop    esi
        inc    eax
        pop    ebp
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x70
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        sub    ecx, 4
        cmp    eax, 1
        mov    dword ptr [g_0080592c], ecx
        mov    dword ptr [esp + 0xc], eax
        jge    L_f0dc
        mov    dword ptr [esp + 0xc], 1
L_f0dc:
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea    edx, [esp + 0x13]
        push    edx
        lea    ecx, [esp + 0x34]
        xor    bl, bl
        call    FUN_00580540
        lea    eax, [esp + 0x30]
        push    0
        push    eax
        call    FUN_0063b370
        mov    ecx, dword ptr [esp + 0x38]
        add    esp, 8
        test    eax, eax
        jle    L_f10a
        lea    ecx, [ecx + eax*4]
L_f10a:
        mov    eax, dword ptr [esp + 0x34]
        push    ecx
        push    eax
        push    eax
        call    FUN_005809d0
        mov    edx, dword ptr [esp + 0x3c]
        mov    dword ptr [esp + 0x40], eax
        sub    eax, edx
        add    esp, 0xc
        sar    eax, 2
        mov    esi, eax
        je    L_f304
L_f12e:
        call    FUN_007047f0
        xor    edx, edx
        div    esi
        mov    ebp, dword ptr [esp + 0x30]
        test    edx, edx
        jle    L_f143
        lea    ebp, [ebp + edx*4]
L_f143:
        mov    ecx, dword ptr [ebp]
        mov    eax, dword ptr [ecx + 0x2fc]
        test    eax, eax
        je    L_f2cb
        mov    edx, dword ptr [eax + 0x170]
        test    edx, edx
        je    L_f2cb
        mov    edx, dword ptr [edx + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_f2cb
        mov    edx, dword ptr [eax + 0x30c]
        test    edx, edx
        je    L_f2cb
        mov    ecx, dword ptr [esp + 0x20]
        mov    esi, dword ptr [eax + 0x30c]
        push    ecx
        lea    ecx, [esp + 0x18]
        call    FUN_00412570
        mov    edi, dword ptr [esi + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    edi
        push    edx
        lea    ecx, [esp + 0x2c]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        lea    ecx, [esp + 0x24]
        call    FUN_0040d9b0
        mov    eax, dword ptr [esp + 0x14]
        push    0x7814a4
        push    eax
        lea    ecx, [esp + 0x30]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        lea    ecx, [esp + 0x28]
        call    FUN_0040d9b0
        push    0x77471c
        lea    ecx, [esp + 0x1c]
        call    FUN_00412570
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        lea    ecx, [esp + 0x34]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412740
        lea    ecx, [esp + 0x2c]
        call    FUN_0040d9b0
        mov    eax, dword ptr [esp + 0x18]
        push    0
        push    eax
        lea    ecx, [esp + 0x44]
        call    FUN_004d2000
        mov    eax, dword ptr [esp + 0x78]
        test    eax, eax
        je    L_f28c
        mov    eax, dword ptr [esp + 0x58]
        test    eax, eax
        jbe    L_f28c
        mov    ecx, dword ptr [esp + 0x14]
        push    0x3f4ccccd
        push    0x3f000000
        push    0x3f800000
        push    0x3f800000
        push    ecx
        push    1
        call    FUN_004ebcf0
        mov    esi, eax
        add    esp, 0x18
        test    esi, esi
        je    L_f280
        push    0
        mov    ecx, esi
        call    FUN_004ebe90
        mov    ebx, dword ptr [g_007f2d2c]
        test    ebx, ebx
        je    L_f280
        push    edi
        call    FUN_00566690
        add    esp, 4
        push    eax
        push    esi
        mov    ecx, ebx
        call    FUN_00647450
L_f280:
        dec    dword ptr [esp + 0x1c]
        mov    bl, 1
        je    L_f36f
L_f28c:
        lea    ecx, [esp + 0x3c]
        call    FUN_004d21c0
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_f2b0
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f2b0
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f2b0:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_f2cb
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f2cb
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f2cb:
        mov    eax, dword ptr [esp + 0x34]
        lea    ecx, [ebp + 4]
        cmp    ecx, eax
        je    L_f2ec
        mov    edx, dword ptr [esp + 0x2c]
        push    0
        push    edx
        push    ebp
        push    eax
        push    ecx
        call    FUN_00581300
        mov    eax, dword ptr [esp + 0x48]
        add    esp, 0x14
L_f2ec:
        mov    ecx, dword ptr [esp + 0x30]
        sub    eax, 4
        mov    dword ptr [esp + 0x34], eax
        sub    eax, ecx
        mov    esi, eax
        sar    esi, 2
        jne    L_f12e
L_f304:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_f32b
        push    0
        call    FUN_00563060
        add    esp, 4
L_f32b:
        xor    ecx, ecx
        test    bl, bl
        setne    cl
        mov    dword ptr [esi], ecx
        mov    eax, dword ptr [esp + 0x30]
        mov    edx, dword ptr [esp + 0x38]
        mov    esi, dword ptr [g_0080d9b0]
        sub    edx, eax
        sar    edx, 2
        push    edx
        push    eax
        call    FUN_00580630
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    esp, 8
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, esi
        pop    esi
        pop    ebp
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        add    esp, 0x70
        ret    
L_f36f:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_f396
        push    0
        call    FUN_00563060
        add    esp, 4
L_f396:
        mov    dword ptr [esi], 1
        mov    esi, dword ptr [g_0080d9b0]
        lea    ecx, [esp + 0x3c]
        call    FUN_004d21c0
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_f3c6
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f3c6
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f3c6:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_f3e1
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f3e1
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f3e1:
        mov    eax, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [esp + 0x38]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        lea    ecx, [esp + 0x40]
        call    FUN_005805a0
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, esi
        pop    esi
        pop    ebp
        mov    dword ptr [g_00805908], edx
        pop    ebx
        add    esp, 0x70
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
        sub    esp, 8
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
        sub    eax, 4
        cmp    esi, 0x74
        mov    dword ptr [g_0080592c], eax
        jne    L_f49b
        mov    ecx, dword ptr [g_007dd268]
        mov    edx, dword ptr [ecx + 0x40ee8]
        mov    ecx, dword ptr [edx + 0x48]
        test    ecx, ecx
        jne    L_f49b
        add    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    esi, eax
        jmp    L_f4fa
L_f49b:
        mov    ecx, dword ptr [g_007f2d2c]
        test    ecx, ecx
        je    L_f4d7
        push    esi
        call    FUN_006478c0
        push    eax
        call    FUN_005670b0
        add    esp, 4
        cmp    al, 1
        jne    L_f4d7
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, edx
        jmp    L_f506
L_f4d7:
        mov    edx, dword ptr [esi*4 + 0x7b5238]
        push    edx
        call    FUN_00567100
        add    esp, 4
        cmp    al, 1
        jne    L_f537
        mov    esi, dword ptr [g_0080592c]
        add    esi, 4
        mov    dword ptr [g_0080592c], esi
L_f4fa:
        mov    eax, dword ptr [g_00805928]
        add    eax, 0xa000
        cmp    esi, eax
L_f506:
        jb    L_f512
        push    0
        call    FUN_00563060
        add    esp, 4
L_f512:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [esi], 1
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        add    esp, 8
        ret    
L_f537:
        push    edi
        lea    ecx, [esp + 0xc]
        call    FUN_00412570
        mov    eax, dword ptr [esi*4 + 0x7b5238]
        mov    edx, dword ptr [esp + 8]
        push    eax
        push    edx
        lea    ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_f57c
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f57c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f57c:
        mov    eax, dword ptr [esp + 8]
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
        je    L_f5bf
        push    0
        mov    ecx, edi
        call    FUN_004ebe90
        mov    ecx, dword ptr [g_007f2d2c]
        test    ecx, ecx
        je    L_f5bf
        push    esi
        push    edi
        call    FUN_00647450
L_f5bf:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_f5e8
        push    0
        call    FUN_00563060
        add    esp, 4
L_f5e8:
        mov    dword ptr [esi], 0
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        mov    esi, dword ptr [g_0080d9b0]
        je    L_f60f
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f60f
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f60f:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_00805908], edx
        pop    esi
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        or    ecx, 0xffffffff
        xor    eax, eax
        xor    ebx, ebx
        xor    edx, edx
        mov    edi, esi
        repne scasb
        not    ecx
        dec    ecx
        je    L_f66a
L_f649:
        movsx    eax, byte ptr [edx + esi]
        mov    ecx, edx
        and    ecx, 3
        shl    ecx, 3
        shl    eax, cl
        or    ecx, 0xffffffff
        mov    edi, esi
        xor    ebx, eax
        xor    eax, eax
        inc    edx
        repne scasb
        not    ecx
        dec    ecx
        cmp    edx, ecx
        jb    L_f649
L_f66a:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, esi
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 0x14]
        shl    ecx, 0x10
        pop    edi
        xor    eax, ecx
        pop    esi
        xor    eax, ebx
        pop    ebx
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
    }
}
