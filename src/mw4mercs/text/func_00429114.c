/*
 * FUN_00429114 (extent 0x429114-0x429546) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern char   g_007b227c;
extern int    g_007b2280;
extern int    g_007b9658;
extern int    g_007b965c;
extern int    g_007b9660;
extern int    g_007b9664;
extern int    g_007b9668;
extern int    g_007b966c;
extern int    g_007b9670;
extern int    g_007b9674;
extern int    g_007b9678;
extern int    g_007b967c;
extern int    g_007b9680;
extern int    g_007b9684;
extern int    g_007b9688;
extern int    g_007b968c;
extern int    g_007b9690;
extern int    g_007b98cc;
extern int    g_007da724;
extern int    g_008bd548;
extern int    g_008bd54c;
extern int    g_008bd550;
extern int    g_008bd554;
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00423d90(void);
extern void __cdecl FUN_00450b10(void);

__declspec(naked) void FUN_00429114(void)
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
        nop    
        sub    esp, 0xc
        fld    dword ptr [ecx + 0x8c]
        lea    eax, [ecx + 0xc]
        mov    edx, dword ptr [eax]
        fcomp    dword ptr [g_0076c5b0]
        __emit 0x89  // mov dword ptr [esp], edx
__emit 0x54
__emit 0x24
__emit 0x00
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esp + 8], eax
        fnstsw  ax
        mov    dword ptr [esp + 4], edx
        test    ah, 1
        jne    L_91a2
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fmul    dword ptr [ecx + 0x8c]
        fld    dword ptr [esp + 4]
        fmul    dword ptr [ecx + 0x8c]
        fstp    dword ptr [esp + 4]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [ecx + 0x8c]
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + 4]
        fstp    dword ptr [esp + 8]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld    dword ptr [esp + 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esp + 8]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
L_91a2:
        add    esp, 0xc
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        fld    dword ptr [ecx + 0x8c]
        lea    eax, [ecx + 0xc]
        mov    edx, dword ptr [eax]
        fcomp    dword ptr [g_0076c5b0]
        __emit 0x89  // mov dword ptr [esp], edx
__emit 0x54
__emit 0x24
__emit 0x00
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esp + 8], eax
        fnstsw  ax
        mov    dword ptr [esp + 4], edx
        test    ah, 1
        jne    L_921f
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        mov    eax, dword ptr [esp + 0x10]
        fmul    dword ptr [ecx + 0x8c]
        fld    dword ptr [esp + 4]
        fmul    dword ptr [ecx + 0x8c]
        fstp    dword ptr [esp + 4]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [ecx + 0x8c]
        fstp    dword ptr [esp + 8]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld    dword ptr [esp + 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esp + 8]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
L_921f:
        add    esp, 0xc
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
        __emit 0xE9  /* jmp L_9260 (near E9 rel32; MSVC6 would emit short EB) */
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
L_9260:
        mov    eax, dword ptr [g_008bd548]
        mov    ecx, dword ptr [g_008bd54c]
        mov    edx, dword ptr [g_008bd550]
        mov    dword ptr [g_007b9668], eax
        mov    eax, dword ptr [g_008bd554]
        mov    dword ptr [g_007b966c], ecx
        mov    dword ptr [g_007b9670], edx
        mov    dword ptr [g_007b9674], eax
        ret    
        nop    
        nop    
        nop    
        __emit 0xE9  /* jmp L_92a0 (near E9 rel32; MSVC6 would emit short EB) */
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
L_92a0:
        mov    eax, dword ptr [g_008bd548]
        mov    ecx, dword ptr [g_008bd54c]
        mov    edx, dword ptr [g_008bd550]
        mov    dword ptr [g_007b9658], eax
        mov    eax, dword ptr [g_008bd554]
        mov    dword ptr [g_007b965c], ecx
        mov    dword ptr [g_007b9660], edx
        mov    dword ptr [g_007b9664], eax
        ret    
        nop    
        nop    
        nop    
        push    ebp
        push    esi
        push    0x14
        call    FUN_004084d0
        xor    ebp, ebp
        add    esp, 4
        cmp    eax, ebp
        je    L_92fe
        mov    ecx, dword ptr [g_007da724]
        push    ecx
        push    0x76dfc8
        push    0x74
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007b9678], eax
        jmp    L_9304
L_92fe:
        mov    dword ptr [g_007b9678], ebp
L_9304:
        mov    edx, dword ptr [g_008bd548]
        mov    eax, dword ptr [g_008bd54c]
        mov    ecx, dword ptr [g_008bd550]
        mov    dword ptr [g_007b9668], edx
        mov    edx, dword ptr [g_008bd554]
        push    8
        mov    byte ptr [g_007b227c], 1
        mov    dword ptr [g_007b966c], eax
        mov    dword ptr [g_007b9670], ecx
        mov    dword ptr [g_007b9674], edx
        mov    dword ptr [g_007b9658], 0x3ee4e4eb
        mov    dword ptr [g_007b965c], 0x3f0f30e8
        mov    dword ptr [g_007b9660], 0x3f154aa1
        mov    dword ptr [g_007b9664], 0x3f800000
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebp
        je    L_938b
        mov    eax, dword ptr [g_007b2280]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esi], ebp
        mov    dword ptr [esi + 4], ebp
        call    FUN_00423d90
        mov    dword ptr [g_007b9680], esi
        jmp    L_9391
L_938b:
        mov    dword ptr [g_007b9680], ebp
L_9391:
        mov    eax, dword ptr [g_007b2280]
        xor    esi, esi
        cmp    eax, ebp
        jle    L_93d1
L_939c:
        push    0x70
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_93ba
        mov    ecx, dword ptr [g_007b98cc]
        push    ecx
        mov    ecx, eax
        call    FUN_00450b10
        jmp    L_93bc
L_93ba:
        xor    eax, eax
L_93bc:
        mov    edx, dword ptr [g_007b9680]
        mov    ecx, dword ptr [edx]
        mov    dword ptr [ecx + esi*4], eax
        mov    eax, dword ptr [g_007b2280]
        inc    esi
        cmp    esi, eax
        jl    L_939c
L_93d1:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebp
        je    L_93ff
        mov    edx, dword ptr [g_007b2280]
        shl    edx, 8
        push    edx
        mov    ecx, esi
        mov    dword ptr [esi], ebp
        mov    dword ptr [esi + 4], ebp
        call    FUN_0040c2e0
        mov    dword ptr [g_007b9684], esi
        jmp    L_9405
L_93ff:
        mov    dword ptr [g_007b9684], ebp
L_9405:
        push    edi
        push    8
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        cmp    edi, ebp
        je    L_947d
        mov    esi, dword ptr [g_007b2280]
        shl    esi, 8
        mov    dword ptr [edi], ebp
        mov    dword ptr [edi + 4], ebp
        je    L_9475
        cmp    esi, ebp
        jbe    L_946a
        lea    eax, [esi*8]
        push    ebx
        push    eax
        mov    dword ptr [edi + 4], esi
        call    FUN_004084d0
        mov    ebx, eax
        add    esp, 4
        cmp    ebx, ebp
        je    L_945d
        push    0x423b70
        push    esi
        push    8
        push    ebx
        call    FUN_00406c90
        mov    dword ptr [edi], ebx
        pop    ebx
        mov    dword ptr [g_007b9688], edi
        jmp    L_9483
L_945d:
        xor    ebx, ebx
        mov    dword ptr [edi], ebx
        pop    ebx
        mov    dword ptr [g_007b9688], edi
        jmp    L_9483
L_946a:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi], ebp
L_9475:
        mov    dword ptr [g_007b9688], edi
        jmp    L_9483
L_947d:
        mov    dword ptr [g_007b9688], ebp
L_9483:
        push    8
        call    FUN_004084d0
        add    esp, 4
        mov    esi, eax
        cmp    esi, ebp
        pop    edi
        je    L_94d0
        mov    eax, dword ptr [g_007b2280]
        shl    eax, 8
        mov    dword ptr [esi], ebp
        mov    dword ptr [esi + 4], ebp
        je    L_94c8
        cmp    eax, ebp
        jbe    L_94bd
        push    eax
        mov    dword ptr [esi + 4], eax
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esi], eax
        mov    dword ptr [g_007b968c], esi
        jmp    L_94d6
L_94bd:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi], ebp
L_94c8:
        mov    dword ptr [g_007b968c], esi
        jmp    L_94d6
L_94d0:
        mov    dword ptr [g_007b968c], ebp
L_94d6:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebp
        je    L_9537
        mov    eax, dword ptr [g_007b2280]
        shl    eax, 8
        mov    dword ptr [esi], ebp
        mov    dword ptr [esi + 4], ebp
        je    L_9528
        cmp    eax, ebp
        jbe    L_951d
        lea    ecx, [eax*4]
        push    ecx
        mov    dword ptr [esi + 4], eax
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esi], eax
        mov    dword ptr [g_007b9690], esi
        pop    esi
        mov    dword ptr [g_007b967c], ebp
        pop    ebp
        ret    
L_951d:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi], ebp
L_9528:
        mov    dword ptr [g_007b9690], esi
        pop    esi
        mov    dword ptr [g_007b967c], ebp
        pop    ebp
        ret    
L_9537:
        pop    esi
        mov    dword ptr [g_007b9690], ebp
        mov    dword ptr [g_007b967c], ebp
        pop    ebp
        ret    
    }
}
