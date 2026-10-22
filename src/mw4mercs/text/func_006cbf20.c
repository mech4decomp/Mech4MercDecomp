/*
 * FUN_006cbf20 (184 B) — __thiscall (ECX = this), RET 0x4 (1 stack arg).
 *
 * Tokenizes a string at [esp+0x10], copying each whitespace-delimited
 * token into the global buffer DAT_0083a25c, then calls FUN_006cbea0
 * (hash) and FUN_006cb240 on it, updating global counters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82f358;   /* DAT_0082f358 */
extern int g_82f374;   /* DAT_0082f374 */
extern int g_82f35c;   /* DAT_0082f35c */
extern int g_82f368;   /* DAT_0082f368 */

extern int __cdecl FUN_006cbea0(void);
extern void __cdecl FUN_006cb240(void);

__declspec(naked) void __fastcall FUN_006cbf20(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        cmp     byte ptr [esi], 0x0
        mov     ebx, ecx
        mov     ebp, esi
        jz      done
        push    edi
token_loop:
        mov     al, byte ptr [ebp]
        cmp     al, 0x20
        jl      token_end
inner_loop:
        movsx   ecx, al
        cmp     ecx, 0x80
        jge     token_end
        cmp     al, 0x20
        jz      token_end
        test    al, al
        jz      token_end
        mov     al, byte ptr [ebp + 0x1]
        inc     ebp
        cmp     al, 0x20
        jge     inner_loop
token_end:
        cmp     byte ptr [ebp], 0x0
        jz      skip_inc
        inc     ebp
skip_inc:
        mov     eax, ebp
        sub     eax, esi
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 2
        mov     edi, 0x83a25c
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        push    0x83a25c
        mov     ecx, ebx
        mov     byte ptr [eax + 0x83a25c], 0x0
        call    FUN_006cbea0
        mov     edx, dword ptr [g_82f358]
        mov     ecx, dword ptr [g_82f374]
        add     eax, edx
        cmp     eax, ecx
        jbe     no_grow
        mov     ecx, dword ptr [g_82f35c]
        mov     eax, dword ptr [ebx + 0x2c]
        add     ecx, eax
        mov     dword ptr [g_82f35c], ecx
        mov     ecx, dword ptr [g_82f368]
        mov     dword ptr [g_82f358], ecx
no_grow:
        push    0x83a25c
        mov     ecx, ebx
        call    FUN_006cb240
        cmp     byte ptr [ebp], 0x0
        mov     esi, ebp
        jnz     token_loop
        pop     edi
done:
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
