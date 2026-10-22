/*
 * FUN_006474e0 (106 B) — __thiscall (this in ECX, RET).
 *
 * Walks a linked list at [this+0x24], calling FUN_004ebee0 on each
 * node. Then clears a list at [this+0xc], freeing nodes via
 * FUN_004084e0 and resetting the list head.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ebee0(void);
extern void __cdecl FUN_00647b00(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006474e0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x24]
        test    esi, esi
        jz      L_fc
    L_e8:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L_fc
        call    FUN_004ebee0
        __emit  0xEB          /* __emit: backward jmp L_e8; MSVC6 rel off-by-4 (call reloc between branch & target) */
        __emit  0xEC
    L_fc:
        mov     eax, dword ptr [edi + 0x10]
        test    eax, eax
        lea     ebx, [edi + 0xc]
        jz      L_46
    L_06:
        mov     eax, dword ptr [ebx]
        mov     esi, dword ptr [eax + 0x4]
        test    esi, esi
        jz      L_30
    L_0f:
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        mov     ecx, ebx
        call    FUN_00647b00
        test    esi, esi
        mov     edi, dword ptr [esi + 0x8]
        jz      L_2a
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_2a:
        test    edi, edi
        mov     esi, edi
        __emit  0x75          /* __emit: backward jnz L_0f; MSVC6 rel off-by-4 (call reloc between branch & target) */
        __emit  0xDF
    L_30:
        mov     eax, dword ptr [ebx]
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [ebx + 0x4], 0x0
    L_46:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
