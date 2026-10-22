/*
 * FUN_10003ce0 (189 B) - __stdcall, RET 0x1C.
 * SEH-guarded handler: initializes a local object via FUN_10014af0,
 * validates a flag at param_1+0x30 and several pointer args, then either
 * returns a fixed error code (0xc1120405 / 0x80070057) or calls
 * FUN_10014b70 / FUN_10001970 to build a result.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10014af0(void);   /* rel32 call, ecx=this */
extern int  __cdecl FUN_10014b70(void);   /* rel32 call */
extern int  __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10014dc0(void);   /* rel32 call, ecx=this */

__declspec(naked) void __stdcall FUN_10003ce0(void)
{
    __asm {
        push    -1
        push    0x10046d78
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x34
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_10014af0
        mov     edi, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        mov     dword ptr [esp + 0x44], 0x0
        jnz     L_3d1d
        mov     esi, 0xc1120405
        jmp     L_3d77
    L_3d1d:
        mov     esi, dword ptr [esp + 0x50]
        test    esi, esi
        jz      L_3d72
        mov     edx, dword ptr [esp + 0x54]
        test    edx, edx
        jz      L_3d72
        mov     ecx, dword ptr [esp + 0x5c]
        test    ecx, ecx
        jz      L_3d72
        mov     eax, dword ptr [esp + 0x60]
        test    eax, eax
        jnz     L_3d42
        mov     eax, 0x10055024
    L_3d42:
        push    eax
        mov     eax, dword ptr [esp + 0x5c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x6c]
        push    eax
        push    edx
        push    esi
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_10014b70
        mov     esi, eax
        test    esi, esi
        jl      L_3d77
        lea     eax, [esp + 0x8]
        push    eax
        add     edi, -0xc
        push    edi
        call    FUN_10001970
        mov     esi, eax
        jmp     L_3d77
    L_3d72:
        mov     esi, 0x80070057
    L_3d77:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x44], 0xffffffff
        call    FUN_10014dc0
        mov     ecx, dword ptr [esp + 0x3c]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x40
        ret     0x1c
    }
}
