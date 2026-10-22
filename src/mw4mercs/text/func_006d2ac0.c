/*
 * FUN_006D2AC0 (120 B) — Archive item iterator destructor.
 *
 * __fastcall (ECX = this). Iterates items via iterator (vtable 0x79E9D8),
 * calls FUN_004DB630 on items with bit 3 of field_0x24 set. Frees
 * this[0] if non-null, destroys iterator, then calls FUN_00416E50
 * on this+4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00417170(void *);
extern int __cdecl FUN_00417230(void);
extern void __cdecl FUN_004db630(void *);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_004171b0(void);
extern void __cdecl FUN_00416e50(void);

__declspec(naked) void __cdecl FUN_006d2ac0(void)
{
    __asm {
        sub     esp, 0x14
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 4]
        push    edi
        lea     ecx, [esp + 0xc]
        call    FUN_00417170
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 8], 0x79e9d8
        call    FUN_00417230
        test    eax, eax
        jz      l_done_iter
    l_iter_loop:
        mov     ecx, dword ptr [eax + 0x24]
        shr     ecx, 3
        test    cl, 1
        jz      l_skip
        push    eax
        call    FUN_004db630
        add     esp, 4
    l_skip:
        lea     ecx, [esp + 8]
        call    FUN_00417230
        test    eax, eax
        jnz     l_iter_loop
    l_done_iter:
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 8]
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      l_free_done
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_free_done:
        lea     ecx, [esp + 8]
        call    FUN_004171b0
        mov     ecx, edi
        call    FUN_00416e50
        pop     edi
        pop     esi
        add     esp, 0x14
        ret
    }
}
