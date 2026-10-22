/*
 * FUN_100318A7 (54 B) - __stdcall, RET 0x10.  Jump-table target of
 * FUN_10031680 (opcode 0xc351 case 3).  Calls esi->vtable[+0] with push 1;
 * also holds the shared error tail @0x100318c8 (sets E_INVALIDARG) and
 * default tail @0x100318d0 (returns [esp+0x10]).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100318A7(void)
{
    __asm {
        mov     ecx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [ecx + 8]
        test    eax, eax
        je      short L_18d0
        mov     edx, dword ptr [eax + 4]
        lea     ecx, [eax + 4]
        push    1
        call    dword ptr [edx]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0x10
L_18c8:
        mov     dword ptr [esp + 0x10], 0x80070057
L_18d0:
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
