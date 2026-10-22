/*
 * FUN_005ef7a0 (63 B) — __thiscall (ECX = this), no stack params, RET.
 *
 * Calls virtual method at [this->78]+4. If this->194 is non-null,
 * calls FUN_005AC070(this->194, [ret+0x3C]) and
 * FUN_005AC250(this->194, [ret+0x40], [ret+0x3C], 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005ac070(int param);
extern void __cdecl FUN_005ac250(int a, int b, int c);

__declspec(naked) void __stdcall FUN_005ef7a0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 0x4]
        mov     esi, dword ptr [esi + 0x194]
        test    esi, esi
        mov     edi, eax
        jz      l_db
        mov     ecx, dword ptr [edi + 0x3C]
        push    ebx
        mov     ebx, ecx
        mov     dword ptr [esp + 0xC], ecx
        push    ebx
        mov     ecx, esi
        call    FUN_005ac070
        mov     edx, dword ptr [edi + 0x40]
        push    0x0
        push    ebx
        push    edx
        mov     ecx, esi
        call    FUN_005ac250
        pop     ebx
    l_db:
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
