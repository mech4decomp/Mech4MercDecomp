/*
 * FUN_00614210 (208 B) — __thiscall string-table lookup. Iterates a
 * collection via FUN_00416cc0, compares each entry's string against a
 * param using _stricmp (IAT 0x0076b2ac), and returns the matching
 * entry (or 0). Reference-counts strings via a leading refcount byte.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b2ac;   /* IAT _stricmp */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) int __stdcall FUN_00614210(void *param)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        add     ecx, 0x10
        push    edi
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], 0x779e88
        call    FUN_00416cc0
        mov     ebp, dword ptr [esp + 0x28]
        mov     edi, eax
        test    edi, edi
        jz      L_614288
L_61423f:
        mov     esi, dword ptr [edi + 0x1c]
        test    esi, esi
        jz      L_614249
        inc     byte ptr [esi - 0x1]
L_614249:
        push    ebp
        push    esi
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    esi, esi
        jz      L_614275
        mov     cl, byte ptr [esi - 0x1]
        lea     eax, [esi - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_614275
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_614275:
        test    bl, bl
        lea     ecx, [esp + 0x10]
        jnz     L_6142b6
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jnz     L_61423f
L_614288:
        lea     ecx, [esp + 0x10]
        call    FUN_00416c60
        test    ebp, ebp
        jz      L_6142aa
        mov     cl, byte ptr [ebp - 0x1]
        lea     eax, [ebp - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6142aa
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6142aa:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x14
        ret     0x4
L_6142b6:
        call    FUN_00416c60
        test    ebp, ebp
        jz      L_6142d4
        mov     cl, byte ptr [ebp - 0x1]
        lea     eax, [ebp - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6142d4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6142d4:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x4
    }
}
