/*
 * FUN_0064E210 (129 B) — __thiscall (ECX = this), RET 4 (one stack param).
 * Searches a pointer array for a matching entry, conditionally invokes a
 * virtual method, then shifts the array down by one and decrements the count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064df70(void);

__declspec(naked) void __fastcall FUN_0064e210(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0xc]
        mov     esi, dword ptr [edi + 0x8]
        cmp     esi, eax
        jz      L_22f
L_224:
        cmp     dword ptr [esi], ebp
        jz      L_22f
        add     esi, 4
        cmp     esi, eax
        jnz     L_224
L_22f:
        mov     ebx, dword ptr [edi + 4]
        test    ebx, 0FFFFFFFCh
        jz      L_264
        push    ebp
        call    FUN_0064df70
        add     esp, 4
        test    eax, eax
        jz      L_264
        and     ebx, 0FFFFFFFCh
        mov     edx, dword ptr [ebx]
        push    ebp
        mov     dword ptr [esp + 0x18], edx
        call    FUN_0064df70
        add     esp, 4
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    edi
        mov     ecx, ebx
        call    dword ptr [eax + 0x14]
L_264:
        mov     ecx, dword ptr [edi + 0xc]
        lea     edx, [esi + 4]
        cmp     edx, ecx
        jz      L_284
        mov     eax, ecx
        sub     eax, edx
        sar     eax, 2
        test    eax, eax
        jle     L_284
L_279:
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [esi], edx
        add     esi, 4
        dec     eax
        jnz     L_279
L_284:
        add     ecx, -4
        mov     dword ptr [edi + 0xc], ecx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
