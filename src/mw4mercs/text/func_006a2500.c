/*
 * FUN_006A2500 (494 B) — __thiscall, RET 4 (one stack param).
 *
 * Complex FPU-heavy state machine: queries two float params via
 * FUN_006a5700/FUN_006a5770, dispatches on virtual methods at
 * [vtable+0xdc]/[vtable+0xec]/[vtable+0xc], and returns a float
 * in ST0 (either a constant or a computed value).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __cdecl FUN_006a5700(void *p, int a, int b);
extern float __cdecl FUN_006a5770(void *p, int a, float b);
extern void __cdecl FUN_00664b20(void *p);
extern char __cdecl FUN_006a51d0(void *p);
extern void __cdecl FUN_00664b40(void *p);
extern char __cdecl FUN_006a2340(void *p);
extern float __cdecl FUN_006a4ea0(void *p);
extern float __cdecl FUN_006a4ec0(void *p);
extern void __cdecl FUN_00664b10(void *p);
extern float __cdecl FUN_00707e70(int a);
extern void __cdecl FUN_006651c0(void *p);

extern float g_799d40;
extern float g_782350;
extern float g_76d064;
extern float g_77a198;
extern float g_76c5b0;
extern float g_77016c;

__declspec(naked) float __fastcall FUN_006a2500(void *this, void *param_1)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        push    0x41
        push    0x40
        push    esi
        mov     edi, ecx
        call    FUN_006a5700
        fstp    dword ptr [esp + 0x24]
        push    0x42960000
        push    0x0
        push    esi
        call    FUN_006a5770
        fcom    dword ptr [esp + 0x30]
        add     esp, 0x18
        fnstsw  ax
        test    ah, 1
        jnz     L253b
        fstp    st(0)
        fld     dword ptr [esp + 0x18]
L253b:
        fcomp   dword ptr [g_799d40]
        fnstsw  ax
        test    ah, 1
        jnz     L2551
        push    esi
        call    FUN_00664b20
        add     esp, 4
L2551:
        push    esi
        call    FUN_006a51d0
        add     esp, 4
        cmp     al, 1
        jnz     L258d
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xdc]
        fcomp   dword ptr [g_782350]
        fnstsw  ax
        test    ah, 0x41
        jnz     L258d
        push    esi
        call    FUN_00664b40
        fld     dword ptr [g_76d064]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     4
L258d:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xec]
        mov     bl, al
        cmp     bl, 1
        jnz     L25bb
        push    0x43
        push    0x42
        push    esi
        call    FUN_006a5700
        fcomp   dword ptr [g_799d40]
        add     esp, 0xc
        fnstsw  ax
        __emit 0x84   /* test bl,ah: MSVC6 swaps operand order (emits 84 DC for 84 E3) */
        __emit 0xE3
        jnz     L25b9
        jmp     L25bb
L25b9:
        xor     bl, bl
L25bb:
        push    esi
        call    FUN_006a2340
        push    esi
        mov     byte ptr [esp + 0x20], al
        call    FUN_006a4ea0
        fcomp   dword ptr [g_799d40]
        add     esp, 8
        fnstsw  ax
        test    ah, 1
        jnz     L266a
        cmp     byte ptr [esp + 0x18], 1
        jnz     L2615
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xdc]
        fcomp   dword ptr [g_77a198]
        fnstsw  ax
        test    ah, 0x41
        jnz     L2615
        push    esi
        call    FUN_00664b40
        fld     dword ptr [g_76d064]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     4
L2615:
        fld     dword ptr [edi + 8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L2648
        fld     dword ptr [edi + 8]
        push    0x0
        fadd    dword ptr [g_77016c]
        fstp    qword ptr [esp + 0x10]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L26df
L2648:
        push    0x0
        call    FUN_00707e70
        fstp    dword ptr [edi + 8]
        push    esi
        call    FUN_006651c0
        fld     dword ptr [g_76d064]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     4
L266a:
        push    esi
        call    FUN_006a4ec0
        fcomp   dword ptr [g_799d40]
        add     esp, 4
        fnstsw  ax
        test    ah, 1
        jnz     L26df
        cmp     bl, 1
        jnz     L26a9
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
        cmp     al, bl
        jnz     L26a9
        push    esi
        call    FUN_00664b10
        fld     dword ptr [g_76d064]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     4
L26a9:
        cmp     byte ptr [esp + 0x18], 1
        jnz     L26df
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xdc]
        fcomp   dword ptr [g_77a198]
        fnstsw  ax
        test    ah, 0x41
        jnz     L26df
        push    esi
        call    FUN_00664b40
        fld     dword ptr [g_76d064]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     4
L26df:
        fld     dword ptr [g_76c5b0]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     4
    }
}
