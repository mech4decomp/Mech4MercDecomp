/*
 * FUN_005c1770 (105 B) — __thiscall (ECX = this), RET 4. Calls FUN_006f4950,
 * then if FUN_0041fd80() succeeds, conditionally validates an owned object
 * (FUN_00661d80) and builds a new object via FUN_0065e620 / FUN_006613f0,
 * passing it to FUN_005c17e0. Finally FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern int __cdecl FUN_0041fd80(void);
extern char __cdecl FUN_00661d80(void);
extern void __cdecl FUN_0065e620(int, int, int, int);
extern int __cdecl FUN_006613f0(void);
extern void __cdecl FUN_005c17e0(int);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __stdcall FUN_005c1770(void)
{
    

extern int DAT_007f2460;
__asm {
        mov eax, dword ptr [DAT_007f2460]
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        lea     ecx, [esi + 0x1c8]
        call    FUN_0041fd80
        test    eax, eax
        jz      L_done
        mov     ecx, dword ptr [esi + 0x4e0]
        test    ecx, 0xfffffffc
        jz      L_go
        and     ecx, 0xfffffffc
        call    FUN_00661d80
        test    al, al
        jz      L_done
L_go:
        mov     ecx, dword ptr [esp + 0x8]
        push    0x0
        push    ecx
        lea     edx, [esi + 0x5a4]
        push    edx
        lea     eax, [esi + 0x508]
        push    eax
        call    FUN_0065e620
        mov     ecx, eax
        call    FUN_006613f0
        push    eax
        mov     ecx, esi
        call    FUN_005c17e0
L_done:
        call    FUN_006f49a0
        pop     esi
        ret     4
    }


}
