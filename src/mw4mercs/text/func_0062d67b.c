/*
 * FUN_0062d67b (extent 0x62d67b-0x62d8e1) - gen via tools/gen_bigfunc.py.
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
extern void __cdecl FUN_0041ee20(void);

__declspec(naked) void FUN_0062d67b(void)
{
    __asm {
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
        /* __emit: fild qword ptr [esp+0] — MSVC6 drops disp8=0 (emits DF 2C 24) */
        __emit 0xDF
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
        /* __emit: forward jmp to L_d770; MSVC6 emits EB rel8, ref uses E9 rel32 */
        __emit 0xE9
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
        mov    ecx, dword ptr [esp + 0xc]
        push    0x10
        lea    eax, [esp + 4]
        push    eax
        mov    dword ptr [esp + 8], 0
        call    FUN_0041eb40
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0xc]
        mov    ecx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x16]
        xor    ecx, 0x85739531
        test    al, al
        je    L_d8cf
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [ecx + 0x92c]
        lea    edx, [eax + eax*2]
        lea    eax, [eax + edx*4]
        __emit 0x8B  // 139 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        lea    eax, [ecx + eax*4 + 0x37d4]
        mov    dword ptr [eax + 0x28], edx
        pop    ecx
        ret    
L_d8cf:
        mov    ecx, dword ptr [ecx + 0x930]
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        add    ecx, 0x18
        mov    dword ptr [ecx + 0x28], eax
        pop    ecx
        ret    
    }
}
