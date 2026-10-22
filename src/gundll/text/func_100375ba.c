/*
 * FUN_100375ba (54 B) - __cdecl. Exception-record wrapper: forwards 8 args
 * (4 stack params + EAX + 3 zeros) to FUN_100390a4, returns result.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100390a4(void);   /* rel32 call */

__declspec(naked) void FUN_100375ba(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 4
        push    ebx
        push    esi
        push    edi
        cld
        mov     dword ptr [ebp - 4], eax
        xor     eax, eax
        push    eax
        push    eax
        push    eax
        push    dword ptr [ebp - 4]
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 8]
        call    FUN_100390a4
        add     esp, 0x20
        mov     dword ptr [ebp + 0x14], eax
        pop     edi
        pop     esi
        pop     ebx
        mov     eax, dword ptr [ebp + 0x14]
        mov     esp, ebp
        pop     ebp
        ret
    }
}
