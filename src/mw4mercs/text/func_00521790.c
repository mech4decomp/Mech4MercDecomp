/*
 * FUN_00521790 (49 B) — __stdcall.
 * Decodes global pointer, reads [decoded+0x44] XOR 0x85739531,
 * then reads [that+0x34], calls FUN_00597570 on it.
 * Stores return value into [arg+4][0]. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_00597570(void *);

__declspec(naked) int __stdcall FUN_00521790(void)
{
    __asm {
        _emit   0xA1
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        _emit   0x8B
        _emit   0x0D
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x34]
        call    FUN_00597570
        mov     edx, dword ptr [esp + 4]
        mov     ecx, dword ptr [edx + 4]
        mov     dword ptr [ecx], eax
        mov     eax, 1
        ret     8
    }
}
