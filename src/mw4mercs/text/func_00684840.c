/*
 * FUN_00684840 (423 B) — HUD element visibility/aim test (__thiscall,
 * RET 0x8). Returns a status code (0/1/2) based on whether the target
 * element (param_1) is the same as / visible to the current HUD element
 * (this). Includes FPU distance cone test, virtual calls through
 * vtables (+0x60), and a chain walk via +0x280.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern float g_007b5bac;
extern int g_007f26a4;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004e7760(void);

__declspec(naked) void FUN_00684840(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        test    ebx, ebx
        push    esi
        push    edi
        mov     esi, ecx
        jnz     L_68488b
        mov     esi, dword ptr [esi + 0x10]
        test    esi, esi
        jz      L_6849dc
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x1c]
        xor     edx, 0x85739531
        cmp     esi, edx
        jz      L_6849dc
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_68488b:
        mov     edi, dword ptr [esi + 0x10]
        test    edi, edi
        jnz     L_6848a0
        pop     edi
        pop     esi
        mov     eax, 0x2
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_6848a0:
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x1c]
        xor     edx, 0x85739531
        cmp     edi, edx
        jnz     L_68494a
        cmp     dword ptr [esi], 0x0
        jz      L_68494a
        mov     eax, dword ptr [ebx + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        fsubr   dword ptr [esi + 0x18]
        mov     edx, dword ptr [eax + 0xac]
        fld     dword ptr [esi + 0x1c]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x8], ecx
        fsub    dword ptr [ebp - 0x8]
        fld     dword ptr [esi + 0x20]
        mov     dword ptr [ebp - 0x4], edx
        fsub    dword ptr [ebp - 0x4]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0xc]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0xc]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0x8], eax
        mov     eax, dword ptr [esi]
        fld     dword ptr [g_007b5bac]
        fadd    dword ptr [eax + 0x18]
        fld     dword ptr [ebp + 0x8]
        fcompp
        __emit 0xDF  /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref needs no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_6849ce
        pop     edi
        pop     esi
        mov     eax, 0x2
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_68494a:
        mov     eax, dword ptr [g_007f26a4]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_68496c
        xor     eax, eax
        cmp     edi, ebx
        pop     edi
        pop     esi
        setnz   al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_68496c:
        cmp     edi, ebx
        jz      L_6849dc
        mov     al, byte ptr [ebp + 0xc]
        test    al, al
        jnz     L_68499d
        mov     eax, dword ptr [edi + 0x150]
        test    eax, eax
        jz      L_68499d
        mov     eax, dword ptr [eax + 0x28]
        test    eax, eax
        jz      L_68499d
        mov     ecx, eax
        call    FUN_004e7760
        cmp     eax, 0x2
        jnz     L_68499d
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_68499d:
        mov     edi, dword ptr [edi + 0x280]
        test    edi, edi
        jnz     L_6849b5
        pop     edi
        pop     esi
        mov     eax, 0x2
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_6849b5:
        cmp     edi, ebx
        jz      L_6849dc
        mov     ecx, dword ptr [esi + 0x40]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x60]
        mov     esi, eax
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x60]
        cmp     eax, esi
        jnz     L_6849dc
    L_6849ce:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_6849dc:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
