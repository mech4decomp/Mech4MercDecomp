/*
 * FUN_00717CB0 (68 B) — Getname on a texture.
 *
 * Validates param_1 against global texture bounds (0x8B2868/0x8B2874)
 * and the flag at [param_1+4]&4; if invalid, logs via FUN_006FAB90 and
 * breaks (INT3) on nonzero. Returns *(param_1+0x14).
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_008b2868;
extern int g_008b2874;
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) unsigned int __stdcall FUN_00717CB0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     al, byte ptr [g_008b2868]
        test    al, al
        push    esi
        mov     esi, dword ptr [ebp + 8]
        jz      invalid
        mov     eax, dword ptr [g_008b2874]
        cmp     esi, eax
        jc      invalid
        lea     ecx, [esi + 0xFFFD6FC0]
        cmp     ecx, eax
        jnc     invalid
        test    byte ptr [esi + 4], 4
        jnz     valid
invalid:
        push    esi
        push    0x7A2728
        call    FUN_006FAB90
        add     esp, 8
        test    eax, eax
        jz      valid
        int     3
valid:
        mov     eax, dword ptr [esi + 0x14]
        pop     esi
        pop     ebp
        ret     4
    }
}
