/*
 * FUN_006142e0 (230 B) — __thiscall. Iterates a collection via
 * FUN_00416cc0, comparing each element's string (at +0x1c) against
 * param_1 using _stricmp (global fn ptr at 0x0076b2ac). Returns the
 * matching index, or -1 if not found. Same structure as FUN_00613c90
 * with a different vtable pointer (0x779e88).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void *p);
extern void *__cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_004084e0(void *ptr);

extern void *g_76b2ac;   /* 0x0076b2ac _stricmp fn ptr */

__declspec(naked) int __stdcall FUN_006142e0(char *param)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    ebp
        push    esi
        add     ecx, 0x10
        push    edi
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], 0x779e88
        mov     dword ptr [esp + 0x10], 0
        call    FUN_00416cc0
        test    eax, eax
        mov     edi, dword ptr [esp + 0x2c]
        jz      L_17
        mov     ebp, dword ptr [g_76b2ac]
L_cb:
        mov     esi, dword ptr [eax + 0x1c]
        test    esi, esi
        jz      L_d5
        inc     byte ptr [esi - 1]
L_d5:
        push    edi
        push    esi
        call    ebp
        add     esp, 8
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    esi, esi
        jz      L_fd
        mov     cl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_fd
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_fd:
        test    bl, bl
        jnz     L_46
        mov     edx, dword ptr [esp + 0x10]
        inc     edx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x10], edx
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_cb
L_17:
        lea     ecx, [esp + 0x14]
        call    FUN_00416c60
        test    edi, edi
        jz      L_39
        mov     cl, byte ptr [edi - 1]
        lea     eax, [edi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_39
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_39:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x18
        ret     4
L_46:
        lea     ecx, [esp + 0x14]
        call    FUN_00416c60
        test    edi, edi
        jz      L_68
        mov     cl, byte ptr [edi - 1]
        lea     eax, [edi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_68
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_68:
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     4
    }
}
