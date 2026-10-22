/*
 * FUN_004f21b0 (92 B) -- MLR/Adept shared lookup-or-construct helper
 * (__thiscall, RET 0xc, 3 stack params). Calls FUN_004d5b10(param_1), then
 * initializes an object at ECX: sets vtable 0x774fe4, copies two u16 fields
 * from param_3, stores param_3, and reads two u32 values from param_2's
 * stream via virtual call [vtbl+0x20]. Returns the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d5b10(void);

__declspec(naked) void func_004f21b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004d5b10
        mov     eax, dword ptr [esp + 0x14]
        mov     cx, word ptr [eax + 0x14]
        mov     dx, word ptr [eax + 0x16]
        mov     edi, dword ptr [esp + 0x10]
        mov     word ptr [esi + 0x10], 0xffff
        mov     word ptr [esi + 0x12], 0
        mov     dword ptr [esi], 0x774fe4
        mov     word ptr [esi + 0x10], cx
        push    4
        lea     ecx, [esi + 0x14]
        mov     dword ptr [esi + 0x18], eax
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        mov     word ptr [esi + 0x12], dx
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x1c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
