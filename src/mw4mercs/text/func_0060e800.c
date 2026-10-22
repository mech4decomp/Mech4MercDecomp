/*
 * FUN_0060e800 (106 B) — __thiscall (this in ECX, RET 0x8).
 *
 * Sets up a small stack frame, then dispatches through vtables:
 * if [this+4] is non-null, calls its vtable[0x68]; on success calls
 * this->vtable[0x4c], else this->vtable[0x40]. Returns a pointer into
 * the stack frame.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0060e800(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        mov     eax, 0x1
        mov     dword ptr [esp + 0xc], 0x86
        mov     dword ptr [esp + 0x8], 0x7
        mov     dword ptr [esp + 0x4], eax
        jz      L_863
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x68]
        test    al, al
        mov     edx, dword ptr [esi]
        jz      L_84b
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x4c]
        mov     eax, dword ptr [esp + 0x4]
        pop     esi
        add     esp, 0xc
        ret     0x8
    L_84b:
        lea     eax, [esp + 0x4]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x40]
        mov     eax, dword ptr [esp + 0x4]
    L_863:
        pop     esi
        add     esp, 0xc
        ret     0x8
    }
}
