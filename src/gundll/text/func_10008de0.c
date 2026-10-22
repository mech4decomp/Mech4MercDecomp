/*
 * FUN_10008de0 (126 B) — __stdcall, RET 0xC. Allocates a buffer via
 * FUN_10001d50, retries doubling size on 0xc1120002, fills out params.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_1001c600(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10008de0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     ebx, 0x1f4
        __emit 0x8D  /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[ecx] (8D 09 vs ref 8D 49 00) */
        __emit 0x49
        __emit 0x00
    L_df0:
        push    ebx
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_e23
        lea     eax, [esp + 0x14]
        push    eax
        push    ebx
        push    esi
        push    ebp
        call    FUN_1001c600
        mov     edi, eax
        cmp     edi, 0xc1120002
        jnz     L_e2f
        push    esi
        call    FUN_10001d60
        add     esp, 4
        add     ebx, ebx
        jmp     L_df0
    L_e23:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        ret     0xc
    L_e2f:
        test    edi, edi
        jl      L_e4c
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx], esi
        mov     dword ptr [edx], eax
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    L_e4c:
        push    esi
        call    FUN_10001d60
        add     esp, 4
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
