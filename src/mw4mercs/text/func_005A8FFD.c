/*
 * FUN_005A8FFD (98 B) — __thiscall (this in ecx), 2 args, ret 8.
 * Dispatches based on a type field at [obj+0xe0]+0x14; either calls a
 * sub-object method or forwards to 0x5ec400 / 0x5a9500.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005ec400(void);
extern void __cdecl FUN_005a9500(void);

__declspec(naked) void FUN_005A8FFD(void)
{
    __asm {
        nop
        nop
        nop
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0xe0]
        cmp     dword ptr [eax + 0x14], 8
        je      L_5a9045
        push    esi
        lea     esi, [edi + 0x234]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je      L_5a902f
        mov     ecx, esi
        call    FUN_0041fd80
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x18]
L_5a902f:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_005ec400
        pop     esi
        pop     edi
        ret     8
L_5a9045:
        lea     ecx, [edi + 0x234]
        call    FUN_0041fd80
        test    eax, eax
        jne     L_5a905b
        mov     ecx, edi
        call    FUN_005a9500
L_5a905b:
        pop     edi
        ret     8
    }
}
