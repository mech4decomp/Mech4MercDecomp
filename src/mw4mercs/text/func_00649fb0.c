/*
 * FUN_00649fb0 (94 B) — __cdecl. ABL syntax-error emit into a scratch buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_007b5a2f;
extern int g_00805910;
extern int g_00805954;
extern int g_00805914;
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00649fb0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     al, byte ptr [g_007b5a2f]
        test    al, al
        jnz     L_go
        xor     eax, eax
        pop     ebp
        ret
    L_go:
        mov     eax, dword ptr [g_00805910]
        mov     ecx, dword ptr [g_00805954]
        lea     edx, [ecx + eax*0x1 - 0x64]
        mov     eax, dword ptr [g_00805914]
        push    esi
        xor     esi, esi
        cmp     eax, edx
        jc      L_store
        push    0x12
        push    0x7929f4
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_ret2
        int     3
        /* dead code after INT3 (never reached) — return sequence duplicated */
        mov     eax, esi
        pop     esi
        pop     ebp
        ret
    L_store:
        mov     cl, byte ptr [eax - 0x1]
        mov     edx, dword ptr [ebp + 0x8]
        dec     eax
        mov     byte ptr [eax], 0x49
        inc     eax
        mov     dword ptr [eax], edx
        mov     esi, eax
        add     eax, 0x4
        mov     byte ptr [eax], cl
        inc     eax
        mov     dword ptr [g_00805914], eax
    L_ret2:
        mov     eax, esi
        pop     esi
        pop     ebp
        ret
    }
}
