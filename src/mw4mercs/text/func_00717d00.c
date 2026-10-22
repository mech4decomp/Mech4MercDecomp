/*
 * FUN_00717D00 (119 B) — __stdcall (RET 0x8, 2 params).
 *
 * Texture "Setname" helper. Validates the texture index against
 * globals 0x8b2868/0x8b2874 and a flag at +4; on failure logs via
 * FUN_006fab90 and traps. Then copies param_2 (if non-empty and
 * < 0x104 chars) or "Unnamed texture" via FUN_00753980 (thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00753980(void);

extern char g_8b2868;
extern int g_8b2874;

__declspec(naked) void __stdcall FUN_00717d00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     al, byte ptr [g_8b2868]
        test    al, al
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        jz      L_717d29
        mov     eax, dword ptr [g_8b2874]
        cmp     esi, eax
        jc      L_717d29
        lea     ecx, [esi + 0xfffd6fc0]
        cmp     ecx, eax
        jnc     L_717d29
        test    byte ptr [esi + 0x4], 0x4
        jnz     L_717d3c
L_717d29:
        push    esi
        push    0x7a275c
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_717d3c
        int     3
L_717d3c:
        mov     edx, dword ptr [ebp + 0xc]
        test    edx, edx
        jz      L_717d66
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x104
        pop     edi
        jnc     L_717d66
        push    edx
        mov     ecx, esi
        call    FUN_00753980
        pop     esi
        pop     ebp
        ret     0x8
L_717d66:
        push    0x7a274c
        mov     ecx, esi
        call    FUN_00753980
        pop     esi
        pop     ebp
        ret     0x8
    }
}
