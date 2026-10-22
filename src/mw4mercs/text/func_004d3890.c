/*
 * FUN_004D3890 (31 B) — Constructor-like method.
 *
 * __thiscall (ECX = this), no stack params.
 * Sets vtable, checks [this+0x4c], calls virtual func if non-null,
 * then calls sub-function.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004CC150(int this);

__declspec(naked) void __fastcall FUN_004D3890(int this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, [esi + 0x4c]
        test    ecx, ecx
        mov     dword ptr [esi], 0x00772868
        jz      l_skip
        mov     eax, [ecx]
        push    1
        call    dword ptr [eax]
    l_skip:
        mov     ecx, esi
        call    FUN_004CC150
        pop     esi
        ret
    }
}
