/*
 * FUN_0065E1C0 (85 B) — __thiscall (3 stack args, RET 0xC). Initializes a
 * string object at [this]: allocates a buffer of size arg1+1 via
 * FUN_004084D0 (unless size is -2 or 0), stores pointers/length, copies a
 * byte from arg3, and null-terminates.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084D0(void);

__declspec(naked) void FUN_0065E1C0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dl, byte ptr [ecx]
        push    edi
        lea     edi, [eax + 1]
        cmp     edi, -2
        mov     dword ptr [esi], 0
        mov     byte ptr [esi + 8], dl
        mov     dword ptr [esi + 4], 0
        mov     dword ptr [esi + 8], 0
        ja      loc_65e208
        test    edi, edi
        je      loc_65e1fc
        push    edi
        call    FUN_004084D0
        add     esp, 4
        jmp     loc_65e1fe
loc_65e1fc:
        xor     eax, eax
loc_65e1fe:
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 4], eax
        add     eax, edi
        mov     dword ptr [esi + 8], eax
loc_65e208:
        mov     eax, dword ptr [esi + 4]
        mov     byte ptr [eax], 0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
