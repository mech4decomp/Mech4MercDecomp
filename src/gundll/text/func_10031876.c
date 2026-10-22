/*
 * FUN_10031876 (49 B) - __stdcall, RET 0x10.  Jump-table target of
 * FUN_10031849 (case 3): sets ecx = 1, then shared tail: virtual call
 * through eax->vtable[+0x14], then esi->vtable[+0] with push 1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10031876(void)
{
    __asm {
        mov     ecx, 1
        mov     edi, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [eax]
        push    edi
        push    ecx
        push    esi
        push    eax
        call    dword ptr [edx + 0x14]
        test    esi, esi
        __emit 0x74         /* __emit: rel8 je to external addr 0x100318d0; extern symbol forces rel32 */
        __emit 0x40
        mov     eax, dword ptr [esi + 4]
        lea     ecx, [esi + 4]
        push    1
        call    dword ptr [eax]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
