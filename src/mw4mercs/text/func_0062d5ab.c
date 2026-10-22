/*
 * FUN_0062d5ab (extent 0x62d5ab-0x62d866) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_00770120;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f2ce0;
extern int    g_007f2ce4;
extern int    g_007f2ce8;
extern int    g_007f2cec;
extern int    g_007f2cf0;
extern int    g_007f2cf4;
extern int    g_007f2cf8;
extern int    g_007f2cfc;
extern int    g_007f2d00;
extern int    g_007f2d04;
extern int    g_007f2d08;
extern int    g_007f2d0c;
extern int    g_007f2d10;
extern int    g_007f2d14;
extern int    g_007f2d18;
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_0041edd0(void);
extern void __cdecl FUN_0041ee20(void);
extern void __cdecl FUN_006100a0(void);

__declspec(naked) void FUN_0062d5ab(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 0x20
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
        push    ecx
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x20]
        xor    eax, 0x85739531
        mov    cl, byte ptr [eax + 0x2214]
        test    cl, cl
        jne    L_d5e8
        fld    dword ptr [g_0076c5b0]
        jmp    L_d5f3
L_d5e8:
        lea    ecx, [eax + 0x21e8]
        call    FUN_006100a0
L_d5f3:
        mov    ecx, dword ptr [esp + 0xc]
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x5C
__emit 0x24
__emit 0x00
        push    0x20
        lea    edx, [esp + 4]
        push    edx
        call    FUN_0041ec50
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 8]
        push    8
        push    0x461c4000
        push    0
        lea    eax, [esp + 0x14]
        push    eax
        call    FUN_0041edd0
        fld    dword ptr [esp + 8]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        mov    edx, dword ptr [esp + 4]
        xor    eax, eax
        mov    al, byte ptr [edx + 0x14]
        xor    ecx, 0x85739531
        mov    edx, eax
        shl    edx, 7
        add    edx, eax
        shl    edx, 3
        sub    edx, eax
        fstp    dword ptr [ecx + edx*8 + 0x35a4]
        ret    
        nop    
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        push    8
        lea    eax, [esp + 4]
        push    eax
        mov    dword ptr [esp + 8], 0
        call    FUN_0041eb40
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 8
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
        mov    eax, dword ptr [g_007dab44]
        fld    dword ptr [g_0076c5b0]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        mov    ecx, dword ptr [esp + 4]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x14]
        xor    edx, 0x85739531
        sub    esp, 8
        mov    ecx, eax
        shl    ecx, 7
        add    ecx, eax
        shl    ecx, 3
        sub    ecx, eax
        lea    eax, [edx + ecx*8 + 0x35a8]
        mov    ecx, dword ptr [eax]
        test    ecx, ecx
        jbe    L_d6de
        mov    eax, dword ptr [eax + 8]
        mov    edx, ecx
L_d6d6:
        fadd    dword ptr [eax]
        add    eax, 4
        dec    edx
        jne    L_d6d6
L_d6de:
        __emit 0x89  // mov dword ptr [esp], ecx
__emit 0x4C
__emit 0x24
__emit 0x00
        mov    dword ptr [esp + 4], 0
        __emit 0xDF  // fild qword ptr [esp] with explicit disp8=0 (MSVC6 drops the 00 byte)
        __emit 0x6C
        __emit 0x24
        __emit 0x00
        fdivr st(0), st(1)
        fstp    dword ptr [esp + 0xc]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0xc]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_d711
        mov    dword ptr [esp + 0xc], 0
        jmp    L_d72a
L_d711:
        fld    dword ptr [esp + 0xc]
        fcomp    dword ptr [g_00770120]
        fnstsw  ax
        test    ah, 0x41
        jne    L_d72a
        mov    dword ptr [esp + 0xc], 0x461c4000
L_d72a:
        mov    ecx, dword ptr [esp + 0x10]
        push    8
        push    0x461c4000
        push    0
        lea    edx, [esp + 0x18]
        push    edx
        call    FUN_0041ee20
        add    esp, 8
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
        __emit 0xE9  // jmp rel32 to L_d770 (MSVC6 collapses to jmp short EB; ref uses E9)
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_d770:
        mov    eax, 0x70eeb0
        sub    eax, 0x70e380
        mov    dword ptr [g_007f2ce0], eax
        mov    ecx, 0x4e8080
        sub    ecx, 0x4e5fd0
        mov    dword ptr [g_007f2ce4], ecx
        mov    edx, 0x4c8f60
        sub    edx, 0x4c8e00
        mov    dword ptr [g_007f2ce8], edx
        mov    eax, 0x624770
        sub    eax, 0x6212e0
        mov    dword ptr [g_007f2cec], eax
        mov    ecx, 0x5b76b0
        sub    ecx, 0x5b6c20
        mov    dword ptr [g_007f2cf0], ecx
        mov    edx, 0x55b780
        sub    edx, 0x548f60
        mov    dword ptr [g_007f2cf4], edx
        mov    eax, 0x5f6c50
        sub    eax, 0x5f2b00
        mov    ecx, 0x590ee0
        sub    ecx, 0x581480
        mov    edx, 0x5ee810
        sub    edx, 0x5ecbc0
        mov    dword ptr [g_007f2cf8], eax
        mov    dword ptr [g_007f2cfc], ecx
        mov    dword ptr [g_007f2d00], edx
        mov    eax, 0x5ace00
        sub    eax, 0x5abd30
        mov    ecx, 0x5a6950
        sub    ecx, 0x5a61d0
        mov    edx, 0x5ef960
        sub    edx, 0x5ef590
        mov    dword ptr [g_007f2d04], eax
        mov    dword ptr [g_007f2d08], ecx
        mov    dword ptr [g_007f2d0c], edx
        mov    eax, 0x69e8a0
        mov    ecx, 0x63ad50
        mov    edx, 0x62de30
        sub    eax, 0x69d490
        sub    ecx, 0x637f60
        sub    edx, 0x62d750
        mov    dword ptr [g_007f2d10], eax
        mov    dword ptr [g_007f2d14], ecx
        mov    dword ptr [g_007f2d18], edx
        ret    
    }
}
