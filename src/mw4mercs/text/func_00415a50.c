/*
 * FUN_00415a50 (27 B) — __fastcall (ECX=this): calls virtual method at
 * vtable+0x18; if it returns non-NULL, calls virtual method at vtable+0x10
 * with (this) and returns the first result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00415a50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax+0x18]
        mov     edi, eax
        test    edi, edi
        jz      L_ret
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+0x10]
    L_ret:
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
