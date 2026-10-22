/*
 * FUN_0069AC00 (146 B) — __cdecl (1 stack arg, RET 4). Allocates a 0x28-byte
 * buffer via FUN_004084D0, builds a 0xC-stride structure at [buf+0x10]
 * from the argument's fields, and calls FUN_005DDEC0 to copy a string.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_00696AA0(void);
extern void __cdecl FUN_005DDEC0(void);

__declspec(naked) void FUN_0069AC00(void)
{
    __asm {
        push    ecx
        push    esi
        push    0x28
        call    FUN_004084D0
        lea     esi, [eax + 0x10]
        xor     ecx, ecx
        add     esp, 4
        cmp     esi, ecx
        mov     dword ptr [esp + 4], eax
        je      loc_69ac8d
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        mov     al, byte ptr [ebp + 8]
        mov     ebx, dword ptr [ebp + 4]
        push    edi
        mov     dword ptr [esi], ecx
        mov     byte ptr [esi + 8], al
        mov     eax, dword ptr [ebp]
        mov     edi, ebx
        sub     edi, eax
        inc     edi
        cmp     edi, -2
        mov     dword ptr [esi + 4], ecx
        mov     dword ptr [esi + 8], ecx
        ja      loc_69ac59
        cmp     edi, ecx
        je      loc_69ac4d
        push    edi
        call    FUN_00696AA0
        add     esp, 4
        jmp     loc_69ac4f
loc_69ac4d:
        xor     eax, eax
loc_69ac4f:
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 4], eax
        add     eax, edi
        mov     dword ptr [esi + 8], eax
loc_69ac59:
        mov     eax, dword ptr [esi]
        push    eax
        mov     eax, dword ptr [ebp]
        push    ebx
        push    eax
        call    FUN_005DDEC0
        mov     dword ptr [esi + 4], eax
        add     ebp, 0xc
        mov     ecx, dword ptr [ebp]
        mov     edx, dword ptr [ebp + 4]
        add     esp, 0xc
        add     esi, 0xc
        mov     dword ptr [esi], ecx
        mov     byte ptr [eax], 0
        mov     eax, dword ptr [ebp + 8]
        pop     edi
        mov     dword ptr [esi + 4], edx
        pop     ebp
        mov     dword ptr [esi + 8], eax
        mov     eax, dword ptr [esp + 8]
        pop     ebx
loc_69ac8d:
        pop     esi
        pop     ecx
        ret     4
    }
}
