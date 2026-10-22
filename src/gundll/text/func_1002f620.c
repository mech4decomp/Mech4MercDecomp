/*
 * FUN_1002f620 (43 B) — __fastcall.
 * Linked-list walk: for each node, call FUN_1000c4c0(g_1005504c, node);
 * stops when node == this. Tail-jumps to FUN_1001ad90.
 *
 * CFLAGS: /O1
 */

extern int g_1005504c;
extern void __cdecl FUN_1000c4c0(void);
extern void __cdecl FUN_1001ad90(void);

__declspec(naked) void FUN_1002f620(void)
{
    __asm {
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi]
        cmp     eax, edi
        je      done
    loop_:
        push    esi
        __emit 0x8D  /* __emit: MSVC6 encodes lea ebx,[ebx] as 2-byte 8D 1B; ref uses 6-byte alignment NOP 8D 9B 00 00 00 00 */
        __emit 0x9B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     esi, dword ptr [eax]
        push    eax
        mov     eax, dword ptr [g_1005504c]
        push    eax
        call    FUN_1000c4c0
        cmp     esi, edi
        mov     eax, esi
        __emit 0x75  /* __emit: MSVC6 miscomputes backward JNE rel8 across the call reloc (emits E5, ref EC) */
        __emit 0xEC
        pop     esi
    done:
        pop     edi
        jmp     FUN_1001ad90
    }
}
