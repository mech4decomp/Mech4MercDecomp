/*
 * FUN_0061db10 (126 B) — Container teardown / compaction.
 *
 * __fastcall (ECX = param_1). Frees non-null entries in the
 * [0x10,0x14) range, compacts, then frees the 0x0C and 0x24
 * sub-buffers via FUN_006f4230 / FUN_006f4850.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void __fastcall FUN_0061db10(int param_1)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x10]
        mov     ebx, dword ptr [edi + 0x14]
        cmp     esi, ebx
        jz      l_38
    l_1f:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      l_31
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
    l_31:
        add     esi, 4
        cmp     esi, ebx
        jnz     l_1f
    l_38:
        mov     eax, dword ptr [edi + 0x14]
        mov     edx, dword ptr [edi + 0x10]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        test    ecx, ecx
        jle     l_56
    l_49:
        mov     esi, dword ptr [eax]
        mov     dword ptr [edx], esi
        add     eax, 4
        add     edx, 4
        dec     ecx
        jnz     l_49
    l_56:
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [edi + 0x14], edx
        jz      l_6f
        push    0
        push    eax
        call    FUN_006f4850
        mov     dword ptr [edi + 0xc], 0
    l_6f:
        mov     eax, dword ptr [edi + 0x24]
        test    eax, eax
        mov     dword ptr [edi + 0x1c], 0
        jz      l_8a
        push    eax
        call    FUN_006f4230
        mov     dword ptr [edi + 0x24], 0
    l_8a:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
