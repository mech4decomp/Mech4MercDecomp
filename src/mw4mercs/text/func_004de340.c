/*
 * FUN_004DE340 (13 B) — Conditional getter: if field at +0x8 (this, ECX)
 * is non-null, return its first DWORD; else return 0.
 *
 * __fastcall (ECX = this), no stack params, returns EAX.
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004de340(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 8]
        test    eax, eax
        jz      l_null
        mov     eax, dword ptr [eax]
        ret
    l_null:
        xor     eax, eax
        ret
    }
}
