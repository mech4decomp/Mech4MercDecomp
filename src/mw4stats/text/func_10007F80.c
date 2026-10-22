/*
 * FUN_10007F80 (123 B) - __fastcall (ECX = this). Parses an entity
 * reference: expects '&', then a valid name (FUN_10007E00), then ';'.
 * Reports specific errors via FUN_10008d30 on each failure path.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10006ef0(void);
extern void __cdecl FUN_10007E00(void);
extern void __cdecl FUN_10008d30(void);
extern char g_str_100256cc[];
extern char g_str_100256c4[];
extern char g_str_100256c0[];

__declspec(naked) void __cdecl FUN_10007F80(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     bl, 0x1
        mov     eax, dword ptr [esi + 0x14]
        cmp     word ptr [eax], 0x26
        jnz     Lfe7
        lea     edi, [esi + 0xc]
        push    0x0
        mov     ecx, edi
        call    FUN_10006ef0
        mov     ecx, esi
        call    FUN_10007E00
        test    al, al
        jz      Lfd3
        mov     ecx, dword ptr [esi + 0x14]
        cmp     word ptr [ecx], 0x3b
        jnz     Lfbf
        push    0x0
        mov     ecx, edi
        call    FUN_10006ef0
        pop     edi
        mov     al, bl
        pop     esi
        pop     ebx
        ret
Lfbf:
        push    offset g_str_100256cc
        mov     ecx, esi
        xor     bl, bl
        call    FUN_10008d30
        pop     edi
        mov     al, bl
        pop     esi
        pop     ebx
        ret
Lfd3:
        push    offset g_str_100256c4
        mov     ecx, esi
        xor     bl, bl
        call    FUN_10008d30
        pop     edi
        mov     al, bl
        pop     esi
        pop     ebx
        ret
Lfe7:
        push    offset g_str_100256c0
        mov     ecx, esi
        xor     bl, bl
        call    FUN_10008d30
        pop     edi
        mov     al, bl
        pop     esi
        pop     ebx
        ret
    }
}
