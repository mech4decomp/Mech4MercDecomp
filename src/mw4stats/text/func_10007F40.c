/*
 * FUN_10007F40 (57 B) - __fastcall (ECX = this). If the current char is
 * '=', advances and re-validates, returning 1. Otherwise reports an error
 * via FUN_10008d30 and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10007F00(void);
extern void __cdecl FUN_10006ec0(void);
extern void __cdecl FUN_10008d30(void);
extern char g_str_100256bc[];

__declspec(naked) void __cdecl FUN_10007F40(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        xor     bl, bl
        call    FUN_10007F00
        mov     eax, dword ptr [esi + 0x14]
        cmp     word ptr [eax], 0x3d
        jnz     L68
        lea     ecx, [esi + 0xc]
        call    FUN_10006ec0
        mov     ecx, esi
        call    FUN_10007F00
        pop     esi
        mov     al, 0x1
        pop     ebx
        ret
L68:
        push    offset g_str_100256bc
        mov     ecx, esi
        call    FUN_10008d30
        mov     al, bl
        pop     esi
        pop     ebx
        ret
    }
}
