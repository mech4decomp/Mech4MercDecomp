/*
 * FUN_10001d60 (48 B) - __cdecl. Object destructor: dispatches on the header
 * word at [ptr-8] (-2 -> FUN_1000c530, -1 -> FUN_1000c290).
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000c290(void);   /* rel32 call */
extern void __cdecl FUN_1000c530(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_10001d60(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        test    edx, edx
        jz      L_8f
        mov     ecx, dword ptr [edx - 8]
        cmp     ecx, -2
        lea     eax, [edx - 8]
        jz      L_85
        cmp     ecx, -1
        jnz     L_8f
        push    eax
        mov     dword ptr [eax], 0xfffffffd
        call    FUN_1000c290
        ret
L_85:
        mov     eax, dword ptr [eax + 4]
        push    edx
        push    eax
        call    FUN_1000c530
L_8f:
        ret
    }
}
