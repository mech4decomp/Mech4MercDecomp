/*
 * FUN_1003b14f (62 B) - __cdecl. Depending on arg0, calls FUN_10041e81 or
 * FUN_10041edc to build a value, then stores it into the output pointer.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10041e81(void);   /* rel32 call */
extern void __cdecl FUN_10041edc(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_1003b14f(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        cmp     dword ptr [ebp + 0x8], 0x0
        push    dword ptr [ebp + 0x10]
        je      L_178
        lea     eax, [ebp - 0x8]
        push    eax
        call    FUN_10041e81
        mov     eax, dword ptr [ebp + 0xc]
        pop     ecx
        pop     ecx
        mov     ecx, dword ptr [ebp - 0x8]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebp - 0x4]
        mov     dword ptr [eax + 0x4], ecx
        leave
        ret
L_178:
        lea     eax, [ebp + 0x10]
        push    eax
        call    FUN_10041edc
        mov     eax, dword ptr [ebp + 0xc]
        pop     ecx
        pop     ecx
        mov     ecx, dword ptr [ebp + 0x10]
        mov     dword ptr [eax], ecx
        leave
        ret
    }
}
