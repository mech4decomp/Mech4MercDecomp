/*
 * FUN_004cfc30 (96 B) — MLR network subsystem: path-string stack push
 * variant (__thiscall, RET 4). Same as FUN_004cfbd0 but reads the source
 * string from [arg+0x24]. strdup + truncate at last '\' + push onto stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_0076b2cc;
extern int *g_0076b2a0;
extern void FUN_006fab90(void);

__declspec(naked) void FUN_004cfc30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax + 0x24]
        push    edi
        push    ecx
        call    dword ptr [g_0076b2cc]
        mov     edi, eax
        push    0x5c
        push    edi
        call    dword ptr [g_0076b2a0]
        add     esp, 0xc
        test    eax, eax
        jz      loc_fc5c
        mov     byte ptr [eax + 0x1], 0x0
        jmp     loc_fc5f
loc_fc5c:
        mov     byte ptr [edi], 0x0
loc_fc5f:
        mov     edx, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [esi + 0xc]
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x8], edx
        jnz     loc_fc81
        push    0x77238c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      loc_fc81
        int     3
loc_fc81:
        mov     edx, dword ptr [esi + 0x8]
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [eax + edx*4], edi
        pop     edi
        pop     esi
        pop     ebp
        ret     0x4
    }
}
