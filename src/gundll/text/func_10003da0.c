/*
 * FUN_10003da0 (141 B) - __stdcall, RET 0xC.
 * SEH-guarded handler: initializes a local object via FUN_10014f60,
 * checks a flag at param_1+0x30, then either returns a fixed error code
 * (0xc1120405) or calls FUN_10014fd0 / FUN_10001970 to build a result.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10014f60(void);   /* rel32 call, ecx=this */
extern int  __cdecl FUN_10014fd0(void);   /* rel32 call */
extern int  __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10015080(void);   /* rel32 call, ecx=this */

__declspec(naked) void __stdcall FUN_10003da0(void)
{
    __asm {
        push    -1
        push    0x10046d98
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x24
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_10014f60
        mov     edi, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        mov     dword ptr [esp + 0x34], 0x0
        jnz     L_3ddd
        mov     esi, 0xc1120405
        jmp     L_3e07
    L_3ddd:
        mov     eax, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        call    FUN_10014fd0
        mov     esi, eax
        test    esi, esi
        jl      L_3e07
        lea     eax, [esp + 0x8]
        push    eax
        add     edi, -0xc
        push    edi
        call    FUN_10001970
        mov     esi, eax
    L_3e07:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x34], 0xffffffff
        call    FUN_10015080
        mov     ecx, dword ptr [esp + 0x2c]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x30
        ret     0xc
    }
}
