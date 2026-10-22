/* FUN_1001baf0 - __stdcall, 57 bytes (3 args, RET 0xc)
 * Virtual dispatch: vtable[9], vtable[10] (check 0x102), vtable[13].
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_1001baf0 (57 B, __stdcall, 3 params) - Virtual dispatch: calls
 * vtable[9](this), then vtable[10](this,arg2); if (result & 0xff) == 0x102
 * calls vtable[13](this,arg3) and returns 0, else returns 1.
 * CFLAGS: /O2
 */

__declspec(naked) void __cdecl FUN_1001baf0(void)
{
    __asm {
        push esi
        mov  esi, dword ptr [esp + 8]
        push esi
        mov  eax, dword ptr [esi]
        call dword ptr [eax + 0x24]
        mov  ecx, dword ptr [esi]
        mov  edx, dword ptr [esp + 0xc]
        push edx
        push esi
        call dword ptr [ecx + 0x28]
        and  eax, 0xff
        cmp  eax, 0x102
        jnz  L1
        mov  ecx, dword ptr [esp + 0x10]
        mov  eax, dword ptr [esi]
        push ecx
        push esi
        call dword ptr [eax + 0x34]
        xor  al, al
        pop  esi
        ret  0xc
L1:
        mov  al, 1
        pop  esi
        ret  0xc
    }
}
