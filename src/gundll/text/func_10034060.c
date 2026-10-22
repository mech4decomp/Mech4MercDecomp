/*
 * FUN_10034060 (116 B) — __thiscall, RET 0x8.
 * this+0x18 is an object with a vtable; computes (count*3)/2 and compares
 * against (uVar2 + param_1), then calls FUN_10033a40 with the result.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10033a40(void);

__declspec(naked) void FUN_10034060(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x18]
        push    edi
        movzx   edi, word ptr [esp + 0x14]
        lea     esi, [ebx + 0x18]
        push    esi
        call    dword ptr [eax + 0x10]
        mov     ecx, dword ptr [esi]
        xor     ebp, ebp
        mov     bp, ax
        push    esi
        add     ebp, edi
        call    dword ptr [ecx + 0xc]
        movzx   eax, ax
        lea     eax, [eax + eax*2]
        cdq
        sub     eax, edx
        sar     eax, 1
        cmp     ebp, eax
        push    esi
        jle     L_b0
        mov     edx, dword ptr [esi]
        call    dword ptr [edx + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        movzx   eax, ax
        push    ecx
        add     eax, edi
        push    eax
        mov     ecx, ebx
        call    FUN_10033a40
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    L_b0:
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0xc]
        mov     ecx, dword ptr [esp + 0x18]
        movzx   eax, ax
        lea     eax, [eax + eax*2]
        cdq
        sub     eax, edx
        push    ecx
        sar     eax, 1
        push    eax
        mov     ecx, ebx
        call    FUN_10033a40
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
