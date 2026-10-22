/*
 * FUN_0060edd0 (145 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Walks a linked list at [EAX+0x94], matching entries via FUN_00415230,
 * and returns results from FUN_005efcb0/FUN_005efcf0 through two
 * output pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007f25a8;

extern void __cdecl FUN_00416b60(void *);
extern void __cdecl FUN_00415230(unsigned int);
extern void __cdecl FUN_005efcb0(void);
extern void __cdecl FUN_005efcf0(void);

__declspec(naked) void __stdcall FUN_0060edd0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [ecx + 0x4]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 0x8]
        push    esi
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        add     ecx, 0x384
        mov     dword ptr [esp + 0x14], edx
        call    FUN_00416b60
        test    eax, eax
        jz      L_ee56
        mov     esi, dword ptr [eax + 0x94]
        xor     ebx, ebx
        test    esi, esi
        jz      L_ee56
    L_ee08:
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     esi, dword ptr [esi + 0x4]
        jz      L_ee56
        mov     eax, dword ptr [g_007f25a8]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        __emit 0x74   /* __emit: backward jz to L_ee08; MSVC6 computes off-by-4 (call-reloc between branch and target) */
        __emit 0xE1
        cmp     ebx, dword ptr [ebp]
        jz      L_ee2f
        inc     ebx
        __emit 0xEB   /* __emit: backward jmp to L_ee08; MSVC6 computes off-by-4 */
        __emit 0xD9
    L_ee2f:
        mov     ecx, edi
        call    FUN_005efcb0
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ecx], eax
        mov     ecx, edi
        call    FUN_005efcf0
        mov     edx, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [edx], eax
        mov     eax, 1
        pop     ebx
        pop     ecx
        ret     8
    L_ee56:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        pop     ecx
        ret     8
    }
}
