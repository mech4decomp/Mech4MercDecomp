/*
 * FUN_004935F0 (105 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 * Serializes fields from param_1 into this via vtable method +0x24 calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00412a50(int *param_1, int param_2);
extern int DAT_007da884;

__declspec(naked) void __fastcall FUN_004935f0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        push    4
        lea     ecx, [esi + 0x10]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esi + 0x1c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x30
        lea     ecx, [esi + 0x24]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        _emit 0xA1  /* mov eax, [0x007da884] */
        _emit 0x84
        _emit 0xA8
        _emit 0x7D
        _emit 0x00
        mov     ecx, dword ptr [eax + 0x40]
        mov     edx, dword ptr [esi + 0x20]
        mov     eax, dword ptr [ecx + edx * 4]
        add     eax, 4
        push    eax
        push    edi
        call    FUN_00412a50
        mov     edx, dword ptr [eax]
        add     esp, 8
        push    4
        lea     ecx, [esi + 0x14]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    4
        add     esi, 0x18
        push    esi
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     4
    }
}
