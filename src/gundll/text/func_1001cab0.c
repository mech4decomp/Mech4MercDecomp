/*
 * FUN_1001cab0 (79 B) - __fastcall. SEH-guarded constructor: installs an
 * SEH frame, sets vtable pointers 0x1004a8d8/0x1004a8dc, and conditionally
 * calls a virtual method at [EAX+4].
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_1001cab0(void)
{
    __asm {
        push    -1
        push    0x10048168
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        mov     dword ptr [esi], 0x1004a8d8
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        mov     dword ptr [esp + 0x10], 0
        jz      L_cae9
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 4]
L_cae9:
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [esi], 0x1004a8dc
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
