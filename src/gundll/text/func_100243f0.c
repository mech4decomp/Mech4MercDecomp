/*
 * FUN_100243F0 (187 B) - __stdcall, RET 0x10.  Parses/registers an event
 * string via FUN_1001c7a0 / FUN_1002af80 / FUN_1001c660, advancing buffer
 * pointers (ebp/ebx) by the parsed count and building a multi-GUID
 * registration.  On success stores the final pointer into *out (+0x28).
 * Frees the intermediate handle via FUN_10001d60 if it differs from
 * this->+0x28.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_100243F0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a7fc
        push    ebp
        push    edi
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L_448d
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x28]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_448d
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x24]
        mov     edx, dword ptr [edi + 0x20]
        push    eax
        push    0x10049e8c
        push    ecx
        push    0x10049e94
        push    edx
        push    0x10049bc4
        push    0x100504a0
        lea     eax, [esp + 0x2c]
        push    eax
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x28
        test    esi, esi
        jl      L_448d
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x28]
        add     edx, ecx
        mov     dword ptr [eax], edx
L_448d:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x28]
        je      L_449f
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_449f:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
