/*
 * FUN_006100d0 (488 B) — __thiscall (ECX=this). Animation-blend update
 * routine. Heavy FPU math: compares a value against a threshold, builds a
 * 3-component vector via matrix multiply (FMUL against a 3x3 matrix at
 * 0x007b8d08), and calls into the animation system (FUN_004e2f40 /
 * FUN_0040ca40 / FUN_0040c9e0) to fetch/transform blend data, writing a
 * byte result through a pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d598;
extern float g_76d064;
extern float g_7b8d08;
extern float g_7b8d0c;
extern float g_7b8d10;
extern float g_77016c;
extern float g_76d048;
extern double g_76d968;
extern float g_76c5b0;
extern int g_7dc728;

extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040c9e0(void);

__declspec(naked) void FUN_006100d0(void)
{
    __asm {
        fld     dword ptr [esp+0x14]
        sub     esp, 0x58
        fcomp   dword ptr [g_76d598]
        fnstsw  ax
        test    ah, 0x40
        jz      L_EC
        mov     dword ptr [esp+0x6c], 0x44480000
    L_EC:
        push    esi
        mov     ecx, 0x007b8d08
        mov     dword ptr [esp+0x58], 0x41a00000
        call    FUN_0040cb00
        fsqrt
        mov     eax, dword ptr [esp+0x60]
        mov     ecx, dword ptr [esp+0x64]
        mov     esi, dword ptr [esp+0x74]
        test    esi, esi
        mov     dword ptr [esp+0x40], eax
        mov     dword ptr [esp+0x48], ecx
        mov     ecx, dword ptr [esp+0x68]
        lea     edx, [esp+0x40]
        lea     eax, [esp+0x1c]
        mov     dword ptr [esp+0x28], edx
        mov     dword ptr [esp+0x2c], eax
        mov     dword ptr [esp+0x30], 0
        mov     dword ptr [esp+0x38], ecx
        mov     dword ptr [esp+0x3c], 0x1000
        __emit 0xD8 /* __emit: fcomp dword ptr [g_76d064] -> MSVC6's fcomp emits D8 1D (FMUL); ref needs D8 3D */
        __emit 0x3D
        __emit 0x64
        __emit 0xD0
        __emit 0x76
        __emit 0x00
        fld     st(0)
        fmul    dword ptr [g_7b8d08]
        fstp    dword ptr [esp+0x4c]
        fld     st(0)
        fmul    dword ptr [g_7b8d0c]
        fstp    dword ptr [esp+0x50]
        fmul    dword ptr [g_7b8d10]
        fstp    dword ptr [esp+0x54]
        fld     dword ptr [esp+0x70]
        fadd    dword ptr [g_77016c]
        fstp    dword ptr [esp+0x44]
        jnz     L_17B
        lea     esi, [esp+0x68]
    L_17B:
        mov     ecx, dword ptr [g_7dc728]
        lea     edx, [esp+0x28]
        push    edx
        call    FUN_004e2f40
        test    eax, eax
        mov     dword ptr [esi], eax
        jz      L_1CD
        fld     dword ptr [esp+0x58]
        push    ecx
        lea     eax, [esp+0x50]
        fstp    dword ptr [esp]
        push    eax
        lea     ecx, [esp+0x18]
        call    FUN_0040ca40
        lea     ecx, [esp+0x10]
        push    ecx
        lea     edx, [esp+0x44]
        push    edx
        lea     ecx, [esp+0x0c]
        call    FUN_0040c9e0
        fld     dword ptr [esp+0x08]
        mov     eax, dword ptr [esp+0x6c]
        mov     cl, byte ptr [esp+0x34]
        mov     byte ptr [eax], cl
        pop     esi
        add     esp, 0x58
        ret
    L_1CD:
        fld     dword ptr [esp+0x70]
        mov     edx, dword ptr [esp+0x60]
        fadd    dword ptr [g_76d048]
        mov     eax, dword ptr [esp+0x64]
        lea     ecx, [esp+0x28]
        push    ecx
        mov     ecx, dword ptr [g_7dc728]
        fstp    dword ptr [esp+0x48]
        mov     dword ptr [esp+0x44], edx
        mov     dword ptr [esp+0x4c], eax
        mov     dword ptr [esp+0x5c], 0x447a0000
        call    FUN_004e2f40
        test    eax, eax
        mov     dword ptr [esi], eax
        jz      L_225
        fld     dword ptr [esp+0x58]
        push    ecx
        lea     edx, [esp+0x50]
        fstp    dword ptr [esp]
        push    edx
        lea     ecx, [esp+0x0c]
        call    FUN_0040ca40
        lea     eax, [esp+0x04]
        jmp     L_28B
    L_225:
        fld     qword ptr [g_76d968]
        lea     edx, [esp+0x28]
        fsqrt
        push    edx
        __emit 0xD8 /* __emit: fcomp dword ptr [g_76d064] -> MSVC6's fcomp emits D8 1D (FMUL); ref needs D8 3D */
        __emit 0x3D
        __emit 0x64
        __emit 0xD0
        __emit 0x76
        __emit 0x00
        fld     dword ptr [g_76c5b0]
        fst     dword ptr [esp+0x74]
        fstp    dword ptr [esp+0x50]
        mov     ecx, dword ptr [esp+0x74]
        mov     dword ptr [esp+0x58], ecx
        mov     ecx, dword ptr [g_7dc728]
        fstp    dword ptr [esp+0x54]
        call    FUN_004e2f40
        test    eax, eax
        mov     dword ptr [esi], eax
        jz      L_2AD
        fld     dword ptr [esp+0x4c]
        lea     eax, [esp+0x04]
        fmul    dword ptr [esp+0x58]
        fstp    dword ptr [esp+0x04]
        fld     dword ptr [esp+0x50]
        fmul    dword ptr [esp+0x58]
        fstp    dword ptr [esp+0x08]
        fld     dword ptr [esp+0x54]
        fmul    dword ptr [esp+0x58]
        fstp    dword ptr [esp+0x0c]
    L_28B:
        push    eax
        lea     ecx, [esp+0x44]
        push    ecx
        lea     ecx, [esp+0x18]
        call    FUN_0040c9e0
        fld     dword ptr [esp+0x14]
        mov     edx, dword ptr [esp+0x6c]
        mov     al, byte ptr [esp+0x34]
        mov     byte ptr [edx], al
        pop     esi
        add     esp, 0x58
        ret
    L_2AD:
        fld     dword ptr [g_76d598]
        pop     esi
        add     esp, 0x58
        ret
    }
}
