/*
 * FUN_00652e00 (366 B) — ABL input/state handler. Tests a bitmask (param_3)
 * against a set of global string/state flags via FUN_00415230, gated by an
 * FPU compare of FUN_005fb8e0() against two float constants.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d598;
extern float g_0078b950;
extern int g_007f2568;
extern int g_007f2030;
extern int g_007f1f84;
extern int g_007f2104;
extern int g_007f25c0;
extern int g_007f2044;

extern void __cdecl FUN_005fb8e0(void);
extern void __cdecl FUN_00415230(void);

__declspec(naked) void FUN_00652e00(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     ecx, esi
        call    FUN_005fb8e0
        fcomp   dword ptr [g_0076d598]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jnz     L_652f68
        mov     bl, byte ptr [esp + 0x18]
        test    bl, 0x40
        jz      L_652e3e
        mov     eax, dword ptr [g_007f2568]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_652e3e
        pop     edi
        pop     esi
        pop     ebx
        ret
L_652e3e:
        test    bl, 0x10
        jz      L_652e59
        mov     eax, dword ptr [g_007f2030]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_652e59
        pop     edi
        pop     esi
        pop     ebx
        ret
L_652e59:
        mov     ecx, esi
        call    FUN_005fb8e0
        fcomp   dword ptr [g_0078b950]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jz      L_652eaa
        mov     al, byte ptr [esi + 0xdc]
        test    al, al
        jnz     L_652eaa
        mov     eax, dword ptr [esi + 0x2fc]
        test    eax, eax
        jz      L_652f68
        mov     eax, dword ptr [esi + 0x3f8]
        test    eax, eax
        jnz     L_652eaa
        mov     eax, dword ptr [g_007f1f84]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_652eaa
        test    bl, 0x80
        jz      L_652f68
L_652eaa:
        test    bl, 0x2
        jz      L_652ec5
        mov     eax, dword ptr [g_007f1f84]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_652ec5
        pop     edi
        pop     esi
        pop     ebx
        ret
L_652ec5:
        test    bl, 0x4
        jz      L_652ee0
        mov     eax, dword ptr [g_007f2104]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_652ee0
        pop     edi
        pop     esi
        pop     ebx
        ret
L_652ee0:
        test    bl, 0x1
        jz      L_652f32
        mov     eax, dword ptr [g_007f25c0]
        mov     edi, dword ptr [esi + 0x4]
        push    eax
        mov     ecx, edi
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_652f32
        mov     eax, dword ptr [g_007f2030]
        push    eax
        mov     ecx, edi
        call    FUN_00415230
        test    al, al
        jnz     L_652f32
        mov     eax, dword ptr [g_007f1f84]
        push    eax
        mov     ecx, edi
        call    FUN_00415230
        test    al, al
        jnz     L_652f32
        mov     eax, dword ptr [g_007f2104]
        push    eax
        mov     ecx, edi
        call    FUN_00415230
        test    al, al
        jnz     L_652f32
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        ret
L_652f32:
        test    bl, 0x8
        jz      L_652f4d
        mov     eax, dword ptr [g_007f2044]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_652f4d
        pop     edi
        pop     esi
        pop     ebx
        ret
L_652f4d:
        test    bl, 0x20
        jz      L_652f68
        mov     eax, dword ptr [g_007f2568]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_652f68
        pop     edi
        pop     esi
        pop     ebx
        ret
L_652f68:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret
    }
}
