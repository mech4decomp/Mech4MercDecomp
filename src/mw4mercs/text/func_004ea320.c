/*
 * FUN_004ea320 (157 B) — __thiscall, RET 0x4. MLR/Adept core: "set interest
 * level" dispatcher (compact variant). Computes the switch key from
 * this->0x14c and param_1->0x10, dispatches on 0/0x80/0x100/0x200/0x280/
 * 0x300/0x400/0x480/0x500; for 0x280/0x300/0x480 calls FUN_004154d0, for
 * 0x500 calls FUN_0041fd80 then FUN_004154d0, otherwise returns. Illegal
 * values assert via FUN_006fab90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __cdecl FUN_006fab90(int);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004154d0(void);

extern char g_773358[];   /* string @ 0x773358 */

__declspec(naked) void FUN_004ea320(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14c]
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [edi + 0x10]
        and     eax, 0x180
        shl     eax, 0x2
        and     ecx, 0x180
        or      eax, ecx
        cmp     eax, 0x280
        jg      LEA36B
        jz      LEA3AF
        cmp     eax, 0x100
        jg      LEA362
        jz      LEA3BD
        test    eax, eax
        jz      LEA3BD
        cmp     eax, 0x80
        jz      LEA3BD
        jmp     LEA38F
LEA362:
        cmp     eax, 0x200
        jz      LEA3BD
        jmp     LEA38F
LEA36B:
        cmp     eax, 0x480
        jg      LEA388
        jz      LEA3AF
        cmp     eax, 0x300
        jz      LEA3AF
        cmp     eax, 0x400
        jnz     LEA38F
        pop     edi
        pop     esi
        pop     ebp
        ret     0x4
LEA388:
        cmp     eax, 0x500
        jz      LEA3A7
LEA38F:
        push    offset g_773358
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      LEA3BD
        int     3
        /* assert-fail fall-through: duplicated epilogue (unreachable after INT3) */
        pop     edi
        pop     esi
        pop     ebp
        ret     0x4
LEA3A7:
        lea     ecx, [edi + 0x20]
        call    FUN_0041fd80
LEA3AF:
        add     esi, 0x154
        push    esi
        mov     ecx, edi
        call    FUN_004154d0
LEA3BD:
        pop     edi
        pop     esi
        pop     ebp
        ret     0x4
    }
}
