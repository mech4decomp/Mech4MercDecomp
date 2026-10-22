/*
 * FUN_0068a0f0 (144 B) — __thiscall (ECX = this), RET 8 (two stack params).
 * Calls FUN_006b0710(param1, param2), initializes a vtable pointer
 * (0x798d94) and a 0xC-byte-element array at this+0x30, then fills in
 * various fields and returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006b0710(int a, int b);

__declspec(naked) int *__stdcall FUN_0068a0f0(int param1, int param2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_006b0710
        mov     dl, byte ptr [esp + 0x14]
        xor     ebx, ebx
        mov     dword ptr [esi + 0x30], ebx
        mov     byte ptr [esi + 0x38], dl
        mov     ecx, ebx
        mov     edx, ecx
        sub     edx, ecx
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        mov     dword ptr [esi + 0x38], ebx
        add     edx, eax
        cmp     edx, ebx
        mov     dword ptr [esi], 0x798d94
        mov     edi, dword ptr [esi + 0x30]
        mov     dword ptr [esi + 0x34], ebx
        mov     dword ptr [esi + 0x20], ebx
        jle     l_157
    l_loop:
        mov     eax, dword ptr [ecx]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [ecx + 0x4]
        mov     dword ptr [edi + 0x4], eax
        mov     eax, dword ptr [ecx + 0x8]
        mov     dword ptr [edi + 0x8], eax
        add     ecx, 0xc
        add     edi, 0xc
        dec     edx
        jnz     l_loop
    l_157:
        mov     dword ptr [esi + 0x34], edi
        pop     edi
        mov     dword ptr [esi + 0x3c], ebx
        mov     byte ptr [esi + 0x24], bl
        mov     dword ptr [esi + 0x2c], ebx
        mov     dword ptr [esi + 0x40], 0x1
        mov     dword ptr [esi + 0x28], 0xffffffff
        mov     dword ptr [esi + 0x8], 0x3
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     8
    }
}
