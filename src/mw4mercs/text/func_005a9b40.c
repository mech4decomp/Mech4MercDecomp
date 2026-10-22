/*
 * FUN_005a9b40 (42 B) — __thiscall; forwards 4 args to FUN_005e6cf0 and
 * sets vtable pointer 0x785200.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void func_005a9b40(void)
{
    

extern void __cdecl FUN_005e6cdc(void);
__asm {
mov     eax, [esp + 0x10]
        mov     edx, [esp + 0x8]
        push    esi
        push    eax
        mov     eax, [esp + 0xc]
        mov     esi, ecx
        mov     ecx, [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call FUN_005e6cdc
        mov     dword ptr [esi], 0x785200
        mov     eax, esi
        pop     esi
        ret     0x10
    }


}
