/*
 * FUN_1001CF70 (53 B) - __stdcall, RET 0xC.  String-table load helper:
 * calls FUN_1001cfb0 to load a string, then FUN_1001dac0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1001cfb0(void);   /* rel32 call, RET 0xC */
extern void __stdcall FUN_1001dac0(void);   /* rel32 call, RET 0x8 */

__declspec(naked) void __stdcall FUN_1001CF70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    eax
        push    esi
        mov     ecx, edi
        mov     word ptr [esi + eax*2], 0
        call    FUN_1001cfb0
        test    eax, eax
        jl      L_cfa0
        mov     edx, dword ptr [edi + 4]
        push    esi
        push    edx
        call    FUN_1001dac0
L_cfa0:
        pop     edi
        pop     esi
        ret     0xc
    }
}
