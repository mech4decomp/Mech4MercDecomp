/*
 * FUN_005FD660 (139 B of a 149 B block) — __cdecl (1 stack arg, RET 0).
 * Calls FUN_005FD6F0, then FUN_0061C1B0 with 11 args, copies the string
 * at 0x77B2C8 into a local buffer (repne scasb + rep movsd/movsb), and
 * calls FUN_0061DB90 with 4 args. Returns (result >= 0).
 *
 * NOTE: the 149 B block also contains an extra jmp thunk at 0x005FD6F0
 * (jmp 0x61D710, not in this assigned list).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005FD6F0(void);
extern void __cdecl FUN_0061C1B0(void);
extern void __cdecl FUN_0061DB90(void);

__declspec(naked) void FUN_005FD660(void)
{
    __asm {
        sub     esp, 0x80
        push    esi
        push    edi
        call    FUN_005FD6F0
        push    0
        push    0
        push    0
        push    0
        push    0x64
        push    0xc8
        push    0xc7ff
        push    0x4fff
        push    0x4afff
        push    0x7cfff
        push    0xbb7ff
        call    FUN_0061C1B0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77b2c8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [esp + 0x34]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        push    0
        push    0
        mov     ecx, eax
        and     ecx, 3
        push    0
        rep     movsb
        mov     ecx, dword ptr [esp + 0xc4]
        push    0
        push    ecx
        lea     edx, [esp + 0x48]
        push    edx
        call    FUN_0061DB90
        add     esp, 0x44
        test    eax, eax
        pop     edi
        setge   al
        pop     esi
        add     esp, 0x80
        ret
    }
}
