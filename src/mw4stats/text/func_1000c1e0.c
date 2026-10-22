/*
 * FUN_1000c1e0 (60 B) - __stdcall. Decrements the refcount at param_1+4
 * (InterlockedDecrement). If it reaches 0, runs FUN_1000c220 (init),
 * FUN_1000c020 (destructor) and FUN_1000a110 (free), returning 0;
 * otherwise returns the new refcount.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_1000c1e0 (60 B, __stdcall, 1 param) -- refcount release.
 * InterlockedDecrement(&p->refcount); if it reaches 0, run init,
 * destructor and free, returning 0; otherwise return the new refcount.
 */

extern void *g_10021018;   /* InterlockedDecrement IAT @ 0x10021018 */
extern void __cdecl FUN_1000c220(void);
extern void FUN_1000c020(void);
extern void FUN_1000a110(void);

__declspec(naked) long FUN_1000c1e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        lea     edi, [esi + 0x4]
        push    edi
        call    dword ptr [g_10021018]
        test    eax, eax
        jnz     L215
        push    esi
        call    FUN_1000c220
        test    esi, esi
        jz      L20E
        mov     ecx, esi
        call    FUN_1000c020
        push    esi
        call    FUN_1000a110
        add     esp, 0x4
L20E:
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x4
L215:
        mov     eax, dword ptr [edi]
        pop     edi
        pop     esi
        ret     0x4
    }
}
