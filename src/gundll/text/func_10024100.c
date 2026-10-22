/*
 * FUN_10024100 (196 B) - __stdcall, RET 0x10.  Parses/registers an event
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

__declspec(naked) void __stdcall FUN_10024100(void)
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
        push    0x1004a7ec
        push    ebp
        push    edi
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L_41a6
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
        jl      L_41a6
        mov     eax, dword ptr [edi + 0x2c]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [edi + 0x24]
        push    eax
        mov     eax, dword ptr [edi + 0x20]
        push    0x10049e7c
        push    ecx
        push    0x10049e50
        push    edx
        push    0x10049e6c
        push    eax
        push    0x10049bc4
        push    0x10050ff8
        lea     ecx, [esp + 0x34]
        push    ecx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x30
        test    esi, esi
        jl      L_41a6
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        add     eax, edx
        mov     dword ptr [ecx], eax
L_41a6:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x28]
        je      L_41b8
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_41b8:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
