/*
 * FUN_10004010 (171 B) - __stdcall, RET 0x14.
 * SEH-guarded handler: initializes a local object via FUN_100159a0,
 * validates a flag at param_1+0x30 and a pointer param_3, then either
 * returns a fixed error code (0xc1120405 / 0x80070057) or calls
 * FUN_10015a20 / FUN_10001970 to build a result.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100159a0(void);   /* rel32 call, ecx=this */
extern int  __cdecl FUN_10015a20(void);   /* rel32 call */
extern int  __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10015bc0(void);   /* rel32 call, ecx=this */

__declspec(naked) void __stdcall FUN_10004010(void)
{
    __asm {
        push    -1
        push    0x10046e18
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x2c
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_100159a0
        mov     edi, dword ptr [esp + 0x44]
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        mov     dword ptr [esp + 0x3c], 0x0
        jnz     L_404d
        mov     esi, 0xc1120405
        jmp     L_4095
    L_404d:
        mov     ecx, dword ptr [esp + 0x4c]
        test    ecx, ecx
        jnz     L_405c
        mov     esi, 0x80070057
        jmp     L_4095
    L_405c:
        mov     eax, dword ptr [esp + 0x50]
        test    eax, eax
        jnz     L_4069
        mov     eax, 0x10055024
    L_4069:
        push    eax
        mov     eax, dword ptr [esp + 0x4c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x5c]
        push    eax
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_10015a20
        mov     esi, eax
        test    esi, esi
        jl      L_4095
        lea     eax, [esp + 0x8]
        push    eax
        add     edi, -0xc
        push    edi
        call    FUN_10001970
        mov     esi, eax
    L_4095:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x3c], 0xffffffff
        call    FUN_10015bc0
        mov     ecx, dword ptr [esp + 0x34]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x38
        ret     0x14
    }
}
