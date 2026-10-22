/*
 * FUN_10003390 (249 B) - __stdcall, RET 0x10. Object registration/init
 * routine with an SEH frame: validates the 0x34 handle, builds sub-objects
 * via FUN_10001b10, calls FUN_1000e820, tears down via FUN_10001970.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000e7b0(void);   /* rel32 call */
extern void __cdecl FUN_10001b10(void);   /* rel32 call */
extern void __cdecl FUN_1000e820(void);   /* rel32 call */
extern void __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern void __cdecl FUN_1000e9e0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10003390(void)
{
    __asm {
        push    -1
        push    0x10046bb8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x30
        push    ebx
        push    esi
        push    edi
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x10], 0
        call    FUN_1000e7b0
        mov     ecx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [ecx + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x44], 0
        jnz     L_3de
        mov     esi, 0xc1120405
        jmp     L_44b
L_3de:
        mov     eax, dword ptr [esp + 0x50]
        test    eax, eax
        jnz     L_3eb
        mov     eax, 0x10055024
L_3eb:
        mov     ebx, dword ptr [esp + 0x54]
        test    ebx, ebx
        jnz     L_3f8
        mov     ebx, 0x10055024
L_3f8:
        push    eax
        lea     eax, [esp + 0x10]
        lea     edi, [ecx - 8]
        push    eax
        push    edi
        call    FUN_10001b10
        mov     esi, eax
        test    esi, esi
        jl      L_44b
        push    ebx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edi
        call    FUN_10001b10
        mov     esi, eax
        test    esi, esi
        jl      L_44b
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x58]
        push    edx
        push    eax
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_1000e820
        mov     esi, eax
        test    esi, esi
        jl      L_44b
        lea     eax, [esp + 0x14]
        push    eax
        push    edi
        call    FUN_10001970
        mov     esi, eax
L_44b:
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        call    FUN_10001d60
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        call    FUN_10001d60
        add     esp, 8
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x44], 0xffffffff
        call    FUN_1000e9e0
        mov     ecx, dword ptr [esp + 0x3c]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x3c
        ret     0x10
    }
}
