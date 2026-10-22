/*
 * FUN_10041e81 (45 B) — __thiscall.
 * Wraps two helper calls with a stack-built argument block.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100444a8(void);
extern void __cdecl FUN_10041ddb(void);

__declspec(naked) void FUN_10041e81(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        xor     eax, eax
        push    eax
        push    eax
        push    eax
        push    eax
        push    dword ptr [ebp + 0xc]
        lea     eax, [ebp + 0xc]
        push    eax
        lea     eax, [ebp - 0xc]
        push    eax
        call    FUN_100444a8
        push    dword ptr [ebp + 0x8]
        lea     eax, [ebp - 0xc]
        push    eax
        call    FUN_10041ddb
        add     esp, 0x24
        leave
        ret
    }
}
