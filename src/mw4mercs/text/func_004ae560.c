/*
 * FUN_004AE560 (62 B) — calls virtual method at vtable+0x24 with field_0x08,
 * then if field_0x08 > 0, calls vtable+0x24 again with field_0x04 and size.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004ae560(int this, int param1)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, [esp + 0x0c]
        mov     edx, [esi]
        push    edi
        mov     edi, ecx
        mov     eax, [edi + 0x8]
        mov     [esp + 0x8], eax
        push    0x4
        lea     eax, [esp + 0x0c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, [esp + 0x8]
        test    eax, eax
        jbe     l_done
        mov     ecx, [edi + 0x4]
        mov     edx, [esi]
        lea     eax, [eax + eax * 0x2]
        shl     eax, 0x2
        push    eax
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
    l_done:
        pop     edi
        pop     esi
        pop     ecx
        ret     0x4
    }
}
