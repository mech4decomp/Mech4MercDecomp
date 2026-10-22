/*
 * FUN_0074a9b0 (44 B) — Walks a linked list rooted at global 0x008B7A1C.
 * For each node: if field_0xC is non-null, calls FUN_00740db0 (stdcall) with
 * it, then clears field_0xC, sets field_0x17 = 1, and advances via field_0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_8b7a1c;
extern void __stdcall FUN_00740db0(void *p);

__declspec(naked) void FUN_0074a9b0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_8b7a1c]
        test    esi, esi
        jz      done
again:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      skip
        push    eax
        call    FUN_00740db0
skip:
        mov     dword ptr [esi + 0xc], 0
        mov     byte ptr [esi + 0x17], 1
        mov     esi, dword ptr [esi + 0x8]
        test    esi, esi
        jnz     again
done:
        pop     esi
        ret
    }
}
