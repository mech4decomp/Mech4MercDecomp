/*
 * FUN_0065ab50 (255 B) - ABL/record processing. Given an object (param_1)
 * and a record (param_2), checks a flag bit in param_2->[0x10]; if clear,
 * compares virtual "type id" (vtable+0x60) of the object's sub-object
 * (obj->[0x170]) vs the record; on match or (via FUN_00415230 +
 * FUN_005fb8e0 FPU compare) records a 6-typed entry through
 * FUN_005dd7a0/FUN_0069eb70; otherwise dispatches through
 * FUN_005c1720/FUN_005dd750/FUN_0041fd80/FUN_005c1770.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f268c;
extern float g_0076d598;

extern void __cdecl FUN_005dd7a0(void);
extern void __cdecl FUN_0069eb70(void);
extern void __cdecl FUN_004084e0(void);
extern char __cdecl FUN_00415230(int);
extern void __cdecl FUN_005fb8e0(void);
extern void __cdecl FUN_005c1720(void);
extern void __cdecl FUN_005dd750(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005c1770(void);

__declspec(naked) void FUN_0065ab50(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        jz      L_abb7
        mov     eax, dword ptr [edi + 0x10]
        shr     eax, 0x13
        and     al, 0x1
        cmp     al, 0x1
        jz      L_abb7
        mov     esi, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esi + 0x170]
        mov     edx, dword ptr [ecx]
        push    ebx
        call    dword ptr [edx + 0x60]
        mov     ebx, eax
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x60]
        cmp     eax, ebx
        pop     ebx
        jnz     L_abbc
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    FUN_005dd7a0
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    0x6
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x10]
L_aba0:
        test    eax, eax
        jz      L_abb7
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_abb7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_abb7:
        pop     edi
        xor     eax, eax
        pop     esi
        ret
L_abbc:
        mov     eax, dword ptr [g_007f268c]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_ac00
        mov     ecx, edi
        call    FUN_005fb8e0
        fcomp   dword ptr [g_0076d598]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L_ac00
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    FUN_005dd7a0
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    0x6
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x10]
        jmp     L_aba0
L_ac00:
        push    0x1
        mov     ecx, esi
        call    FUN_005c1720
        push    edi
        mov     ecx, esi
        call    FUN_005dd750
        lea     ecx, [esi + 0x1c8]
        call    FUN_0041fd80
        test    eax, eax
        jnz     L_ac41
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    FUN_005dd7a0
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    0x6
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x10]
        jmp     L_aba0
L_ac41:
        push    0x1
        mov     ecx, esi
        call    FUN_005c1770
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
