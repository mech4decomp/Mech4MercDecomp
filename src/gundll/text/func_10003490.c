/*
 * FUN_10003490 (272 B) - __stdcall, RET 0x14. Object registration/init
 * routine with an SEH frame: validates the 0x34 handle, builds sub-objects
 * via FUN_10001b10, calls FUN_1000ebb0, tears down via FUN_10001970.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000eb30(void);   /* rel32 call */
extern void __cdecl FUN_10001b10(void);   /* rel32 call */
extern void __cdecl FUN_1000ebb0(void);   /* rel32 call */
extern void __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern void __cdecl FUN_1000edd0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10003490(void)
{
    __asm {
        push    -1
        push    0x10046bd8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x34
        push    ebx
        push    esi
        push    edi
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x10], 0
        call    FUN_1000eb30
        mov     ecx, dword ptr [esp + 0x50]
        mov     eax, dword ptr [ecx + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x48], 0
        jnz     L_34e1
        mov     esi, 0xc1120405
        jmp     L_3562
L_34e1:
        mov     eax, dword ptr [esp + 0x54]
        test    eax, eax
        jnz     L_34f0
        mov     esi, 0x80070057
        jmp     L_3562
L_34f0:
        mov     eax, dword ptr [esp + 0x58]
        test    eax, eax
        jnz     L_34fd
        mov     eax, 0x10055024
L_34fd:
        mov     ebx, dword ptr [esp + 0x5c]
        test    ebx, ebx
        jnz     L_350a
        mov     ebx, 0x10055024
L_350a:
        push    eax
        lea     eax, [esp + 0x10]
        lea     edi, [ecx - 8]
        push    eax
        push    edi
        call    FUN_10001b10
        mov     esi, eax
        test    esi, esi
        jl      L_3562
        push    ebx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edi
        call    FUN_10001b10
        mov     esi, eax
        test    esi, esi
        jl      L_3562
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x54]
        push    edx
        mov     edx, dword ptr [esp + 0x64]
        push    eax
        push    ecx
        push    edx
        lea     eax, [esp + 0x24]
        push    eax
        call    FUN_1000ebb0
        mov     esi, eax
        test    esi, esi
        jl      L_3562
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edi
        call    FUN_10001970
        mov     esi, eax
L_3562:
        mov     edx, dword ptr [esp + 0xc]
        push    edx
        call    FUN_10001d60
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        call    FUN_10001d60
        add     esp, 8
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x48], 0xffffffff
        call    FUN_1000edd0
        mov     ecx, dword ptr [esp + 0x40]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x40
        ret     0x14
    }
}
