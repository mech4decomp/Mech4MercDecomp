/*
 * FUN_004D7070 (133 B) — __stdcall RET 0x4 (1 param). Allocates a 0x160
 * object via FUN_004084D0, sets its vtable (0x772ea0), copies a string
 * from an arg (or FUN_004D7A00) into [ebp+4], initializes fields, and
 * calls FUN_004D7AB0. Returns the object or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_004D7A00(void);
extern void __cdecl FUN_004D7AB0(void);

__declspec(naked) void FUN_004D7070(void)
{
    __asm {
        push    ebp
        push    0x160
        call    FUN_004084D0
        mov     ebp, eax
        add     esp, 4
        test    ebp, ebp
        je      L4d709a
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        mov     dword ptr [ebp], 0x772ea0
        je      L4d70a0
        lea     edx, [ebp + 4]
        jmp     L4d70aa
    L4d709a:
        xor     eax, eax
        pop     ebp
        ret     4
    L4d70a0:
        call    FUN_004D7A00
        lea     edx, [ebp + 4]
        mov     edi, eax
    L4d70aa:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     dword ptr [ebp + 0x158], 6
        mov     byte ptr [ebp + 0x104], 0
        mov     dword ptr [ebp + 0x15c], 0
        call    FUN_004D7AB0
        pop     edi
        mov     dword ptr [ebp + 0x154], eax
        pop     esi
        mov     eax, ebp
        pop     ebp
        ret     4
    }
}
