/*
 * FUN_004cfbd0 (95 B) — MLR network subsystem: path-string stack push
 * (__thiscall, RET 4). strdup's the input, truncates at last '\', pushes
 * the pointer onto an internal stack with an assert guard.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_0076b2cc;
extern int *g_0076b2a0;
extern void FUN_006fab90(void);

__declspec(naked) void FUN_004cfbd0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        push    edi
        push    ecx
        call    dword ptr [g_0076b2cc]
        mov     edi, eax
        push    0x5c
        push    edi
        call    dword ptr [g_0076b2a0]
        add     esp, 0xc
        test    eax, eax
        jz      loc_fbfb
        mov     byte ptr [eax + 0x1], 0x0
        jmp     loc_fbfe
loc_fbfb:
        mov     byte ptr [edi], 0x0
loc_fbfe:
        mov     edx, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [esi + 0xc]
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x8], edx
        jnz     loc_fc20
        push    0x77238c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      loc_fc20
        int     3
loc_fc20:
        mov     edx, dword ptr [esi + 0x8]
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [eax + edx*4], edi
        pop     edi
        pop     esi
        pop     ebp
        ret     0x4
    }
}
