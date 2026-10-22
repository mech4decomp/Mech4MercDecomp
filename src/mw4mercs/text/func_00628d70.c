/*
 * FUN_00628D70 (130 B) — __thiscall (ECX = this), RET 4 (one byte param).
 * Stores the param byte at [this+0x16a], then dispatches a set of virtual
 * method calls (vtable+0x10 or vtable+0x14) on four sub-objects depending
 * on the value of [this+0x3c] and the param byte.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00628d70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x3c]
        test    eax, eax
        mov     cl, byte ptr [esp + 0x8]
        mov     byte ptr [esi + 0x16a], cl
        jz      L_c2
        cmp     eax, 1
        jz      L_c2
        test    cl, cl
        mov     ecx, dword ptr [esi + 0x144]
        mov     eax, dword ptr [ecx]
        jz      L_9a
        call    dword ptr [eax + 0x10]
        jmp     L_cd
L_9a:
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esi + 0x160]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        mov     ecx, dword ptr [esi + 0x118]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        mov     ecx, dword ptr [esi + 0x124]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        pop     esi
        ret     4
L_c2:
        mov     ecx, dword ptr [esi + 0x144]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
L_cd:
        mov     ecx, dword ptr [esi + 0x160]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        mov     ecx, dword ptr [esi + 0x118]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esi + 0x124]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        pop     esi
        ret     4
    }
}
