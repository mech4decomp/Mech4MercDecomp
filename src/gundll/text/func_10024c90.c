/*
 * FUN_10024c90 (195 B) - __stdcall, RET 0x4. Reads a sub-count via a vtable
 * call (offset 0x14) and FUN_1002b210, stores results into the object, and
 * on failure calls FUN_1002b420.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern int g_10075060;                /* DAT_10075060 (dword) */
extern char g_10049e04[];             /* string "SubCount" */
extern char g_10049e84[];             /* string */
extern void __cdecl FUN_1001c8d0(void); /* rel32 call */
extern void __cdecl FUN_1002b210(void); /* rel32 call */
extern void __cdecl FUN_1002b420(void); /* rel32 call */

__declspec(naked) void __stdcall FUN_10024c90(void)
{
    __asm {
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x8], 0
        jnz     L_cbd
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 8
        ret     4
L_cbd:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        test    esi, esi
        jl      L_d2d
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    offset g_10049e04
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        test    esi, esi
        jl      L_d2d
        mov     edx, dword ptr [g_10075060]
        lea     eax, [esp + 0x14]
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    offset g_10049e84
        push    edx
        push    eax
        call    FUN_1002b210
        mov     esi, eax
        test    esi, esi
        jl      L_d2d
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edi + 0x2c], eax
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
L_d2d:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jz      L_d49
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setnz   dl
        push    eax
        push    edx
        call    FUN_1002b420
L_d49:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
    }
}
