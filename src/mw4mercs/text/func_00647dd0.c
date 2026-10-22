/*
 * FUN_00647dd0 (94 B) — __thiscall. Binary tree search; writes result to
 * *param_1 (at [esp+0x10] after prologue pushes).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00647dd0(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     edx, ecx
        jz      L_done
    L_search:
        mov     esi, dword ptr [edi]
        cmp     dword ptr [eax + 0x10], esi
        jc      L_right
        mov     edx, eax
        mov     eax, dword ptr [eax + 0x8]
        jmp     L_test
    L_right:
        mov     eax, dword ptr [eax + 0xc]
    L_test:
        test    eax, eax
        /* __emit: backward JNZ rel-offset miscomputed by MSVC6 (75 EB vs 75 ED) */
        __emit 0x75
        __emit 0xED
    L_done:
        cmp     edx, ecx
        mov     dword ptr [esp + 0x14], edx
        jz      L_ret_root
        mov     eax, dword ptr [edi]
        cmp     eax, dword ptr [edx + 0x10]
        jc      L_ret_root
        lea     eax, [esp + 0x14]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [eax], ecx
        pop     esi
        pop     ecx
        ret     0x8
    L_ret_root:
        lea     eax, [esp + 0x8]
        mov     dword ptr [esp + 0x8], ecx
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [eax], ecx
        pop     esi
        pop     ecx
        ret     0x8
    }
}
