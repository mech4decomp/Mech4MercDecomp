/*
 * FUN_10004510 (151 B) - __stdcall, RET 0x14.
 * SEH-guarded handler: initializes a local object via FUN_10010e30,
 * validates a flag at param_1+0x2c, then either returns a fixed error
 * code (0xc1120405) or calls FUN_10010eb0 / FUN_10001970 to build a
 * result.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10010e30(void);   /* rel32 call, ecx=this */
extern int  __cdecl FUN_10010eb0(void);   /* rel32 call */
extern int  __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10010fd0(void);   /* rel32 call, ecx=this */

__declspec(naked) void __stdcall FUN_10004510(void)
{
    __asm {
        push    -1
        push    0x10046f18
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x2c
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_10010e30
        mov     edi, dword ptr [esp + 0x44]
        mov     eax, dword ptr [edi + 0x2c]
        test    eax, eax
        mov     dword ptr [esp + 0x3c], 0x0
        jnz     L_454d
        mov     esi, 0xc1120405
        jmp     L_4581
    L_454d:
        mov     eax, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [esp + 0x48]
        push    eax
        mov     eax, dword ptr [esp + 0x58]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        call    FUN_10010eb0
        mov     esi, eax
        test    esi, esi
        jl      L_4581
        lea     edx, [esp + 0x8]
        push    edx
        add     edi, -0x10
        push    edi
        call    FUN_10001970
        mov     esi, eax
    L_4581:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x3c], 0xffffffff
        call    FUN_10010fd0
        mov     ecx, dword ptr [esp + 0x34]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x38
        ret     0x14
    }
}
