/*
 * FUN_0060e2d0 (108 B) — __thiscall list-search helper (ECX = this, RET 8).
 *
 * Walks a linked list at this->[4]+0x34c, calling FUN_00415230 on each
 * node; when the node matches the index at *(param_1+4), calls
 * FUN_005efb30 and returns 1. Returns -1 if not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_00415230(int a);
extern void __cdecl FUN_005efb30(int a);

extern int g_7f25a8;   /* 0x007F25A8 */

__declspec(naked) int __cdecl FUN_0060e2d0(void *this, int *param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [esp + 0xc], eax
        mov     eax, dword ptr [ecx + 4]
        push    esi
        xor     ebx, ebx
        test    eax, eax
        push    edi
        jz      l_e332
        mov     esi, dword ptr [eax + 0x34c]
        test    esi, esi
        jz      l_e332
    l_e2f1:
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     esi, dword ptr [esi + 4]
        jz      l_e332
        mov     eax, dword ptr [g_7f25a8]
        mov     ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        __emit 0x74   /* __emit: backward jz rel-offset miscomputed by MSVC6 (off-by-4, call reloc between branch and target) */
        __emit 0xE1
        cmp     ebx, dword ptr [ebp]
        jz      l_e318
        inc     ebx
        __emit 0xEB   /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4, call reloc between branch and target) */
        __emit 0xD9
    l_e318:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx]
        push    edx
        mov     ecx, edi
        call    FUN_005efb30
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        ret     8
    l_e332:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        ret     8
    }
}
