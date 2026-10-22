/*
 * FUN_0041f030 (92 B) — __thiscall bit-buffer write helper.
 * Reserves space via vtable[0x14], gets the write pointer via
 * vtable[0x4], copies `param_2` bytes, then commits via vtable[0x18]
 * and updates the high-water mark.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041f030(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0x10]
        push    esi
        push    edi
        mov     ebx, ecx
        mov     eax, dword ptr [ebx]
        push    ebp
        call    dword ptr [eax+0x14]
        mov     edx, dword ptr [ebx]
        mov     esi, dword ptr [esp+0x14]
        mov     ecx, ebx
        call    dword ptr [edx+0x4]
        mov     edi, eax
        mov     ecx, ebp
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     edx, dword ptr [ebx]
        push    ebp
        mov     ecx, ebx
        call    dword ptr [edx+0x18]
        mov     eax, dword ptr [ebx+0x14]
        mov     esi, dword ptr [ebx+0x10]
        mov     ecx, dword ptr [ebx+0x20]
        sub     eax, esi
        cmp     ecx, eax
        jbe     L080
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ebx+0x20], ecx
        mov     eax, ebx
        pop     ebx
        ret     0x8
L080:
        pop     edi
        pop     esi
        mov     dword ptr [ebx+0x20], eax
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0x8
    }
}
