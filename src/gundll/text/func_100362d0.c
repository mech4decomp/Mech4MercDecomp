/*
 * FUN_100362d0 (91 B) — __thiscall, RET 0x8.
 * Virtual dispatch helper: calls a method on param_2, then on this->[0xc],
 * and updates this->[0x38] / this->[0x14] state.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_100362d0(void)
{
    __asm {
        sub     esp, 0x5c
        push    ebx
        push    esi
        push    edi
        push    0x0
        lea     eax, [esp + 0x10]
        mov     esi, ecx
        mov     edi, dword ptr [esi + 0xc]
        push    eax
        mov     eax, dword ptr [esp + 0x78]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x14], 0x5c
        mov     ebx, dword ptr [edi]
        push    eax
        call    dword ptr [ecx + 0x14]
        push    eax
        push    edi
        call    dword ptr [ebx + 0x88]
        test    eax, eax
        jl      L_10036322
        mov     eax, dword ptr [esi + 0x38]
        mov     edx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x6c]
        add     eax, edx
        shr     eax, 0x1
        mov     dword ptr [esi + 0x38], eax
        mov     esi, dword ptr [esi + 0x14]
        mov     edx, dword ptr [esi]
        shr     eax, 0x1
        add     eax, edi
        push    eax
        push    esi
        call    dword ptr [edx + 0x14]
    L_10036322:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x5c
        ret     0x8
    }
}
