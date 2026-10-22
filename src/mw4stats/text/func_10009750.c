/*
 * FUN_10009750 (54 B) - Release: InterlockedDecrement on the refcount
 * at +4. If it hits 0, runs the destructor FUN_10009620 and frees via
 * FUN_1000a110, returns 0. Otherwise returns the new refcount.
 *
 * __stdcall, 1 param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10009750 (54 B, __stdcall, 1 param) - Release:
 * InterlockedDecrement(&this->refcount [+4]).
 * If it hits 0: run destructor FUN_10009620 (ECX=this), free via
 * FUN_1000a110, return 0. Otherwise return the new refcount.
 * CFLAGS: /O2
 */

extern void __cdecl FUN_10009620(void);
extern void __cdecl FUN_1000a110(void *);
extern long *g_10021018;   /* InterlockedDecrement IAT @ 0x10021018 */

__declspec(naked) long __cdecl FUN_10009750(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        lea     edi, [esi + 4]
        push    edi
        call    dword ptr [g_10021018]
        test    eax, eax
        jnz     L_ret
        test    esi, esi
        jz      L_zero
        mov     ecx, esi
        call    FUN_10009620
        push    esi
        call    FUN_1000a110
        add     esp, 4
L_zero:
        pop     edi
        xor     eax, eax
        pop     esi
        ret     4
L_ret:
        mov     eax, dword ptr [edi]
        pop     edi
        pop     esi
        ret     4
    }
}
