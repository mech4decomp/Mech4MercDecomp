/*
 * FUN_006f4140 (240 B) — Memory realloc wrapper (gos_Realloc).
 *
 * Reallocates a block, handling the GameOS heap header layout. Falls back
 * to CRT realloc (IAT 0x0076b310) when a global flag is set or the thread
 * id differs.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_858980;
extern int g_858c08;
extern int g_8aaa00;
extern void *g_76b158;   /* IAT: GetCurrentThreadId */
extern void *g_76b310;   /* IAT: realloc */
extern char g_79f844[];  /* "Bad memory pointer..." format string */
extern void *__cdecl FUN_006f3c80(int a, int b);
extern void __cdecl FUN_006f4230(void *p);
extern int __cdecl FUN_006fab90(const char *fmt, ...);

__declspec(naked) void *__stdcall FUN_006f4140(void *param_1, void *param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [g_858980], 1
        push    ebx
        push    edi
        jz      loc_6f4219
        mov     eax, dword ptr [g_858c08]
        test    eax, eax
        jz      loc_6f416d
        call    dword ptr [g_76b158]
        cmp     dword ptr [g_8aaa00], eax
        jnz     loc_6f4219
loc_6f416d:
        mov     ebx, dword ptr [ebp + 0x8]
        test    ebx, ebx
        jnz     loc_6f418f
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jnz     loc_6f4181
        pop     edi
        pop     ebx
        pop     ebp
        ret     8
loc_6f4181:
        push    0
        push    eax
        call    FUN_006f3c80
        pop     edi
        pop     ebx
        pop     ebp
        ret     8
loc_6f418f:
        mov     edi, dword ptr [ebp + 0xc]
        test    edi, edi
        jnz     loc_6f41a4
        push    ebx
        call    FUN_006f4230
        pop     edi
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     8
loc_6f41a4:
        mov     al, byte ptr [ebx - 1]
        push    esi
        xor     esi, esi
        cmp     al, 0xfe
        jnz     loc_6f41b5
        mov     eax, dword ptr [ebx - 5]
        mov     esi, dword ptr [eax]
        jmp     loc_6f41e4
loc_6f41b5:
        test    al, al
        jbe     loc_6f41d1
        cmp     al, 0xfd
        jnc     loc_6f41d1
        mov     eax, ebx
        and     eax, 0xffff0000
        mov     ax, word ptr [eax + 0x14]
        and     eax, 0xffff
        mov     esi, eax
        jmp     loc_6f41e4
loc_6f41d1:
        push    ebx
        push    offset g_79f844
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      loc_6f41e4
        int     3
loc_6f41e4:
        push    0
        push    edi
        call    FUN_006f3c80
        cmp     esi, edi
        mov     dword ptr [ebp + 0xc], eax
        jle     loc_6f41f5
        mov     esi, edi
loc_6f41f5:
        mov     ecx, esi
        mov     edx, ecx
        shr     ecx, 2
        mov     edi, eax
        mov     esi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        push    ebx
        rep     movsb
        call    FUN_006f4230
        mov     eax, dword ptr [ebp + 0xc]
        pop     esi
        pop     edi
        pop     ebx
        pop     ebp
        ret     8
loc_6f4219:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        call    dword ptr [g_76b310]
        add     esp, 8
        pop     edi
        pop     ebx
        pop     ebp
        ret     8
    }
}
