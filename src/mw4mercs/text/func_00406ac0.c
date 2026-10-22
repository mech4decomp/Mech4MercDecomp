/*
 * FUN_00406ac0 (152 B) -- loads a module handle via the function pointer at
 * 0x76b0c0, asserts on failure, resolves an export via 0x76b0c8, then calls
 * it with args from the stack frame. Returns nonzero on success (setnz).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);
extern int g_0076b0c0;
extern int g_0076b0c8;
extern int g_0076b0b8;
extern int g_0076b0b4;
extern char g_0076c658[];
extern char g_0076c64c[];
extern char g_0076c634[];
extern char g_0076c62c[];
extern char g_0076c604[];
extern char g_0076c5c8[];

__declspec(naked) void FUN_00406ac0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [g_0076b0c0]
        push    offset g_0076c658
        call    edi
        mov     esi, eax
        test    esi, esi
        jnz     L_af8
        push    offset g_0076c64c
        call    edi
        mov     esi, eax
        test    esi, esi
        jnz     L_af8
        push    offset g_0076c634
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_af8
        int     3
L_af8:
        push    offset g_0076c62c
        push    esi
        call    dword ptr [g_0076b0c8]
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_b23
        push    esi
        call    dword ptr [g_0076b0b8]
        push    offset g_0076c604
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_b23
        int     3
L_b23:
        mov     edi, dword ptr [ebp+0xc]
        push    edi
        call    dword ptr [g_0076b0b4]
        inc     eax
        neg     eax
        sbb     eax, eax
        and     eax, edi
        push    1
        push    eax
        mov     eax, dword ptr [ebp+0x8]
        push    eax
        push    offset g_0076c5c8
        call    ebx
        add     esp, 0x10
        push    esi
        mov     edi, eax
        call    dword ptr [g_0076b0b8]
        test    edi, edi
        pop     edi
        pop     esi
        setnz   al
        pop     ebx
        pop     ebp
        ret
    }
}
