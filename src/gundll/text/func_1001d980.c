/*
 * FUN_1001d980 (197 B) - __stdcall, RET 0x1c. Allocates a node via
 * FUN_10001d50, initializes via FUN_1001d100, links it into a list, and on
 * failure frees via FUN_1001d130/FUN_10001d60.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void); /* __cdecl(1) rel32 call */
extern void __cdecl FUN_1001d100(void); /* __thiscall(1) rel32 call */
extern void __cdecl FUN_1001d130(void); /* __thiscall(0) rel32 call */
extern void __cdecl FUN_10001d60(void); /* __cdecl(1) rel32 call */

__declspec(naked) void __stdcall FUN_1001d980(void)
{
    __asm {
        push    esi
        push    edi
        push    0x24
        xor     edi, edi
        call    FUN_10001d50
        add     esp, 4
        test    eax, eax
        jz      L_d9a4
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     ecx, eax
        call    FUN_1001d100
        mov     esi, eax
        test    esi, esi
        jnz     L_d9ae
L_d9a4:
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x1c
L_d9ae:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 4], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esi + 0x10], eax
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x14], ecx
        mov     ecx, dword ptr [eax + 4]
        test    ecx, ecx
        jnz     L_d9e9
        test    edx, edx
        jnz     L_da29
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 4], esi
        mov     eax, edi
        pop     edi
        mov     dword ptr [edx], esi
        pop     esi
        ret     0x1c
L_d9e9:
        test    edx, edx
        jz      L_da29
        mov     ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        jnz     L_da04
        mov     dword ptr [edx + 0x1c], esi
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, edi
        pop     edi
        mov     dword ptr [edx], esi
        pop     esi
        ret     0x1c
L_da04:
        mov     eax, dword ptr [ecx + 0x18]
        test    eax, eax
        jz      L_da19
        nop
        __emit 0x8D   /* __emit: lea esp,[esp+0] (8D 64 24 00) - MSVC6 drops zero disp */
        __emit 0x64
        __emit 0x24
        __emit 0x00
L_da10:
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0x18]
        test    eax, eax
        jnz     L_da10
L_da19:
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x18], esi
        mov     eax, edi
        pop     edi
        mov     dword ptr [edx], esi
        pop     esi
        ret     0x1c
L_da29:
        mov     ecx, esi
        mov     edi, 0x80070057
        call    FUN_1001d130
        push    esi
        call    FUN_10001d60
        add     esp, 4
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x1c
    }
}
