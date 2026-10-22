/*
 * FUN_006F30A0 (60 B) — Destructor-like function.
 *
 * Sets vtable to 0x79F688, calls FUN_00417980(this+0x28) and
 * FUN_004169C0(this+0x14). Decrements refcount at this+0x10[-1],
 * frees if zero. Calls FUN_00415380(this).
 *
 * __fastcall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00417980(void);
extern void __fastcall FUN_004169c0(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __fastcall FUN_00415380(void);

__declspec(naked) void __fastcall FUN_006f30a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x28]
        mov     dword ptr [esi], 0x0079f688
        call    FUN_00417980
        lea     ecx, [esi + 0x14]
        call    FUN_004169c0
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      l_skip_free
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
