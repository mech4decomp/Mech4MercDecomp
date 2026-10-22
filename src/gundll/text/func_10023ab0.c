/*
 * FUN_10023AB0 (196 B) - __stdcall, RET 0x10 (4 args, arg2 unused).
 * Parses/advances a buffer via FUN_1001c7a0 / FUN_1002af80 / FUN_1001c660
 * (cdecl), building a formatted record from edi->{0x20,0x24,0x28,0x2c} and
 * ebp/ebx/&locals. Frees a temp via FUN_10001d60 if it differs from
 * edi->+0x2c.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);   /* rel32 call */
extern void __cdecl FUN_1002af80(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10023AB0(void)
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
        push    0x1004a7ac
        push    ebp
        push    edi
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L_b56
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x2c]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_b56
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x28]
        mov     edx, dword ptr [edi + 0x24]
        push    eax
        mov     eax, dword ptr [edi + 0x20]
        push    0x10049e74
        push    ecx
        push    0x10049e5c
        push    edx
        push    0x10049c2c
        push    eax
        push    0x10049bc4
        push    0x100505a8
        lea     ecx, [esp + 0x34]
        push    ecx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x30
        test    esi, esi
        jl      L_b56
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        add     eax, edx
        mov     dword ptr [ecx], eax
L_b56:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x2c]
        je      L_b68
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_b68:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
