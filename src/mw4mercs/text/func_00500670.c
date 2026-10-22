/*
 * func_00500670 - Lookup or return double
 * Calls a lookup function; if result is NULL returns double from stack,
 * otherwise calls through import thunk
 */

/* External function */
extern void *__cdecl FUN_005005c0(void *a, void *b);

/* IAT entry: atof (0x0076B2D8) */
extern void *g_iat_76b2d8;

__declspec(naked) void func_00500670()
{
    __asm {
        mov     eax, [esp + 8]
        mov     ecx, [esp + 4]
        push    eax
        push    ecx
        call    FUN_005005c0
        add     esp, 8
        test    eax, eax
        jne     call_thunk
        fld     qword ptr [esp + 0xc]
        ret
    call_thunk:
        mov     edx, [eax + 4]
        push    edx
        call    dword ptr [g_iat_76b2d8]
        pop     ecx
        ret
    }
}
