/*
 * FUN_006D2DF0 (199 B) — Object constructor with lookup + allocation.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 * Looks up a name via FUN_00416f60. If not found, allocates a 0x34-byte
 * object, initializes it, sets fields based on params, registers it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __cdecl FUN_00416f60(void *);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_00415180(int);
extern int  __cdecl FUN_006d2c10(int);
extern void __cdecl FUN_00416f20(void *, void *);

__declspec(naked) int __fastcall FUN_006D2DF0(int param_1, int param_2, int param_3, int param_4)
{
    __asm {
        push    ebp
        mov     ebp, ecx
        lea     eax, [esp + 0x08]
        lea     ecx, [ebp + 0x04]
        push    eax
        call    FUN_00416f60
        test    eax, eax
        jnz     l_found
        push    ebx
        push    esi
        push    edi
        push    0x34
        call    FUN_004084d0
        mov     esi, eax
        xor     edi, edi
        add     esp, 4
        cmp     esi, edi
        jz      l_alloc_fail
        _emit   0x8B
        _emit   0x0D
        _emit   0x10
        _emit   0x8C
        _emit   0x7B
        _emit   0x00
        push    ecx
        mov     ecx, esi
        call    FUN_00415180
        mov     [esi + 0x08], edi
        mov     [esi + 0x0c], edi
        mov     dword ptr [esi], 0x79ea20
        mov     [esi + 0x30], edi
        mov     [esi + 0x24], edi
        mov     [esi + 0x2c], edi
        jmp     l_continue
    l_alloc_fail:
        xor     esi, esi
    l_continue:
        mov     edx, [esi + 0x24]
        mov     eax, [esp + 0x20]
        and     edx, 0xfffffff8
        or      edx, eax
        dec     eax
        cmp     eax, 4
        mov     [esi + 0x24], edx
        mov     ebx, 1
        ja      l_skip_switch
        jmp     dword ptr [eax * 4 + 0x6d2eb8]
    l_case_1_2:
        mov     dword ptr [esi + 0x20], 2
        jmp     l_skip_switch
    l_case_3_4_5:
        mov     [esi + 0x20], ebx
    l_skip_switch:
        mov     eax, [esp + 0x18]
        mov     edi, [esp + 0x1c]
        push    eax
        mov     ecx, ebp
        mov     [esi + 0x10], eax
        mov     [esi + 0x14], edi
        call    FUN_006d2c10
        push    edi
        mov     ecx, ebp
        mov     [esi + 0x18], eax
        call    FUN_006d2c10
        mov     [esi + 0x1c], eax
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        lea     ecx, [ebp + 0x04]
        call    FUN_00416f20
        mov     eax, [esp + 0x14]
        pop     edi
        pop     esi
        mov     byte ptr [ebp + 0x5c], bl
        pop     ebx
        pop     ebp
        ret     0x10

    l_found:
        xor     eax, eax
        pop     ebp
        ret     0x10
    }
}
