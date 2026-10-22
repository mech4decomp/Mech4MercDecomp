/*
 * FUN_004940A0 (115 B) — __thiscall (ECX = this), RET 0xc (3 stack params).
 * Constructor: initializes fields, copies 0x30 bytes from 0x007b9460,
 * sets vtable to 0x77012c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(int param_1);

__declspec(naked) void __fastcall FUN_004940a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_00415180
        mov     edx, dword ptr [esp + 0x14]
        xor     ecx, ecx
        lea     eax, [edx + 0x10]
        mov     dword ptr [ebx + 0x18], ecx
        mov     dword ptr [ebx + 0x14], ecx
        mov     dword ptr [ebx + 0x20], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebx + 8], ecx
        mov     dword ptr [ebx + 0x88], ecx
        mov     dword ptr [ebx + 0xc], ecx
        mov     dword ptr [ebx + 0x90], ecx
        _emit 0xC7  /* mov dword ptr [ebx + 0x1c], 0x77011c */
        _emit 0x43
        _emit 0x1C
        _emit 0x1C
        _emit 0x01
        _emit 0x77
        _emit 0x00
        mov     dword ptr [ebx + 0x24], eax
        mov     dword ptr [ebx + 0x10], edx
        mov     edx, dword ptr [esp + 0x18]
        lea     edi, [ebx + 0x58]
        _emit 0xC7  /* mov dword ptr [ebx], 0x77012c */
        _emit 0x03
        _emit 0x2C
        _emit 0x01
        _emit 0x77
        _emit 0x00
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x9c], edx
        _emit 0xC7  /* mov dword ptr [ebx + 0x8c], 0xbff00000 */
        _emit 0x83
        _emit 0x8C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xF0
        _emit 0xBF
        mov     eax, ebx
        pop     ebx
        ret     0xc
    }
}
