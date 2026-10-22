/*
 * FUN_10004170 (136 B) - __stdcall, RET 0x8.
 * SEH-guarded handler: initializes a local object via FUN_10010210,
 * validates a flag at param_1+0x2c, then either returns a fixed error
 * code (0xc1120405) or calls FUN_10010270 / FUN_10001970 to build a
 * result.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10010210(void);   /* rel32 call, ecx=this */
extern int  __cdecl FUN_10010270(void);   /* rel32 call */
extern int  __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_100102c0(void);   /* rel32 call, ecx=this */

__declspec(naked) void __stdcall FUN_10004170(void)
{
    __asm {
        push    -1
        push    0x10046e58
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_10010210
        mov     edi, dword ptr [esp + 0x38]
        mov     eax, dword ptr [edi + 0x2c]
        test    eax, eax
        mov     dword ptr [esp + 0x30], 0x0
        jnz     L_41ad
        mov     esi, 0xc1120405
        jmp     L_41d2
    L_41ad:
        mov     eax, dword ptr [esp + 0x3c]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        call    FUN_10010270
        mov     esi, eax
        test    esi, esi
        jl      L_41d2
        lea     edx, [esp + 0x8]
        push    edx
        add     edi, -0x10
        push    edi
        call    FUN_10001970
        mov     esi, eax
    L_41d2:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x30], 0xffffffff
        call    FUN_100102c0
        mov     ecx, dword ptr [esp + 0x28]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     8
    }
}
