/*
 * FUN_00493460 (68 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 * Constructor: copies fields from param_1 into this, sets vtable to 0x770104.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(int param_1);
extern int DAT_007b8c10;

__declspec(naked) void __fastcall FUN_00493460(void)
{
    __asm {
        _emit 0xA1  /* mov eax, [0x007b8c10] */
        _emit 0x10
        _emit 0x8C
        _emit 0x7B
        _emit 0x00
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        mov     dword ptr [esi + 8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esi + 0x10], ecx
        mov     ecx, dword ptr [eax + 0x20]
        mov     dword ptr [esi + 0x1c], edx
        mov     edx, dword ptr [eax + 0x14]
        mov     eax, dword ptr [eax + 0x18]
        mov     dword ptr [esi + 0x18], eax
        _emit 0xC7  /* mov dword ptr [esi], 0x770104 */
        _emit 0x06
        _emit 0x04
        _emit 0x01
        _emit 0x77
        _emit 0x00
        mov     dword ptr [esi + 0x20], ecx
        mov     dword ptr [esi + 0x14], edx
        mov     eax, esi
        pop     esi
        ret     4
    }
}
