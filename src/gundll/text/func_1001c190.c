/*
 * FUN_1001c190 (231 B) — __stdcall, RET 0xc (3 params).
 * Builds a packed string table: computes total size, allocates via
 * FUN_10001d50, writes a "ZONE" header + per-entry offsets, and copies
 * each string (rep movsd/movsb). Returns 0 or 0x8007000e.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003791a(void);
extern void __cdecl FUN_10001d50(void);

__declspec(naked) void __stdcall FUN_1001c190(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        xor     ebp, ebp
        xor     ebx, ebx
        test    esi, esi
        push    edi
        jbe     L_c1c2
    L_c1a3:
        mov     edi, dword ptr [esp + 0x20]
        mov     eax, dword ptr [edi + ebx*4]
        test    eax, eax
        jz      L_c1bb
        push    eax
        call    FUN_1003791a
        add     esp, 0x4
        lea     ebp, [eax + ebp*1 + 0x1]
    L_c1bb:
        inc     ebx
        cmp     ebx, esi
        jc      L_c1a3
        jmp     L_c1c6
    L_c1c2:
        mov     edi, dword ptr [esp + 0x20]
    L_c1c6:
        lea     ebx, [ebp + esi*2 + 0x6]
        shl     ebx, 0x1
        push    ebx
        call    FUN_10001d50
        add     esp, 0x4
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jnz     L_c1ec
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        add     esp, 0x8
        ret     0xc
    L_c1ec:
        mov     dword ptr [eax + esi*4 + 0x8], ebx
        xor     ebx, ebx
        test    esi, esi
        mov     dword ptr [eax + esi*4 + 0x4], 0x454e4f5a
        lea     ebp, [eax + esi*4 + 0xc]
        mov     dword ptr [eax], esi
        jbe     L_c265
        lea     ecx, [eax + 0x4]
        mov     dword ptr [esp + 0x10], ecx
        nop
        __emit 0x8D  /* __emit: lea esp,[esp+0] (8D 64 24 00) — MSVC6 drops the 00 disp byte */
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_c210:
        mov     ecx, dword ptr [edi + ebx*4]
        test    ecx, ecx
        jnz     L_c21f
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx], ecx
        jmp     L_c255
    L_c21f:
        push    ecx
        call    FUN_1003791a
        mov     esi, dword ptr [edi + ebx*4]
        lea     eax, [eax + eax*1 + 0x2]
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x20]
        mov     edi, dword ptr [esp + 0x24]
        add     esp, 0x4
        mov     dword ptr [ecx], ebp
        add     ebp, eax
        mov     eax, dword ptr [esp + 0x14]
    L_c255:
        mov     edx, dword ptr [esp + 0x10]
        inc     ebx
        add     edx, 0x4
        cmp     ebx, esi
        mov     dword ptr [esp + 0x10], edx
        jc      L_c210
    L_c265:
        mov     edx, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [edx], eax
        xor     eax, eax
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
