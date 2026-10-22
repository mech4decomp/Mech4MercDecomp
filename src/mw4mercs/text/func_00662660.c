/*
 * FUN_00662660 (203 B) — Compares four virtual-method return values
 * (via vtable offsets 0x90/0x50) against four float constants loaded
 * through FUN_00637b40/FUN_00637a20, returning 1 if all comparisons
 * pass, else 0.
 *
 * __stdcall, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00637b40(int id);
extern void __cdecl FUN_00637a20(void);

__declspec(naked) int __stdcall FUN_00662660(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x90]
        mov     dword ptr [esp + 8], eax
        fild    dword ptr [esp + 8]
        push    0x72
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_725
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x90]
        mov     dword ptr [esp + 8], eax
        fild    dword ptr [esp + 8]
        push    0x73
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 1
        jnz     L_725
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x50]
        mov     dword ptr [esp + 8], eax
        fild    dword ptr [esp + 8]
        push    0x74
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_725
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x50]
        mov     dword ptr [esp + 8], eax
        fild    dword ptr [esp + 8]
        push    0x75
        fstp    dword ptr [esp + 0xc]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 1
        jnz     L_725
        mov     al, 1
        pop     esi
        ret     4
L_725:
        xor     al, al
        pop     esi
        ret     4
    }
}
