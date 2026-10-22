/*
 * FUN_004ea280 (141 B) — __thiscall, RET 0x4. MLR/Adept core: "set interest
 * level" dispatcher (compact variant). Computes the switch key from
 * this->0x14c and param_1->0x10, dispatches on 0/0x80/0x100/0x200/0x280/
 * 0x300/0x400/0x480/0x500; for 0x280/0x300/0x480/0x500 calls FUN_004179b0,
 * otherwise returns. Illegal values assert via FUN_006fab90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __cdecl FUN_006fab90(int);
extern void __cdecl FUN_004179b0(void);

extern char g_773358[];   /* string @ 0x773358 */

__declspec(naked) void FUN_004ea280(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ecx + 0x14c]
        mov     edx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, dword ptr [edx + 0x10]
        and     eax, 0x180
        and     esi, 0x180
        shl     eax, 0x2
        or      eax, esi
        cmp     eax, 0x280
        pop     esi
        jg      LEA2C9
        jz      LEA301
        cmp     eax, 0x100
        jg      LEA2C0
        jz      LEA30D
        test    eax, eax
        jz      LEA30D
        cmp     eax, 0x80
        jz      LEA30D
        jmp     LEA2EB
LEA2C0:
        cmp     eax, 0x200
        jz      LEA30D
        jmp     LEA2EB
LEA2C9:
        cmp     eax, 0x480
        jg      LEA2E4
        jz      LEA301
        cmp     eax, 0x300
        jz      LEA301
        cmp     eax, 0x400
        jnz     LEA2EB
        pop     ebp
        ret     0x4
LEA2E4:
        cmp     eax, 0x500
        jz      LEA301
LEA2EB:
        push    offset g_773358
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      LEA30D
        int     3
        /* assert-fail fall-through: duplicated epilogue (unreachable after INT3) */
        pop     ebp
        ret     0x4
LEA301:
        push    edx
        add     ecx, 0x154
        call    FUN_004179b0
LEA30D:
        pop     ebp
        ret     0x4
    }
}
