/*
 * FUN_10011f90 (108 B, __fastcall, ECX = this) - Critical-section-guarded
 * teardown of a linked list of objects at this+0x20. Walks the chain
 * (next at +0xa4), deletes a sub-object at +0x9c if this+0x18 is set,
 * calls FUN_10012000 + FUN_1000a110 on each node, then clears this+0x1c
 * and this+0x24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * CFLAGS: /O2
 * 100% @ "/O2". Codegen notes:
 * - f20 is declared `volatile` so the three reads (->next, ->f9c, node)
 * are emitted in source order: MSVC otherwise hoists the f18 load before
 * the next load (into CL, preserving EAX), which makes the delete reuse
 * EAX instead of reloading this->f20 into ECX.
 * - The final store is done through a non-volatile cast
 * `*(Node11f90 **)&thisp->f20 = next` so MSVC emits `test ebp,ebp; mov
 * [esi+0x20],ebp; jnz` (test-then-store); a plain volatile store is
 * scheduled store-then-test.
 */

extern void *g_10021048;   /* IAT: EnterCriticalSection */
extern void *g_10021044;   /* IAT: LeaveCriticalSection */
extern void __cdecl FUN_1001ee22(void);
extern void __cdecl FUN_10012000(void);
extern void __cdecl FUN_1000a110(void);

__declspec(naked) void __cdecl FUN_10011f90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    esi
        call    dword ptr [g_10021048]      /* EnterCriticalSection */
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        jz      L_11fe5
        push    ebp
        push    edi
    L_11fa3:
        mov     eax, dword ptr [esi + 0x20]
        mov     ebp, dword ptr [eax + 0xa4]
        mov     al, byte ptr [esi + 0x18]
        test    al, al
        jz      L_11fc5
        mov     ecx, dword ptr [esi + 0x20]
        mov     edx, dword ptr [ecx + 0x9c]
        push    edx
        call    FUN_1001ee22
        add     esp, 4
    L_11fc5:
        mov     edi, dword ptr [esi + 0x20]
        test    edi, edi
        jz      L_11fdc
        mov     ecx, edi
        call    FUN_10012000
        push    edi
        call    FUN_1000a110
        add     esp, 4
    L_11fdc:
        test    ebp, ebp
        mov     dword ptr [esi + 0x20], ebp
        jnz     L_11fa3
        pop     edi
        pop     ebp
    L_11fe5:
        push    esi
        mov     dword ptr [esi + 0x1c], 0
        mov     dword ptr [esi + 0x24], 0
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        pop     esi
        ret
    }
}
