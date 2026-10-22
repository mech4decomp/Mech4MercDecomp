/*
 * FUN_10004c60 (257 B, __cdecl) — case-insensitive, length-limited string
 * comparison (strnicmp-style). Fast ASCII path when the locale flag at
 * g_10008c1c+8 is 0; otherwise a critical-section-guarded path using the
 * thiscall FUN_10004e55 for per-character case folding. Returns -1/0/1.
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

__declspec(naked) int __cdecl FUN_10004c60(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    edi
        push    esi
        push    ebx
        mov     ecx, dword ptr [ebp + 0x10]
        or      ecx, ecx
        jz      L_d5a
        mov     esi, dword ptr [ebp + 8]
        mov     edi, dword ptr [ebp + 0xc]
        lea     eax, [g_10008c1c]
        cmp     dword ptr [eax + 8], 0
        jnz     L_cd1
        mov     bh, 0x41
        mov     bl, 0x5a
        mov     dh, 0x20
        /* __emit: LEA ECX,[ECX] NOP; MSVC6 drops the 00 disp byte */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L_c8c:
        mov     ah, byte ptr [esi]
        or      ah, ah
        mov     al, byte ptr [edi]
        jz      L_cb5
        or      al, al
        jz      L_cb5
        inc     esi
        inc     edi
        /* __emit: CMP AH,BH (38 FC); MSVC6 normalizes operand order */
        __emit 0x38
        __emit 0xFC
        jc      L_ca4
        /* __emit: CMP AH,BL (38 DC); MSVC6 normalizes operand order */
        __emit 0x38
        __emit 0xDC
        ja      L_ca4
        add     ah, dh
L_ca4:
        /* __emit: CMP AL,BH (38 F8); MSVC6 normalizes operand order */
        __emit 0x38
        __emit 0xF8
        jc      L_cae
        /* __emit: CMP AL,BL (38 D8); MSVC6 normalizes operand order */
        __emit 0x38
        __emit 0xD8
        ja      L_cae
        add     al, dh
L_cae:
        /* __emit: CMP AH,AL (38 C4); MSVC6 normalizes operand order */
        __emit 0x38
        __emit 0xC4
        jnz     L_cbf
        dec     ecx
        jnz     L_c8c
L_cb5:
        xor     ecx, ecx
        /* __emit: CMP AH,AL (38 C4); MSVC6 normalizes operand order */
        __emit 0x38
        __emit 0xC4
        jz      L_d5a
L_cbf:
        mov     ecx, 0xffffffff
        jc      L_d5a
        neg     ecx
        jmp     L_d5a
L_cd1:
        lock inc dword ptr [g_10008d94]
        cmp     dword ptr [g_10008d90], 0
        jg      L_ce5
        push    0
        jmp     L_cfe
L_ce5:
        lock dec dword ptr [g_10008d94]
        mov     ebx, ecx
        push    0x13
        call    FUN_10001f46
        mov     dword ptr [esp], 1
        mov     ecx, ebx
L_cfe:
        xor     eax, eax
        xor     ebx, ebx
        mov     edi, edi
L_d04:
        mov     al, byte ptr [esi]
        or      eax, eax
        mov     bl, byte ptr [edi]
        jz      L_d2f
        or      ebx, ebx
        jz      L_d2f
        inc     esi
        inc     edi
        push    ecx
        push    eax
        push    ebx
        call    FUN_10004e55
        mov     ebx, eax
        add     esp, 4
        call    FUN_10004e55
        add     esp, 4
        pop     ecx
        cmp     eax, ebx
        jnz     L_d35
        dec     ecx
        jnz     L_d04
L_d2f:
        xor     ecx, ecx
        cmp     eax, ebx
        jz      L_d3e
L_d35:
        mov     ecx, 0xffffffff
        jc      L_d3e
        neg     ecx
L_d3e:
        pop     eax
        or      eax, eax
        jnz     L_d4c
        lock dec dword ptr [g_10008d94]
        jmp     L_d5a
L_d4c:
        mov     ebx, ecx
        push    0x13
        call    FUN_10001fa7
        add     esp, 4
        mov     ecx, ebx
L_d5a:
        mov     eax, ecx
        pop     ebx
        pop     esi
        pop     edi
        leave
        ret
    }
}
