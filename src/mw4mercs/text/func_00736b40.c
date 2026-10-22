/*
 * FUN_00736b40 (71 B) — __stdcall (RET 0x14, 5 params).
 *
 * Calls IAT function at 0x0076b128 with (param_2, param_4). If it returns
 * nonzero, copies param_4 bytes from param_2 to param_3 (rep movsd/movsb)
 * and stores param_4 into *param_5 (if param_5 != 0), returning 1.
 * Otherwise returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b128;

__declspec(naked) int __stdcall FUN_00736b40(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    ebx
        push    esi
        call    dword ptr [g_76b128]
        test    eax, eax
        jz      copy
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x14
copy:
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     ecx, ebx
        mov     eax, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x20]
        and     ecx, 3
        test    eax, eax
        rep     movsb
        pop     edi
        jz      skip
        mov     dword ptr [eax], ebx
skip:
        pop     esi
        mov     eax, 1
        pop     ebx
        ret     0x14
    }
}
