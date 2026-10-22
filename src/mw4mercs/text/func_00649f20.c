/*
 * FUN_00649f20 (100 B) — __cdecl, no params. If DAT_007b5a2f is set,
 * appends a formatted token (0x48 + optional header) to a buffer at
 * DAT_00805914, or raises an ABL syntax error via FUN_006fab90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007b5a2f;
extern char g_007b5a2e;
extern char g_008058cc;
extern int g_00805910;
extern int g_00805954;
extern int g_00805914;
extern int g_008058c8;
extern int __cdecl FUN_006fab90(char *fmt, int arg);

__declspec(naked) void FUN_00649f20(void)
{
    __asm {
        mov     al, byte ptr [g_007b5a2f]
        test    al, al
        jz      L_done
        mov     eax, dword ptr [g_00805910]
        mov     ecx, dword ptr [g_00805954]
        lea     edx, [ecx + eax*1 - 0x64]
        mov     eax, dword ptr [g_00805914]
        cmp     eax, edx
        jc      L_append
        push    0x12
        push    0x7929f4
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_done
        int     3
        ret
L_append:
        mov     cl, byte ptr [eax - 0x1]
        mov     dl, byte ptr [g_007b5a2e]
        dec     eax
        mov     byte ptr [eax], 0x48
        inc     eax
        test    dl, dl
        jz      L_nohdr
        mov     dl, byte ptr [g_008058cc]
        mov     byte ptr [eax], dl
        mov     edx, dword ptr [g_008058c8]
        inc     eax
        mov     dword ptr [eax], edx
        add     eax, 0x4
L_nohdr:
        mov     byte ptr [eax], cl
        inc     eax
        mov     dword ptr [g_00805914], eax
L_done:
        ret
    }
}
