/*
 * FUN_10003270 (277 B) - __stdcall, RET 0x18. Object registration/init
 * routine with an SEH frame: validates handles, builds sub-objects via
 * FUN_10001b10, calls FUN_1000e320, tears down via FUN_10001970.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000e2a0(void);   /* rel32 call */
extern void __cdecl FUN_10001b10(void);   /* rel32 call */
extern void __cdecl FUN_1000e320(void);   /* rel32 call */
extern void __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern void __cdecl FUN_1000e5a0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10003270(void)
{
    __asm {
        push    -1
        push    0x10046b98
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        push    ebx
        push    ebp
        push    esi
        xor     esi, esi
        push    edi
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], esi
        call    FUN_1000e2a0
        mov     ecx, dword ptr [esp + 0x58]
        cmp     dword ptr [ecx + 0x34], esi
        mov     dword ptr [esp + 0x50], esi
        jnz     L_2b6
        mov     esi, 0xc1120405
        jmp     L_346
L_2b6:
        cmp     dword ptr [esp + 0x5c], esi
        jnz     L_2c6
        mov     esi, 0x80070057
        jmp     L_346
L_2c6:
        mov     eax, dword ptr [esp + 0x60]
        cmp     eax, esi
        jnz     L_2d3
        mov     eax, 0x10055024
L_2d3:
        mov     ebp, dword ptr [esp + 0x64]
        cmp     ebp, esi
        jnz     L_2e0
        mov     ebp, 0x10055024
L_2e0:
        mov     ebx, dword ptr [esp + 0x68]
        cmp     ebx, esi
        jnz     L_2ed
        mov     ebx, 0x10055024
L_2ed:
        push    eax
        lea     eax, [esp + 0x14]
        lea     edi, [ecx - 8]
        push    eax
        push    edi
        call    FUN_10001b10
        mov     esi, eax
        test    esi, esi
        jl      L_346
        push    ebx
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edi
        call    FUN_10001b10
        mov     esi, eax
        test    esi, esi
        jl      L_346
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x5c]
        push    edx
        mov     edx, dword ptr [esp + 0x70]
        push    ebp
        push    eax
        push    ecx
        push    edx
        lea     eax, [esp + 0x2c]
        push    eax
        call    FUN_1000e320
        mov     esi, eax
        test    esi, esi
        jl      L_346
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edi
        call    FUN_10001970
        mov     esi, eax
L_346:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_10001d60
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_10001d60
        add     esp, 8
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x50], 0xffffffff
        call    FUN_1000e5a0
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret     0x18
    }
}
