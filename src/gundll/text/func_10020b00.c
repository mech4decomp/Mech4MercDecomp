/*
 * FUN_10020B00 (168 B) - __stdcall, RET 0x10.  Registration helper that
 * builds a GUID/name pair via FUN_1001c7a0 / FUN_1002af80 / FUN_1001c660,
 * storing a computed offset into the caller's out-pointer, and frees a
 * temporary handle via FUN_10001d60 if it differs from this->+0x20.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10020B00(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x1004a82c
        push    ebx
        push    ebp
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L_b8a
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebx, [ebx + eax*2]
        sub     edi, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_b8a
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    0x10049e50
        push    0x10050228
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edi
        push    ebx
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x18
        test    esi, esi
        jl      L_b8a
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        add     eax, edx
        mov     dword ptr [ecx], eax
L_b8a:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ebp + 0x20]
        je      L_b9c
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_b9c:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x10
    }
}
