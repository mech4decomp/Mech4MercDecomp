/*
 * FUN_10031050 (79 B) - __fastcall. Unlinks and frees every node of a
 * doubly-linked list rooted at [EDI+4], then frees the head.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10031050(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebx, dword ptr [edi + 4]
        mov     esi, dword ptr [ebx]
        cmp     esi, ebx
        jz      L_1087
        mov     edi, edi
L_1060:
        mov     eax, esi
        mov     ecx, dword ptr [eax + 4]
        mov     edx, dword ptr [eax]
        mov     esi, dword ptr [esi]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 4]
        push    eax
        mov     dword ptr [ecx + 4], edx
        call    FUN_10001d60
        mov     ecx, dword ptr [edi + 8]
        add     esp, 4
        dec     ecx
        cmp     esi, ebx
        mov     dword ptr [edi + 8], ecx
        jnz     L_1060
L_1087:
        mov     eax, dword ptr [edi + 4]
        push    eax
        call    FUN_10001d60
        add     esp, 4
        xor     eax, eax
        mov     dword ptr [edi + 4], eax
        mov     dword ptr [edi + 8], eax
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
