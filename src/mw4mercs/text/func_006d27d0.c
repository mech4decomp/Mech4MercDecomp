/*
 * FUN_006D27D0 (138 B) — Dynamic int-array resize with copy (__thiscall).
 *
 * Same as FUN_006D2860/FUN_006D28F0 but calls FUN_004084D0 with different
 * call offset (0x5CDE vs 0x5C4E/0x5BBE). Resizes the int array at this
 * to new_count (param_1).
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (new_count).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_006d27d0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp + 4]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        cmp     esi, ebx
        jz      l_done
        test    esi, esi
        jbe     l_free
        lea     eax, [esi * 4]
        push    edi
        push    eax
        call    FUN_004084d0
        mov     edi, dword ptr [ebp]
        add     esp, 4
        test    edi, edi
        mov     esi, eax
        jz      l_store
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, ebx
        jb      l_use_ecx
        mov     ecx, ebx
    l_use_ecx:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      l_free_old
        mov     edx, edi
        lea     eax, [esi + ecx * 4]
        sub     edx, esi
        inc     ecx
    l_copy_loop:
        mov     ebx, dword ptr [edx + eax]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      l_copy_loop
    l_free_old:
        push    edi
        call    FUN_004084e0
        add     esp, 4
    l_store:
        mov     dword ptr [ebp], esi
        mov     esi, dword ptr [esp + 0x14]
        pop     edi
        mov     dword ptr [ebp + 4], esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    l_free:
        mov     eax, dword ptr [ebp]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp], 0
        mov     dword ptr [ebp + 4], esi
    l_done:
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
