/*
 * FUN_00416a00 (34 B) — __fastcall (ECX=this) teardown: walks the linked
 * list at this+0xc, calling each node's vtable[0](1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00416a00(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0xc]
        test    eax, eax
        jz      L_16a21
        push    esi
    L_16a08:
        mov     esi, dword ptr [eax+0x10]
        mov     eax, dword ptr [eax+0xc]
        test    eax, eax
        jz      L_16a1a
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
    L_16a1a:
        test    esi, esi
        mov     eax, esi
        jnz     L_16a08
        pop     esi
    L_16a21:
        ret
    }
}
