/*
 * FUN_10003e30 (157 B) - __stdcall, RET 0x10.
 * SEH-guarded handler: initializes a local object via FUN_10015100,
 * validates a flag at param_1+0x30 and a pointer param_3, then either
 * returns a fixed error code (0xc1120405 / 0x80070057) or calls
 * FUN_10015170 / FUN_10001970 to build a result.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10015100(void);   /* rel32 call, ecx=this */
extern int  __cdecl FUN_10015170(void);   /* rel32 call */
extern int  __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_100152b0(void);   /* rel32 call, ecx=this */

__declspec(naked) void __stdcall FUN_10003e30(void)
{
    __asm {
        push    -1
        push    0x10046db8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x28
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_10015100
        mov     edi, dword ptr [esp + 0x40]
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        mov     dword ptr [esp + 0x38], 0x0
        jnz     L_3e6d
        mov     esi, 0xc1120405
        jmp     L_3ea7
    L_3e6d:
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        jnz     L_3e7c
        mov     esi, 0x80070057
        jmp     L_3ea7
    L_3e7c:
        mov     ecx, dword ptr [esp + 0x4c]
        push    eax
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_10015170
        mov     esi, eax
        test    esi, esi
        jl      L_3ea7
        lea     eax, [esp + 0x8]
        push    eax
        add     edi, -0xc
        push    edi
        call    FUN_10001970
        mov     esi, eax
    L_3ea7:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x38], 0xffffffff
        call    FUN_100152b0
        mov     ecx, dword ptr [esp + 0x30]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x34
        ret     0x10
    }
}
