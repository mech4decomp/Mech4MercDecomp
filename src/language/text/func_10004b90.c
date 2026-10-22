/*
 * FUN_10004b90 (208 B, __thiscall) — case-insensitive string comparison
 * (stricmp-style). Fast ASCII path when the locale flag at g_10008c1c+8 is
 * 0; otherwise a critical-section-guarded path that uses the thiscall
 * FUN_10004e55 for per-character case folding.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_10008c1c;                       /* locale struct base */
extern long g_10008d94;                       /* lock counter */
extern int g_10008d90;                        /* guard flag */

extern void __cdecl FUN_10001f46(void);       /* EnterCriticalSection */
extern void __cdecl FUN_10001fa7(void);       /* LeaveCriticalSection */
extern void __cdecl FUN_10004e55(void);       /* thiscall case-fold */

__declspec(naked) unsigned int FUN_10004b90(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    edi
        push    esi
        push    ebx
        mov     esi, dword ptr [ebp + 0xc]
        mov     edi, dword ptr [ebp + 0x8]
        lea     eax, [g_10008c1c]
        cmp     dword ptr [eax + 8], 0
        jnz     L_be3
        mov     al, 0xff
        mov     edi, edi
L_bac:
        or      al, al
        jz      L_bde
        mov     al, byte ptr [esi]
        inc     esi
        mov     ah, byte ptr [edi]
        inc     edi
        /* __emit: CMP AH,AL (38 C4); MSVC6 normalizes to CMP AL,AH */
        __emit 0x38
        __emit 0xC4
        jz      L_bac
        sub     al, 0x41
        cmp     al, 0x1a
        sbb     cl, cl
        and     cl, 0x20
        add     al, cl
        add     al, 0x41
        xchg    ah, al
        sub     al, 0x41
        cmp     al, 0x1a
        sbb     cl, cl
        and     cl, 0x20
        add     al, cl
        add     al, 0x41
        /* __emit: CMP AL,AH (38 E0); MSVC6 normalizes to CMP AH,AL */
        __emit 0x38
        __emit 0xE0
        jz      L_bac
        sbb     al, al
        sbb     al, 0xff
L_bde:
        movsx   eax, al
        jmp     L_c5b
L_be3:
        lock inc dword ptr [g_10008d94]
        cmp     dword ptr [g_10008d90], 0
        jg      L_bf7
        push    0
        jmp     L_c0c
L_bf7:
        lock dec dword ptr [g_10008d94]
        push    0x13
        call    FUN_10001f46
        mov     dword ptr [esp], 1
L_c0c:
        mov     eax, 0xff
        xor     ebx, ebx
        nop
L_c14:
        or      al, al
        jz      L_c3f
        mov     al, byte ptr [esi]
        inc     esi
        mov     bl, byte ptr [edi]
        inc     edi
        /* __emit: CMP AL,BL (38 D8); MSVC6 normalizes to CMP BL,AL */
        __emit 0x38
        __emit 0xD8
        jz      L_c14
        push    eax
        push    ebx
        call    FUN_10004e55
        mov     ebx, eax
        add     esp, 4
        call    FUN_10004e55
        add     esp, 4
        /* __emit: CMP BL,AL (38 C3); MSVC6 normalizes to CMP AL,BL (3A D8) */
        __emit 0x38
        __emit 0xC3
        jz      L_c14
        sbb     eax, eax
        sbb     eax, -1
L_c3f:
        mov     ebx, eax
        pop     eax
        or      eax, eax
        jnz     L_c4f
        lock dec dword ptr [g_10008d94]
        jmp     L_c59
L_c4f:
        push    0x13
        call    FUN_10001fa7
        add     esp, 4
L_c59:
        mov     eax, ebx
L_c5b:
        pop     ebx
        pop     esi
        pop     edi
        leave
        ret
    }
}
