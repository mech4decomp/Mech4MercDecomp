/*
 * FUN_0059f1b0 (44 B) — Destructor for class with vtable 0x7839A0.
 * Decrements refcount at [this+0x20], frees if zero, then calls
 * base destructor FUN_00415380.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084E0(void *);
extern void __fastcall FUN_00415380(void);

__declspec(naked) void __fastcall FUN_0059f1b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x007839A0   /* vtable */
        mov     eax, [esi + 0x20]
        test    eax, eax
        je      call_base_dtor
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     call_base_dtor
        push    eax
        call    FUN_004084E0
        add     esp, 4
    call_base_dtor:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
