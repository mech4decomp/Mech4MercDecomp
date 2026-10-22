/*
 * FUN_00627530 (103 B) — __fastcall reset/init.
 *
 * Clears several byte flags, iterates a vector calling virtual methods on
 * each element, then calls FUN_006276f0().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006276f0(void);

__declspec(naked) void FUN_00627530(void)
{
    __asm {
        xor     al, al
        push    ebx
        mov     ebx, ecx
        push    ebp
        push    edi
        mov     edi, dword ptr [ebx + 0xf8]
        mov     dword ptr [ebx + 0x3c], 0x2
        mov     byte ptr [ebx + 0x16b], al
        mov     byte ptr [ebx + 0x169], al
        mov     byte ptr [ebx + 0x16d], al
        mov     byte ptr [ebx + 0x16c], al
        mov     byte ptr [ebx + 0x16f], al
        mov     ebp, dword ptr [ebx + 0xfc]
        cmp     edi, ebp
        jz      L_8c
        push    esi
    L_6d:
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [ebx + 0x164]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        add     edi, 0x4
        cmp     edi, ebp
        jnz     L_6d
        pop     esi
    L_8c:
        mov     ecx, ebx
        call    FUN_006276f0
        pop     edi
        pop     ebp
        pop     ebx
        ret
    }
}
