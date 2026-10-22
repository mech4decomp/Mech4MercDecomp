/*
 * FUN_0060e8c0 (106 B) — __thiscall (this in ECX, RET 0x8).
 *
 * Sets up a small stack frame, then if [this+4] is non-null calls
 * FUN_005faf20; on success dispatches this->vtable[0x4c], else
 * this->vtable[0x40]. Returns a pointer into the stack frame.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005faf20(void);

__declspec(naked) void FUN_0060e8c0(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        mov     eax, 0x1
        mov     dword ptr [esp + 0xc], 0x88
        mov     dword ptr [esp + 0x8], 0x7
        mov     dword ptr [esp + 0x4], eax
        jz      L_923
        call    FUN_005faf20
        test    al, al
        mov     eax, dword ptr [esi]
        jz      L_90b
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0x4c]
        mov     eax, dword ptr [esp + 0x4]
        pop     esi
        add     esp, 0xc
        ret     0x8
    L_90b:
        lea     ecx, [esp + 0x4]
        push    ecx
        lea     edx, [esp + 0xc]
        push    edx
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x40]
        mov     eax, dword ptr [esp + 0x4]
    L_923:
        pop     esi
        add     esp, 0xc
        ret     0x8
    }
}
