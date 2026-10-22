/*
 * FUN_00687e40 (71 B) — Copy param_2 elements of a 0x18-byte struct from
 * param_3 to param_1.
 *
 * __cdecl, RET. Returns param_1 in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void * __cdecl FUN_00687e40(void *param_1, int param_2, void *param_3)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        jbe     L_81
        mov     ecx, dword ptr [esp + 0x10]
        mov     dl, byte ptr [ecx + 0x10]
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        mov     ebx, dword ptr [ecx + 0x14]
        push    ebp
        push    edi
        mov     edi, dword ptr [ecx + 0xc]
    L_5d:
        mov     ebp, dword ptr [ecx]
        mov     dword ptr [eax], ebp
        mov     ebp, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], ebp
        mov     ebp, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], ebp
        mov     dword ptr [eax + 0xc], edi
        mov     byte ptr [eax + 0x10], dl
        mov     dword ptr [eax + 0x14], ebx
        add     eax, 0x18
        dec     esi
        jnz     L_5d
        pop     edi
        pop     ebp
        pop     ebx
        pop     esi
        ret
    L_81:
        mov     eax, dword ptr [esp + 0x8]
        pop     esi
        ret
    }
}
