/*
 * FUN_00736C50 (122 B) — __stdcall RET 0xC (3 params). Loops up to 0x400
 * times calling a callback (g_0076b23c) and an IAT function (0x8aa600);
 * on success formats a message via IAT 0x76b4f8, else returns a default
 * string pointer (0x76b768).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008aa9fc;
extern void *g_0076b23c;   /* callback fn ptr */
extern void *g_008aa600;   /* IAT */
extern void *g_0076b4f8;   /* IAT */

__declspec(naked) void FUN_00736C50(void)
{
    __asm {
        mov     eax, dword ptr [g_008aa9fc]
        push    ebx
        push    ebp
        push    esi
        xor     esi, esi
        cmp     eax, esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [edi], esi
        mov     dword ptr [edi], 0x14
        mov     dword ptr [esp + 0x14], esi
        je      L736c9a
        mov     ebx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [g_0076b23c]
    L736c79:
        push    edi
        lea     eax, [esp + 0x18]
        mov     ecx, ebx
        push    eax
        sub     ecx, esi
        push    ecx
        call    ebp
        push    eax
        call    dword ptr [g_008aa600]
        test    eax, eax
        jne     L736ca6
        inc     esi
        cmp     esi, 0x400
        jl      L736c79
    L736c9a:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x76b768
        pop     ebx
        ret     0xc
    L736ca6:
        mov     edx, dword ptr [edi + 8]
        mov     eax, dword ptr [edi + 0xc]
        mov     esi, dword ptr [esp + 0x18]
        push    edx
        push    eax
        push    0x7a68ec
        push    esi
        call    dword ptr [g_0076b4f8]
        add     esp, 0x10
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
