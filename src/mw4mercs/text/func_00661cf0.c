/*
 * FUN_00661CF0 (102 B) — __fastcall vector teardown.
 *
 * Calls a virtual method on each element, compacts the array, and frees
 * the backing buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00661cf0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebp, dword ptr [edi + 0x8]
        mov     dword ptr [edi + 0x4], 0x795120
        mov     esi, dword ptr [edi + 0xc]
        cmp     ebp, esi
        mov     ebx, ebp
        jz      L_1e
    L_0a:
        mov     ecx, dword ptr [ebx]
        test    ecx, ecx
        jz      L_17
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax + 0xc]
    L_17:
        add     ebx, 0x4
        cmp     ebx, esi
        jnz     L_0a
    L_1e:
        mov     eax, dword ptr [edi + 0xc]
        sub     eax, esi
        sar     eax, 0x2
        test    eax, eax
        mov     ecx, ebp
        jle     L_39
        sub     esi, ebp
    L_2e:
        mov     edx, dword ptr [esi + ecx*1]
        mov     dword ptr [ecx], edx
        add     ecx, 0x4
        dec     eax
        jnz     L_2e
    L_39:
        mov     dword ptr [edi + 0xc], ecx
        mov     edi, dword ptr [edi + 0x8]
        test    edi, edi
        mov     dword ptr [esp + 0x10], edi
        jz      L_50
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_50:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
