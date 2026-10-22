/*
 * FUN_00402e60 (91 B) - Copies a string from a game-list object into a local
 * buffer and passes it to FUN_00405f30. __stdcall, 3 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00405f30(void);

extern int g_7dd268;

__declspec(naked) void FUN_00402e60(void)
{
    __asm {
        sub     esp, 0x100
        mov     eax, dword ptr [g_7dd268]
        push    esi
        push    edi
        mov     byte ptr [esp + 8], 0
        mov     ecx, dword ptr [eax + 0x40ee8]
        mov     edi, dword ptr [ecx + 0x60]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [esp + 8]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        lea     ecx, [esp + 8]
        push    ecx
        push    0x7b7dc8
        call    FUN_00405f30
        add     esp, 8
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x100
        ret     0xc
    }
}
