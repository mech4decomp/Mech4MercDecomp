/*
 * FUN_10031810 (57 B) - __stdcall, RET 0x10.  Jump-table target of
 * FUN_10031680 (opcode 0xc351 case 0).  Enters sharing the caller's frame
 * (edi/esi/ebx pre-pushed); virtual calls through esi->vtable[+0xc] and
 * ecx->vtable[+0x10].
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10031810(void)
{
    __asm {
        mov     edx, dword ptr [eax + 0x10]
        mov     esi, dword ptr [edx + 8]
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0xc]
        mov     edx, dword ptr [esp + 0x24]
        push    edx
        lea     edx, [esp + 0x1c]
        push    edx
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     eax, dword ptr [esp + 0x18]
        pop     edi
        mov     dword ptr [esi + 0x10], eax
        mov     eax, dword ptr [esp + 0xc]
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
