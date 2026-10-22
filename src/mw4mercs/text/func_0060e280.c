/*
 * FUN_0060e280 (79 B) — __thiscall (this in ECX, RET 0x4).
 *
 * Walks a linked list at [this+4]->[0x34c], calling FUN_00415230 on each
 * node; returns the node whose match index equals the stack arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f25a8;   /* 0x007f25a8 */
extern char __cdecl FUN_00415230(int a);

__declspec(naked) void FUN_0060e280(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        push    ebx
        push    ebp
        push    esi
        xor     ebx, ebx
        test    eax, eax
        push    edi
        jz      L_c6
        mov     esi, dword ptr [eax + 0x34c]
        mov     ebp, dword ptr [esp + 0x14]
        test    esi, esi
        jz      L_c6
    L_97:
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     esi, dword ptr [esi + 0x4]
        jz      L_c6
        mov     eax, dword ptr [g_7f25a8]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        __emit  0x74          /* __emit: backward jz L_97; MSVC6 rel off-by-4 (call reloc between branch & target) */
        __emit  0xE1
        cmp     ebx, ebp
        jz      L_bd
        inc     ebx
        __emit  0xEB          /* __emit: backward jmp L_97; same off-by-4 reloc issue */
        __emit  0xDA
    L_bd:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    L_c6:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x4
    }
}
