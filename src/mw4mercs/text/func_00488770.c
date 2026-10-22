/*
 * FUN_00488770 (73 B) — Insert item into hash bucket.
 *
 * __thiscall (ECX = this), RET 0x08 (2 stack params).
 * Calls vtable+0x08, then inserts a reference to a stack-local (-1 sentinel)
 * into a hash bucket indexed by (param2+4) & 0xf.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00488770(int param1, int param2)
{
    __asm {
        push    ecx
        mov     edx, dword ptr [esp + 0x08]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x08]
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], 0xffffffff
        call    dword ptr [eax + 0x08]
        mov     eax, dword ptr [edi + 0x04]
        mov     edx, dword ptr [esp + 0x08]
        and     eax, 0x0f
        test    edx, edx
        jl      l_done
        mov     ecx, dword ptr [esi + eax * 4 + 0x14]
        lea     edi, [ecx + 0x01]
        mov     dword ptr [esi + eax * 4 + 0x14], edi
        mov     eax, dword ptr [esi + eax * 8 + 0x54]
        mov     dword ptr [eax + ecx * 4], edx
    l_done:
        pop     edi
        pop     esi
        pop     ecx
        ret     0x08
    }
}
