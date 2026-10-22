/*
 * FUN_00490310 (90 B) — __thiscall, RET 4 (1 stack param).
 * Serializes object fields via vtable method offset 0x24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00412a50(void);

__declspec(naked) void __fastcall FUN_00490310(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0xc]
        mov     edi, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esp + 0x8], eax
        push    0x4
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x8]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0xc
        lea     ecx, [esi + 0xc]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x30
        lea     ecx, [esi + 0x18]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        add     esi, 0x7c
        push    esi
        push    edi
        call    FUN_00412a50
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ecx
        ret     0x4
    }
}
