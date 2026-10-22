/*
 * FUN_006E38C0 (172 B) — converts a byte array to hex characters via a jump
 * table, appending to a buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_6e3944[];
extern char g_6e395c[];
extern void __cdecl FUN_006e2e70(void);

__declspec(naked) void FUN_006E38C0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        jle     L_393b
        push    ebx
        mov     ebx, dword ptr [esp+0xc]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x14]
        mov     ebp, eax
    L_38d6:
        movsx   esi, byte ptr [ebx]
        mov     eax, esi
        sar     eax, 4
        and     eax, 0xf
        cmp     eax, 0xf
        ja      L_3903
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_6e3944]
        /* __emit: jump-table dispatch FF 24 8D [ecx*4+0x6e393c] (MSVC6 re-bases via EBX) */
        __emit 0xFF
        __emit 0x24
        __emit 0x8D
        __emit 0x3C
        __emit 0x39
        __emit 0x6E
        __emit 0x00
        add     al, 0x30
        jmp     L_38fb
        add     al, 0x37
    L_38fb:
        push    eax
        mov     ecx, edi
        call    FUN_006e2e70
    L_3903:
        and     esi, 0xf
        mov     eax, esi
        cmp     eax, 0xf
        ja      L_392a
        xor     edx, edx
        mov     dl, byte ptr [eax + g_6e395c]
        /* __emit: jump-table dispatch FF 24 95 [edx*4+0x6e3954] (MSVC6 re-bases via EBX) */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x54
        __emit 0x39
        __emit 0x6E
        __emit 0x00
        add     al, 0x30
        jmp     L_3922
        add     al, 0x37
    L_3922:
        push    eax
        mov     ecx, edi
        call    FUN_006e2e70
    L_392a:
        push    0x20
        mov     ecx, edi
        call    FUN_006e2e70
        inc     ebx
        dec     ebp
        jne     L_38d6
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
    L_393b:
        ret
        /* ---- in-.text jump table (relocated dword entries) ---- */
        __emit 0xF5
        __emit 0x38
        __emit 0x6E
        __emit 0x00
        __emit 0xF9
        __emit 0x38
        __emit 0x6E
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x1C
        __emit 0x39
        __emit 0x6E
        __emit 0x00
        __emit 0x20
        __emit 0x39
        __emit 0x6E
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
    }
}
